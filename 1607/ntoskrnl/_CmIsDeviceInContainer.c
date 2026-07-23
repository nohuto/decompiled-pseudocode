/*
 * XREFs of _CmIsDeviceInContainer @ 0x140513338
 * Callers:
 *     _CmGetDeviceContainerIdFromBase @ 0x140513264 (_CmGetDeviceContainerIdFromBase.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     _SysCtxRegOpenKey @ 0x1404E0B1C (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegQueryValue @ 0x1404E7028 (_PnpCtxRegQueryValue.c)
 */

__int64 __fastcall CmIsDeviceInContainer(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        const WCHAR *a5,
        _BYTE *a6,
        _BYTE *a7)
{
  _BYTE *v7; // r14
  _BYTE *v9; // rsi
  _QWORD *v10; // rdi
  int Value; // ebx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  const WCHAR *v15; // r8
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
    a1 = (_QWORD *)*a1;
  Value = SysCtxRegOpenKey((__int64)a1, a2, a3, 0, 1u, (__int64)&v19);
  if ( Value >= 0 )
  {
    v12 = v10 ? *v10 : 0LL;
    Value = SysCtxRegOpenKey(v12, (__int64)v19, (__int64)L"BaseContainers", 0, 1u, (__int64)&v18);
    if ( Value >= 0 )
    {
      v13 = v10 ? *v10 : 0LL;
      Value = SysCtxRegOpenKey(v13, (__int64)v18, a4, 0, 1u, (__int64)&Handle);
      if ( Value >= 0 )
      {
        v15 = a5;
        v16 = Handle;
        *v7 = 1;
        Value = PnpCtxRegQueryValue(v14, v16, v15, 0LL, 0LL, (unsigned int *)&a6);
        if ( Value >= 0 )
          *v9 = 1;
      }
    }
  }
  if ( Value == -1073741772 || Value == -1073741444 )
    Value = 0;
  if ( Handle )
    ZwClose(Handle);
  if ( v18 )
    ZwClose(v18);
  if ( v19 )
    ZwClose(v19);
  return (unsigned int)Value;
}
