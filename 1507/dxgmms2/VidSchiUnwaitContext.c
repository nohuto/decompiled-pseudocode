/*
 * XREFs of VidSchiUnwaitContext @ 0x1C001B160
 * Callers:
 *     VidSchiDelayReadyRoutine @ 0x1C00035A0 (VidSchiDelayReadyRoutine.c)
 *     ?VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0013A50 (-VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C001B2A8 (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchSuspendResumeDevice @ 0x1C001D320 (VidSchSuspendResumeDevice.c)
 * Callees:
 *     VidSchiUpdateContextStatus @ 0x1C0002EC0 (VidSchiUpdateContextStatus.c)
 */

bool __fastcall VidSchiUnwaitContext(__int64 a1, unsigned int a2)
{
  char v3; // di
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rax
  char v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  if ( (*(_DWORD *)(a1 + 176) & 0x100) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 176) & 0x200) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 176) & 2) == 0 )
      {
        v5 = 10LL;
        v6 = 18091LL;
LABEL_19:
        VidSchiUpdateContextStatus(a1, (_QWORD *)v5, (__int64 *)v6);
      }
    }
    else
    {
      if ( *(_QWORD *)(a1 + 664) == a1 + 664 )
      {
        v5 = 0LL;
        v6 = 18108LL;
        goto LABEL_19;
      }
      if ( !*(_DWORD *)(a1 + 756) )
      {
        v5 = 1LL;
        v6 = 18154LL;
        goto LABEL_19;
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
          v7 = *(_QWORD *)(a1 + 96);
          v9 = 0;
          DpSynchronizeExecution(
            *(_QWORD *)(*(_QWORD *)(v7 + 24) + 24LL),
            VidSchiResetContextQuantumAtISR,
            a1,
            *(unsigned int *)(*(_QWORD *)(v7 + 24) + 32LL),
            &v9);
        }
        return (unsigned int)VidSchiUpdateContextStatus(a1, (_QWORD *)5, (__int64 *)a2) != 0;
      }
    }
  }
  return v3;
}
