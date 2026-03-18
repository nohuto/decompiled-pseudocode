/*
 * XREFs of DpiMiracastIoCompleteRoutine @ 0x1C0024E90
 * Callers:
 *     <none>
 * Callees:
 *     Template_pdqqq @ 0x1C0028238 (Template_pdqqq.c)
 */

__int64 __fastcall DpiMiracastIoCompleteRoutine(int a1, __int64 a2, PVOID *a3)
{
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rax

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
  *((_OWORD *)a3 + 1) = *(_OWORD *)(a2 + 48);
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
      v7 = (_QWORD *)WdLogNewEntry5_WdLowResource(v6);
      v7[3] = &DpiMiracastIoCompleteRoutine;
      v7[4] = IoAllocateWorkItem;
      v7[5] = -1073741801LL;
      WdLogEvent5_WdLowResource(v7);
    }
  }
  else
  {
    ObDereferenceObjectDeferDelete(*a3);
    ExFreePoolWithTag(a3, 0);
  }
  return 3221225494LL;
}
