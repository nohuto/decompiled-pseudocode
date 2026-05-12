/*
 * XREFs of RaidUnitAbortSrb @ 0x1C0032448
 * Callers:
 *     StorTickEventQueue @ 0x1C0005A40 (StorTickEventQueue.c)
 * Callees:
 *     RaUnitAcquireRemoveLock @ 0x1C0003998 (RaUnitAcquireRemoveLock.c)
 *     RaidAllocateSrb @ 0x1C0003B2C (RaidAllocateSrb.c)
 *     StorBuildSynchronousScsiRequest @ 0x1C00303A4 (StorBuildSynchronousScsiRequest.c)
 */

__int64 __fastcall RaidUnitAbortSrb(__int64 a1, __int64 a2)
{
  __int64 v5; // r14
  _BYTE *Srb; // rbx
  _QWORD *PoolWithTag; // rax
  __int64 v8; // r8
  void *v9; // rsi
  __int64 v10; // rdx
  char v11; // al
  PIRP v12; // rax
  IRP *v13; // rbp
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STATUS_BLOCK v15; // [rsp+20h] [rbp-18h] BYREF

  if ( !a2 )
    return 3221225485LL;
  v5 = *(_QWORD *)(a1 + 24);
  Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0x10u, *(_BYTE *)(v5 + 402), 0);
  if ( !Srb )
    return 3221225495LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8uLL, 0x72536152u);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_10:
    ExFreePoolWithTag(Srb, 0x72536152u);
    return 3221225495LL;
  }
  *PoolWithTag = a2;
  if ( *(_BYTE *)(v5 + 402) == 1 )
  {
    v10 = *((unsigned int *)Srb + 13);
    *((_DWORD *)Srb + 5) = 16;
    Srb[v10 + 8] = *(_BYTE *)(a1 + 88);
    Srb[v10 + 9] = *(_BYTE *)(a1 + 89);
    Srb[v10 + 10] = *(_BYTE *)(a1 + 90);
    *((_DWORD *)Srb + 8) = -1;
    *((_QWORD *)Srb + 10) = 0LL;
    *((_WORD *)Srb + 19) = 33;
    *((_DWORD *)Srb + 6) = 524562;
    *((_QWORD *)Srb + 8) = PoolWithTag;
    *((_DWORD *)Srb + 15) = 8;
    *((_DWORD *)Srb + 10) = 10;
  }
  else
  {
    Srb[2] = 16;
    *(_WORD *)Srb = 88;
    Srb[5] = *(_BYTE *)(a1 + 88);
    Srb[6] = *(_BYTE *)(a1 + 89);
    v11 = *(_BYTE *)(a1 + 90);
    *((_QWORD *)Srb + 6) = 0LL;
    Srb[7] = v11;
    *((_DWORD *)Srb + 3) = 524562;
    *((_WORD *)Srb + 4) = 8703;
    *((_QWORD *)Srb + 3) = v9;
    *((_DWORD *)Srb + 4) = 8;
    *((_DWORD *)Srb + 5) = 10;
  }
  v12 = StorBuildSynchronousScsiRequest(*(_QWORD *)(a1 + 8), (unsigned __int64)Srb, v8, &v15);
  v13 = v12;
  if ( !v12 )
  {
    ExFreePoolWithTag(v9, 0x72536152u);
    goto LABEL_10;
  }
  CurrentStackLocation = v12->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))&RaidUnitAbortSrbCompletion;
  CurrentStackLocation[-1].Context = Srb;
  CurrentStackLocation[-1].Control = -32;
  RaUnitAcquireRemoveLock(a1);
  v13->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 8), v13);
  return 259LL;
}
