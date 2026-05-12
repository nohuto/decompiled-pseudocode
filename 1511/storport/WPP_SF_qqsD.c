/*
 * XREFs of WPP_SF_qqsD @ 0x1C003020C
 * Callers:
 *     RaidAdapterSetPowerIrp @ 0x1C0007DB8 (RaidAdapterSetPowerIrp.c)
 *     RaidAdapterQueryPowerIrp @ 0x1C0008290 (RaidAdapterQueryPowerIrp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0015B60 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_qqsD(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  __int64 v4; // r8
  __int64 v5; // r8
  const char *v6; // rcx
  __int64 v8; // [rsp+98h] [rbp+20h] BYREF
  va_list va; // [rsp+98h] [rbp+20h]
  __int64 v10; // [rsp+A0h] [rbp+28h] BYREF
  va_list va1; // [rsp+A0h] [rbp+28h]
  const char *v12; // [rsp+A8h] [rbp+30h]
  va_list va2; // [rsp+B0h] [rbp+38h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v10 = va_arg(va2, _QWORD);
  v12 = va_arg(va2, const char *);
  if ( v12 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v12[v4] );
    v5 = v4 + 1;
  }
  else
  {
    v5 = 5LL;
  }
  v6 = "NULL";
  if ( v12 )
    v6 = v12;
  return (*(__int64 (__fastcall **)(__int64, __int64, void *, _QWORD, __int64 *, __int64, __int64 *, __int64, const char *, __int64, char *, __int64, _QWORD))&WPP_MAIN_CB.ActiveThreadCount)(
           a1,
           43LL,
           &WPP_bd41b0a71fae7a1a3137e05edf146d17_Traceguids,
           a2,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           8LL,
           v6,
           v5,
           va2,
           4LL,
           0LL);
}
