/*
 * XREFs of WPP_SF_Z @ 0x1C00042B4
 * Callers:
 *     CiDispatchCreate @ 0x1C000A5D0 (CiDispatchCreate.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002D40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_Z(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4)
{
  int v4; // eax
  const wchar_t *v5; // rdx

  if ( a4 )
  {
    v4 = *a4;
    v5 = (const wchar_t *)*((_QWORD *)a4 + 1);
  }
  else
  {
    v4 = 8;
    v5 = L"NULL";
    a4 = L"\b";
  }
  return ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, const wchar_t *, __int64, const wchar_t *, _QWORD, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_dd714108735c30899653f2ca1e788838_Traceguids,
           10LL,
           a4,
           2LL,
           v5,
           v4,
           0LL);
}
