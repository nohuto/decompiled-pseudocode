/*
 * XREFs of BiBindEfiBootManager @ 0x14070E9A4
 * Callers:
 *     BiBindEfiNamespaceObjects @ 0x14070ED54 (BiBindEfiNamespaceObjects.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     BcdOpenObject @ 0x14056F6CC (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14056F7E4 (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x14056FB78 (BcdSetElementDataWithFlags.c)
 *     BcdCreateObject @ 0x14070D28C (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x14070D304 (BcdDeleteObject.c)
 *     BiQueryBootEntryOrder @ 0x14071091C (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x1407109CC (BiQueryBootOptions.c)
 *     BiTranslateBootEntryId @ 0x140710B24 (BiTranslateBootEntryId.c)
 *     BiTranslateBootOrder @ 0x140710B5C (BiTranslateBootOrder.c)
 */

__int64 __fastcall BiBindEfiBootManager(HANDLE BcdStoreHandle, __int64 a2)
{
  void *v4; // r14
  NTSTATUS v5; // ebx
  PVOID PoolWithTag; // rax
  BCD_FLAGS v7; // r8d
  int v8; // eax
  BCD_FLAGS v9; // r8d
  unsigned int *v10; // rsi
  __int64 v11; // rdx
  BCD_FLAGS v12; // r8d
  HANDLE BcdObjectHandle; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v15; // [rsp+38h] [rbp-48h] BYREF
  PVOID v16; // [rsp+40h] [rbp-40h] BYREF
  _BCD_OBJECT_DESCRIPTION Description; // [rsp+48h] [rbp-38h] BYREF
  PVOID P; // [rsp+50h] [rbp-30h] BYREF
  __int64 Buffer; // [rsp+58h] [rbp-28h] BYREF
  _BYTE v20[16]; // [rsp+60h] [rbp-20h] BYREF

  v16 = 0LL;
  P = 0LL;
  BcdObjectHandle = 0LL;
  v4 = 0LL;
  if ( BcdOpenObject(BcdStoreHandle, &GUID_FIRMWARE_BOOTMGR, &BcdObjectHandle) >= 0 )
  {
    BcdDeleteObject(BcdObjectHandle);
    BcdObjectHandle = 0LL;
  }
  Description.Type = 269484033;
  Description.Version = 1;
  v5 = BcdCreateObject(BcdStoreHandle, &GUID_FIRMWARE_BOOTMGR, &Description, &BcdObjectHandle);
  if ( v5 >= 0 )
  {
    v5 = BiQueryBootEntryOrder(&v16, &v15);
    if ( v5 >= 0 )
    {
      if ( v15 )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16LL * v15, 0x4B444342u);
        v4 = PoolWithTag;
        if ( !PoolWithTag )
        {
          v5 = -1073741670;
          goto LABEL_19;
        }
        BiTranslateBootOrder(a2, v16, PoolWithTag, &v15);
        if ( v15 )
        {
          v5 = BcdSetElementDataWithFlags(BcdObjectHandle, 0x24000001u, v7, v4, 16 * v15);
          if ( v5 < 0 )
            goto LABEL_19;
        }
      }
      v8 = BiQueryBootOptions(&P, &v15);
      v10 = (unsigned int *)P;
      v5 = v8;
      if ( v8 >= 0 )
      {
        if ( *((_DWORD *)P + 2) == -1
          || (Buffer = *((unsigned int *)P + 2),
              v5 = BcdSetElementDataWithFlags(BcdObjectHandle, 0x25000004u, v9, &Buffer, 8u),
              v5 >= 0) )
        {
          v11 = v10[4];
          if ( (_DWORD)v11 == -2
            || (int)BiTranslateBootEntryId(a2, v11, v20) < 0
            || (v5 = BcdSetElementDataWithFlags(BcdObjectHandle, 0x24000002u, v12, v20, 0x10u), v5 >= 0) )
          {
            v5 = 0;
          }
        }
      }
      if ( v10 )
        ExFreePoolWithTag(v10, 0);
    }
LABEL_19:
    if ( v16 )
      ExFreePoolWithTag(v16, 0);
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
  }
  if ( BcdObjectHandle )
  {
    if ( v5 >= 0 )
      BcdCloseObject(BcdObjectHandle);
    else
      BcdDeleteObject(BcdObjectHandle);
  }
  return (unsigned int)v5;
}
