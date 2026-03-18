/*
 * XREFs of ?VidMmTerminateCompanionContext@VIDMM_GLOBAL@@SAXPEAUVIDMM_COMPANION_CONTEXT@@@Z @ 0x1C008C93C
 * Callers:
 *     VidMmTerminateCompanionContext @ 0x1C001D690 (VidMmTerminateCompanionContext.c)
 * Callees:
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C001DA5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C0045578 (-Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::VidMmTerminateCompanionContext(struct VIDMM_COMPANION_CONTEXT *a1)
{
  if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&reg_FeatureDescriptors_a)
    && KeReadStateSemaphore((PRKSEMAPHORE)((char *)a1 + 24)) )
  {
    VIDMM_PAGING_QUEUE::Flush((VIDMM_PAGING_QUEUE *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 72LL)
                                                   + 168LL
                                                   * *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 96LL) + 6LL)));
  }
  operator delete(a1);
}
