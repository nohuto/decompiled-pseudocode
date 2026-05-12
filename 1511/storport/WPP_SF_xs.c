/*
 * XREFs of WPP_SF_xs @ 0x1C002C458
 * Callers:
 *     StorPortGetDeviceBase @ 0x1C0012C30 (StorPortGetDeviceBase.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0015B60 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_xs(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  const char *v6; // rcx
  __int64 v8; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  const char *v10; // [rsp+80h] [rbp+28h]
  va_list va1; // [rsp+88h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  v10 = va_arg(va1, const char *);
  if ( v10 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v10[v4] );
    v5 = v4 + 1;
  }
  else
  {
    v5 = 5LL;
  }
  v6 = "NULL";
  if ( v10 )
    v6 = v10;
  return (*(__int64 (__fastcall **)(__int64, __int64, void *, __int64, __int64 *, __int64, const char *, __int64, _QWORD))&WPP_MAIN_CB.ActiveThreadCount)(
           a1,
           43LL,
           &WPP_a7c96fc4c7d54bab161cb0c6c8756061_Traceguids,
           26LL,
           (__int64 *)va,
           8LL,
           v6,
           v5,
           0LL);
}
