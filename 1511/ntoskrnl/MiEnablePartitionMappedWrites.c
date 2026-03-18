/*
 * XREFs of MiEnablePartitionMappedWrites @ 0x1403C85B0
 * Callers:
 *     MiCreateNewSection @ 0x1403C8128 (MiCreateNewSection.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiAllocateMappedWriterMdls @ 0x1401412B4 (MiAllocateMappedWriterMdls.c)
 *     MiDeleteMappedMdls @ 0x1401D4FC4 (MiDeleteMappedMdls.c)
 *     PsCreateSystemThread @ 0x1404D20DC (PsCreateSystemThread.c)
 */

__int64 __fastcall MiEnablePartitionMappedWrites(void *a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  int MappedWriterMdls; // esi
  __int64 v4; // rax
  signed __int8 v5; // cf
  __int64 v6; // rdi
  HANDLE ThreadHandle; // [rsp+60h] [rbp+8h] BYREF

  ThreadHandle = a1;
  if ( qword_1402FFE00 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  MappedWriterMdls = 0;
  --CurrentThread->SpecialApcDisable;
  v4 = KeAbPreAcquire((ULONG_PTR)qword_140300100, 0LL, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)qword_140300100, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(qword_140300100, v4, (ULONG_PTR)qword_140300100);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  if ( !qword_1402FFE00 )
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
        qword_1402FFE00 = (__int64)ThreadHandle;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140300100, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)qword_140300100);
  KeAbPostRelease((ULONG_PTR)qword_140300100);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return (unsigned int)MappedWriterMdls;
}
