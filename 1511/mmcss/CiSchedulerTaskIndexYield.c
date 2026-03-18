/*
 * XREFs of CiSchedulerTaskIndexYield @ 0x1C00013B0
 * Callers:
 *     CiDispatchFastIoDeviceControl @ 0x1C000A3D0 (CiDispatchFastIoDeviceControl.c)
 * Callees:
 *     CiLogSchedulerEvent @ 0x1C00037B0 (CiLogSchedulerEvent.c)
 *     CiLogTaskIndexYield @ 0x1C0003A94 (CiLogTaskIndexYield.c)
 */

void __fastcall CiSchedulerTaskIndexYield(__int64 a1, ULONG a2)
{
  ULONG ActiveThreadCount; // edi
  unsigned __int64 v4; // r8
  _QWORD *v5; // rax
  _QWORD *v6; // rdx
  __int64 *v7; // rdi
  __int64 *i; // r14
  unsigned __int8 v9; // cl
  unsigned int v10; // esi
  struct _DEVICE_OBJECT_POWER_EXTENSION *Dope; // rcx
  __int64 v12; // rdx

  ActiveThreadCount = a2;
  if ( a2 < WPP_MAIN_CB.ActiveThreadCount )
    ActiveThreadCount = WPP_MAIN_CB.ActiveThreadCount;
  if ( byte_1C0007298 )
    CiLogTaskIndexYield(a1, ActiveThreadCount);
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
  if ( *(_QWORD *)(a1 + 80) )
  {
    *(_QWORD *)(a1 + 80) = 0LL;
    RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, a1 + 56);
    if ( CiSchedulerTimerNode == a1 + 56 )
      CiSchedulerTimerNode = 2LL;
  }
  v4 = ActiveThreadCount + MEMORY[0xFFFFF78000000008];
  LOBYTE(v5) = 0;
  *(_QWORD *)(a1 + 80) = v4;
  v6 = *(_QWORD **)&WPP_MAIN_CB.SectorSize;
  if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
  {
    while ( 1 )
    {
      if ( v6[3] <= v4 )
      {
        v5 = (_QWORD *)v6[1];
        if ( !v5 )
        {
          LOBYTE(v5) = 1;
          break;
        }
      }
      else
      {
        v5 = (_QWORD *)*v6;
        if ( !*v6 )
          break;
      }
      v6 = v5;
    }
  }
  RtlRbInsertNodeEx(&WPP_MAIN_CB.SectorSize, v6, (unsigned __int8)v5, a1 + 56);
  v7 = *(__int64 **)(a1 + 32);
  for ( i = (__int64 *)(a1 + 32); v7 != i; v7 = (__int64 *)*v7 )
  {
    if ( (*((_BYTE *)v7 + 68) & 1) == 0 )
    {
      if ( CiThreadsMovedUp )
      {
        if ( *(_QWORD *)(*(v7 - 1) + 80) )
        {
          v9 = *(_BYTE *)(*(v7 - 2) + 40);
          if ( v9 > *((_BYTE *)v7 + 24) )
            v9 = *((_BYTE *)v7 + 24);
        }
        else
        {
          v9 = *((_BYTE *)v7 + 24);
        }
        v10 = v9;
      }
      else
      {
        v10 = *((unsigned __int8 *)v7 + 26);
      }
      if ( *((unsigned __int8 *)v7 + 27) != v10 )
      {
        *((_BYTE *)v7 + 27) = v10;
        if ( byte_1C0007298 )
          CiLogSchedulerEvent(v7 - 10, v10);
        KeSetActualBasePriorityThread(v7[2], v10);
      }
    }
  }
  if ( WPP_MAIN_CB.DeviceObjectExtension )
  {
    if ( WPP_MAIN_CB.DeviceObjectExtension != (struct _DEVOBJ_EXTENSION *)CiSchedulerTimerNode )
    {
      Dope = WPP_MAIN_CB.DeviceObjectExtension->Dope;
      if ( MEMORY[0xFFFFF78000000008] > (unsigned __int64)Dope )
      {
        v12 = 0LL;
      }
      else
      {
        v12 = MEMORY[0xFFFFF78000000008] - (_QWORD)Dope;
        if ( (__int64)(MEMORY[0xFFFFF78000000008] - (_QWORD)Dope) < -2000 )
          v12 += 2000LL;
      }
      CiSchedulerTimerNode = (__int64)WPP_MAIN_CB.DeviceObjectExtension;
      ExSetTimer(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v12, 0LL, &WPP_MAIN_CB.Queue.Wcb.DeviceContext);
    }
  }
  else if ( CiSchedulerTimerNode != 1 )
  {
    CiSchedulerTimerNode = 1LL;
    ExCancelTimer(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, 0LL);
  }
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
}
