/*
 * XREFs of PiDqObjectManagerServiceActionQueue @ 0x14048BBB8
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     IoClearActivityIdThread @ 0x140086944 (IoClearActivityIdThread.c)
 *     IoSetActivityIdThread @ 0x140086958 (IoSetActivityIdThread.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     Template_p @ 0x1401CE5F8 (Template_p.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PiDqQueryUnlock @ 0x14048C1B0 (PiDqQueryUnlock.c)
 *     PiDqQueryLock @ 0x14048C208 (PiDqQueryLock.c)
 *     PiDqQueryApplyObjectEvent @ 0x14048C498 (PiDqQueryApplyObjectEvent.c)
 *     PnpIsNullGuid @ 0x14048C8AC (PnpIsNullGuid.c)
 *     PiDqQueryRelease @ 0x14048CAEC (PiDqQueryRelease.c)
 *     PiDqQueryFreeActiveData @ 0x14048D088 (PiDqQueryFreeActiveData.c)
 *     PiDqQueryCompletePendedIrp @ 0x1404D0BAC (PiDqQueryCompletePendedIrp.c)
 *     PiPnpRtlObjectEventRelease @ 0x1404E4DC8 (PiPnpRtlObjectEventRelease.c)
 */

__int64 __fastcall PiDqObjectManagerServiceActionQueue(PERESOURCE Resource)
{
  PERESOURCE v1; // rbx
  PERESOURCE v2; // rsi
  PVOID v3; // r13
  struct _FAST_MUTEX *v4; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v6; // r12
  unsigned int OwnerTable; // r15d
  unsigned int v8; // r8d
  volatile signed __int32 *i; // rcx
  __int64 v10; // rax
  PVOID v11; // r14
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rcx
  bool v16; // bl
  __int64 v17; // rcx
  __int64 *v18; // rbx
  __int64 v19; // rdi
  int OwnerTable_high; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 result; // rax
  PVOID *j; // rbx
  char v26; // [rsp+20h] [rbp-50h]
  char v27; // [rsp+21h] [rbp-4Fh]
  PVOID P[2]; // [rsp+28h] [rbp-48h] BYREF
  int v29; // [rsp+38h] [rbp-38h]
  PVOID v30; // [rsp+40h] [rbp-30h]
  __int64 *PoolWithTag; // [rsp+48h] [rbp-28h]
  PERESOURCE v32; // [rsp+50h] [rbp-20h]
  __int128 v33; // [rsp+58h] [rbp-18h] BYREF

  v32 = Resource;
  v30 = 0LL;
  v1 = Resource + 2;
  v2 = Resource;
  v27 = 1;
  LOBYTE(v3) = 1;
  v4 = (struct _FAST_MUTEX *)&Resource[1];
  do
  {
    CurrentThread = KeGetCurrentThread();
    v6 = 0LL;
    PoolWithTag = 0LL;
    OwnerTable = 0;
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(v2, 1u);
    ExAcquireFastMutex(v4);
    if ( (PERESOURCE)v1->SystemResourcesList.Flink == v1 )
    {
      P[1] = P;
      P[0] = P;
    }
    else
    {
      *(LIST_ENTRY *)P = v1->SystemResourcesList;
      *((_QWORD *)P[0] + 1) = P;
      *(_QWORD *)P[1] = P;
      v1->SystemResourcesList.Blink = &v1->SystemResourcesList;
      v1->SystemResourcesList.Flink = &v1->SystemResourcesList;
    }
    LODWORD(v3) = (unsigned __int8)v3;
    if ( (BYTE4(v2[2].OwnerTable) & 2) != 0 )
      LODWORD(v3) = 0;
    v29 = (int)v3;
    if ( !(_BYTE)v3 )
      goto LABEL_49;
    OwnerTable = (unsigned int)v2[2].OwnerTable;
    if ( OwnerTable )
    {
      PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, 8LL * OwnerTable, 0x58706E50u);
      v6 = PoolWithTag;
      if ( PoolWithTag )
      {
        v8 = 0;
        for ( i = (volatile signed __int32 *)v2[1].Address;
              i != (volatile signed __int32 *)&v2[1].Address;
              i = *(volatile signed __int32 **)i )
        {
          v10 = v8++;
          v6[v10] = (__int64)i;
          _InterlockedIncrement(i + 53);
        }
      }
      else
      {
        LOBYTE(v3) = 0;
        v29 = (int)v3;
      }
    }
    if ( !(_BYTE)v3 )
    {
LABEL_49:
      for ( j = (PVOID *)v2[1].Address; j != &v2[1].Address; j = (PVOID *)*j )
      {
        PiDqQueryLock(j);
        *((_DWORD *)j + 54) |= 1u;
        PiDqQueryFreeActiveData(j);
        PiDqQueryCompletePendedIrp(j);
        PiDqQueryUnlock(j);
      }
      HIDWORD(v2[2].OwnerTable) &= ~2u;
      v4 = (struct _FAST_MUTEX *)&v2[1];
    }
    KeReleaseGuardedMutex(v4);
    while ( 1 )
    {
      v11 = P[0];
      if ( P[0] == P )
        break;
      v12 = *(_QWORD *)P[0];
      if ( *((PVOID **)P[0] + 1) != P || *(PVOID *)(v12 + 8) != P[0] )
        __fastfail(3u);
      P[0] = *(PVOID *)P[0];
      *(_QWORD *)(v12 + 8) = P;
      if ( (_BYTE)v3 && OwnerTable )
      {
        v3 = v30;
        v13 = OwnerTable;
        do
        {
          v14 = *v6;
          if ( *(_QWORD *)(*v6 + 224) <= *((_QWORD *)v11 + 3) )
          {
            v26 = 0;
            if ( !(unsigned __int8)PnpIsNullGuid(*(void **)(v14 + 24)) )
            {
              v33 = *(_OWORD *)*(_QWORD *)(v14 + 24);
              v3 = IoSetActivityIdThread(&v33);
              v26 = 1;
            }
            if ( _bittest(&Microsoft_Windows_Kernel_PnPEnableBits, 0x16u) )
              Template_p(v15, &KMPnPEvt_DevQuery_ProcessingStart, *(const GUID **)(v14 + 24), v14);
            PiDqQueryLock(v14);
            v16 = (*(_BYTE *)(v14 + 216) & 9) == 0;
            PiDqQueryUnlock(v14);
            if ( v16 )
            {
              PiDqQueryApplyObjectEvent(v14, *((_QWORD *)v11 + 2));
              PiDqQueryLock(v14);
              if ( (*(_DWORD *)(v14 + 216) & 1) != 0 || *(_QWORD *)(v14 + 192) != v14 + 192 )
                PiDqQueryCompletePendedIrp(v14);
              PiDqQueryUnlock(v14);
            }
            if ( _bittest(&Microsoft_Windows_Kernel_PnPEnableBits, 0x16u) )
              Template_p(v17, &KMPnPEvt_DevQuery_ProcessingStop, *(const GUID **)(v14 + 24), v14);
            if ( v26 )
              IoClearActivityIdThread(v3);
          }
          ++v6;
          --v13;
        }
        while ( v13 );
        v2 = v32;
        v30 = v3;
        LOBYTE(v3) = v29;
      }
      PiPnpRtlObjectEventRelease(*((PVOID *)v11 + 2));
      ExFreePoolWithTag(v11, 0x58706E50u);
      v6 = PoolWithTag;
    }
    if ( v6 )
    {
      if ( OwnerTable )
      {
        v18 = v6;
        v19 = OwnerTable;
        do
        {
          PiDqQueryRelease(*v18++);
          --v19;
        }
        while ( v19 );
      }
      ExFreePoolWithTag(v6, 0x58706E50u);
    }
    v4 = (struct _FAST_MUTEX *)&v2[1];
    ExAcquireFastMutex((PFAST_MUTEX)&v2[1]);
    v1 = v2 + 2;
    if ( (PERESOURCE)v1->SystemResourcesList.Flink == v1 )
    {
      OwnerTable_high = HIDWORD(v2[2].OwnerTable);
      if ( (OwnerTable_high & 2) == 0 )
      {
        v27 = 0;
        HIDWORD(v2[2].OwnerTable) = OwnerTable_high & 0xFFFFFFFE;
      }
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)&v2[1]);
    ExReleaseResourceLite(v2);
    result = KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v21, v22, v23);
  }
  while ( v27 );
  return result;
}
