/*
 * XREFs of IoApplyPriorityInfoThread @ 0x1400FB734
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14007D1E0 (KeSetActualBasePriorityThread.c)
 *     PsSetPagePriorityThread @ 0x1400FB7D0 (PsSetPagePriorityThread.c)
 *     PsSetIoPriorityThread @ 0x1400FB824 (PsSetIoPriorityThread.c)
 */

NTSTATUS __stdcall IoApplyPriorityInfoThread(
        PIO_PRIORITY_INFO InputPriorityInfo,
        PIO_PRIORITY_INFO OutputPriorityInfo,
        PETHREAD Thread)
{
  __int64 v6; // r8
  __int64 ThreadPriority; // rdx
  struct _IO_PRIORITY_INFO v9; // [rsp+20h] [rbp-18h]

  if ( InputPriorityInfo->ThreadPriority == 0xFFFF )
    return -1073741585;
  v9.IoPriority = PsSetIoPriorityThread(Thread, (unsigned int)InputPriorityInfo->IoPriority);
  if ( InputPriorityInfo->PagePriority == -1 )
    v9.PagePriority = -1;
  else
    v9.PagePriority = PsSetPagePriorityThread(Thread);
  ThreadPriority = InputPriorityInfo->ThreadPriority;
  if ( (_DWORD)ThreadPriority == -1 )
  {
    v9.ThreadPriority = -1;
  }
  else
  {
    v9.ThreadPriority = Thread->BasePriority;
    KeSetActualBasePriorityThread((__int64)Thread, ThreadPriority, v6);
  }
  if ( OutputPriorityInfo )
  {
    v9.Size = 16;
    *OutputPriorityInfo = v9;
  }
  return 0;
}
