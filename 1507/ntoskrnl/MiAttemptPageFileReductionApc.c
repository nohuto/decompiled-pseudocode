/*
 * XREFs of MiAttemptPageFileReductionApc @ 0x140220E7C
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     RtlClearBits @ 0x140062740 (RtlClearBits.c)
 *     RtlSetBits @ 0x14008B810 (RtlSetBits.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MiOkToShrinkPageFiles @ 0x1400EE5E8 (MiOkToShrinkPageFiles.c)
 *     RtlFindLastBackwardRunClear @ 0x140120988 (RtlFindLastBackwardRunClear.c)
 *     MiReduceCommitLimits @ 0x140220C38 (MiReduceCommitLimits.c)
 */

LONG __fastcall MiAttemptPageFileReductionApc(PRKEVENT Event)
{
  unsigned int Flink; // r15d
  __int64 v3; // r13
  unsigned int v4; // eax
  unsigned __int64 Flink_high; // rcx
  int v6; // edx
  unsigned __int64 v7; // r14
  int v8; // eax
  __int64 v9; // rcx
  unsigned __int64 v10; // r9
  __int64 v11; // r14
  __int64 v12; // rdi
  char *v13; // rbx
  __int64 *v14; // rdi
  __int16 v15; // ax
  __int64 v16; // rax
  __int64 v17; // rsi
  _RTL_BITMAP *v18; // r10
  unsigned int v19; // ecx
  const signed __int32 *Buffer; // r8
  const signed __int32 *v21; // rdx
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // rcx
  unsigned int v24; // r9d
  unsigned __int64 LastBackwardRunClear; // rsi
  ULONG v26; // eax
  int v27; // r9d
  unsigned __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rax
  unsigned __int64 v31; // rbx
  __int64 v32; // r8
  unsigned __int64 v33; // rax
  __int64 v34; // rcx
  unsigned __int64 v36; // [rsp+20h] [rbp-69h]
  char *v37; // [rsp+28h] [rbp-61h]
  int v38; // [rsp+30h] [rbp-59h]
  PRTL_BITMAP v39; // [rsp+38h] [rbp-51h]
  unsigned int v40; // [rsp+40h] [rbp-49h]
  __int64 v41; // [rsp+48h] [rbp-41h]
  __int64 v42; // [rsp+50h] [rbp-39h]
  _RTL_BITMAP *v43; // [rsp+58h] [rbp-31h]
  ULONG StartingRunIndex; // [rsp+60h] [rbp-29h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-21h] BYREF
  ULONG v46; // [rsp+80h] [rbp-9h] BYREF
  _RTL_BITMAP BitMapHeader; // [rsp+88h] [rbp-1h] BYREF
  _RTL_BITMAP v48; // [rsp+98h] [rbp+Fh] BYREF
  int v49; // [rsp+F0h] [rbp+67h]
  unsigned int v50; // [rsp+108h] [rbp+7Fh]

  Flink = (unsigned int)Event[1].Header.WaitListHead.Flink;
  v3 = *(_QWORD *)&Event[1].Header.Lock;
  if ( Flink >= 0x10 )
  {
    LOBYTE(v8) = MiOkToShrinkPageFiles(*(_QWORD *)(v3 + 5576), *(_QWORD *)(v3 + 5736));
    if ( !v8 )
      return KeSetEvent(Event, 0, 0);
    v38 = 1;
    v41 = 0x8000LL;
    v4 = *(_DWORD *)(v3 + 5336);
    v49 = 1;
    v6 = 1;
    v11 = (((v10 * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL) >> 64) & 0xFFFFFFFFFFFFFFF8uLL) - v9;
    Flink_high = 0x4000LL;
    v7 = v11 - 0x8000;
    Flink = 0;
  }
  else
  {
    v41 = 0LL;
    v4 = Flink + 1;
    Flink_high = HIDWORD(Event[1].Header.WaitListHead.Flink);
    v6 = 0;
    v49 = 0;
    v7 = 0x7FFFFFFFFFFFFFFFLL;
    v38 = 0;
  }
  v50 = v4;
  v36 = Flink_high;
  if ( Flink < v4 )
  {
    v12 = 8LL * Flink + 5344;
    v13 = (char *)&Event[1].Header.WaitListHead.Blink + 4 * Flink;
    v42 = v12;
    v37 = v13;
    while ( Flink_high <= v7 )
    {
      v14 = *(__int64 **)(v12 + v3);
      v15 = *((_WORD *)v14 + 82);
      if ( ((v15 & 0x10) == 0 || !v6) && (v15 & 0x40) == 0 && *v14 != v14[2] && v14[3] >= Flink_high )
      {
        v16 = v14[16];
        v3 = v14[27];
        v39 = (PRTL_BITMAP)(v16 + 8);
        v17 = v16 + 24;
        v43 = (_RTL_BITMAP *)(v16 + 24);
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v14 + 24, &LockHandle);
        v18 = v39;
        v19 = *(_DWORD *)v14 - 1;
        Buffer = (const signed __int32 *)v39->Buffer;
        if ( _bittest(Buffer, v19) == 1 || (v21 = *(const signed __int32 **)(v17 + 8), _bittest(v21, v19) == 1) )
        {
          v28 = v36;
          LastBackwardRunClear = 0LL;
          v27 = v49;
        }
        else
        {
          v22 = v7;
          if ( v7 > *v14 - v14[2] )
            v22 = *v14 - v14[2];
          v23 = (*v14 - v22) & 0xFFFFFFFFFFFFFFE0uLL;
          v24 = *(_DWORD *)v14 - v23;
          v23 >>= 5;
          v40 = v24;
          BitMapHeader.SizeOfBitMap = v24;
          v48.SizeOfBitMap = v24;
          BitMapHeader.Buffer = (unsigned int *)&Buffer[v23];
          v48.Buffer = (unsigned int *)&v21[v23];
          LastBackwardRunClear = RtlFindLastBackwardRunClear(&BitMapHeader, v24 - 1, &StartingRunIndex);
          if ( LastBackwardRunClear > v22 )
            LastBackwardRunClear = v22;
          v26 = RtlFindLastBackwardRunClear(&v48, v40 - 1, &v46);
          v27 = v49;
          v13 = v37;
          v18 = v39;
          if ( LastBackwardRunClear > v26 )
            LastBackwardRunClear = v26;
          v28 = v36;
          if ( !v49 )
            LastBackwardRunClear &= ~(v36 - 1);
        }
        if ( LastBackwardRunClear )
        {
          v29 = *v14;
          v30 = v14[26];
          v31 = *v14 - LastBackwardRunClear;
          if ( !v30 )
            goto LABEL_35;
          do
          {
            v32 = v30;
            v30 = *(_QWORD *)(v30 + 8);
          }
          while ( v30 );
          v33 = *(_QWORD *)(v32 - 8);
          if ( !v33 || v31 > v33 )
            goto LABEL_35;
          v31 = v33 + 1;
          if ( v33 + 1 < v33 )
            goto LABEL_34;
          LastBackwardRunClear = v29 - v31;
          if ( !v27 )
          {
            LastBackwardRunClear &= ~(v28 - 1);
            v31 = v29 - LastBackwardRunClear;
          }
          if ( !LastBackwardRunClear )
          {
LABEL_34:
            KeReleaseInStackQueuedSpinLock(&LockHandle);
            v13 = v37;
          }
          else
          {
LABEL_35:
            v14[3] -= LastBackwardRunClear;
            v14[6] -= LastBackwardRunClear;
            *v14 = v31;
            RtlSetBits(v18, v31, LastBackwardRunClear);
            RtlSetBits(v43, v31, LastBackwardRunClear);
            KeReleaseInStackQueuedSpinLock(&LockHandle);
            v7 -= LastBackwardRunClear;
            if ( (*((_BYTE *)v14 + 164) & 0x10) == 0 )
            {
              if ( !(unsigned int)MiChargeCommit(v3, LastBackwardRunClear + v41, 2) )
              {
                KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v14 + 24, &LockHandle);
                v34 = v14[16];
                v14[3] += LastBackwardRunClear;
                v14[6] += LastBackwardRunClear;
                *v14 = v31 + LastBackwardRunClear;
                RtlClearBits((PRTL_BITMAP)(v34 + 8), v31, LastBackwardRunClear);
                RtlClearBits((PRTL_BITMAP)(v14[16] + 24), v31, LastBackwardRunClear);
                if ( v31 < *((unsigned int *)v14 + 34) )
                  *((_DWORD *)v14 + 34) = v31;
                KeReleaseInStackQueuedSpinLock(&LockHandle);
                return KeSetEvent(Event, 0, 0);
              }
              MiReduceCommitLimits((_QWORD *)v3, LastBackwardRunClear, 0LL);
              MiReturnCommit(v3, LastBackwardRunClear + v41);
            }
            *(_DWORD *)v37 = v31;
            v13 = v37;
          }
        }
        else
        {
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        }
        Flink_high = v36;
      }
      v13 += 4;
      v12 = v42 + 8;
      v37 = v13;
      ++Flink;
      v42 += 8LL;
      if ( Flink >= v50 )
        return KeSetEvent(Event, 0, 0);
      v6 = v38;
    }
  }
  return KeSetEvent(Event, 0, 0);
}
