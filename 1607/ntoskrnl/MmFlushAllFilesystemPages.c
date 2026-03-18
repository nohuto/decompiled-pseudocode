/*
 * XREFs of MmFlushAllFilesystemPages @ 0x1401E5DD4
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x14000CE40 (MiSetReadOnlyOnSectionView.c)
 *     MiMakeSystemAddressValid @ 0x140015DAC (MiMakeSystemAddressValid.c)
 *     MiWaitForInPageComplete @ 0x1400251B0 (MiWaitForInPageComplete.c)
 *     MiCommitExistingVad @ 0x14002AC20 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140043BF0 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x140044D50 (MiDecommitPages.c)
 *     MiInPageSingleKernelStack @ 0x140095124 (MiInPageSingleKernelStack.c)
 *     MiMakeSystemAddressValidSystemWs @ 0x14010C248 (MiMakeSystemAddressValidSystemWs.c)
 *     MiInsertViewOfPhysicalSection @ 0x140146848 (MiInsertViewOfPhysicalSection.c)
 *     MiMakeOutswappedPageResident @ 0x1401DFDE0 (MiMakeOutswappedPageResident.c)
 *     MiShutdownSystem @ 0x1403DE8F8 (MiShutdownSystem.c)
 * Callees:
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     CcNotifyWriteBehind @ 0x1400AB9E0 (CcNotifyWriteBehind.c)
 *     KeDelayExecutionThread @ 0x1400D0580 (KeDelayExecutionThread.c)
 *     MiQueueWorkingSetRequest @ 0x14013135C (MiQueueWorkingSetRequest.c)
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
            result = (unsigned int)_InterlockedIncrement(&dword_140327018);
            if ( (_DWORD)result != 1 )
              return result;
            if ( byte_140327798 )
            {
              ++*(_DWORD *)(qword_140324DA8 + 28);
              MiQueueWorkingSetRequest((__int64)MiSystemPartition, 4);
            }
          }
          _InterlockedIncrement(&dword_1403237FC);
          result = qword_1403251F0;
          if ( qword_140325180 != qword_1403251F0 )
          {
            v4 = dword_140323794;
            do
            {
              KeSetEvent(&stru_140323800, 0, 0);
              CcNotifyWriteBehind(2);
              result = qword_1403251F0;
              if ( qword_140325180 == qword_1403251F0 )
                break;
              KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
              result = (unsigned int)dword_140323794;
              if ( v4 != dword_140323794 )
              {
                v4 = dword_140323794;
                v3 = -1;
              }
              ++v3;
            }
            while ( v3 < 0xFF );
          }
          _InterlockedDecrement(&dword_1403237FC);
        }
      }
    }
  }
  return result;
}
