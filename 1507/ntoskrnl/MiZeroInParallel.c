/*
 * XREFs of MiZeroInParallel @ 0x140075AD4
 * Callers:
 *     MiInitializeMdlPages @ 0x140076FA8 (MiInitializeMdlPages.c)
 *     MiAllocateLargeZeroPages @ 0x1406A9A90 (MiAllocateLargeZeroPages.c)
 * Callees:
 *     MiZeroInParallelWorker @ 0x1400757C8 (MiZeroInParallelWorker.c)
 *     KeSetPriorityThread @ 0x14009B5F0 (KeSetPriorityThread.c)
 *     KeWaitForGate @ 0x140126304 (KeWaitForGate.c)
 *     KeSignalGate @ 0x140127FF0 (KeSignalGate.c)
 *     ObCloseHandle @ 0x1404A4D60 (ObCloseHandle.c)
 *     PsCreateSystemThread @ 0x1404F923C (PsCreateSystemThread.c)
 */

void __fastcall MiZeroInParallel(__int64 a1, unsigned int a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int32 v4; // r14d
  unsigned __int32 v5; // ebx
  unsigned __int64 v7; // rdi
  int v8; // r12d
  KPRIORITY v9; // r13d
  unsigned __int64 v10; // r11
  unsigned int v11; // r10d
  __int16 v12; // ax
  _QWORD *v13; // rdx
  int v14; // edi
  unsigned __int64 v15; // r11
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  HANDLE ThreadHandle; // [rsp+40h] [rbp-29h] BYREF
  KPRIORITY StartContext; // [rsp+48h] [rbp-21h] BYREF
  _KPROCESS *Process; // [rsp+50h] [rbp-19h]
  unsigned __int32 v22; // [rsp+58h] [rbp-11h] BYREF
  __int64 v23; // [rsp+60h] [rbp-9h]
  __int16 v24; // [rsp+68h] [rbp-1h] BYREF
  char v25; // [rsp+6Ah] [rbp+1h]
  int v26; // [rsp+6Ch] [rbp+3h]
  _QWORD v27[10]; // [rsp+70h] [rbp+7h] BYREF
  __int16 v29; // [rsp+D8h] [rbp+6Fh]
  KPRIORITY v30; // [rsp+E8h] [rbp+7Fh]

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v5 = KeNumberProcessors_0;
  v7 = 0LL;
  if ( (a3 & 8) != 0 || (CurrentThread->MiscFlags & 0x400) != 0 || KeGetCurrentIrql() == 2 || (MiFlags & 0x30) == 0 )
    v5 = 0;
  v30 = KeSetPriorityThread(CurrentThread, 15);
  v8 = -1;
  v9 = v30;
  v10 = 0LL;
  v11 = 0;
  if ( a2 )
  {
    v12 = KeNumberNodes;
    v13 = (_QWORD *)(a1 + 8);
    v29 = KeNumberNodes;
    while ( v13[1] == 0xFFFFFFFFFLL )
    {
      *((_DWORD *)v13 - 2) = 1;
LABEL_9:
      ++v11;
      v13 += 3;
      if ( v11 >= a2 )
      {
        v9 = v30;
        goto LABEL_11;
      }
    }
    v10 += *v13;
    LODWORD(v16) = -1;
    ++v4;
    *((_DWORD *)v13 - 2) = 0;
    if ( (unsigned __int16)v12 <= 1u )
    {
LABEL_21:
      *((_DWORD *)v13 - 1) = v16;
      goto LABEL_9;
    }
    v17 = v11 >> byte_14034EB89;
    if ( v7 && (_DWORD)v17 == v8 )
    {
      _BitScanReverse64((unsigned __int64 *)&v16, v7);
      LOBYTE(v18) = v16;
    }
    else
    {
      v7 = *(_QWORD *)(KeNodeBlock[v17] + 136);
      if ( !v7 )
      {
LABEL_29:
        v12 = v29;
        goto LABEL_21;
      }
      _BitScanReverse64((unsigned __int64 *)&v18, v7);
      v8 = v11 >> byte_14034EB89;
      LODWORD(v16) = v18;
    }
    v7 &= ~(1LL << v18);
    goto LABEL_29;
  }
LABEL_11:
  v14 = 0;
  if ( v5 > v4 )
    v5 = v4;
  v15 = v10 >> 12;
  Process = CurrentThread->ApcState.Process;
  if ( v5 > v15 )
    v5 = v15;
  v23 = a1;
  StartContext = v9;
  v27[1] = v27;
  if ( v5 == 1 )
    v5 = 0;
  v24 = 263;
  v27[0] = v27;
  v25 = 6;
  v26 = 0;
  v22 = v5;
  if ( v5 )
  {
    while ( PsCreateSystemThread(
              &ThreadHandle,
              0x1FFFFFu,
              0LL,
              0LL,
              0LL,
              (PKSTART_ROUTINE)MiZeroInParallelWorker,
              &StartContext) >= 0 )
    {
      ObCloseHandle(ThreadHandle, 0);
      if ( ++v14 >= v5 )
        goto LABEL_18;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v22, v14 - v5) == v5 - v14 )
      KeSignalGate(&v24, 1LL);
  }
LABEL_18:
  KeSetPriorityThread(CurrentThread, v9);
  if ( v14 )
    KeWaitForGate(&v24, 0LL);
  else
    MiZeroInParallelWorker(&StartContext);
}
