/*
 * XREFs of HUBMISC_CheckIfBOSDescriptorQueryShouldBeSkipped @ 0x1C0022054
 * Callers:
 *     HUBDSM_CheckingIfAlternateBOSDescriptorQueryShouldBeSkipped @ 0x1C0018D80 (HUBDSM_CheckingIfAlternateBOSDescriptorQueryShouldBeSkipped.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000F66C (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall HUBMISC_CheckIfBOSDescriptorQueryShouldBeSkipped(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx

  if ( (*(_DWORD *)(a1 + 1628) & 0x8000) != 0 || *(_WORD *)(a1 + 1974) <= 0x200u )
  {
    v3 = 4089;
    WPP_RECORDER_SF_q(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      4u,
      a3,
      0x59u,
      (__int64)&WPP_3af9c4bc24663ab710b8f4aaa06e62ad_Traceguids,
      a1);
  }
  else
  {
    return 4061;
  }
  return v3;
}
