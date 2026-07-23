/*
 * XREFs of MiEnablePartitionMappedWrites @ 0x1405055BC
 * Callers:
 *     MiCreateNewSection @ 0x1405050A8 (MiCreateNewSection.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     MiAllocateMappedWriterMdls @ 0x14014B0EC (MiAllocateMappedWriterMdls.c)
 *     MiDeleteMappedMdls @ 0x1401E5A44 (MiDeleteMappedMdls.c)
 *     PsCreateSystemThread @ 0x1403E5D3C (PsCreateSystemThread.c)
 */

__int64 __fastcall MiEnablePartitionMappedWrites(void *a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  int MappedWriterMdls; // esi
  _BYTE *v4; // rax
  signed __int8 v5; // cf
  _BYTE *v6; // rdi
  HANDLE ThreadHandle; // [rsp+60h] [rbp+8h] BYREF

  ThreadHandle = a1;
  if ( qword_140323648 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  MappedWriterMdls = 0;
  --CurrentThread->SpecialApcDisable;
  v4 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)qword_140323938, 0LL, 0);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)qword_140323938, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(qword_140323938, v4, (ULONG_PTR)qword_140323938);
  if ( v6 )
    v6[26] |= 1u;
  if ( !qword_140323648 )
  {
    MappedWriterMdls = MiAllocateMappedWriterMdls(MiSystemPartition);
    if ( MappedWriterMdls >= 0 )
    {
      MappedWriterMdls = PsCreateSystemThread(
                           &ThreadHandle,
                           0x1FFFFFu,
                           0LL,
                           0LL,
                           0LL,
                           (PKSTART_ROUTINE)MiMappedPageWriter,
                           MiSystemPartition);
      if ( MappedWriterMdls < 0 )
        MiDeleteMappedMdls((__int64)MiSystemPartition);
      else
        qword_140323648 = (__int64)ThreadHandle;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140323938, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)qword_140323938);
  KeAbPostRelease((ULONG_PTR)qword_140323938);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return (unsigned int)MappedWriterMdls;
}
