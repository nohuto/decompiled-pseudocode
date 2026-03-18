/*
 * XREFs of MmDbgMarkPfnModifiedWorker @ 0x140148C04
 * Callers:
 *     ExpDebuggerWorker @ 0x1406F3E60 (ExpDebuggerWorker.c)
 * Callees:
 *     MiCaptureDirtyBitToPfn @ 0x140015D60 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x14001A280 (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x140022E70 (MiLockPageInline.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14004E740 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiPartitionIdToPointer @ 0x1400680A0 (MiPartitionIdToPointer.c)
 */

void MmDbgMarkPfnModifiedWorker()
{
  __int64 v0; // rsi
  signed __int64 *v1; // r14
  signed __int64 v2; // rbp
  __int64 v3; // rbp
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _KEVENT *v9; // rax

  v0 = 0LL;
  v1 = qword_140327218;
  do
  {
    v2 = *v1;
    if ( (*v1 & 1) != 0 )
    {
      _InterlockedAnd64(&qword_140327218[v0], 0LL);
      v3 = v2 - 1;
      v4 = (unsigned __int8)MiLockPageInline(v3);
      v5 = MiCaptureDirtyBitToPfn(v3);
      MiRemoveLockedPageChargeAndDecRef(v3, v6, v7, v8);
      v9 = (struct _KEVENT *)MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v3 + 40)) >> 8) & 0x3FF);
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v4);
      if ( v5 )
        MiReleasePageFileInfo(v9, v5, 0);
    }
    v0 = (unsigned int)(v0 + 1);
    ++v1;
  }
  while ( (unsigned int)v0 < 0x20 );
}
