/*
 * XREFs of MmProbeAndLockSelectedPages @ 0x140099DD4
 * Callers:
 *     NtWriteFileGather @ 0x1404A917C (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1404A9848 (NtReadFileScatter.c)
 * Callees:
 *     MiProbeLockFrame @ 0x14002F2B0 (MiProbeLockFrame.c)
 *     MiProbeLeafFrame @ 0x14002F940 (MiProbeLeafFrame.c)
 *     MiProbeAndLockComplete @ 0x140099F54 (MiProbeAndLockComplete.c)
 *     MiProbeAndLockPrepare @ 0x140099FD8 (MiProbeAndLockPrepare.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

void __stdcall MmProbeAndLockSelectedPages(
        PMDL MemoryDescriptorList,
        PFILE_SEGMENT_ELEMENT SegmentArray,
        KPROCESSOR_MODE AccessMode,
        LOCK_OPERATION Operation)
{
  unsigned __int64 *PoolWithTag; // rdi
  int v8; // r13d
  unsigned __int64 v9; // rbx
  unsigned __int64 *v10; // r14
  NTSTATUS v11; // ebx
  unsigned __int64 *v12; // rsi
  _QWORD *v13; // rdx
  unsigned __int64 v14; // rcx
  _QWORD *v15; // rdx
  _QWORD v16[4]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *v17; // [rsp+60h] [rbp-A0h]
  __int64 v18; // [rsp+A0h] [rbp-60h]
  _BYTE P[4096]; // [rsp+C0h] [rbp-40h] BYREF

  PoolWithTag = (unsigned __int64 *)P;
  v8 = (int)MemoryDescriptorList;
  v9 = ((MemoryDescriptorList->ByteCount & 0xFFF) != 0) + (MemoryDescriptorList->ByteCount >> 12);
  if ( v9 > 0x200 )
  {
    PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v9, 0x72506D4Du);
    if ( !PoolWithTag )
      RtlRaiseStatus(-1073741670);
  }
  v10 = &PoolWithTag[v9];
  memmove(PoolWithTag, SegmentArray, 8 * v9);
  do
  {
    v11 = MiProbeAndLockPrepare((unsigned int)v16, v8, *PoolWithTag, 1, AccessMode, Operation, 1);
    if ( v11 < 0 )
      break;
    v12 = PoolWithTag;
    if ( PoolWithTag < v10 )
    {
      v13 = v17;
      while ( 1 )
      {
        v14 = *v12;
        *v13 = -1LL;
        v16[0] = v14;
        v16[1] = v14 + 1;
        if ( v14 >= 0x7FFFFFFF0000LL )
        {
          if ( AccessMode )
            break;
        }
        v11 = MiProbeLeafFrame((__int64)v16);
        if ( v11 >= 0 )
        {
          v11 = MiProbeLockFrame((__int64)v16);
          if ( v11 >= 0 )
          {
            v15 = v17;
            ++v12;
            *v17 = v18;
            v13 = v15 + 1;
            v17 = v13;
            if ( v12 < v10 )
              continue;
          }
        }
        goto LABEL_11;
      }
      ++dword_140327108;
      v11 = -1073741819;
    }
LABEL_11:
    v11 = MiProbeAndLockComplete(v16, (unsigned int)v11, 7LL);
  }
  while ( v11 == -1073741267 );
  if ( PoolWithTag != (unsigned __int64 *)P )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v11 < 0 )
    RtlRaiseStatus(v11);
}
