/*
 * XREFs of ?CreateInstance@CVolumeLimitTrackerFactory@@SAJPEAPEAUIVolumeLimitTracker@@@Z @ 0x18003F478
 * Callers:
 *     ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x18003E748 (-TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z.c)
 * Callees:
 *     ??$MakeAndInitialize@VCVolumeLimitTrackerNull@@UIVolumeLimitTracker@@@Details@WRL@Microsoft@@YAJPEAPEAUIVolumeLimitTracker@@@Z @ 0x180044288 (--$MakeAndInitialize@VCVolumeLimitTrackerNull@@UIVolumeLimitTracker@@@Details@WRL@Microsoft@@YAJ.c)
 *     Template_dsdp @ 0x1800A8880 (Template_dsdp.c)
 *     Template_pt @ 0x1800A8928 (Template_pt.c)
 */

__int64 __fastcall CVolumeLimitTrackerFactory::CreateInstance(struct IVolumeLimitTracker **a1)
{
  unsigned int v1; // ebx
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // esi

  v1 = 0;
  if ( a1 )
  {
    *a1 = 0LL;
    v3 = Microsoft::WRL::Details::MakeAndInitialize<CVolumeLimitTrackerNull,IVolumeLimitTracker>();
    v6 = v3;
    if ( v3 < 0 )
    {
      if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) != 0 )
        Template_dsdp(
          v5,
          (unsigned int)&EUVolumePolicy_Error_Propagation,
          v3,
          (unsigned int)"CVolumeLimitTrackerFactory::CreateInstance",
          48,
          0);
      return v6;
    }
    else if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 2) != 0 )
    {
      Template_pt(v5, v4, *a1, 0LL);
    }
  }
  else
  {
    if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) != 0 )
      Template_dsdp(
        0,
        (unsigned int)&EUVolumePolicy_Error_Origination,
        -2147467261,
        (unsigned int)"CVolumeLimitTrackerFactory::CreateInstance",
        38,
        0);
    return (unsigned int)-2147467261;
  }
  return v1;
}
