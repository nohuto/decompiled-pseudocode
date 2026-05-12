/*
 * XREFs of RaidAdapterQueryDeviceRelationsIrp @ 0x1C00095D4
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1C00092D4 (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0002E70 (RaidCompleteRequestEx.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C00057D8 (RaidAdapterReleaseInterruptLock.c)
 *     RaForwardIrp @ 0x1C00094B4 (RaForwardIrp.c)
 *     RaidpBuildAdapterBusRelations @ 0x1C0009738 (RaidpBuildAdapterBusRelations.c)
 *     RaidAdapterRescanBus @ 0x1C0009A14 (RaidAdapterRescanBus.c)
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012F80 (_guard_dispatch_icall_nop.c)
 *     RaidAdapterAcquireStartIoLock @ 0x1C00210D8 (RaidAdapterAcquireStartIoLock.c)
 *     Template_pq @ 0x1C0024F2C (Template_pq.c)
 *     WPP_SF_qq @ 0x1C0025880 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C00258C8 (WPP_SF_qqD.c)
 *     RaidNtStatusToStorStatus @ 0x1C0030230 (RaidNtStatusToStorStatus.c)
 */

NTSTATUS __fastcall RaidAdapterQueryDeviceRelationsIrp(__int64 a1, IRP *a2)
{
  void (__fastcall *v2)(__int64, __int64, _QWORD, unsigned __int16 *, int); // r15
  unsigned __int16 v4; // r12
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  signed int v7; // esi
  _IO_STACK_LOCATION *v8; // rax
  int v9; // eax
  int v10; // esi
  __int64 v12; // rcx
  unsigned __int16 *v13; // r14
  __int64 v14; // r13
  int v15; // eax
  __int64 v16; // rcx
  _BYTE v17[4]; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v18; // [rsp+34h] [rbp-4Ch] BYREF
  unsigned __int64 v19; // [rsp+38h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-40h] BYREF
  int v21; // [rsp+58h] [rbp-28h] BYREF
  __int64 v22; // [rsp+5Ch] [rbp-24h]
  int v23; // [rsp+64h] [rbp-1Ch]
  int v24; // [rsp+68h] [rbp-18h] BYREF
  __int64 v25; // [rsp+6Ch] [rbp-14h]
  int v26; // [rsp+74h] [rbp-Ch]

  LODWORD(v2) = 0;
  v18 = 0;
  v4 = 0;
  v17[0] = 0;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 14LL, &WPP_a0eb401ed86ffacb5c89201c01d8a335_Traceguids, a1, a2);
  }
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v19 = 0LL;
  if ( CurrentStackLocation->Parameters.Read.Length )
  {
    if ( StorEtwLoggingEnabled )
    {
      v24 = 0;
      v25 = 0LL;
      v26 = 0;
      IoGetActivityIdIrp(a2, &v24);
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x200000) != 0 )
        Template_pq(v12, &EventPnpRequestComplete, &v24, a2, a2->IoStatus.Status);
    }
    return RaForwardIrp(*(struct _DEVICE_OBJECT **)(a1 + 24), a2);
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 104) & 0x40) == 0
      && (__int64)(MEMORY[0xFFFFF78000000014] - *(_QWORD *)(a1 + 4344)) > 300000000 )
    {
      *(_BYTE *)(a1 + 106) = 1;
    }
    v7 = RaidAdapterRescanBus(a1, &v18, v17);
    if ( v7 >= 0 )
    {
      v7 = RaidpBuildAdapterBusRelations(a1, &v19);
      v18 = v7;
    }
    if ( v17[0] )
    {
      v13 = *(unsigned __int16 **)(a1 + 4936);
      *(_BYTE *)(a1 + 104) &= ~0x40u;
      *(_QWORD *)(a1 + 4936) = 0LL;
      if ( v13 )
        v4 = *v13;
      v14 = *(_QWORD *)(a1 + 4952);
      *(_QWORD *)(a1 + 4952) = 0LL;
      v2 = *(void (__fastcall **)(__int64, __int64, _QWORD, unsigned __int16 *, int))(a1 + 4944);
      *(_QWORD *)(a1 + 4944) = 0LL;
      *(_QWORD *)(a1 + 4924) = 0LL;
      _InterlockedExchange((volatile __int32 *)(a1 + 4920), 0);
      if ( v2 )
      {
        RaidAdapterAcquireStartIoLock(a1, &LockHandle);
        v15 = RaidNtStatusToStorStatus(v18);
        v2(*(_QWORD *)(a1 + 536) + 16LL, v14, v4, v13, v15);
        LODWORD(v2) = 0;
        if ( *(_DWORD *)(a1 + 688) )
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        else
          RaidAdapterReleaseInterruptLock(a1, (KIRQL)LockHandle.LockQueue.Next);
      }
    }
    a2->IoStatus.Information = v19;
    a2->IoStatus.Status = v7;
    if ( v7 < 0 )
    {
      v9 = RaidCompleteRequestEx(a2, 0, v7);
    }
    else
    {
      if ( StorEtwLoggingEnabled != (_BYTE)v2 )
      {
        v21 = (int)v2;
        v22 = 0LL;
        v23 = 0;
        IoGetActivityIdIrp(a2, &v21);
        if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x200000) != 0 )
          Template_pq(v16, &EventPnpRequestComplete, &v21, a2, v7);
      }
      v8 = a2->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v8[-1].MajorFunction = *(_OWORD *)&v8->MajorFunction;
      *(_OWORD *)&v8[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&v8->Parameters.QueryFile.FileInformationClass;
      *(_OWORD *)(&v8[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&v8->Parameters.QueryDeviceRelations + 6);
      v8[-1].FileObject = v8->FileObject;
      v8[-1].Control = (unsigned __int8)v2;
      v9 = IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 24), a2);
    }
    v10 = v9;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 15LL, &WPP_a0eb401ed86ffacb5c89201c01d8a335_Traceguids, a1, a2, v9);
    }
    return v10;
  }
}
