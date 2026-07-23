/*
 * XREFs of MiAttemptPageFileReductionApc @ 0x1401DC124
 * Callers:
 *     <none>
 * Callees:
 *     MiOkToShrinkPageFiles @ 0x14001BE3C (MiOkToShrinkPageFiles.c)
 *     RtlClearBits @ 0x14003B430 (RtlClearBits.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlSetBits @ 0x140061410 (RtlSetBits.c)
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiCoalescePageFileBitmapsCache @ 0x1400B8500 (MiCoalescePageFileBitmapsCache.c)
 *     RtlFindLastBackwardRunClear @ 0x1400E72D4 (RtlFindLastBackwardRunClear.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x1400F5258 (MiInvalidatePageFileBitmapsCache.c)
 *     MiReduceCommitLimits @ 0x1401DBF84 (MiReduceCommitLimits.c)
 */

LONG __fastcall MiAttemptPageFileReductionApc(struct _KEVENT *a1)
{
  unsigned int Flink; // r13d
  unsigned __int64 v2; // r12
  unsigned int v3; // eax
  unsigned __int64 Flink_high; // rbx
  int v5; // edx
  unsigned __int64 v6; // r15
  int v7; // eax
  __int64 v8; // rcx
  unsigned __int64 v9; // r9
  __int64 v10; // r15
  _DWORD *v11; // r14
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int16 v14; // ax
  __int64 v15; // rax
  _RTL_BITMAP *v16; // r10
  const signed __int32 *v17; // r8
  unsigned int v18; // ecx
  const signed __int32 *v19; // rdx
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rcx
  unsigned int v22; // r9d
  unsigned __int64 LastBackwardRunClear; // rsi
  ULONG v24; // eax
  int v25; // r8d
  __int64 v26; // rcx
  __int64 v27; // rax
  unsigned __int64 v28; // r14
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  _RTL_BITMAP *v32; // rbx
  int v34; // [rsp+30h] [rbp-69h]
  unsigned int v35; // [rsp+34h] [rbp-65h]
  _DWORD *v36; // [rsp+38h] [rbp-61h]
  unsigned __int64 v37; // [rsp+40h] [rbp-59h]
  __int64 v38; // [rsp+48h] [rbp-51h]
  unsigned int v39; // [rsp+50h] [rbp-49h]
  PRTL_BITMAP v40; // [rsp+58h] [rbp-41h]
  __int64 v41; // [rsp+60h] [rbp-39h]
  _RTL_BITMAP *v42; // [rsp+68h] [rbp-31h]
  ULONG StartingRunIndex; // [rsp+70h] [rbp-29h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-21h] BYREF
  ULONG v45; // [rsp+90h] [rbp-9h] BYREF
  _RTL_BITMAP BitMapHeader; // [rsp+98h] [rbp-1h] BYREF
  _RTL_BITMAP v47; // [rsp+A8h] [rbp+Fh] BYREF
  struct _KEVENT *Event; // [rsp+100h] [rbp+67h]
  int v49; // [rsp+118h] [rbp+7Fh]

  Event = a1;
  Flink = (unsigned int)a1[1].Header.WaitListHead.Flink;
  v2 = *(_QWORD *)&a1[1].Header.Lock;
  if ( Flink >= 0x10 )
  {
    LOBYTE(v7) = MiOkToShrinkPageFiles(*(_QWORD *)(v2 + 5960), *(_QWORD *)(v2 + 6120));
    if ( !v7 )
      return KeSetEvent(Event, 0, 0);
    v49 = 1;
    v38 = 0x8000LL;
    v3 = *(_DWORD *)(v2 + 5720);
    Flink_high = 0x4000LL;
    v5 = 1;
    v10 = (((v9 * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL) >> 64) & 0xFFFFFFFFFFFFFFF8uLL) - v8;
    a1 = Event;
    v6 = v10 - 0x8000;
    Flink = 0;
  }
  else
  {
    v38 = 0LL;
    v3 = Flink + 1;
    Flink_high = HIDWORD(a1[1].Header.WaitListHead.Flink);
    v5 = 0;
    v49 = 0;
    v6 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v35 = v3;
  v34 = v5;
  v37 = Flink_high;
  if ( Flink < v3 )
  {
    v11 = (_DWORD *)&a1[1].Header.WaitListHead.Blink + Flink;
    v12 = 8LL * Flink + 5728;
    v36 = v11;
    v41 = v12;
    while ( Flink_high <= v6 )
    {
      v13 = *(_QWORD *)(v12 + v2);
      v14 = *(_WORD *)(v13 + 204);
      if ( ((v14 & 0x10) == 0 || !v5)
        && (v14 & 0x40) == 0
        && *(_QWORD *)v13 != *(_QWORD *)(v13 + 16)
        && *(_QWORD *)(v13 + 24) >= Flink_high )
      {
        v2 = *(_QWORD *)(v13 + 256);
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v13 + 232), &LockHandle);
        v15 = *(_QWORD *)(v13 + 112);
        v16 = (_RTL_BITMAP *)(v15 + 8);
        v17 = *(const signed __int32 **)(v15 + 16);
        v18 = *(_DWORD *)v13 - 1;
        v40 = (PRTL_BITMAP)(v15 + 8);
        v42 = (_RTL_BITMAP *)(v15 + 24);
        if ( _bittest(v17, v18) == 1 || (v19 = *(const signed __int32 **)(v15 + 32), _bittest(v19, v18) == 1) )
        {
          v25 = v49;
          LastBackwardRunClear = 0LL;
        }
        else
        {
          v20 = v6;
          if ( v6 > *(_QWORD *)v13 - *(_QWORD *)(v13 + 16) )
            v20 = *(_QWORD *)v13 - *(_QWORD *)(v13 + 16);
          v21 = (*(_QWORD *)v13 - v20) & 0xFFFFFFFFFFFFFFE0uLL;
          v22 = *(_DWORD *)v13 - v21;
          v21 >>= 5;
          v39 = v22;
          BitMapHeader.SizeOfBitMap = v22;
          v47.SizeOfBitMap = v22;
          BitMapHeader.Buffer = (unsigned int *)&v17[v21];
          v47.Buffer = (unsigned int *)&v19[v21];
          LastBackwardRunClear = RtlFindLastBackwardRunClear(&BitMapHeader, v22 - 1, &StartingRunIndex);
          if ( LastBackwardRunClear > v20 )
            LastBackwardRunClear = v20;
          v24 = RtlFindLastBackwardRunClear(&v47, v39 - 1, &v45);
          v25 = v49;
          Flink_high = v37;
          v16 = v40;
          if ( LastBackwardRunClear > v24 )
            LastBackwardRunClear = v24;
          if ( !v49 )
            LastBackwardRunClear &= ~(v37 - 1);
        }
        if ( LastBackwardRunClear )
        {
          v26 = *(_QWORD *)v13;
          v27 = *(_QWORD *)(v13 + 248);
          v28 = *(_QWORD *)v13 - LastBackwardRunClear;
          if ( !v27 )
            goto LABEL_35;
          do
          {
            v29 = v27;
            v27 = *(_QWORD *)(v27 + 8);
          }
          while ( v27 );
          v30 = *(_QWORD *)(v29 - 8);
          if ( !v30 || v28 > v30 )
            goto LABEL_35;
          v28 = v30 + 1;
          if ( v30 + 1 < v30 )
            goto LABEL_34;
          LastBackwardRunClear = v26 - v28;
          if ( !v25 )
          {
            LastBackwardRunClear &= ~(Flink_high - 1);
            v28 = v26 - LastBackwardRunClear;
          }
          if ( !LastBackwardRunClear )
          {
LABEL_34:
            KeReleaseInStackQueuedSpinLock(&LockHandle);
            v11 = v36;
          }
          else
          {
LABEL_35:
            *(_QWORD *)(v13 + 24) -= LastBackwardRunClear;
            *(_QWORD *)(v13 + 48) -= LastBackwardRunClear;
            *(_QWORD *)v13 = v28;
            RtlSetBits(v16, v28, LastBackwardRunClear);
            RtlSetBits(v42, v28, LastBackwardRunClear);
            MiInvalidatePageFileBitmapsCache(v13, v28, LastBackwardRunClear, 0LL);
            KeReleaseInStackQueuedSpinLock(&LockHandle);
            v6 -= LastBackwardRunClear;
            if ( (*(_BYTE *)(v13 + 204) & 0x10) == 0 )
            {
              if ( !(unsigned int)MiChargeCommit(v2, LastBackwardRunClear + v38, 2uLL) )
              {
                KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v13 + 232), &LockHandle);
                v31 = *(_QWORD *)(v13 + 112);
                *(_QWORD *)(v13 + 24) += LastBackwardRunClear;
                *(_QWORD *)(v13 + 48) += LastBackwardRunClear;
                *(_QWORD *)v13 = v28 + LastBackwardRunClear;
                v32 = (_RTL_BITMAP *)(v31 + 24);
                RtlClearBits((PRTL_BITMAP)(v31 + 8), v28, LastBackwardRunClear);
                RtlClearBits(v32, v28, LastBackwardRunClear);
                if ( v28 < *(unsigned int *)(v13 + 120) )
                  *(_DWORD *)(v13 + 120) = v28;
                MiCoalescePageFileBitmapsCache(v13, 0, v28);
                KeReleaseInStackQueuedSpinLock(&LockHandle);
                return KeSetEvent(Event, 0, 0);
              }
              MiReduceCommitLimits((_QWORD *)v2, LastBackwardRunClear, 0LL);
              MiReturnCommit(v2, LastBackwardRunClear + v38);
            }
            *v36 = v28;
            v11 = v36;
          }
        }
        else
        {
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        }
      }
      ++v11;
      v12 = v41 + 8;
      v36 = v11;
      ++Flink;
      v41 += 8LL;
      if ( Flink >= v35 )
        return KeSetEvent(Event, 0, 0);
      v5 = v34;
    }
  }
  return KeSetEvent(Event, 0, 0);
}
