/*
 * XREFs of _CmIsDeviceInContainer @ 0x140486528
 * Callers:
 *     _CmGetDeviceContainerIdFromBase @ 0x140486454 (_CmGetDeviceContainerIdFromBase.c)
 * Callees:
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     _SysCtxRegOpenKey @ 0x1404FDB8C (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegQueryValue @ 0x140504098 (_PnpCtxRegQueryValue.c)
 */

__int64 __fastcall CmIsDeviceInContainer(__int64 *a1, int a2, int a3, int a4, __int64 a5, _BYTE *a6, _BYTE *a7)
{
  _BYTE *v7; // r14
  _BYTE *v9; // rsi
  __int64 *v10; // rdi
  int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  HANDLE v16; // rdx
  HANDLE v18; // [rsp+30h] [rbp-10h] BYREF
  HANDLE v19; // [rsp+38h] [rbp-8h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp+20h] BYREF

  v7 = a6;
  v9 = a7;
  v10 = a1;
  v19 = 0LL;
  v18 = 0LL;
  Handle = 0LL;
  *a6 = 0;
  *v9 = 0;
  if ( a1 )
    a1 = (__int64 *)*a1;
  v11 = SysCtxRegOpenKey((_DWORD)a1, a2, a3, 0, 1, (__int64)&v19);
  if ( v11 >= 0 )
  {
    if ( v10 )
      v12 = *v10;
    else
      LODWORD(v12) = 0;
    v11 = SysCtxRegOpenKey(v12, (_DWORD)v19, (unsigned int)L"BaseContainers", 0, 1, (__int64)&v18);
    if ( v11 >= 0 )
    {
      if ( v10 )
        v13 = *v10;
      else
        LODWORD(v13) = 0;
      v11 = SysCtxRegOpenKey(v13, (_DWORD)v18, a4, 0, 1, (__int64)&Handle);
      if ( v11 >= 0 )
      {
        v15 = a5;
        v16 = Handle;
        *v7 = 1;
        v11 = PnpCtxRegQueryValue(v14, v16, v15, 0LL, 0LL, &a6);
        if ( v11 >= 0 )
          *v9 = 1;
      }
    }
  }
  if ( v11 == -1073741772 || v11 == -1073741444 )
    v11 = 0;
  if ( Handle )
    ZwClose(Handle);
  if ( v18 )
    ZwClose(v18);
  if ( v19 )
    ZwClose(v19);
  return (unsigned int)v11;
}
