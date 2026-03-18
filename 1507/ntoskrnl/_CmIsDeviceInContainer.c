/*
 * XREFs of _CmIsDeviceInContainer @ 0x140537D80
 * Callers:
 *     _CmGetDeviceContainerIdFromBase @ 0x140537BF4 (_CmGetDeviceContainerIdFromBase.c)
 * Callees:
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     _SysCtxRegOpenKey @ 0x140435B90 (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegQueryValue @ 0x14043E1AC (_PnpCtxRegQueryValue.c)
 */

__int64 __fastcall CmIsDeviceInContainer(
        _QWORD *a1,
        char *a2,
        const WCHAR *a3,
        const WCHAR *a4,
        __int64 a5,
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
    a1 = (_QWORD *)*a1;
  Value = SysCtxRegOpenKey((__int64)a1, a2, a3, 0, 1u, &v19);
  if ( Value >= 0 )
  {
    v12 = v10 ? *v10 : 0LL;
    Value = SysCtxRegOpenKey(v12, (char *)v19, L"BaseContainers", 0, 1u, &v18);
    if ( Value >= 0 )
    {
      v13 = v10 ? *v10 : 0LL;
      Value = SysCtxRegOpenKey(v13, (char *)v18, a4, 0, 1u, &Handle);
      if ( Value >= 0 )
      {
        v15 = a5;
        v16 = Handle;
        *v7 = 1;
        Value = PnpCtxRegQueryValue(v14, v16, v15, 0LL, 0LL, (__int64)&a6);
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
