/*
 * XREFs of KeAttachProcess @ 0x14010C324
 * Callers:
 *     KiCompleteKernelInit @ 0x1403F98E4 (KiCompleteKernelInit.c)
 *     PopGracefulShutdown @ 0x140403318 (PopGracefulShutdown.c)
 * Callees:
 *     KiAttachProcess @ 0x14010C4D0 (KiAttachProcess.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

void __stdcall KeAttachProcess(PRKPROCESS Process)
{
  struct _KTHREAD *CurrentThread; // rbx
  int v2; // esi
  struct _KPROCESS *v3; // r8
  unsigned __int8 ApcStateIndex; // dl
  unsigned __int8 CurrentIrql; // bp
  unsigned int v6; // edi

  CurrentThread = KeGetCurrentThread();
  v2 = (int)Process;
  v3 = CurrentThread->ApcState.Process;
  if ( v3 != Process )
  {
    ApcStateIndex = CurrentThread->ApcStateIndex;
    if ( ApcStateIndex || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      KeBugCheckEx(5u, (ULONG_PTR)Process, (ULONG_PTR)v3, ApcStateIndex, KeGetPcr()->Prcb.DpcRequestSummary & 0x10001);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v6 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
      {
        if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v6);
      }
      while ( CurrentThread->ThreadLock );
    }
    LOBYTE(v3) = CurrentIrql;
    KiAttachProcess((_DWORD)CurrentThread, v2, (_DWORD)v3, 0, (__int64)&CurrentThread->600);
  }
}
