/*
 * XREFs of WPP_SF_qqddds @ 0x1C0025CDC
 * Callers:
 *     RaidBusEnumeratorProcessModifiedNodes @ 0x1C000A0AC (RaidBusEnumeratorProcessModifiedNodes.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012F80 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_qqddds(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v3; // rdx
  __int64 v4; // rdx
  const char *v5; // rax
  __int64 v7; // [rsp+B8h] [rbp+20h] BYREF
  va_list va; // [rsp+B8h] [rbp+20h]
  __int64 v9; // [rsp+C0h] [rbp+28h] BYREF
  va_list va1; // [rsp+C0h] [rbp+28h]
  __int64 v11; // [rsp+C8h] [rbp+30h] BYREF
  va_list va2; // [rsp+C8h] [rbp+30h]
  __int64 v13; // [rsp+D0h] [rbp+38h] BYREF
  va_list va3; // [rsp+D0h] [rbp+38h]
  __int64 v15; // [rsp+D8h] [rbp+40h] BYREF
  va_list va4; // [rsp+D8h] [rbp+40h]
  const char *v17; // [rsp+E0h] [rbp+48h]
  va_list va5; // [rsp+E8h] [rbp+50h] BYREF

  va_start(va5, a3);
  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v7 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v9 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v11 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v13 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v15 = va_arg(va5, _QWORD);
  v17 = va_arg(va5, const char *);
  if ( v17 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( v17[v3] );
    v4 = v3 + 1;
  }
  else
  {
    v4 = 5LL;
  }
  v5 = "NULL";
  if ( v17 )
    v5 = v17;
  return (*(__int64 (__fastcall **)(__int64, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, const char *, __int64, _QWORD))&WPP_MAIN_CB.ActiveThreadCount)(
           a1,
           43LL,
           &WPP_db7eb2d060c35673e0bd52165bc92804_Traceguids,
           14LL,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           8LL,
           (__int64 *)va2,
           4LL,
           (__int64 *)va3,
           4LL,
           (__int64 *)va4,
           4LL,
           v5,
           v4,
           0LL);
}
