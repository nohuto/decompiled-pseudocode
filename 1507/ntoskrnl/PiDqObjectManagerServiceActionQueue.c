/*
 * XREFs of PiDqObjectManagerServiceActionQueue @ 0x140441C48
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     IoSetActivityIdThread @ 0x14011A840 (IoSetActivityIdThread.c)
 *     IoClearActivityIdThread @ 0x14011B3B0 (IoClearActivityIdThread.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     Template_p @ 0x1401FBC84 (Template_p.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PiPnpRtlObjectEventRelease @ 0x14043C01C (PiPnpRtlObjectEventRelease.c)
 *     PiDqQueryUnlock @ 0x14044239C (PiDqQueryUnlock.c)
 *     PiDqQueryLock @ 0x140442428 (PiDqQueryLock.c)
 *     PiDqQueryApplyObjectEvent @ 0x14053CF2C (PiDqQueryApplyObjectEvent.c)
 *     PiDqQueryRelease @ 0x14053D4E0 (PiDqQueryRelease.c)
 *     PiDqQueryFreeActiveData @ 0x14053D550 (PiDqQueryFreeActiveData.c)
 *     PiDqQueryCompletePendedIrp @ 0x140546804 (PiDqQueryCompletePendedIrp.c)
 *     PnpIsNullGuid @ 0x14054E1B4 (PnpIsNullGuid.c)
 */

void __fastcall PiDqObjectManagerServiceActionQueue(PERESOURCE Resource)
{
  PERESOURCE v1; // r15
  unsigned int OwnerTable; // r13d
  char v3; // r14
  PERESOURCE v4; // rdi
  struct _KTHREAD *CurrentThread; // rax
  PVOID *v6; // r12
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned __int8 CurrentIrql; // si
  struct _ERESOURCE *v11; // rcx
  unsigned int v12; // r8d
  volatile signed __int32 *i; // rcx
  __int64 v14; // rax
  unsigned __int8 OwnerThread; // bl
  signed __int32 v16; // eax
  __int64 v17; // r9
  PVOID v18; // r14
  __int64 v19; // rax
  PVOID v20; // r15
  __int64 v21; // rdi
  char *v22; // rsi
  __int64 v23; // rcx
  bool v24; // bl
  __int64 v25; // rcx
  PVOID *v26; // rbx
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rbx
  unsigned __int8 v30; // si
  int OwnerTable_high; // eax
  char v32; // si
  unsigned __int8 v33; // bl
  signed __int32 v34; // eax
  struct _KTHREAD *v35; // rcx
  __int16 v36; // ax
  PVOID *Address; // rbx
  char v38; // [rsp+20h] [rbp-50h]
  char v39; // [rsp+21h] [rbp-4Fh]
  unsigned int v40; // [rsp+24h] [rbp-4Ch]
  char v41; // [rsp+28h] [rbp-48h]
  PVOID P[2]; // [rsp+30h] [rbp-40h] BYREF
  PVOID v43; // [rsp+40h] [rbp-30h]
  PVOID *PoolWithTag; // [rsp+48h] [rbp-28h]
  PERESOURCE v45; // [rsp+50h] [rbp-20h]
  __int128 v46; // [rsp+58h] [rbp-18h] BYREF

  v1 = Resource;
  v45 = Resource;
  OwnerTable = 0;
  v38 = 1;
  v3 = 1;
  v43 = 0LL;
  v4 = Resource + 1;
  while ( 1 )
  {
    CurrentThread = KeGetCurrentThread();
    v6 = 0LL;
    PoolWithTag = 0LL;
    v40 = 0;
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(v1, 1u);
    v8 = KeAbPreAcquire((ULONG_PTR)v4, 0LL, 0LL, v7);
    v9 = v8;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)v4, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)v4, v8);
    if ( v9 )
      *(_BYTE *)(v9 + 26) |= 1u;
    v11 = v1 + 2;
    v4->SystemResourcesList.Blink = (struct _LIST_ENTRY *)KeGetCurrentThread();
    LODWORD(v4->OwnerEntry.OwnerThread) = CurrentIrql;
    if ( (struct _ERESOURCE *)v11->SystemResourcesList.Flink == v11 )
    {
      P[1] = P;
      P[0] = P;
    }
    else
    {
      *(LIST_ENTRY *)P = v11->SystemResourcesList;
      *((_QWORD *)P[0] + 1) = P;
      *(_QWORD *)P[1] = P;
      v1[2].SystemResourcesList.Blink = &v1[2].SystemResourcesList;
      v11->SystemResourcesList.Flink = &v11->SystemResourcesList;
    }
    if ( (BYTE4(v1[2].OwnerTable) & 2) != 0 )
      v3 = 0;
    v41 = v3;
    if ( !v3 )
      goto LABEL_65;
    OwnerTable = (unsigned int)v1[2].OwnerTable;
    v40 = OwnerTable;
    if ( OwnerTable )
    {
      PoolWithTag = (PVOID *)ExAllocatePoolWithTag(PagedPool, 8LL * OwnerTable, 0x58706E50u);
      v6 = PoolWithTag;
      if ( PoolWithTag )
      {
        v12 = 0;
        for ( i = (volatile signed __int32 *)v1[1].Address;
              i != (volatile signed __int32 *)&v1[1].Address;
              i = *(volatile signed __int32 **)i )
        {
          v14 = v12++;
          v6[v14] = (PVOID)i;
          _InterlockedAdd(i + 53, 1u);
        }
      }
      else
      {
        v3 = 0;
        v41 = 0;
      }
    }
    if ( !v3 )
    {
LABEL_65:
      Address = (PVOID *)v1[1].Address;
      if ( Address != &v1[1].Address )
      {
        do
        {
          PiDqQueryLock(Address);
          *((_DWORD *)Address + 54) |= 1u;
          PiDqQueryFreeActiveData(Address);
          PiDqQueryCompletePendedIrp(Address);
          PiDqQueryUnlock(Address);
          Address = (PVOID *)*Address;
        }
        while ( Address != &v1[1].Address );
        v4 = v1 + 1;
      }
      HIDWORD(v1[2].OwnerTable) &= ~2u;
    }
    OwnerThread = v4->OwnerEntry.OwnerThread;
    v4->SystemResourcesList.Blink = 0LL;
    v16 = _InterlockedCompareExchange((volatile signed __int32 *)v4, 1, 0);
    if ( v16 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)v4, v16);
    __writecr8(OwnerThread);
    KeAbPostRelease((ULONG_PTR)v4);
    while ( 1 )
    {
      v18 = P[0];
      if ( P[0] == P )
        break;
      v19 = *(_QWORD *)P[0];
      if ( *((PVOID **)P[0] + 1) != P || *(PVOID *)(v19 + 8) != P[0] )
        __fastfail(3u);
      P[0] = *(PVOID *)P[0];
      *(_QWORD *)(v19 + 8) = P;
      if ( v41 && OwnerTable )
      {
        v20 = v43;
        v21 = OwnerTable;
        do
        {
          v22 = (char *)*v6;
          if ( *((_QWORD *)*v6 + 28) <= *((_QWORD *)v18 + 3) )
          {
            v39 = 0;
            if ( !(unsigned __int8)PnpIsNullGuid(*((void **)v22 + 3)) )
            {
              v46 = *(_OWORD *)*((_QWORD *)v22 + 3);
              v20 = IoSetActivityIdThread(&v46);
              v39 = 1;
            }
            if ( _bittest(&Microsoft_Windows_Kernel_PnPEnableBits, 0x16u) )
              Template_p(v23, &KMPnPEvt_DevQuery_ProcessingStart, *((const GUID **)v22 + 3), v22);
            PiDqQueryLock(v22);
            v24 = (v22[216] & 9) == 0;
            PiDqQueryUnlock(v22);
            if ( v24 )
            {
              PiDqQueryApplyObjectEvent(v22, *((_QWORD *)v18 + 2));
              PiDqQueryLock(v22);
              if ( (*((_DWORD *)v22 + 54) & 1) != 0 || *((char **)v22 + 24) != v22 + 192 )
                PiDqQueryCompletePendedIrp(v22);
              PiDqQueryUnlock(v22);
            }
            if ( _bittest(&Microsoft_Windows_Kernel_PnPEnableBits, 0x16u) )
              Template_p(v25, &KMPnPEvt_DevQuery_ProcessingStop, *((const GUID **)v22 + 3), v22);
            if ( v39 )
              IoClearActivityIdThread(v20);
          }
          ++v6;
          --v21;
        }
        while ( v21 );
        OwnerTable = v40;
        v43 = v20;
        v1 = v45;
        v4 = v45 + 1;
      }
      PiPnpRtlObjectEventRelease(*((char **)v18 + 2));
      ExFreePoolWithTag(v18, 0x58706E50u);
      v6 = PoolWithTag;
    }
    if ( v6 )
    {
      if ( OwnerTable )
      {
        v26 = v6;
        v27 = OwnerTable;
        do
        {
          PiDqQueryRelease(*v26++);
          --v27;
        }
        while ( v27 );
        v1 = v45;
      }
      ExFreePoolWithTag(v6, 0x58706E50u);
    }
    v28 = KeAbPreAcquire((ULONG_PTR)v4, 0LL, 0LL, v17);
    v29 = v28;
    v30 = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)v4, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)v4, v28);
    OwnerTable = 0;
    if ( v29 )
      *(_BYTE *)(v29 + 26) |= 1u;
    v4->SystemResourcesList.Blink = (struct _LIST_ENTRY *)KeGetCurrentThread();
    LODWORD(v4->OwnerEntry.OwnerThread) = v30;
    if ( (PERESOURCE)v1[2].SystemResourcesList.Flink != &v1[2]
      || (OwnerTable_high = HIDWORD(v1[2].OwnerTable), (OwnerTable_high & 2) != 0) )
    {
      v32 = v38;
    }
    else
    {
      v38 = 0;
      HIDWORD(v1[2].OwnerTable) = OwnerTable_high & 0xFFFFFFFE;
      v32 = 0;
    }
    v33 = v4->OwnerEntry.OwnerThread;
    v4->SystemResourcesList.Blink = 0LL;
    v34 = _InterlockedCompareExchange((volatile signed __int32 *)v4, 1, 0);
    if ( v34 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)v4, v34);
    __writecr8(v33);
    KeAbPostRelease((ULONG_PTR)v4);
    ExReleaseResourceLite(v1);
    v35 = KeGetCurrentThread();
    v36 = v35->KernelApcDisable + 1;
    v35->KernelApcDisable = v36;
    if ( !v36
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v35->ApcState.ApcListHead[0].Flink != &v35->152
      && !v35->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( !v32 )
      break;
    v3 = v41;
  }
}
