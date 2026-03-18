/*
 * XREFs of ?VidSchiProcessIsrVSyncMultiPlaneOverlay2@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_DXGKARGCB_NOTIFY_INTERRUPT_DATA@@PEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C0021C88
 * Callers:
 *     VidSchiProcessIsrVSync @ 0x1C000C0E0 (VidSchiProcessIsrVSync.c)
 * Callees:
 *     memset @ 0x1C0014E40 (memset.c)
 */

void __fastcall VidSchiProcessIsrVSyncMultiPlaneOverlay2(
        struct _VIDSCH_GLOBAL *a1,
        struct _VIDSCH_PRESENT_INFO *a2,
        struct _DXGKARGCB_NOTIFY_INTERRUPT_DATA *a3,
        struct _VIDSCH_VSYNC_COOKIE *a4)
{
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 i; // rdx
  DXGK_MULTIPLANE_OVERLAY_VSYNC_INFO *pMultiPlaneOverlayVsyncInfo; // r14
  __int64 v13; // rsi
  unsigned int v14; // eax
  _QWORD *v15; // rax

  if ( a3->DmaCompleted.EngineOrdinal > *((_DWORD *)a1 + 32) )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2, a3, a4);
    v7[3] = 281LL;
    v7[4] = 14LL;
    v7[5] = a1;
    v7[6] = a3->DmaCompleted.EngineOrdinal;
    v7[7] = *((unsigned int *)a1 + 32);
    WdLogEvent5_WdCriticalError(v7);
    __debugbreak();
  }
  *((_QWORD *)a2 + 2345) = a3->MiracastEncodeChunkCompleted.pPrivateDriverData;
  memset((char *)a4 + 104, 0, 0x80uLL);
  for ( i = 0LL;
        (unsigned int)i < a3->DmaCompleted.EngineOrdinal;
        *((_DWORD *)a4 + 4 * *(&pMultiPlaneOverlayVsyncInfo->LayerIndex + 2 * v13) + 28) = *((_DWORD *)&pMultiPlaneOverlayVsyncInfo->PlaneAttributes.Flags.0
                                                                                           + 2 * v13) )
  {
    pMultiPlaneOverlayVsyncInfo = a3->CrtcVsyncWithMultiPlaneOverlay.pMultiPlaneOverlayVsyncInfo;
    v13 = 3 * i;
    v14 = *(&pMultiPlaneOverlayVsyncInfo->LayerIndex + 6 * i);
    if ( v14 >= *((_DWORD *)a1 + 32) )
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8, i, v9, v10);
      v15[3] = 281LL;
      v15[4] = 14LL;
      v15[5] = a1;
      v15[6] = *(&pMultiPlaneOverlayVsyncInfo->LayerIndex + 2 * v13);
      v15[7] = *((unsigned int *)a1 + 32);
      WdLogEvent5_WdCriticalError(v15);
      JUMPOUT(0x1C0021D9CLL);
    }
    i = (unsigned int)(i + 1);
    *((_QWORD *)a4 + 2 * v14 + 13) = *(&pMultiPlaneOverlayVsyncInfo->PhysicalAddress.QuadPart + v13);
    v8 = 2 * (*(&pMultiPlaneOverlayVsyncInfo->LayerIndex + 2 * v13) + 7LL);
  }
}
