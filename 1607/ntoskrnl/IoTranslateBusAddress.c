/*
 * XREFs of IoTranslateBusAddress @ 0x1401CD4C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PpDevNodeUnlockTree @ 0x1403F38A4 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1403F397C (PpDevNodeLockTree.c)
 *     IopFindResourceHandlerInfo @ 0x1405578D0 (IopFindResourceHandlerInfo.c)
 *     IopFindLegacyBusDeviceNode @ 0x14055795C (IopFindLegacyBusDeviceNode.c)
 *     IopQueryResourceHandlerInterface @ 0x140557A7C (IopQueryResourceHandlerInterface.c)
 */

BOOLEAN __stdcall IoTranslateBusAddress(
        INTERFACE_TYPE InterfaceType,
        ULONG BusNumber,
        PHYSICAL_ADDRESS BusAddress,
        PULONG AddressSpace,
        PPHYSICAL_ADDRESS TranslatedAddress)
{
  ULONG v9; // eax
  __int16 v10; // cx
  __int64 LegacyBusDeviceNode; // rax
  __int64 v12; // r8
  __int64 v13; // r14
  __int64 v14; // rsi
  char ResourceHandlerInfo; // r13
  PVOID v16; // rdi
  int v17; // r14d
  PVOID P; // [rsp+40h] [rbp-31h] BYREF
  __int64 v19; // [rsp+48h] [rbp-29h] BYREF
  __int128 v20; // [rsp+50h] [rbp-21h] BYREF
  int v21; // [rsp+60h] [rbp-11h]
  __int128 v22; // [rsp+68h] [rbp-9h] BYREF
  int v23; // [rsp+78h] [rbp+7h]

  if ( KeGetCurrentIrql() || !IopRootDeviceNode )
  {
    *TranslatedAddress = BusAddress;
    return 1;
  }
  v9 = *AddressSpace;
  if ( *AddressSpace )
  {
    if ( v9 != 1 )
      return 0;
    v10 = 1;
  }
  else
  {
    LOBYTE(v9) = 3;
    v10 = 0;
  }
  WORD1(v20) = v10;
  LOBYTE(v20) = v9;
  BYTE1(v20) = 3;
  *(PHYSICAL_ADDRESS *)((char *)&v20 + 4) = BusAddress;
  HIDWORD(v20) = 1;
  PpDevNodeLockTree(0LL);
  LegacyBusDeviceNode = IopFindLegacyBusDeviceNode((unsigned int)InterfaceType, BusNumber);
  v13 = IopRootDeviceNode;
  v14 = LegacyBusDeviceNode;
  if ( LegacyBusDeviceNode == IopRootDeviceNode )
  {
LABEL_22:
    PpDevNodeUnlockTree(0LL);
    if ( (((unsigned __int8)v20 - 3) & 0xFFFFFFFB) != 0 )
    {
      if ( (unsigned __int8)v20 != 1 )
        return 0;
      *AddressSpace = 1;
    }
    else
    {
      *AddressSpace = 0;
    }
    *TranslatedAddress = *(PPHYSICAL_ADDRESS)((char *)&v20 + 4);
    return 1;
  }
  LOBYTE(v12) = v20;
  while ( 1 )
  {
    ResourceHandlerInfo = IopFindResourceHandlerInfo(1LL, v14, v12, &v19);
    if ( !ResourceHandlerInfo )
    {
      if ( (int)IopQueryResourceHandlerInterface(1LL, *(_QWORD *)(v14 + 32), v12, &P) >= 0 )
      {
        v16 = P;
        goto LABEL_16;
      }
LABEL_20:
      LOBYTE(v12) = v20;
      v13 = IopRootDeviceNode;
      goto LABEL_21;
    }
    if ( v19 )
      break;
LABEL_21:
    v14 = *(_QWORD *)(v14 + 16);
    if ( v14 == v13 )
      goto LABEL_22;
  }
  v16 = *(PVOID *)(v19 + 24);
LABEL_16:
  v17 = (*((__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD, _QWORD, _QWORD, _QWORD, __int128 *))v16 + 4))(
          *((_QWORD *)v16 + 1),
          &v20,
          0LL,
          0LL,
          0LL,
          0LL,
          &v22);
  if ( !ResourceHandlerInfo )
  {
    (*((void (__fastcall **)(_QWORD))v16 + 3))(*((_QWORD *)v16 + 1));
    ExFreePoolWithTag(v16, 0);
  }
  if ( v17 >= 0 )
  {
    v21 = v23;
    v20 = v22;
    if ( v17 == 288 )
      goto LABEL_22;
    goto LABEL_20;
  }
  PpDevNodeUnlockTree(0LL);
  return 0;
}
