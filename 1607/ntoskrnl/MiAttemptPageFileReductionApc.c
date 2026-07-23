/*
 * XREFs of MiAttemptPageFileReductionApc @ 0x1401EDD3C
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     MiCoalescePageFileBitmapsCache @ 0x140019FE0 (MiCoalescePageFileBitmapsCache.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlSetBits @ 0x140027FA0 (RtlSetBits.c)
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     RtlClearBits @ 0x14002D260 (RtlClearBits.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     MiOkToShrinkPageFiles @ 0x140076084 (MiOkToShrinkPageFiles.c)
 *     RtlFindLastBackwardRunClear @ 0x1400A9D60 (RtlFindLastBackwardRunClear.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x1400B475C (MiInvalidatePageFileBitmapsCache.c)
 *     MiReduceCommitLimits @ 0x1401ECF74 (MiReduceCommitLimits.c)
 */

LONG __fastcall MiAttemptPageFileReductionApc(struct _KEVENT *a1)
{
  unsigned int Flink; // r13d
  __int64 v2; // r12
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
  int v16; // r9d
  _RTL_BITMAP *v17; // r10
  const signed __int32 *v18; // r8
  unsigned int v19; // ecx
  const signed __int32 *v20; // rdx
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rcx
  unsigned int v23; // r9d
  unsigned __int64 LastBackwardRunClear; // rsi
  ULONG v25; // eax
  int v26; // r8d
  __int64 v27; // rcx
  __int64 v28; // rax
  unsigned __int64 v29; // r14
  __int64 v30; // rdx
  unsigned __int64 v31; // rax
  __int64 v32; // rcx
  _RTL_BITMAP *v33; // rbx
  unsigned int v35; // [rsp+30h] [rbp-59h]
  int v36; // [rsp+34h] [rbp-55h]
  _DWORD *v37; // [rsp+38h] [rbp-51h]
  unsigned int v38; // [rsp+40h] [rbp-49h]
  unsigned __int64 v39; // [rsp+48h] [rbp-41h]
  __int64 v40; // [rsp+50h] [rbp-39h]
  PRTL_BITMAP v41; // [rsp+58h] [rbp-31h]
  __int64 v42; // [rsp+60h] [rbp-29h]
  ULONG StartingRunIndex; // [rsp+68h] [rbp-21h] BYREF
  ULONG v44; // [rsp+6Ch] [rbp-1Dh] BYREF
  PRTL_BITMAP v45; // [rsp+70h] [rbp-19h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-11h] BYREF
  _RTL_BITMAP BitMapHeader; // [rsp+90h] [rbp+7h] BYREF
  _RTL_BITMAP v48; // [rsp+A0h] [rbp+17h] BYREF
  struct _KEVENT *Event; // [rsp+F0h] [rbp+67h]
  int v50; // [rsp+108h] [rbp+7Fh]

  Event = a1;
  Flink = (unsigned int)a1[1].Header.WaitListHead.Flink;
  v2 = *(_QWORD *)&a1[1].Header.Lock;
  if ( Flink >= 0x10 )
  {
    LOBYTE(v7) = MiOkToShrinkPageFiles(*(_QWORD *)(v2 + 7208), *(_QWORD *)(v2 + 7336));
    if ( !v7 )
      return KeSetEvent(Event, 0, 0);
    v50 = 1;
    v40 = 0x8000LL;
    v3 = *(_DWORD *)(v2 + 6296);
    Flink_high = 0x4000LL;
    v5 = 1;
    v10 = (((v9 * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL) >> 64) & 0xFFFFFFFFFFFFFFF8uLL) - v8;
    a1 = Event;
    v6 = v10 - 0x8000;
    Flink = 0;
  }
  else
  {
    v40 = 0LL;
    v3 = Flink + 1;
    Flink_high = HIDWORD(a1[1].Header.WaitListHead.Flink);
    v5 = 0;
    v50 = 0;
    v6 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v35 = v3;
  v36 = v5;
  v39 = Flink_high;
  if ( Flink < v3 )
  {
    v11 = (_DWORD *)&a1[1].Header.WaitListHead.Blink + Flink;
    v12 = 8LL * Flink + 6304;
    v37 = v11;
    v42 = v12;
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
        v16 = *(_DWORD *)v13;
        v17 = (_RTL_BITMAP *)(v15 + 8);
        v18 = *(const signed __int32 **)(v15 + 16);
        v19 = *(_DWORD *)v13 - 1;
        v41 = (PRTL_BITMAP)(v15 + 8);
        v45 = (PRTL_BITMAP)(v15 + 24);
        if ( _bittest(v18, v19) == 1 || (v20 = *(const signed __int32 **)(v15 + 32), _bittest(v20, v19) == 1) )
        {
          v26 = v50;
          LastBackwardRunClear = 0LL;
        }
        else
        {
          v21 = v6;
          if ( v6 > *(_QWORD *)v13 - *(_QWORD *)(v13 + 16) )
            v21 = *(_QWORD *)v13 - *(_QWORD *)(v13 + 16);
          v22 = (*(_QWORD *)v13 - v21) & 0xFFFFFFFFFFFFFFE0uLL;
          v23 = v16 - v22;
          v22 >>= 5;
          v38 = v23;
          BitMapHeader.SizeOfBitMap = v23;
          v48.SizeOfBitMap = v23;
          BitMapHeader.Buffer = (unsigned int *)&v18[v22];
          v48.Buffer = (unsigned int *)&v20[v22];
          LastBackwardRunClear = RtlFindLastBackwardRunClear(&BitMapHeader, v23 - 1, &StartingRunIndex);
          if ( LastBackwardRunClear > v21 )
            LastBackwardRunClear = v21;
          v25 = RtlFindLastBackwardRunClear(&v48, v38 - 1, &v44);
          v26 = v50;
          Flink_high = v39;
          v17 = v41;
          if ( LastBackwardRunClear > v25 )
            LastBackwardRunClear = v25;
          if ( !v50 )
            LastBackwardRunClear &= ~(v39 - 1);
        }
        if ( LastBackwardRunClear )
        {
          v27 = *(_QWORD *)v13;
          v28 = *(_QWORD *)(v13 + 248);
          v29 = *(_QWORD *)v13 - LastBackwardRunClear;
          if ( !v28 )
            goto LABEL_35;
          do
          {
            v30 = v28;
            v28 = *(_QWORD *)(v28 + 8);
          }
          while ( v28 );
          v31 = *(_QWORD *)(v30 - 8);
          if ( !v31 || v29 > v31 )
            goto LABEL_35;
          v29 = v31 + 1;
          if ( v31 + 1 < v31 )
            goto LABEL_34;
          LastBackwardRunClear = v27 - v29;
          if ( !v26 )
          {
            LastBackwardRunClear &= ~(Flink_high - 1);
            v29 = v27 - LastBackwardRunClear;
          }
          if ( !LastBackwardRunClear )
          {
LABEL_34:
            KeReleaseInStackQueuedSpinLock(&LockHandle);
            v11 = v37;
          }
          else
          {
LABEL_35:
            *(_QWORD *)(v13 + 24) -= LastBackwardRunClear;
            *(_QWORD *)(v13 + 48) -= LastBackwardRunClear;
            *(_QWORD *)v13 = v29;
            RtlSetBits(v17, v29, LastBackwardRunClear);
            RtlSetBits(v45, v29, LastBackwardRunClear);
            MiInvalidatePageFileBitmapsCache(v13, v29, LastBackwardRunClear, 0LL);
            KeReleaseInStackQueuedSpinLock(&LockHandle);
            v6 -= LastBackwardRunClear;
            if ( (*(_BYTE *)(v13 + 204) & 0x10) == 0 )
            {
              if ( !(unsigned int)MiChargeCommit(v2, LastBackwardRunClear + v40, 2) )
              {
                KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v13 + 232), &LockHandle);
                v32 = *(_QWORD *)(v13 + 112);
                *(_QWORD *)(v13 + 24) += LastBackwardRunClear;
                *(_QWORD *)(v13 + 48) += LastBackwardRunClear;
                *(_QWORD *)v13 = v29 + LastBackwardRunClear;
                v33 = (_RTL_BITMAP *)(v32 + 24);
                RtlClearBits((PRTL_BITMAP)(v32 + 8), v29, LastBackwardRunClear);
                RtlClearBits(v33, v29, LastBackwardRunClear);
                if ( v29 < *(unsigned int *)(v13 + 120) )
                  *(_DWORD *)(v13 + 120) = v29;
                MiCoalescePageFileBitmapsCache(v13, 0, v29);
                KeReleaseInStackQueuedSpinLock(&LockHandle);
                return KeSetEvent(Event, 0, 0);
              }
              MiReduceCommitLimits((_QWORD *)v2, LastBackwardRunClear, 0LL);
              MiReturnCommit(v2, LastBackwardRunClear + v40);
            }
            *v37 = v29;
            v11 = v37;
          }
        }
        else
        {
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        }
      }
      ++v11;
      v12 = v42 + 8;
      v37 = v11;
      ++Flink;
      v42 += 8LL;
      if ( Flink >= v35 )
        return KeSetEvent(Event, 0, 0);
      v5 = v36;
    }
  }
  return KeSetEvent(Event, 0, 0);
}
