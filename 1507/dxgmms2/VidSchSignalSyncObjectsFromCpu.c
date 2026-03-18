/*
 * XREFs of VidSchSignalSyncObjectsFromCpu @ 0x1C001D100
 * Callers:
 *     VidSchSignalPagingFences @ 0x1C0044B54 (VidSchSignalPagingFences.c)
 * Callees:
 *     VidSchiUnwaitMonitoredFences @ 0x1C00059CC (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiPropagateCrossAdapterSignal @ 0x1C0019518 (VidSchiPropagateCrossAdapterSignal.c)
 */

__int64 __fastcall VidSchSignalSyncObjectsFromCpu(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 *a4)
{
  __int64 v4; // r12
  unsigned int v5; // ebx
  __int64 v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  unsigned int v11; // ebp
  unsigned __int64 *v12; // r13
  __int64 v13; // rax
  __int64 v14; // rsi
  bool v15; // zf
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdi
  char *v20; // r14
  __int64 v21; // rsi
  _QWORD *v22; // rax
  _QWORD *v23; // r8
  __int64 v24; // rax
  __int64 v25; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-40h] BYREF
  unsigned int v28; // [rsp+80h] [rbp+18h]

  v28 = a3;
  v4 = (unsigned int)a1;
  v5 = 0;
  if ( (a3 & 4) != (_DWORD)a3 )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    v5 = -1073741811;
    *(_QWORD *)(v8 + 24) = v28;
    *(_QWORD *)(v8 + 32) = -1073741811LL;
    WdLogEvent5_WdAssertion(v8);
    return v5;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(*(_QWORD *)a2 + 8LL) + 1872LL), &LockHandle);
  if ( (v28 & 4) != 0 )
  {
LABEL_17:
    if ( (_DWORD)v4 )
    {
      v19 = a2;
      v20 = (char *)a4 - a2;
      v21 = v4;
      do
      {
        if ( !*(_BYTE *)(*(_QWORD *)v19 + 28LL) )
        {
          v22 = (_QWORD *)WdLogNewEntry5_WdEvent(v10, v9);
          v22[3] = *(_QWORD *)v19;
          v22[4] = **(_QWORD **)(*(_QWORD *)v19 + 56LL);
          v22[5] = *(_QWORD *)&v20[v19];
          WdLogEvent5_WdEvent(v22);
          *(_QWORD *)(*(_QWORD *)v19 + 80LL) = *(_QWORD *)&v20[v19];
          v9 = *(_QWORD *)&v20[v19];
          v23 = *(_QWORD **)(*(_QWORD *)v19 + 56LL);
          if ( *(_BYTE *)(*(_QWORD *)v19 + 29LL) )
            *v23 = v9;
          else
            *(_DWORD *)v23 = v9;
          v10 = *(_QWORD **)v19;
          if ( *(_BYTE *)(*(_QWORD *)v19 + 27LL) )
            VidSchiPropagateCrossAdapterSignal(v10);
        }
        v19 += 8LL;
        --v21;
      }
      while ( v21 );
    }
    goto LABEL_29;
  }
  v11 = 0;
  if ( !(_DWORD)v4 )
  {
LABEL_29:
    VidSchiUnwaitMonitoredFences(*(_QWORD *)(*(_QWORD *)a2 + 8LL));
    goto LABEL_30;
  }
  v12 = a4;
  v13 = a2 - (_QWORD)a4;
  while ( 1 )
  {
    v14 = *(unsigned __int64 *)((char *)v12 + v13);
    if ( !*(_BYTE *)(v14 + 28) )
      break;
LABEL_16:
    ++v11;
    ++v12;
    if ( v11 >= (unsigned int)v4 )
      goto LABEL_17;
  }
  v15 = *(_BYTE *)(v14 + 29) == 0;
  v16 = *v12;
  v17 = *(_QWORD *)(v14 + 80);
  if ( !v15 )
  {
    if ( v16 < v17 )
    {
      v24 = WdLogNewEntry5_WdWarning();
      *(_QWORD *)(v24 + 24) = v16;
      *(_QWORD *)(v24 + 32) = v17;
      goto LABEL_24;
    }
    if ( v16 != v17 )
      goto LABEL_15;
    v18 = WdLogNewEntry5_WdWarning();
    *(_QWORD *)(v18 + 24) = v16;
    goto LABEL_14;
  }
  if ( (int)v17 - (int)v16 <= 0 )
  {
    if ( (_DWORD)v17 != (_DWORD)v16 )
    {
LABEL_15:
      v13 = a2 - (_QWORD)a4;
      goto LABEL_16;
    }
    v18 = WdLogNewEntry5_WdWarning();
    *(_QWORD *)(v18 + 24) = (unsigned int)v16;
LABEL_14:
    WdLogEvent5_WdWarning(v18);
    goto LABEL_15;
  }
  v24 = WdLogNewEntry5_WdWarning();
  *(_QWORD *)(v24 + 24) = (unsigned int)v16;
  *(_QWORD *)(v24 + 32) = (unsigned int)v17;
LABEL_24:
  WdLogEvent5_WdWarning(v24);
  v5 = -1073741811;
  v25 = WdLogNewEntry5_WdError();
  *(_QWORD *)(v25 + 24) = a4[v11];
  *(_QWORD *)(v25 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v25);
LABEL_30:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v5;
}
