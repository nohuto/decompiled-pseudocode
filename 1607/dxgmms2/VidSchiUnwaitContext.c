/*
 * XREFs of VidSchiUnwaitContext @ 0x1C000D158
 * Callers:
 *     VidSchiDelayReadyRoutine @ 0x1C0002070 (VidSchiDelayReadyRoutine.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0003BA0 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiProcessVsyncCompletedFlipEntry@@YAXPEAU_VIDSCH_VSYNC_COMPLETED_ENTRY_INFO@@PEA_KPEAIPEAKPEA_N_N@Z @ 0x1C0004730 (-VidSchiProcessVsyncCompletedFlipEntry@@YAXPEAU_VIDSCH_VSYNC_COMPLETED_ENTRY_INFO@@PEA_KPEAIPEAK.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C000CF4C (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchSuspendResumeDevice @ 0x1C000F0F0 (VidSchSuspendResumeDevice.c)
 *     ?VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C00116C4 (-VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     ?VidSchiUnwaitAllContextsInList@@YAXPEAU_LIST_ENTRY@@@Z @ 0x1C00224B8 (-VidSchiUnwaitAllContextsInList@@YAXPEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     VidSchiUpdateContextStatus @ 0x1C000ABF0 (VidSchiUpdateContextStatus.c)
 */

bool __fastcall VidSchiUnwaitContext(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  char v5; // si
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rax
  char v11; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0;
  if ( (*(_DWORD *)(a1 + 176) & 0x100) != 0 )
    return v5;
  if ( (*(_DWORD *)(a1 + 176) & 0x200) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 176) & 2) != 0 )
      return v5;
    v8 = 10LL;
    v9 = 20008LL;
    goto LABEL_17;
  }
  if ( *(_QWORD *)(a1 + 664) == a1 + 664 )
  {
    v8 = 0LL;
    v9 = 20025LL;
LABEL_17:
    VidSchiUpdateContextStatus(a1, (_QWORD *)v8, v9, a4);
    return v5;
  }
  if ( !*(_DWORD *)(a1 + 780) )
  {
    v8 = 1LL;
    v9 = 20091LL;
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(a1 + 176) & 0x20) != 0 )
  {
    v9 = a2;
    v8 = 4LL;
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(a1 + 176) & 0x80u) != 0 )
  {
    v9 = a2;
    v8 = 8LL;
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(a1 + 176) & 0x10) != 0 )
  {
    v9 = a2;
    v8 = 3LL;
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(a1 + 176) & 0x40) != 0 )
  {
    v9 = a2;
    v8 = 7LL;
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(a1 + 176) & 8) != 0 )
  {
    v9 = a2;
    v8 = 2LL;
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(a1 + 176) & 1) == 0 && (*(_DWORD *)(a1 + 176) & 0x100) == 0 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 448), 0, 0) == 2 )
    {
      v10 = *(_QWORD *)(a1 + 96);
      v11 = 0;
      DpSynchronizeExecution(
        *(_QWORD *)(*(_QWORD *)(v10 + 24) + 24LL),
        VidSchiResetContextQuantumAtISR,
        a1,
        *(unsigned int *)(*(_QWORD *)(v10 + 24) + 32LL),
        &v11);
    }
    return (unsigned int)VidSchiUpdateContextStatus(a1, (_QWORD *)5, a2, a4) != 0;
  }
  return v5;
}
