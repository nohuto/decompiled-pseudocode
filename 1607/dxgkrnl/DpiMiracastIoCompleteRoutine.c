/*
 * XREFs of DpiMiracastIoCompleteRoutine @ 0x1C002BE30
 * Callers:
 *     <none>
 * Callees:
 *     Template_pdqqq @ 0x1C002ECC4 (Template_pdqqq.c)
 */

__int64 __fastcall DpiMiracastIoCompleteRoutine(int a1, __int64 a2, PVOID *a3)
{
  bool v5; // zf
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v7; // rcx
  __int64 v8; // rax

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000) != 0 )
    Template_pdqqq(
      a1,
      (unsigned int)&EventCompleteMiracastSendUserModeRequest,
      (_DWORD)a3,
      (unsigned int)a3[1],
      0,
      0,
      *(_DWORD *)(a2 + 56),
      *(_DWORD *)(a2 + 48));
  v5 = *((_DWORD *)a3 + 14) == 0;
  *((_OWORD *)a3 + 1) = *(_OWORD *)(a2 + 48);
  if ( !v5 )
    IoFreeIrp((PIRP)a2);
  if ( a3[4] || a3[6] && a3[3] )
  {
    WorkItem = IoAllocateWorkItem((PDEVICE_OBJECT)g_pDriverObject);
    if ( WorkItem )
    {
      IoQueueWorkItemEx(WorkItem, DpiMiracastIoCompleteWork, DelayedWorkQueue, a3);
    }
    else
    {
      v8 = WdLogNewEntry5_WdLowResource(v7);
      *(_QWORD *)(v8 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v8);
    }
  }
  else
  {
    ObDereferenceObjectDeferDelete(*a3);
    ExFreePoolWithTag(a3, 0);
  }
  return 3221225494LL;
}
