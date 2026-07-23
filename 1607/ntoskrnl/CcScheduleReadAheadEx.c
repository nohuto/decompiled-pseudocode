/*
 * XREFs of CcScheduleReadAheadEx @ 0x14006E990
 * Callers:
 *     CcCopyReadEx @ 0x1400327F0 (CcCopyReadEx.c)
 *     CcAsyncCopyRead @ 0x14006D6EC (CcAsyncCopyRead.c)
 *     CcAsyncReadPrefetch @ 0x14006DBE0 (CcAsyncReadPrefetch.c)
 *     CcScheduleReadAhead @ 0x1401B1BE0 (CcScheduleReadAhead.c)
 *     CcMdlRead @ 0x14045758C (CcMdlRead.c)
 * Callees:
 *     CcCanIWriteStream @ 0x140020620 (CcCanIWriteStream.c)
 *     CcPerfLogScheduleReadAhead @ 0x14006D574 (CcPerfLogScheduleReadAhead.c)
 *     CcChargeThreadForReadAhead @ 0x14006E4EC (CcChargeThreadForReadAhead.c)
 *     IoReferenceIoAttributionFromThread @ 0x14006E890 (IoReferenceIoAttributionFromThread.c)
 *     CcDetermineReadPattern @ 0x14006ED48 (CcDetermineReadPattern.c)
 *     CcPostWorkQueue @ 0x140071028 (CcPostWorkQueue.c)
 *     CcAllocateWorkQueueEntry @ 0x140071C00 (CcAllocateWorkQueueEntry.c)
 *     PsGetPagePriorityThread @ 0x1400E5CA0 (PsGetPagePriorityThread.c)
 *     PsGetIoPriorityThread @ 0x1400E5CD0 (PsGetIoPriorityThread.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall CcScheduleReadAheadEx(_QWORD *Object, _QWORD *a2, __int64 a3, struct _KTHREAD *a4)
{
  struct _KTHREAD *CurrentThread; // r12
  int *v6; // rdi
  __int64 v8; // r13
  __int64 v9; // r14
  int v10; // eax
  __int64 v11; // rbx
  unsigned int v12; // r15d
  int Pattern; // eax
  __int64 v14; // r8
  int v15; // ebp
  signed __int64 v16; // rdx
  int v17; // r8d
  unsigned int v18; // ecx
  __int64 v19; // rdx
  int PagePriorityThread; // eax
  int v21; // edx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rbx
  KIRQL v25; // al
  _QWORD *v26; // rdx
  KIRQL v27; // dl
  KSPIN_LOCK *v28; // rcx
  __int64 v29; // rax
  int v30; // eax
  unsigned __int64 v31; // rcx
  KIRQL v32; // al
  __int64 v33; // [rsp+40h] [rbp-58h]
  __int64 v34; // [rsp+40h] [rbp-58h]
  __int64 v35; // [rsp+48h] [rbp-50h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+50h] [rbp-48h]
  KIRQL NewIrql; // [rsp+A0h] [rbp+8h]
  int v39; // [rsp+B8h] [rbp+20h]

  CurrentThread = a4;
  v39 = 0;
  v6 = (int *)Object[6];
  v8 = (unsigned int)a3;
  v9 = *(_QWORD *)(Object[5] + 8LL);
  if ( !a4 )
    CurrentThread = KeGetCurrentThread();
  if ( v6 )
  {
    if ( v9 )
    {
      v10 = *(_DWORD *)(v9 + 152);
      if ( (v10 & 1) == 0
        && (v10 & 0x2000) == 0
        && (Object[10] & 0x100000) == 0
        && (int)PsGetIoPriorityThread(CurrentThread, a2, a3) >= 2
        && CcCanIWriteStream((__int64)Object, 0x1000000u, 0, 4)
        && !CcQueueThrottle )
      {
        v11 = *a2 + v8;
        v12 = ~v6[1] & (v6[1] + v8);
        SpinLock = (PKSPIN_LOCK)(v6 + 20);
        NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6 + 10);
        if ( (*v6 & 0x20000) == 0 )
          *v6 |= 0x20000u;
        Pattern = CcDetermineReadPattern(v6, a2);
        v15 = Pattern;
        if ( Pattern )
        {
          if ( Pattern > 0 )
          {
            if ( Pattern > 2 )
            {
              v26 = a2;
              if ( Pattern != 3 )
                goto LABEL_33;
              v34 = 2LL * *a2 - *((_QWORD *)v6 + 4);
              if ( v34 < 0 )
                goto LABEL_33;
              v30 = v34 & 0xFFF;
              LODWORD(v34) = v34 & 0xFFFFF000;
              LODWORD(v8) = v30 + v8;
              *((_QWORD *)v6 + 7) = v34;
              v6[13] = (v8 + 4095) & 0xFFFFF000;
              goto LABEL_24;
            }
            v16 = *((_QWORD *)v6 + 8);
            if ( v11 + v8 + 2 * v12 >= v16 )
            {
              v33 = *((_QWORD *)v6 + 8);
              *((_QWORD *)v6 + 7) = v11 & 0xFFFFFFFFFFFFF000uLL;
              if ( (__int64)(v11 & 0xFFFFFFFFFFFFF000uLL) >= v16 )
                LODWORD(v33) = ~(v12 - 1) & (v12 + v11 - 1);
              ++v6[12];
              v17 = v12;
              v18 = v6[12];
              if ( Pattern == 1 || v18 >= 3 )
                v17 = 2 * v12;
              v14 = (unsigned int)(v33 - v6[14] + v17);
              if ( v18 >= 3 )
              {
                v29 = (unsigned int)v6[23];
                if ( (_DWORD)v29 )
                {
                  v31 = v29 * (unsigned __int64)((unsigned int)v8 * v18) / 0x64;
                  if ( v31 > 0xFFFFFFFF )
                    v31 = 0xFFFFFFFFLL;
                  if ( v31 > (unsigned int)v14 )
                    v14 = (unsigned int)v31;
                }
              }
              v6[13] = v14;
LABEL_24:
              v19 = (unsigned int)*v6;
              v39 = 1;
              if ( (v19 & 0x10000) == 0 )
              {
                *v6 = v19 | 0x10000;
                PagePriorityThread = PsGetPagePriorityThread(KeGetCurrentThread());
                *v6 = v21 ^ (v21 ^ (PagePriorityThread << 18)) & 0x1C0000;
                KeReleaseSpinLock((PKSPIN_LOCK)v6 + 10, NewIrql);
                if ( (int)CcAllocateWorkQueueEntry(&v35) >= 0 )
                {
                  v24 = v35;
                  if ( (xmmword_1403AA2D0 & 0x20000) != 0 )
                    CcPerfLogScheduleReadAhead(v35, Object, a2, v8, v12, v15, 1);
                  if ( (*(_DWORD *)(v9 + 152) & 0x10000000) != 0 )
                    CcChargeThreadForReadAhead((__int64)Object, v22, v23, v15, CurrentThread);
                  ObfReferenceObjectWithTag(Object, 0x746C6644u);
                  v25 = KeAcquireQueuedSpinLock(5uLL);
                  ++*(_DWORD *)(v9 + 4);
                  *(_DWORD *)(v9 + 152) |= 0x4000u;
                  KeReleaseQueuedSpinLock(5uLL, v25);
                  *((_QWORD *)v6 + 14) = v24;
                  *(_BYTE *)(v24 + 120) = 1;
                  *(_QWORD *)(v24 + 16) = Object;
                  *(_QWORD *)(v24 + 24) = 0LL;
                  IoReferenceIoAttributionFromThread(CurrentThread, v24 + 24);
                  CcPostWorkQueue(v24, &CcExpressWorkQueue);
                  return;
                }
                v32 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6 + 10);
                *v6 &= ~0x10000u;
                v27 = v32;
                v28 = (KSPIN_LOCK *)(v6 + 20);
LABEL_36:
                KeReleaseSpinLock(v28, v27);
                return;
              }
              if ( (*(_DWORD *)(v9 + 152) & 0x10000000) != 0 )
                CcChargeThreadForReadAhead((__int64)Object, v19, v14, v15, CurrentThread);
            }
          }
        }
        else
        {
          v6[12] = 0;
          *((_QWORD *)v6 + 8) = 0LL;
          *((_QWORD *)v6 + 9) = 0LL;
        }
        v26 = a2;
LABEL_33:
        if ( (xmmword_1403AA2D0 & 0x20000) != 0 )
          CcPerfLogScheduleReadAhead(0LL, Object, v26, v8, v12, v15, v39);
        v27 = NewIrql;
        v28 = SpinLock;
        goto LABEL_36;
      }
    }
  }
}
