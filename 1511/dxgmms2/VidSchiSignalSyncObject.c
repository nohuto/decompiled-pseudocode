/*
 * XREFs of VidSchiSignalSyncObject @ 0x1C0008540
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0008030 (VidSchSignalSyncObjectsFromGpu.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiSignalSyncObject(unsigned int a1, __int64 a2, char a3, __int64 a4, char a5)
{
  __int64 v6; // rdi
  __int64 v7; // rbx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  _QWORD *v11; // rsi
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // r15
  _QWORD *v14; // rax
  unsigned __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rsi
  unsigned __int64 v21; // rax
  _QWORD *v22; // rax
  unsigned int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v6 = 8LL * a1;
  v7 = *(_QWORD *)(v6 + a2);
  if ( !a5 )
    goto LABEL_13;
  v8 = *(_DWORD *)(v7 + 40);
  if ( !v8 )
  {
    if ( !*(_QWORD *)(v7 + 56) )
    {
      v25 = WdLogNewEntry5_WdWarning();
      *(_QWORD *)(v25 + 24) = *(_QWORD *)(v7 + 16);
      WdLogEvent5_WdWarning(v25);
    }
    *(_QWORD *)(v7 + 56) = 0LL;
    goto LABEL_13;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v23 = *(_DWORD *)(v7 + 56);
    if ( v23 >= *(_DWORD *)(v7 + 52) )
    {
      v24 = WdLogNewEntry5_WdWarning();
      *(_QWORD *)(v24 + 24) = *(_QWORD *)(v7 + 16);
      WdLogEvent5_WdWarning(v24);
    }
    else
    {
      *(_DWORD *)(v7 + 56) = v23 + 1;
    }
    goto LABEL_13;
  }
  v10 = v9 - 1;
  if ( v10 )
  {
    if ( v10 != 2 || *(_BYTE *)(v7 + 28) )
      goto LABEL_13;
    if ( (a3 & 4) != 0 )
      goto LABEL_11;
    v11 = (_QWORD *)(v6 + a4);
    v12 = *(_QWORD *)(v6 + a4);
    v13 = *(_QWORD *)(v7 + 80);
    if ( *(_BYTE *)(v7 + 29) )
    {
      if ( v12 >= v13 )
      {
        if ( v12 != v13 )
          goto LABEL_11;
        v18 = WdLogNewEntry5_WdWarning();
        *(_QWORD *)(v18 + 24) = v12;
        goto LABEL_29;
      }
      v17 = WdLogNewEntry5_WdWarning();
      *(_QWORD *)(v17 + 24) = v12;
      *(_QWORD *)(v17 + 32) = v13;
    }
    else
    {
      if ( (int)v13 - (int)v12 <= 0 )
      {
        if ( (_DWORD)v13 != (_DWORD)v12 )
        {
LABEL_11:
          v11 = (_QWORD *)(v6 + a4);
          *(_QWORD *)(v7 + 80) = *(_QWORD *)(v6 + a4);
LABEL_12:
          v14 = (_QWORD *)WdLogNewEntry5_WdEvent();
          v14[3] = v7;
          v14[4] = **(_QWORD **)(v7 + 56);
          v14[5] = *v11;
          v14[6] = *(unsigned __int8 *)(v7 + 28);
          WdLogEvent5_WdEvent(v14);
LABEL_13:
          _InterlockedIncrement((volatile signed __int32 *)(v7 + 32));
          return;
        }
        v18 = WdLogNewEntry5_WdWarning();
        *(_QWORD *)(v18 + 24) = (unsigned int)v12;
LABEL_29:
        WdLogEvent5_WdWarning(v18);
        goto LABEL_11;
      }
      v17 = WdLogNewEntry5_WdWarning();
      *(_QWORD *)(v17 + 24) = (unsigned int)v12;
      *(_QWORD *)(v17 + 32) = (unsigned int)v13;
    }
    WdLogEvent5_WdWarning(v17);
    v19 = (_QWORD *)WdLogNewEntry5_WdWarning();
    v19[3] = *(_QWORD *)(v7 + 16);
    v19[4] = *(_QWORD *)(v7 + 80);
    v19[5] = *v11;
    WdLogEvent5_WdWarning(v19);
    goto LABEL_12;
  }
  if ( *(_BYTE *)(v7 + 27) )
  {
    v20 = *(_QWORD *)(v7 + 168);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v20 + 8), &LockHandle);
    v21 = *(_QWORD *)(v6 + a4);
    if ( *(_QWORD *)(v20 + 40) >= v21 )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdWarning();
      v22[3] = *(_QWORD *)(v7 + 16);
      v22[4] = *(_QWORD *)(v20 + 40);
      v22[5] = *(_QWORD *)(v6 + a4);
      WdLogEvent5_WdWarning(v22);
    }
    else
    {
      *(_QWORD *)(v20 + 40) = v21;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    goto LABEL_13;
  }
  v15 = *(_QWORD *)(v6 + a4);
  if ( *(_QWORD *)(v7 + 56) >= v15 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdWarning();
    v16[3] = *(_QWORD *)(v7 + 16);
    v16[4] = *(_QWORD *)(v7 + 56);
    v16[5] = *(_QWORD *)(v6 + a4);
    WdLogEvent5_WdWarning(v16);
  }
  else
  {
    *(_QWORD *)(v7 + 56) = v15;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 32));
}
