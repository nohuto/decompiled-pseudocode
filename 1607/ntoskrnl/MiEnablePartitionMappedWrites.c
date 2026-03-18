/*
 * XREFs of MiEnablePartitionMappedWrites @ 0x14052255C
 * Callers:
 *     MiCreateNewSection @ 0x140522048 (MiCreateNewSection.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140013B70 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 *     MiAllocateMappedWriterMdls @ 0x14014AB7C (MiAllocateMappedWriterMdls.c)
 *     MiDeleteMappedMdls @ 0x1401E5C18 (MiDeleteMappedMdls.c)
 *     PsCreateSystemThread @ 0x1403E4710 (PsCreateSystemThread.c)
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
  if ( qword_140323608 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  MappedWriterMdls = 0;
  --CurrentThread->SpecialApcDisable;
  v4 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)qword_1403238F8, 0LL, 0);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)qword_1403238F8, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(qword_1403238F8, v4, (ULONG_PTR)qword_1403238F8);
  if ( v6 )
    v6[26] |= 1u;
  if ( !qword_140323608 )
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
        qword_140323608 = (__int64)ThreadHandle;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_1403238F8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)qword_1403238F8);
  KeAbPostRelease((ULONG_PTR)qword_1403238F8);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return (unsigned int)MappedWriterMdls;
}
