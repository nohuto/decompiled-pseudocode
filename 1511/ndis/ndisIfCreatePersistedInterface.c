/*
 * XREFs of ndisIfCreatePersistedInterface @ 0x1C003F798
 * Callers:
 *     ndisCheckIfTypeMismatch @ 0x1C0058FF4 (ndisCheckIfTypeMismatch.c)
 *     ndisIfCreateInterfaceForiScsi @ 0x1C00BF8C8 (ndisIfCreateInterfaceForiScsi.c)
 *     ndisHandlePnPRequest @ 0x1C00DF000 (ndisHandlePnPRequest.c)
 * Callees:
 *     ?ndisIfCreateInterfaceFromPersistentStore@@YAHPEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@W4NdisIfBlockSource@@@Z @ 0x1C001ECD4 (-ndisIfCreateInterfaceFromPersistentStore@@YAHPEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_.c)
 *     ndisIfFindInterfaceByNetLuid @ 0x1C001EE0C (ndisIfFindInterfaceByNetLuid.c)
 *     ndisIfFindCompartmentBlock @ 0x1C0020D08 (ndisIfFindCompartmentBlock.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     ndisInitializeNsi @ 0x1C0099EB4 (ndisInitializeNsi.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C009E688 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 */

__int64 __fastcall ndisIfCreatePersistedInterface(union _NET_LUID_LH *a1, enum NdisIfBlockSource a2)
{
  unsigned int InterfaceFromPersistentStore; // ebx
  _LIST_ENTRY *InterfaceByNetLuid; // rbx
  KIRQL v6; // r8
  unsigned __int16 v7; // cx
  _LIST_ENTRY *CompartmentBlock; // rbx
  KIRQL v9; // r10
  bool v10; // zf
  _QWORD v12[10]; // [rsp+20h] [rbp-50h] BYREF
  unsigned int v13; // [rsp+80h] [rbp+10h] BYREF

  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_q(0xB6u, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, (__int64)a1);
  if ( !ndisNsiInitialized )
    ndisInitializeNsi();
  if ( !a1 )
  {
    InterfaceFromPersistentStore = -1073741811;
    goto LABEL_18;
  }
  KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid((_LIST_ENTRY *)a1->Value);
  KeReleaseSpinLock(&ndisIfListLock, v6);
  if ( InterfaceByNetLuid )
    goto LABEL_8;
  v7 = *((_WORD *)&a1->Info + 3);
  v13 = (a1->Value >> 24) & 0xFFFFFF;
  InterfaceFromPersistentStore = ndisIfAllocateAndVerifyNetLuidIndex(v7, &v13, 0, 0);
  if ( !InterfaceFromPersistentStore )
  {
    LODWORD(a1[135].Value) = 1;
    KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    CompartmentBlock = ndisIfFindCompartmentBlock(a1[135].Value);
    KeReleaseSpinLock(&ndisIfListLock, v9);
    if ( !CompartmentBlock )
      goto LABEL_8;
    v10 = *((_DWORD *)&a1[135].Info + 1) == -1;
    *(_LIST_ENTRY *)&a1[133].Value = CompartmentBlock[3].Blink[2];
    if ( v10 )
      *((_DWORD *)&a1[135].Info + 1) = 0;
    if ( LODWORD(a1[136].Value) == -1 )
      LODWORD(a1[136].Value) = 0;
    memset(v12, 0, 0x48uLL);
    v12[0] = 0LL;
    LODWORD(v12[1]) = 0;
    v12[4] = 0x100000000LL;
    v12[2] = &NPI_MS_NDIS_MODULEID;
    LODWORD(v12[3]) = 10;
    v12[5] = a1;
    LODWORD(v12[6]) = 8;
    v12[7] = a1 + 1;
    LODWORD(v12[8]) = 1156;
    if ( (int)NsiSetAllParametersEx(v12) < 0 )
    {
LABEL_8:
      InterfaceFromPersistentStore = -1073741823;
      goto LABEL_18;
    }
    InterfaceFromPersistentStore = ndisIfCreateInterfaceFromPersistentStore(a1, (struct _GUID *)&a1[1], a2);
    if ( InterfaceFromPersistentStore )
    {
      HIDWORD(v12[4]) = 3;
      NsiSetAllParametersEx(v12);
    }
  }
LABEL_18:
  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_qD(0xB7u, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, (__int64)a1, InterfaceFromPersistentStore);
  return InterfaceFromPersistentStore;
}
