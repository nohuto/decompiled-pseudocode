/*
 * XREFs of CiSchedulerTaskIndexYield @ 0x1C00010B0
 * Callers:
 *     CiDispatchFastIoDeviceControl @ 0x1C000A2A0 (CiDispatchFastIoDeviceControl.c)
 * Callees:
 *     CiLogSchedulerEvent @ 0x1C0003B38 (CiLogSchedulerEvent.c)
 *     CiLogTaskIndexYield @ 0x1C0003E88 (CiLogTaskIndexYield.c)
 */

void __fastcall CiSchedulerTaskIndexYield(__int64 a1, ULONG a2, ULONG a3)
{
  ULONG v3; // edi
  ULONG ActiveThreadCount; // esi
  unsigned __int64 v6; // r8
  _QWORD *v7; // rax
  _QWORD *v8; // rdx
  unsigned __int64 v9; // r8
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  __int64 *v12; // rbx
  __int64 *i; // rsi
  __int64 v14; // rax
  unsigned __int8 v15; // al
  unsigned int v16; // ebp
  struct _DEVICE_OBJECT_POWER_EXTENSION *Dope; // rcx
  __int64 v18; // rdx

  v3 = a3;
  ActiveThreadCount = a2;
  if ( a2 < WPP_MAIN_CB.ActiveThreadCount )
    ActiveThreadCount = WPP_MAIN_CB.ActiveThreadCount;
  if ( a3 != -1 )
  {
    if ( a3 < WPP_MAIN_CB.ActiveThreadCount )
      v3 = WPP_MAIN_CB.ActiveThreadCount;
    if ( v3 >= ActiveThreadCount )
      v3 = -1;
  }
  if ( byte_1C0007290 )
    CiLogTaskIndexYield(a1, ActiveThreadCount, v3);
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
  if ( *(_QWORD *)(a1 + 80) )
  {
    *(_QWORD *)(a1 + 80) = 0LL;
    if ( *(_BYTE *)(a1 + 92) )
      *(_BYTE *)(a1 + 92) = 0;
    RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, a1 + 56);
    if ( CiSchedulerTimerNode == a1 + 56 )
      CiSchedulerTimerNode = 2LL;
  }
  v6 = ActiveThreadCount + MEMORY[0xFFFFF78000000008];
  *(_BYTE *)(a1 + 92) = 0;
  *(_QWORD *)(a1 + 80) = v6;
  LOBYTE(v7) = 0;
  v8 = *(_QWORD **)&WPP_MAIN_CB.SectorSize;
  if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
  {
    while ( 1 )
    {
      if ( v8[3] <= v6 )
      {
        v7 = (_QWORD *)v8[1];
        if ( !v7 )
        {
          LOBYTE(v7) = 1;
          break;
        }
      }
      else
      {
        v7 = (_QWORD *)*v8;
        if ( !*v8 )
          break;
      }
      v8 = v7;
    }
  }
  RtlRbInsertNodeEx(&WPP_MAIN_CB.SectorSize, v8, (unsigned __int8)v7, a1 + 56);
  if ( *(_BYTE *)(a1 + 132) && *(_QWORD *)(a1 + 120) )
  {
    *(_QWORD *)(a1 + 120) = 0LL;
    if ( *(_BYTE *)(a1 + 132) )
      *(_BYTE *)(a1 + 132) = 0;
    RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, a1 + 96);
    if ( CiSchedulerTimerNode == a1 + 96 )
      CiSchedulerTimerNode = 2LL;
  }
  if ( v3 == -1 )
  {
    *(_BYTE *)(a1 + 132) = 0;
    goto LABEL_33;
  }
  v9 = v3 + MEMORY[0xFFFFF78000000008];
  *(_BYTE *)(a1 + 132) = 1;
  *(_QWORD *)(a1 + 120) = v9;
  LOBYTE(v10) = 0;
  v11 = *(_QWORD **)&WPP_MAIN_CB.SectorSize;
  if ( !*(_QWORD *)&WPP_MAIN_CB.SectorSize )
    goto LABEL_32;
  while ( v11[3] > v9 )
  {
    v10 = (_QWORD *)*v11;
    if ( !*v11 )
      goto LABEL_32;
LABEL_31:
    v11 = v10;
  }
  v10 = (_QWORD *)v11[1];
  if ( v10 )
    goto LABEL_31;
  LOBYTE(v10) = 1;
LABEL_32:
  RtlRbInsertNodeEx(&WPP_MAIN_CB.SectorSize, v11, (unsigned __int8)v10, a1 + 96);
LABEL_33:
  v12 = *(__int64 **)(a1 + 32);
  for ( i = (__int64 *)(a1 + 32); v12 != i; v12 = (__int64 *)*v12 )
  {
    if ( (*((_BYTE *)v12 + 68) & 1) == 0 )
    {
      if ( CiThreadsMovedUp )
      {
        v14 = *(v12 - 1);
        if ( *(_QWORD *)(v14 + 120) || !*(_BYTE *)(v14 + 132) && *(_QWORD *)(v14 + 80) )
        {
          v15 = *(_BYTE *)(*(v12 - 2) + 40);
          if ( v15 > *((_BYTE *)v12 + 24) )
            v15 = *((_BYTE *)v12 + 24);
        }
        else
        {
          v15 = *((_BYTE *)v12 + 24);
        }
        v16 = v15;
      }
      else
      {
        v16 = *((unsigned __int8 *)v12 + 26);
      }
      if ( *((unsigned __int8 *)v12 + 27) != v16 )
      {
        *((_BYTE *)v12 + 27) = v16;
        if ( byte_1C0007290 )
          CiLogSchedulerEvent(v12 - 10, v16);
        KeSetActualBasePriorityThread(v12[2], v16);
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
        v18 = 0LL;
      }
      else
      {
        v18 = MEMORY[0xFFFFF78000000008] - (_QWORD)Dope;
        if ( (__int64)(MEMORY[0xFFFFF78000000008] - (_QWORD)Dope) < -2000 )
          v18 += 2000LL;
      }
      CiSchedulerTimerNode = (__int64)WPP_MAIN_CB.DeviceObjectExtension;
      ExSetTimer(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v18, 0LL, &WPP_MAIN_CB.Queue.Wcb.DeviceContext);
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
