/*
 * XREFs of _CmEnumDevicesInContainerWithCallbackWorker @ 0x1406DA23C
 * Callers:
 *     _CmEnumDevicesInContainerWithCallback @ 0x1406DA0FC (_CmEnumDevicesInContainerWithCallback.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     _PnpCtxRegEnumValue @ 0x1404B90C0 (_PnpCtxRegEnumValue.c)
 *     _PnpOpenObjectRegKey @ 0x1404DF2D0 (_PnpOpenObjectRegKey.c)
 *     _SysCtxRegOpenKey @ 0x1404E0B1C (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegEnumKey @ 0x1406D7228 (_PnpCtxRegEnumKey.c)
 */

__int64 __fastcall CmEnumDevicesInContainerWithCallbackWorker(
        __int64 *a1,
        __int64 a2,
        void *a3,
        __int64 (__fastcall *a4)(__int64 *, unsigned int *, __int64),
        __int64 a5,
        int a6)
{
  unsigned int *PoolWithTag; // rdi
  int v7; // r12d
  int v11; // ebx
  HANDLE v12; // rdx
  __int64 v13; // rcx
  HANDLE v14; // rcx
  ULONG v15; // r15d
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  ULONG i; // esi
  int v20; // eax
  int v21; // eax
  _BYTE v23[8]; // [rsp+40h] [rbp-20h] BYREF
  HANDLE v24; // [rsp+48h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-10h] BYREF
  HANDLE v26; // [rsp+58h] [rbp-8h] BYREF

  v26 = 0LL;
  PoolWithTag = 0LL;
  v24 = 0LL;
  v7 = 0;
  if ( (_WORD)a6 )
    return (unsigned int)-1073741811;
  if ( a3 )
    goto LABEL_6;
  v11 = PnpOpenObjectRegKey((__int64)a1, a2, 5u, 1, 0, (__int64)&v26, 0LL, 0);
  if ( v11 < 0 )
    goto LABEL_40;
  v12 = v26;
  if ( !v26 )
LABEL_6:
    v12 = a3;
  if ( a1 )
    v13 = *a1;
  else
    v13 = 0LL;
  v11 = SysCtxRegOpenKey(v13, (__int64)v12, (__int64)L"BaseContainers", 0, 8u, (__int64)&v24);
  if ( v11 < 0 )
  {
LABEL_40:
    if ( v11 == -1073741444 )
      v11 = -1073741772;
    goto LABEL_42;
  }
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x52504E50u);
  if ( PoolWithTag )
  {
LABEL_13:
    v15 = 0;
    while ( 1 )
    {
      Handle = 0LL;
      a6 = 200;
      v16 = PnpCtxRegEnumKey((__int64)v14, v24, v15, PoolWithTag, (unsigned int *)&a6);
      v11 = v16;
      if ( v16 == -2147483622 )
        break;
      if ( v16 != -1073741789 )
      {
        if ( v16 < 0 )
          goto LABEL_40;
        v17 = a1 ? *a1 : 0LL;
        v11 = SysCtxRegOpenKey(v17, (__int64)v24, (__int64)PoolWithTag, 0, 1u, (__int64)&Handle);
        if ( v11 < 0 )
          goto LABEL_40;
        for ( i = 0; ; ++i )
        {
          do
          {
            a6 = 200;
            v20 = PnpCtxRegEnumValue(v18, Handle, i, PoolWithTag, (__int64)&a6, (__int64)v23, 0LL, 0);
            v11 = v20;
            if ( v20 == -2147483622 )
            {
              v11 = 0;
              goto LABEL_33;
            }
          }
          while ( v20 == -1073741789 );
          if ( v20 < 0 )
            goto LABEL_33;
          v21 = a4(a1, PoolWithTag, a5);
          v7 = v21;
          if ( v21 )
            break;
        }
        if ( v21 != 1 && v21 != 2 )
        {
          if ( v21 == 3 )
            v11 = -1073741248;
          else
            v11 = -1073741595;
        }
LABEL_33:
        v14 = Handle;
        if ( Handle )
          ZwClose(Handle);
        if ( v11 < 0 || v7 == 2 )
          goto LABEL_40;
        if ( v7 == 1 )
          goto LABEL_13;
        ++v15;
      }
    }
    v11 = 0;
    goto LABEL_40;
  }
  v11 = -1073741801;
LABEL_42:
  if ( v24 )
    ZwClose(v24);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v26 )
    ZwClose(v26);
  return (unsigned int)v11;
}
