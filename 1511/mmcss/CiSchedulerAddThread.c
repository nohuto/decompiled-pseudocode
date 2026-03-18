/*
 * XREFs of CiSchedulerAddThread @ 0x1C0001870
 * Callers:
 *     CiThreadCreate @ 0x1C000A830 (CiThreadCreate.c)
 * Callees:
 *     CiSystemAcquireSpinLock @ 0x1C0001250 (CiSystemAcquireSpinLock.c)
 *     CiSchedulerSetPriority @ 0x1C0001930 (CiSchedulerSetPriority.c)
 *     CiSystemUpdateThreadTag @ 0x1C0001CD0 (CiSystemUpdateThreadTag.c)
 */

void __fastcall CiSchedulerAddThread(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  struct _DEVICE_OBJECT **SystemArgument2; // rdx
  __int64 v6; // rcx
  _QWORD *v7; // rdx

  CiSystemAcquireSpinLock((KSPIN_LOCK *)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  v4 = (_QWORD *)(a1 + 32);
  if ( (_QWORD *)*v4 == v4 )
  {
    SystemArgument2 = (struct _DEVICE_OBJECT **)WPP_MAIN_CB.Dpc.SystemArgument2;
    *(_QWORD *)(a1 + 24) = WPP_MAIN_CB.Dpc.SystemArgument2;
    *(_QWORD *)(a1 + 16) = &WPP_MAIN_CB.Dpc.SystemArgument1;
    if ( *SystemArgument2 != (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Dpc.SystemArgument1 )
      __fastfail(3u);
    *SystemArgument2 = (struct _DEVICE_OBJECT *)(a1 + 16);
    WPP_MAIN_CB.Dpc.SystemArgument2 = (PVOID)(a1 + 16);
  }
  *(_BYTE *)(a2 + 107) = -1;
  v6 = a2 + 80;
  v7 = *(_QWORD **)(a1 + 40);
  *(_QWORD *)(a2 + 80) = v4;
  *(_QWORD *)(a2 + 88) = v7;
  if ( (_QWORD *)*v7 != v4 )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(a1 + 40) = v6;
  CiSchedulerSetPriority(a2);
  if ( (*(_DWORD *)(a1 + 144) & 2) != 0 )
    CiSystemUpdateThreadTag(a2, 1LL);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
}
