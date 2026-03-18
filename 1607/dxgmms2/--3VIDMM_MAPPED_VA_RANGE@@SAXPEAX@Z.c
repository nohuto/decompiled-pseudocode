/*
 * XREFs of ??3VIDMM_MAPPED_VA_RANGE@@SAXPEAX@Z @ 0x1C0092674
 * Callers:
 *     ??_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z @ 0x1C0012EE8 (--_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z.c)
 * Callees:
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C001DA5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 */

void __fastcall VIDMM_MAPPED_VA_RANGE::operator delete(struct _SLIST_ENTRY *a1)
{
  if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&reg_FeatureDescriptors_a) )
  {
    ++g_VaRangeLookasideList.L.TotalFrees;
    if ( ExQueryDepthSList(&g_VaRangeLookasideList.L.ListHead) < g_VaRangeLookasideList.L.Depth )
    {
      ExpInterlockedPushEntrySList(&g_VaRangeLookasideList.L.ListHead, a1);
    }
    else
    {
      ++g_VaRangeLookasideList.L.FreeMisses;
      ((void (__fastcall *)(struct _SLIST_ENTRY *, struct _LOOKASIDE_LIST_EX *))g_VaRangeLookasideList.L.FreeEx)(
        a1,
        &g_VaRangeLookasideList);
    }
  }
  else
  {
    operator delete(a1);
  }
}
