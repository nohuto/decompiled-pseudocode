/*
 * XREFs of VidSchSignalSyncObjectsFromCpu @ 0x1C0026F60
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiUnwaitMonitoredFences @ 0x1C000B590 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiPropagateCrossAdapterSignal @ 0x1C00249D4 (VidSchiPropagateCrossAdapterSignal.c)
 */

__int64 __fastcall VidSchSignalSyncObjectsFromCpu(__int64 a1, __int64 a2, unsigned int a3, unsigned __int64 *a4)
{
  __int64 v4; // r12
  unsigned int v5; // ebx
  __int64 v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  __int64 *v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebp
  unsigned __int64 *v14; // r13
  __int64 v15; // rax
  __int64 v16; // rsi
  bool v17; // zf
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdi
  char *v22; // r14
  __int64 v23; // rsi
  _QWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-40h] BYREF

  v4 = (unsigned int)a1;
  v5 = 0;
  if ( (a3 & 4) != a3 )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1, a2);
    v5 = -1073741811;
    *(_QWORD *)(v8 + 24) = a3;
    *(_QWORD *)(v8 + 32) = -1073741811LL;
    WdLogEvent5_WdAssertion(v8);
    return v5;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(*(_QWORD *)a2 + 8LL) + 1856LL), &LockHandle);
  if ( (a3 & 4) != 0 )
  {
LABEL_17:
    if ( (_DWORD)v4 )
    {
      v21 = a2;
      v22 = (char *)a4 - a2;
      v23 = v4;
      do
      {
        if ( !*(_BYTE *)(*(_QWORD *)v21 + 28LL) )
        {
          v24 = (_QWORD *)WdLogNewEntry5_WdEvent(v10, v9, v11, v12);
          v24[3] = *(_QWORD *)v21;
          v24[4] = **(_QWORD **)(*(_QWORD *)v21 + 56LL);
          v24[5] = *(_QWORD *)&v22[v21];
          WdLogEvent5_WdEvent(v24);
          *(_QWORD *)(*(_QWORD *)v21 + 80LL) = *(_QWORD *)&v22[v21];
          v9 = *(_QWORD *)&v22[v21];
          v11 = *(__int64 **)(*(_QWORD *)v21 + 56LL);
          if ( *(_BYTE *)(*(_QWORD *)v21 + 29LL) )
            *v11 = v9;
          else
            *(_DWORD *)v11 = v9;
          v10 = *(_QWORD **)v21;
          if ( *(_BYTE *)(*(_QWORD *)v21 + 27LL) )
            VidSchiPropagateCrossAdapterSignal(v10);
        }
        v21 += 8LL;
        --v23;
      }
      while ( v23 );
    }
    goto LABEL_29;
  }
  v13 = 0;
  if ( !(_DWORD)v4 )
  {
LABEL_29:
    VidSchiUnwaitMonitoredFences(*(_QWORD *)(*(_QWORD *)a2 + 8LL), v9, (__int64)v11, v12);
    goto LABEL_30;
  }
  v14 = a4;
  v15 = a2 - (_QWORD)a4;
  while ( 1 )
  {
    v16 = *(unsigned __int64 *)((char *)v14 + v15);
    if ( !*(_BYTE *)(v16 + 28) )
      break;
LABEL_16:
    ++v13;
    ++v14;
    if ( v13 >= (unsigned int)v4 )
      goto LABEL_17;
  }
  v17 = *(_BYTE *)(v16 + 29) == 0;
  v18 = *v14;
  v19 = *(_QWORD *)(v16 + 80);
  if ( !v17 )
  {
    if ( v18 < v19 )
    {
      v25 = WdLogNewEntry5_WdWarning();
      *(_QWORD *)(v25 + 24) = v18;
      *(_QWORD *)(v25 + 32) = v19;
      goto LABEL_24;
    }
    if ( v18 != v19 )
      goto LABEL_15;
    v20 = WdLogNewEntry5_WdWarning();
    *(_QWORD *)(v20 + 24) = v18;
    goto LABEL_14;
  }
  if ( (int)v19 - (int)v18 <= 0 )
  {
    if ( (_DWORD)v19 != (_DWORD)v18 )
    {
LABEL_15:
      v15 = a2 - (_QWORD)a4;
      goto LABEL_16;
    }
    v20 = WdLogNewEntry5_WdWarning();
    *(_QWORD *)(v20 + 24) = (unsigned int)v18;
LABEL_14:
    WdLogEvent5_WdWarning(v20);
    goto LABEL_15;
  }
  v25 = WdLogNewEntry5_WdWarning();
  *(_QWORD *)(v25 + 24) = (unsigned int)v18;
  *(_QWORD *)(v25 + 32) = (unsigned int)v19;
LABEL_24:
  WdLogEvent5_WdWarning(v25);
  v5 = -1073741811;
  v26 = WdLogNewEntry5_WdError();
  *(_QWORD *)(v26 + 24) = a4[v13];
  *(_QWORD *)(v26 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v26);
LABEL_30:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v5;
}
