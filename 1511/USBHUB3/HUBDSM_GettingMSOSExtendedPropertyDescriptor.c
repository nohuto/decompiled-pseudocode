/*
 * XREFs of HUBDSM_GettingMSOSExtendedPropertyDescriptor @ 0x1C001B610
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009730 (HUBSM_AddEvent.c)
 *     HUBDTX_GetMsOsFeatureDescriptor @ 0x1C00202F8 (HUBDTX_GetMsOsFeatureDescriptor.c)
 */

__int64 __fastcall HUBDSM_GettingMSOSExtendedPropertyDescriptor(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  int MsOsFeatureDescriptor; // eax
  __int64 v6; // [rsp+28h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 960);
  MsOsFeatureDescriptor = HUBDTX_GetMsOsFeatureDescriptor(
                            v3,
                            1,
                            a3,
                            5,
                            *(_QWORD *)(v3 + 2096),
                            *(unsigned int *)(v3 + 1716));
  if ( MsOsFeatureDescriptor < 0 )
  {
    LODWORD(v6) = MsOsFeatureDescriptor;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
      2u,
      5u,
      0x5Bu,
      (__int64)&WPP_f73478d826785beb676296ba3ee7c315_Traceguids,
      v6);
    HUBSM_AddEvent(v3 + 488, 0xFA4u);
  }
  return 1000LL;
}
