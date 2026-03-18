/*
 * XREFs of VidSchiUnwaitContext @ 0x1C000E0EC
 * Callers:
 *     ?VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0002428 (-VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiCompleteFlipEntry @ 0x1C00046F0 (VidSchiCompleteFlipEntry.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1C00056C0 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C000DD84 (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchiDelayReadyRoutine @ 0x1C0010690 (VidSchiDelayReadyRoutine.c)
 *     VidSchSuspendResumeDevice @ 0x1C0011190 (VidSchSuspendResumeDevice.c)
 * Callees:
 *     VidSchiUpdateContextStatus @ 0x1C000C380 (VidSchiUpdateContextStatus.c)
 */

bool __fastcall VidSchiUnwaitContext(__int64 a1, unsigned int a2)
{
  char v3; // di
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  char v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  if ( (*(_DWORD *)(a1 + 176) & 0x100) != 0 )
    return v3;
  if ( (*(_DWORD *)(a1 + 176) & 0x200) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 176) & 2) != 0 )
      return v3;
    v6 = 10LL;
    v7 = 18514LL;
    goto LABEL_17;
  }
  if ( *(_QWORD *)(a1 + 664) == a1 + 664 )
  {
    v6 = 0LL;
    v7 = 18531LL;
LABEL_17:
    VidSchiUpdateContextStatus(a1, (_QWORD *)v6, (__int64 *)v7);
    return v3;
  }
  if ( !*(_DWORD *)(a1 + 756) )
  {
    v6 = 1LL;
    v7 = 18577LL;
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(a1 + 176) & 1) == 0
    && (*(_DWORD *)(a1 + 176) & 8) == 0
    && (*(_DWORD *)(a1 + 176) & 0x20) == 0
    && (*(_DWORD *)(a1 + 176) & 0x10) == 0
    && (*(_DWORD *)(a1 + 176) & 0x80u) == 0
    && (*(_DWORD *)(a1 + 176) & 0x100) == 0
    && (*(_DWORD *)(a1 + 176) & 0x40) == 0 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 448), 0, 0) == 2 )
    {
      v8 = *(_QWORD *)(a1 + 96);
      v9 = 0;
      DpSynchronizeExecution(
        *(_QWORD *)(*(_QWORD *)(v8 + 24) + 24LL),
        VidSchiResetContextQuantumAtISR,
        a1,
        *(unsigned int *)(*(_QWORD *)(v8 + 24) + 32LL),
        &v9);
    }
    return (unsigned int)VidSchiUpdateContextStatus(a1, (_QWORD *)5, (__int64 *)a2) != 0;
  }
  return v3;
}
