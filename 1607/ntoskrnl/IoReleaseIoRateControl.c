/*
 * XREFs of IoReleaseIoRateControl @ 0x1400B47BC
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
 */

void __fastcall IoReleaseIoRateControl(struct _EX_RUNDOWN_REF **a1)
{
  __int64 v2; // rdi

  v2 = 2LL;
  do
  {
    if ( *a1 )
      ExReleaseRundownProtection(*a1 + 4);
    ++a1;
    --v2;
  }
  while ( v2 );
}
