/*
 * XREFs of CcWaitForUninitializeCacheMap @ 0x140021E00
 * Callers:
 *     MiCreateSection @ 0x14042BC10 (MiCreateSection.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLockAtDpcLevel @ 0x14006E240 (KeAcquireQueuedSpinLockAtDpcLevel.c)
 *     CcWriteBehind @ 0x14007119C (CcWriteBehind.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall CcWaitForUninitializeCacheMap(__int64 a1)
{
  char v2; // r15
  char v3; // si
  unsigned __int64 v4; // rdi
  KIRQL v5; // r12
  __int64 v6; // rbx
  int v7; // ecx
  int v8; // eax
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _GENERAL_LOOKASIDE *P; // r8
  KIRQL v15; // al
  KIRQL v16; // r9
  __int64 v17; // rdx
  unsigned __int64 *v18; // rcx
  unsigned __int64 v19; // rax
  char v20[8]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v21; // [rsp+38h] [rbp-40h]
  unsigned __int64 v22; // [rsp+40h] [rbp-38h] BYREF
  __int16 Object; // [rsp+48h] [rbp-30h] BYREF
  char v24; // [rsp+4Ah] [rbp-2Eh]
  int v25; // [rsp+4Ch] [rbp-2Ch]
  _QWORD v26[2]; // [rsp+50h] [rbp-28h] BYREF
  LARGE_INTEGER Timeout; // [rsp+80h] [rbp+8h] BYREF

  v2 = 0;
  v3 = 0;
  v4 = 0LL;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) )
  {
    Object = 0;
    v24 = 6;
    v25 = 0;
    v26[1] = v26;
    v26[0] = v26;
    v5 = KeAcquireQueuedSpinLock(5uLL);
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
    if ( v6 )
    {
      if ( *(_QWORD *)(v6 + 224) == v6 + 224 )
      {
        v7 = *(_DWORD *)(v6 + 152);
        if ( (v7 & 0x100) == 0 )
        {
          v2 = 1;
          *(_DWORD *)(v6 + 152) = v7 | 0x10000;
          v22 = *(_QWORD *)(v6 + 272);
          *(_QWORD *)(v6 + 272) = (char *)&v22 + 1;
          v8 = *(_DWORD *)(v6 + 152);
          if ( (v8 & 0x20) != 0 )
          {
            if ( *(_QWORD *)(v6 + 496) )
            {
              KeAcquireQueuedSpinLockAtDpcLevel((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 128);
              v10 = *(_QWORD *)(v6 + 496);
              if ( v10 )
              {
                v4 = v10 & 0xFFFFFFFFFFFFFFFEuLL;
                v11 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFEuLL);
                v12 = *(_QWORD **)((v10 & 0xFFFFFFFFFFFFFFFEuLL) + 8);
                if ( *(_QWORD *)(v11 + 8) != v4 || *v12 != v4 )
                  __fastfail(3u);
                *v12 = v11;
                *(_QWORD *)(v11 + 8) = v12;
                *(_QWORD *)(v4 + 8) = 0LL;
                *(_QWORD *)v4 = 0LL;
                *(_QWORD *)(v6 + 496) = 0LL;
                v3 = 1;
              }
              KxReleaseQueuedSpinLock((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 128);
            }
          }
          else
          {
            *(_DWORD *)(v6 + 152) = v8 | 0x20;
            v3 = 1;
          }
        }
      }
    }
    KeReleaseQueuedSpinLock(5uLL, v5);
    if ( v3 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v21 = v4;
      CcWriteBehind(v6, v20);
      KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
    }
    if ( v4 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      P = CurrentPrcb->PPLookasideList[6].P;
      ++P->TotalFrees;
      if ( LOWORD(P->ListHead.Alignment) < P->Depth
        || (++P->FreeMisses,
            P = CurrentPrcb->PPLookasideList[6].L,
            ++P->TotalFrees,
            LOWORD(P->ListHead.Alignment) < P->Depth) )
      {
        RtlpInterlockedPushEntrySList(&P->ListHead, (PSLIST_ENTRY)v4);
      }
      else
      {
        ++P->FreeMisses;
        ((void (__fastcall *)(unsigned __int64))P->FreeEx)(v4);
      }
    }
    if ( v2 )
    {
      Timeout.QuadPart = -6000000000LL;
      if ( KeWaitForSingleObject(&Object, Executive, 0, 0, &Timeout) == 258 )
      {
        v15 = KeAcquireQueuedSpinLock(5uLL);
        v16 = v15;
        v17 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
        if ( v17 )
        {
          v18 = (unsigned __int64 *)(v17 + 272);
          if ( *(_QWORD *)(v17 + 272) )
          {
            while ( 1 )
            {
              v19 = *v18;
              if ( (unsigned __int64 *)*v18 == (unsigned __int64 *)((char *)&v22 + 1) )
                break;
              v18 = (unsigned __int64 *)(v19 & 0xFFFFFFFFFFFFFFFEuLL);
              if ( !*(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFEuLL) )
                goto LABEL_31;
            }
            *v18 = v22;
          }
LABEL_31:
          *(_DWORD *)(v17 + 152) &= ~0x10000u;
          KeReleaseQueuedSpinLock(5uLL, v16);
        }
        else
        {
          KeReleaseQueuedSpinLock(5uLL, v15);
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        }
      }
    }
  }
}
