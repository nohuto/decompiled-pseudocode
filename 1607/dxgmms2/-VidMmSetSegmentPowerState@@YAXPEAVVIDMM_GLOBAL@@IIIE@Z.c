/*
 * XREFs of ?VidMmSetSegmentPowerState@@YAXPEAVVIDMM_GLOBAL@@IIIE@Z @ 0x1C001D430
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyMemorySegmentIdle@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C001DD20 (-NotifyMemorySegmentIdle@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 */

void __fastcall VidMmSetSegmentPowerState(struct VIDMM_GLOBAL *a1, unsigned int a2, int a3, int a4, char a5)
{
  __int64 v5; // rcx

  v5 = *(_QWORD *)(*((_QWORD *)a1 + 464)
                 + 8LL * (unsigned int)(a3 + *(_DWORD *)(456LL * a2 + *((_QWORD *)a1 + 5017) + 4)));
  if ( a4 == *(_DWORD *)(v5 + 360) )
  {
    *(_BYTE *)(v5 + 364) = a5;
    if ( !a5 )
      VIDMM_GLOBAL::NotifyMemorySegmentIdle(*(VIDMM_GLOBAL **)(v5 + 8), (struct VIDMM_SEGMENT *)v5);
  }
}
