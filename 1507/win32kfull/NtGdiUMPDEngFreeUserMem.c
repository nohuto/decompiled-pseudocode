/*
 * XREFs of NtGdiUMPDEngFreeUserMem @ 0x1C02AFBA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiUMPDEngFreeUserMem(void **a1)
{
  void *v2; // rcx

  v2 = 0LL;
  if ( a1 )
  {
    if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > W32UserProbeAddress )
      *W32UserProbeAddress = 0;
    if ( (((unsigned __int8)*a1 - 32) & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v2 = *a1;
  }
  if ( v2 )
    EngFreeUserMem(v2);
  return 1LL;
}
