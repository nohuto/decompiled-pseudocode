/*
 * XREFs of HUBMISC_CheckIfBOSDescriptorQueryShouldBeSkipped @ 0x1C0022C94
 * Callers:
 *     HUBDSM_CheckingIfAlternateBOSDescriptorQueryShouldBeSkipped @ 0x1C00197B0 (HUBDSM_CheckingIfAlternateBOSDescriptorQueryShouldBeSkipped.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000FCF4 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall HUBMISC_CheckIfBOSDescriptorQueryShouldBeSkipped(__int64 a1)
{
  unsigned int v1; // ebx

  if ( (*(_DWORD *)(a1 + 1628) & 0x8000) != 0 || *(_WORD *)(a1 + 1974) <= 0x200u )
  {
    v1 = 4089;
    WPP_RECORDER_SF_q(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      4u,
      5u,
      0x58u,
      (__int64)&WPP_f73478d826785beb676296ba3ee7c315_Traceguids,
      a1);
  }
  else
  {
    return 4061;
  }
  return v1;
}
