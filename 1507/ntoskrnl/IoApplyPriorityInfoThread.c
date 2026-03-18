/*
 * XREFs of IoApplyPriorityInfoThread @ 0x140009AEC
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x140009C20 (KeSetActualBasePriorityThread.c)
 *     KeAbProcessBaseIoPriorityChange @ 0x14000A100 (KeAbProcessBaseIoPriorityChange.c)
 *     EtwTracePriority @ 0x14025D438 (EtwTracePriority.c)
 */

NTSTATUS __stdcall IoApplyPriorityInfoThread(
        PIO_PRIORITY_INFO InputPriorityInfo,
        PIO_PRIORITY_INFO OutputPriorityInfo,
        PETHREAD Thread)
{
  _IO_PRIORITY_HINT IoPriority; // ebp
  signed __int32 v7; // eax
  unsigned __int32 v8; // edi
  unsigned int v9; // edi
  unsigned int PagePriority; // r9d
  signed __int32 v11; // eax
  unsigned __int32 v12; // edi
  int v13; // edi
  struct _IO_PRIORITY_INFO v15; // [rsp+30h] [rbp-18h]

  if ( InputPriorityInfo->ThreadPriority == 0xFFFF )
    return -1073741585;
  IoPriority = InputPriorityInfo->IoPriority;
  v7 = *((_DWORD *)&Thread[1].SwapListEntry + 3);
  do
  {
    v8 = v7;
    v7 = _InterlockedCompareExchange(
           (volatile signed __int32 *)&Thread[1].SwapListEntry + 3,
           (IoPriority << 9) | v7 & 0xFFFFF1FF,
           v7);
  }
  while ( v7 != v8 );
  v9 = (v8 >> 9) & 7;
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority((_DWORD)Thread, 1332, v9, IoPriority, 0LL);
  if ( IoPriority != v9 )
    KeAbProcessBaseIoPriorityChange(Thread, v9, (unsigned int)IoPriority);
  PagePriority = InputPriorityInfo->PagePriority;
  v15.IoPriority = v9;
  if ( PagePriority == -1 )
  {
    v15.PagePriority = -1;
  }
  else
  {
    v11 = *((_DWORD *)&Thread[1].SwapListEntry + 3);
    do
    {
      v12 = v11;
      v11 = _InterlockedCompareExchange(
              (volatile signed __int32 *)&Thread[1].SwapListEntry + 3,
              (PagePriority << 12) | v11 & 0xFFFF8FFF,
              v11);
    }
    while ( v11 != v12 );
    v13 = (v12 >> 12) & 7;
    if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
      EtwTracePriority((_DWORD)Thread, 1331, v13, PagePriority, 0LL);
    v15.PagePriority = v13;
  }
  if ( InputPriorityInfo->ThreadPriority == -1 )
  {
    v15.ThreadPriority = -1;
  }
  else
  {
    v15.ThreadPriority = Thread->BasePriority;
    KeSetActualBasePriorityThread(Thread);
  }
  if ( OutputPriorityInfo )
  {
    v15.Size = 16;
    *OutputPriorityInfo = v15;
  }
  return 0;
}
