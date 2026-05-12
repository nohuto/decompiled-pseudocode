/*
 * XREFs of WPP_SF_S @ 0x1C0039260
 * Callers:
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C001162C (RaUnitScsiGetDumpPointersIoctl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AA20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_S(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  const wchar_t *v7; // rdx

  if ( a4 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a4[v5] );
    v6 = v5 + 1;
  }
  else
  {
    v6 = 5LL;
  }
  v7 = L"NULL";
  if ( a4 )
    v7 = a4;
  return pfnWppTraceMessage(a1, 43LL, &WPP_a0aaf6c2955e31bbd69faa467326e0b4_Traceguids, 36LL, v7, 2 * v6, 0LL);
}
