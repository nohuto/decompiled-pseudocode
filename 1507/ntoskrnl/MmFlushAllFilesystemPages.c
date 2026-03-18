/*
 * XREFs of MmFlushAllFilesystemPages @ 0x140217008
 * Callers:
 *     MiMakeSystemAddressValidSystemWs @ 0x1400052D8 (MiMakeSystemAddressValidSystemWs.c)
 *     MiMakeSystemAddressValid @ 0x14005E6FC (MiMakeSystemAddressValid.c)
 *     MiWaitForInPageComplete @ 0x140087120 (MiWaitForInPageComplete.c)
 *     MiCommitExistingVad @ 0x14008E680 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x14008FAB0 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x1400922F0 (MiDecommitPages.c)
 *     MiInPageSingleKernelStack @ 0x1400DE01C (MiInPageSingleKernelStack.c)
 *     MiMakeOutswappedPageResident @ 0x14020F4C4 (MiMakeOutswappedPageResident.c)
 *     MiShutdownSystem @ 0x140402C68 (MiShutdownSystem.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     CcNotifyWriteBehind @ 0x1401284AC (CcNotifyWriteBehind.c)
 *     MiQueueWorkingSetRequest @ 0x14015A008 (MiQueueWorkingSetRequest.c)
 */

__int64 __fastcall MmFlushAllFilesystemPages(int a1)
{
  __int64 (__fastcall *Flink)(__int64); // rdx
  __int64 result; // rax
  unsigned int v3; // ebx
  int v4; // edi

  Flink = (__int64 (__fastcall *)(__int64))KeGetCurrentThread()[1].ApcState.ApcListHead[1].Flink;
  result = KeGetCurrentIrql();
  if ( (unsigned __int8)result <= 1u )
  {
    result = (__int64)KeBalanceSetManager;
    if ( (char *)Flink != (char *)KeBalanceSetManager )
    {
      result = (__int64)MiModifiedPageWriter;
      if ( Flink != MiModifiedPageWriter )
      {
        result = (__int64)MiMappedPageWriter;
        if ( Flink != MiMappedPageWriter )
        {
          v3 = 0;
          if ( a1 == 1 )
          {
            result = (unsigned int)_InterlockedIncrement(&dword_14034F104);
            if ( (_DWORD)result != 1 )
              return result;
            if ( byte_14034FB98 )
            {
              ++*(_DWORD *)(qword_140355188 + 28);
              MiQueueWorkingSetRequest((__int64)MiSystemPartition, 4);
            }
          }
          _InterlockedIncrement(&dword_140353FBC);
          result = qword_140355370;
          if ( qword_140355300 != qword_140355370 )
          {
            v4 = dword_140353F6C;
            do
            {
              KeSetEvent(&stru_140353FC0, 0, 0);
              CcNotifyWriteBehind(2);
              result = qword_140355370;
              if ( qword_140355300 == qword_140355370 )
                break;
              KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
              result = (unsigned int)dword_140353F6C;
              if ( v4 != dword_140353F6C )
              {
                v4 = dword_140353F6C;
                v3 = -1;
              }
              ++v3;
            }
            while ( v3 < 0xFF );
          }
          _InterlockedDecrement(&dword_140353FBC);
        }
      }
    }
  }
  return result;
}
