/*
 * XREFs of WmipQueueRegWork @ 0x14057E640
 * Callers:
 *     WmipUpdateRegistration @ 0x14057E494 (WmipUpdateRegistration.c)
 *     WmipRegisterDevice @ 0x14057E4D8 (WmipRegisterDevice.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
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
    v7 = (PVOID **)off_140320B00[0];
    *(_QWORD *)v6 = &WmipRegWorkList;
    *((_QWORD *)v6 + 1) = v7;
    if ( *v7 != &WmipRegWorkList )
      __fastfail(3u);
    *v7 = (PVOID *)v6;
    off_140320B00[0] = (_UNKNOWN **)v6;
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
