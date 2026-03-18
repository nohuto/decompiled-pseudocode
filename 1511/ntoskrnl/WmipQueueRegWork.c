/*
 * XREFs of WmipQueueRegWork @ 0x140507DA4
 * Callers:
 *     WmipUpdateRegistration @ 0x140507BF8 (WmipUpdateRegistration.c)
 *     WmipRegisterDevice @ 0x140507C3C (WmipRegisterDevice.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x140087240 (KeReleaseMutex.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall WmipQueueRegWork(int a1, __int64 a2)
{
  _DWORD *PoolWithTag; // rax
  unsigned int v5; // ebx
  _DWORD *v6; // rdi
  PVOID **v7; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x70696D57u);
  v5 = 0;
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 48));
    PoolWithTag[4] = a1;
    *((_QWORD *)PoolWithTag + 3) = a2;
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    v7 = (PVOID **)off_1402D1960[0];
    *(_QWORD *)v6 = &WmipRegWorkList;
    *((_QWORD *)v6 + 1) = v7;
    if ( *v7 != &WmipRegWorkList )
      __fastfail(3u);
    *v7 = (PVOID *)v6;
    off_1402D1960[0] = (_UNKNOWN **)v6;
    KeReleaseMutex(&WmipSMMutex, 0);
    if ( _InterlockedIncrement(&WmipRegWorkItemCount) == 1 )
      ExQueueWorkItem(&WmipRegWorkQueue, DelayedWorkQueue);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
