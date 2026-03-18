/*
 * XREFs of MmDbgMarkPfnModifiedWorker @ 0x14016D590
 * Callers:
 *     ExpDebuggerWorker @ 0x14072A01C (ExpDebuggerWorker.c)
 * Callees:
 *     MiCaptureDirtyBitToPfn @ 0x14003C844 (MiCaptureDirtyBitToPfn.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400E2D48 (MiRemoveLockedPageChargeAndDecRef.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

void MmDbgMarkPfnModifiedWorker()
{
  __int64 v0; // rsi
  signed __int64 *v1; // r14
  signed __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // bp
  unsigned int v4; // ebx
  unsigned __int64 v5; // rbx
  __int16 *v6; // rax

  v0 = 0LL;
  v1 = qword_14034F2D8;
  do
  {
    v2 = *v1;
    if ( (*v1 & 1) != 0 )
    {
      _InterlockedAnd64(&qword_14034F2D8[v0], 0LL);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      v4 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 23), 0x3FuLL) )
      {
        do
        {
          if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v4);
        }
        while ( *(__int64 *)(v2 + 23) < 0 );
      }
      v5 = MiCaptureDirtyBitToPfn(v2 - 1);
      MiRemoveLockedPageChargeAndDecRef(v2 - 1);
      v6 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v2 + 39)) >> 8) & 0x3FF);
      _InterlockedAnd64((volatile signed __int64 *)(v2 + 23), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
      if ( v5 )
        MiReleasePageFileInfo((struct _KEVENT *)v6, v5, 0);
    }
    v0 = (unsigned int)(v0 + 1);
    ++v1;
  }
  while ( (unsigned int)v0 < 0x20 );
}
