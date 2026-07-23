/*
 * XREFs of MmFlushAllFilesystemPages @ 0x1401E5C00
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x14000C9C0 (MiSetReadOnlyOnSectionView.c)
 *     MiMakeSystemAddressValid @ 0x14001592C (MiMakeSystemAddressValid.c)
 *     MiWaitForInPageComplete @ 0x140024D30 (MiWaitForInPageComplete.c)
 *     MiCommitExistingVad @ 0x14002A7A0 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140043770 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x1400448D0 (MiDecommitPages.c)
 *     MiInPageSingleKernelStack @ 0x140094924 (MiInPageSingleKernelStack.c)
 *     MiMakeSystemAddressValidSystemWs @ 0x140109FC8 (MiMakeSystemAddressValidSystemWs.c)
 *     MiInsertViewOfPhysicalSection @ 0x140146DB8 (MiInsertViewOfPhysicalSection.c)
 *     MiMakeOutswappedPageResident @ 0x1401DFC0C (MiMakeOutswappedPageResident.c)
 *     MiShutdownSystem @ 0x1403DE8F8 (MiShutdownSystem.c)
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     CcNotifyWriteBehind @ 0x1400A9F48 (CcNotifyWriteBehind.c)
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 *     MiQueueWorkingSetRequest @ 0x1401318CC (MiQueueWorkingSetRequest.c)
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
            result = (unsigned int)_InterlockedIncrement(&dword_140327058);
            if ( (_DWORD)result != 1 )
              return result;
            if ( byte_1403277D8 )
            {
              ++*(_DWORD *)(qword_140324DE8 + 28);
              MiQueueWorkingSetRequest((__int64)MiSystemPartition, 4);
            }
          }
          _InterlockedIncrement(&dword_14032383C);
          result = qword_140325230;
          if ( qword_1403251C0 != qword_140325230 )
          {
            v4 = dword_1403237D4;
            do
            {
              KeSetEvent(&stru_140323840, 0, 0);
              CcNotifyWriteBehind(2);
              result = qword_140325230;
              if ( qword_1403251C0 == qword_140325230 )
                break;
              KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
              result = (unsigned int)dword_1403237D4;
              if ( v4 != dword_1403237D4 )
              {
                v4 = dword_1403237D4;
                v3 = -1;
              }
              ++v3;
            }
            while ( v3 < 0xFF );
          }
          _InterlockedDecrement(&dword_14032383C);
        }
      }
    }
  }
  return result;
}
