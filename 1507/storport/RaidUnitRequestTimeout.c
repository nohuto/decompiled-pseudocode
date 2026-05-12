/*
 * XREFs of RaidUnitRequestTimeout @ 0x1C0033284
 * Callers:
 *     RaidUnitPendingDpcRoutine @ 0x1C00059D0 (RaidUnitPendingDpcRoutine.c)
 *     RaidUnitAbortSrbCompletion @ 0x1C0032600 (RaidUnitAbortSrbCompletion.c)
 * Callees:
 *     RaidAdapterResetBus @ 0x1C00223E8 (RaidAdapterResetBus.c)
 *     WPP_SF_ @ 0x1C00256C8 (WPP_SF_.c)
 *     WPP_SF_ddd @ 0x1C002572C (WPP_SF_ddd.c)
 */

__int64 __fastcall RaidUnitRequestTimeout(__int64 a1)
{
  int v1; // ebx
  PDEVICE_OBJECT v3; // r10
  __int64 v4; // rax
  __int64 result; // rax
  struct _IO_WORKITEM *WorkItem; // rbx
  unsigned int v7; // eax
  __int64 v8; // [rsp+20h] [rbp-38h]
  __int64 v9; // [rsp+28h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v1 = *(_DWORD *)(a1 + 88);
  v3 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x31u,
        (__int64)&WPP_0a9d81cc67956adf3a94d0464afc2bb3_Traceguids);
      v3 = WPP_GLOBAL_Control;
    }
    if ( v3 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v3->Timer) & 8) != 0 && BYTE1(v3->Timer) >= 3u )
    {
      WPP_SF_ddd(
        (__int64)v3->AttachedDevice,
        0x32u,
        (__int64)&WPP_0a9d81cc67956adf3a94d0464afc2bb3_Traceguids,
        (unsigned __int8)v1,
        BYTE1(v1),
        BYTE2(v1));
      v3 = WPP_GLOBAL_Control;
    }
  }
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 && *(char *)(v4 + 108) < 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 1744));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 24) + 5392LL));
    v3 = WPP_GLOBAL_Control;
  }
  if ( *(_DWORD *)(a1 + 980) )
  {
    if ( v3 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      if ( (HIDWORD(v3->Timer) & 8) != 0 && BYTE1(v3->Timer) >= 2u )
      {
        LODWORD(v9) = BYTE2(v1);
        LODWORD(v8) = BYTE1(v1);
        WPP_SF_ddd(
          (__int64)v3->AttachedDevice,
          0x33u,
          (__int64)&WPP_0a9d81cc67956adf3a94d0464afc2bb3_Traceguids,
          (unsigned __int8)v1,
          v8,
          v9);
        v3 = WPP_GLOBAL_Control;
      }
      if ( v3 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v3->Timer) & 8) != 0 && BYTE1(v3->Timer) >= 2u )
        WPP_SF_((__int64)v3->AttachedDevice, 0x34u, (__int64)&WPP_0a9d81cc67956adf3a94d0464afc2bb3_Traceguids);
    }
    return RaidAdapterResetBus(*(_QWORD *)(a1 + 24), *(_BYTE *)(a1 + 88));
  }
  WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
  if ( !WorkItem )
    return RaidAdapterResetBus(*(_QWORD *)(a1 + 24), *(_BYTE *)(a1 + 88));
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 624));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1488), &LockHandle);
  v7 = *(_DWORD *)(a1 + 976);
  *(_QWORD *)(a1 + 1464) = WorkItem;
  if ( v7 < 0x1E )
    v7 = 30;
  *(_DWORD *)(a1 + 1476) = 0;
  *(_DWORD *)(a1 + 1472) = (2 * v7 + 21) >> 1;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  IoQueueWorkItem(WorkItem, (PIO_WORKITEM_ROUTINE)RaidHierarchicalResetWorkRoutine, CriticalWorkQueue, WorkItem);
  result = *(_QWORD *)(a1 + 24);
  ++*(_DWORD *)(result + 4780);
  return result;
}
