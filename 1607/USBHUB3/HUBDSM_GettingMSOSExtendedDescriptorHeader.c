/*
 * XREFs of HUBDSM_GettingMSOSExtendedDescriptorHeader @ 0x1C0019170
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C00097E0 (HUBSM_AddEvent.c)
 *     HUBDTX_GetMsOsFeatureDescriptor @ 0x1C00203A8 (HUBDTX_GetMsOsFeatureDescriptor.c)
 */

__int64 __fastcall HUBDSM_GettingMSOSExtendedDescriptorHeader(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  void *v4; // rcx
  int MsOsFeatureDescriptor; // eax
  __int64 v7; // [rsp+28h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 960);
  v4 = *(void **)(v3 + 2088);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x64334855u);
  *(_QWORD *)(v3 + 2088) = 0LL;
  MsOsFeatureDescriptor = HUBDTX_GetMsOsFeatureDescriptor(v3, 0, a3, 4, v3 + 1716, 16LL);
  if ( MsOsFeatureDescriptor < 0 )
  {
    LODWORD(v7) = MsOsFeatureDescriptor;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
      2u,
      5u,
      0x3Bu,
      (__int64)&WPP_54b341aebfc139c3e8664792e3975607_Traceguids,
      v7);
    HUBSM_AddEvent(v3 + 488, 0xFA4u);
  }
  return 1000LL;
}
