/*
 * XREFs of CcWaitForUninitializeCacheMap @ 0x14003897C
 * Callers:
 *     MiCreateSection @ 0x1403F80B0 (MiCreateSection.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     CcWriteBehind @ 0x140101160 (CcWriteBehind.c)
 *     KeAcquireQueuedSpinLockAtDpcLevel @ 0x140102D74 (KeAcquireQueuedSpinLockAtDpcLevel.c)
 *     RtlpInterlockedPushEntrySList @ 0x14015B9A0 (RtlpInterlockedPushEntrySList.c)
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
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _GENERAL_LOOKASIDE *P; // r8
  KIRQL v18; // al
  KIRQL v19; // r9
  __int64 v20; // rdx
  unsigned __int64 *v21; // rcx
  unsigned __int64 v22; // rax
  char v23[8]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-40h]
  unsigned __int64 v25; // [rsp+40h] [rbp-38h] BYREF
  __int16 Object; // [rsp+48h] [rbp-30h] BYREF
  char v27; // [rsp+4Ah] [rbp-2Eh]
  int v28; // [rsp+4Ch] [rbp-2Ch]
  _QWORD v29[2]; // [rsp+50h] [rbp-28h] BYREF
  LARGE_INTEGER Timeout; // [rsp+80h] [rbp+8h] BYREF

  v2 = 0;
  v3 = 0;
  v4 = 0LL;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) )
  {
    Object = 0;
    v27 = 6;
    v28 = 0;
    v29[1] = v29;
    v29[0] = v29;
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
          v25 = *(_QWORD *)(v6 + 272);
          *(_QWORD *)(v6 + 272) = (char *)&v25 + 1;
          v8 = *(_DWORD *)(v6 + 152);
          if ( (v8 & 0x20) != 0 )
          {
            if ( *(_QWORD *)(v6 + 496) )
            {
              KeAcquireQueuedSpinLockAtDpcLevel((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 128);
              v13 = *(_QWORD *)(v6 + 496);
              if ( v13 )
              {
                v4 = v13 & 0xFFFFFFFFFFFFFFFEuLL;
                v14 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFEuLL);
                v15 = *(_QWORD **)((v13 & 0xFFFFFFFFFFFFFFFEuLL) + 8);
                if ( *(_QWORD *)(v14 + 8) != v4 || *v15 != v4 )
                  __fastfail(3u);
                *v15 = v14;
                *(_QWORD *)(v14 + 8) = v15;
                *(_QWORD *)(v4 + 8) = 0LL;
                *(_QWORD *)v4 = 0LL;
                *(_QWORD *)(v6 + 496) = 0LL;
                v3 = 1;
              }
              KxReleaseQueuedSpinLock((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 128, v10, v11, v12);
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
      v24 = v4;
      CcWriteBehind(v6, v23);
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
        v18 = KeAcquireQueuedSpinLock(5uLL);
        v19 = v18;
        v20 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
        if ( v20 )
        {
          v21 = (unsigned __int64 *)(v20 + 272);
          if ( *(_QWORD *)(v20 + 272) )
          {
            while ( 1 )
            {
              v22 = *v21;
              if ( (unsigned __int64 *)*v21 == (unsigned __int64 *)((char *)&v25 + 1) )
                break;
              v21 = (unsigned __int64 *)(v22 & 0xFFFFFFFFFFFFFFFEuLL);
              if ( !*(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFEuLL) )
                goto LABEL_31;
            }
            *v21 = v25;
          }
LABEL_31:
          *(_DWORD *)(v20 + 152) &= ~0x10000u;
          KeReleaseQueuedSpinLock(5uLL, v19);
        }
        else
        {
          KeReleaseQueuedSpinLock(5uLL, v18);
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        }
      }
    }
  }
}
