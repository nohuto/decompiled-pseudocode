/*
 * XREFs of VidSchiSignalSyncObject @ 0x1C00057DC
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0005320 (VidSchSignalSyncObjectsFromGpu.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiSignalSyncObject(unsigned int a1, __int64 a2, char a3, __int64 a4, char a5)
{
  __int64 v6; // rsi
  __int64 v7; // rbx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rbp
  _QWORD *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rdi
  unsigned __int64 v18; // rax
  _QWORD *v19; // rax
  unsigned __int64 v20; // rax
  _QWORD *v21; // rax
  unsigned int v22; // eax
  __int64 v23; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v6 = a1;
  v7 = *(_QWORD *)(a2 + 8LL * a1);
  if ( !a5 )
    goto LABEL_13;
  v8 = *(_DWORD *)(v7 + 40);
  if ( !v8 )
  {
    if ( !*(_QWORD *)(v7 + 56) )
    {
      v23 = WdLogNewEntry5_WdWarning();
      *(_QWORD *)(v23 + 24) = *(_QWORD *)(v7 + 16);
      WdLogEvent5_WdWarning(v23);
    }
    *(_QWORD *)(v7 + 56) = 0LL;
    goto LABEL_13;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v22 = *(_DWORD *)(v7 + 56);
    if ( v22 < *(_DWORD *)(v7 + 52) )
    {
      *(_DWORD *)(v7 + 56) = v22 + 1;
      goto LABEL_13;
    }
    v21 = (_QWORD *)WdLogNewEntry5_WdWarning();
    v21[3] = *(_QWORD *)(v7 + 16);
    goto LABEL_33;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    if ( *(_BYTE *)(v7 + 27) )
    {
      v17 = *(_QWORD *)(v7 + 168);
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v17 + 8), &LockHandle);
      v18 = *(_QWORD *)(a4 + 8 * v6);
      if ( *(_QWORD *)(v17 + 40) >= v18 )
      {
        v19 = (_QWORD *)WdLogNewEntry5_WdWarning();
        v19[3] = *(_QWORD *)(v7 + 16);
        v19[4] = *(_QWORD *)(v17 + 40);
        v19[5] = *(_QWORD *)(a4 + 8 * v6);
        WdLogEvent5_WdWarning(v19);
      }
      else
      {
        *(_QWORD *)(v17 + 40) = v18;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      goto LABEL_13;
    }
    v20 = *(_QWORD *)(a4 + 8 * v6);
    if ( *(_QWORD *)(v7 + 56) < v20 )
    {
      *(_QWORD *)(v7 + 56) = v20;
      goto LABEL_13;
    }
    v21 = (_QWORD *)WdLogNewEntry5_WdWarning();
    v21[3] = *(_QWORD *)(v7 + 16);
    v21[4] = *(_QWORD *)(v7 + 56);
    v21[5] = *(_QWORD *)(a4 + 8 * v6);
LABEL_33:
    WdLogEvent5_WdWarning(v21);
    goto LABEL_13;
  }
  if ( v10 == 2 && !*(_BYTE *)(v7 + 28) )
  {
    if ( (a3 & 4) != 0 )
    {
LABEL_11:
      *(_QWORD *)(v7 + 80) = *(_QWORD *)(a4 + 8 * v6);
LABEL_12:
      v13 = (_QWORD *)WdLogNewEntry5_WdEvent();
      v13[3] = v7;
      v13[4] = **(_QWORD **)(v7 + 56);
      v13[5] = *(_QWORD *)(a4 + 8 * v6);
      v13[6] = *(unsigned __int8 *)(v7 + 28);
      WdLogEvent5_WdEvent(v13);
      goto LABEL_13;
    }
    v11 = *(_QWORD *)(a4 + 8 * v6);
    v12 = *(_QWORD *)(v7 + 80);
    if ( *(_BYTE *)(v7 + 29) )
    {
      if ( v11 >= v12 )
      {
        if ( v11 != v12 )
          goto LABEL_11;
        v15 = WdLogNewEntry5_WdWarning();
        *(_QWORD *)(v15 + 24) = v11;
LABEL_21:
        WdLogEvent5_WdWarning(v15);
        goto LABEL_11;
      }
      v14 = WdLogNewEntry5_WdWarning();
      *(_QWORD *)(v14 + 24) = v11;
      *(_QWORD *)(v14 + 32) = v12;
    }
    else
    {
      if ( (int)v12 - (int)v11 <= 0 )
      {
        if ( (_DWORD)v12 != (_DWORD)v11 )
          goto LABEL_11;
        v15 = WdLogNewEntry5_WdWarning();
        *(_QWORD *)(v15 + 24) = (unsigned int)v11;
        goto LABEL_21;
      }
      v14 = WdLogNewEntry5_WdWarning();
      *(_QWORD *)(v14 + 24) = (unsigned int)v11;
      *(_QWORD *)(v14 + 32) = (unsigned int)v12;
    }
    WdLogEvent5_WdWarning(v14);
    v16 = (_QWORD *)WdLogNewEntry5_WdWarning();
    v16[3] = *(_QWORD *)(v7 + 16);
    v16[4] = *(_QWORD *)(v7 + 80);
    v16[5] = *(_QWORD *)(a4 + 8 * v6);
    WdLogEvent5_WdWarning(v16);
    goto LABEL_12;
  }
LABEL_13:
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 32));
}
