/*
 * XREFs of MmFlushAllFilesystemPages @ 0x1401D5180
 * Callers:
 *     MiWaitForInPageComplete @ 0x140039E00 (MiWaitForInPageComplete.c)
 *     MiSetProtectionOnSection @ 0x14005BC70 (MiSetProtectionOnSection.c)
 *     MiCommitExistingVad @ 0x1400629D0 (MiCommitExistingVad.c)
 *     MiLockPagedAddress @ 0x14009A36C (MiLockPagedAddress.c)
 *     MiMakeSystemAddressValid @ 0x1400B82F0 (MiMakeSystemAddressValid.c)
 *     MiInPageSingleKernelStack @ 0x1400DE754 (MiInPageSingleKernelStack.c)
 *     MiMakeOutswappedPageResident @ 0x1401CFB54 (MiMakeOutswappedPageResident.c)
 *     MiShutdownSystem @ 0x1403B1B80 (MiShutdownSystem.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     CcNotifyWriteBehind @ 0x1400EB5C0 (CcNotifyWriteBehind.c)
 *     MiQueueWorkingSetRequest @ 0x14011B7BC (MiQueueWorkingSetRequest.c)
 */

__int64 __fastcall MmFlushAllFilesystemPages(int a1)
{
  void (__fastcall *Flink)(char *); // rdx
  __int64 result; // rax
  unsigned int v3; // ebx
  int v4; // edi

  Flink = (void (__fastcall *)(char *))KeGetCurrentThread()[1].ApcState.ApcListHead[1].Flink;
  result = KeGetCurrentIrql();
  if ( (unsigned __int8)result <= 1u )
  {
    result = (__int64)KeBalanceSetManager;
    if ( (char *)Flink != (char *)KeBalanceSetManager )
    {
      result = (__int64)MiModifiedPageWriter;
      if ( (char *)Flink != (char *)MiModifiedPageWriter )
      {
        result = (__int64)MiMappedPageWriter;
        if ( Flink != MiMappedPageWriter )
        {
          v3 = 0;
          if ( a1 == 1 )
          {
            result = (unsigned int)_InterlockedIncrement(&dword_1402FEC48);
            if ( (_DWORD)result != 1 )
              return result;
            if ( byte_1402FF6D8 )
            {
              ++*(_DWORD *)(qword_140301330 + 28);
              MiQueueWorkingSetRequest((__int64)MiSystemPartition, 4);
            }
          }
          _InterlockedIncrement(&dword_140300004);
          result = qword_140301530;
          if ( qword_1403014C0 != qword_140301530 )
          {
            v4 = dword_1402FFF9C;
            do
            {
              KeSetEvent(&stru_140300008, 0, 0);
              CcNotifyWriteBehind(2);
              result = qword_140301530;
              if ( qword_1403014C0 == qword_140301530 )
                break;
              KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
              result = (unsigned int)dword_1402FFF9C;
              if ( v4 != dword_1402FFF9C )
              {
                v4 = dword_1402FFF9C;
                v3 = -1;
              }
              ++v3;
            }
            while ( v3 < 0xFF );
          }
          _InterlockedDecrement(&dword_140300004);
        }
      }
    }
  }
  return result;
}
