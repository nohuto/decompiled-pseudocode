/*
 * XREFs of WPP_SF_Zd @ 0x1C0003F58
 * Callers:
 *     CiDispatchInitialize @ 0x1C000D140 (CiDispatchInitialize.c)
 *     CiConfigReadDWORD @ 0x1C000D5C0 (CiConfigReadDWORD.c)
 *     CiConfigQueryValue @ 0x1C000DA90 (CiConfigQueryValue.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002B60 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_Zd(__int64 a1, unsigned __int16 a2, __int64 a3, char *a4, ...)
{
  __int64 v5; // r10
  const wchar_t *v6; // rcx
  va_list va; // [rsp+90h] [rbp+28h] BYREF

  va_start(va, a4);
  if ( a4 && *((_QWORD *)a4 + 1) )
    v5 = *(unsigned __int16 *)a4;
  else
    v5 = 10LL;
  if ( !a4 || (v6 = (const wchar_t *)*((_QWORD *)a4 + 1)) == 0LL )
    v6 = L"NULL";
  if ( !a4 || !*(_WORD *)a4 )
    a4 = byte_1C0002FE0;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, char *, __int64, const wchar_t *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           a4,
           2LL,
           v6,
           v5,
           va,
           4LL,
           0LL);
}
