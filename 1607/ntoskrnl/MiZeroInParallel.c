/*
 * XREFs of MiZeroInParallel @ 0x14010A05C
 * Callers:
 *     MiInitializeMdlPages @ 0x14010480C (MiInitializeMdlPages.c)
 *     MiAllocateLargeZeroPages @ 0x1406621D4 (MiAllocateLargeZeroPages.c)
 * Callees:
 *     KeWaitForGate @ 0x140097498 (KeWaitForGate.c)
 *     KeSignalGate @ 0x1400A6E1C (KeSignalGate.c)
 *     KeSetPriorityThread @ 0x1400D0DC0 (KeSetPriorityThread.c)
 *     MiZeroInParallelWorker @ 0x1401078C0 (MiZeroInParallelWorker.c)
 *     PsCreateSystemThread @ 0x1403E5D3C (PsCreateSystemThread.c)
 *     ObCloseHandle @ 0x1404EF6CC (ObCloseHandle.c)
 */

void __fastcall MiZeroInParallel(__int64 a1, __int64 a2, char a3)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int32 v4; // ebx
  unsigned __int32 v5; // edi
  unsigned __int64 v6; // r9
  int v7; // r12d
  unsigned __int64 v8; // rsi
  unsigned __int32 v9; // r15d
  unsigned __int32 v10; // r11d
  unsigned __int64 v11; // r8
  __int16 v12; // ax
  unsigned __int64 v13; // rsi
  signed __int32 v14; // esi
  int v15; // edi
  __int64 v16; // r8
  __int64 v17; // r10
  __int64 v18; // rax
  signed __int32 StartContext; // [rsp+40h] [rbp-40h] BYREF
  _KPROCESS *Process; // [rsp+48h] [rbp-38h]
  signed __int32 v21[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v22; // [rsp+58h] [rbp-28h]
  __int16 v23; // [rsp+60h] [rbp-20h] BYREF
  char v24; // [rsp+62h] [rbp-1Eh]
  int v25; // [rsp+64h] [rbp-1Ch]
  _QWORD v26[3]; // [rsp+68h] [rbp-18h] BYREF
  HANDLE ThreadHandle; // [rsp+C0h] [rbp+40h] BYREF
  __int16 v28; // [rsp+C8h] [rbp+48h]
  int v29; // [rsp+D0h] [rbp+50h]

  CurrentThread = KeGetCurrentThread();
  v4 = KeNumberProcessors_0;
  v5 = a2;
  v6 = 0LL;
  if ( (a3 & 8) != 0 || (CurrentThread->MiscFlags & 0x400) != 0 || KeGetCurrentIrql() == 2 || (MiFlags & 0x30) == 0 )
    v4 = 0;
  v7 = -1;
  v8 = 0LL;
  v9 = 0;
  v10 = 0;
  v11 = 1LL;
  if ( (_DWORD)a2 )
  {
    v12 = KeNumberNodes;
    a2 = a1 + 4;
    v28 = KeNumberNodes;
    do
    {
      *(_DWORD *)a2 = -1;
      if ( *(_QWORD *)(a2 + 12) == 0xFFFFFFFFFLL )
      {
        *(_DWORD *)(a2 - 4) = 1;
      }
      else
      {
        v8 += *(_QWORD *)(a2 + 4);
        ++v9;
        *(_DWORD *)(a2 - 4) = 0;
        if ( v5 != 1 )
        {
          LODWORD(v16) = -1;
          v29 = -1;
          if ( (unsigned __int16)v12 <= 1u )
          {
LABEL_23:
            *(_DWORD *)a2 = v16;
            v11 = 1LL;
            goto LABEL_9;
          }
          v17 = v10 >> byte_140326A09;
          if ( v6 && (_DWORD)v17 == v7 )
          {
            _BitScanReverse64((unsigned __int64 *)&v16, v6);
            LOBYTE(v18) = v16;
            goto LABEL_30;
          }
          v6 = *(_QWORD *)(KeNodeBlock[v17] + 136);
          if ( v6 )
          {
            _BitScanReverse64((unsigned __int64 *)&v18, v6);
            v7 = v10 >> byte_140326A09;
            LODWORD(v16) = v18;
LABEL_30:
            v6 &= ~(1LL << v18);
            v29 = v16;
          }
          v12 = v28;
          goto LABEL_23;
        }
      }
LABEL_9:
      ++v10;
      a2 += 24LL;
    }
    while ( v10 < v5 );
  }
  if ( v4 > v9 )
    v4 = v9;
  v13 = v8 >> 12;
  Process = CurrentThread->ApcState.Process;
  if ( v4 > v13 )
    v4 = v13;
  v26[1] = v26;
  v22 = a1;
  v21[1] = v5;
  if ( v4 == 1 )
    v4 = 0;
  v23 = 263;
  v24 = 6;
  v25 = 0;
  v26[0] = v26;
  v21[0] = v4;
  if ( v4 )
    v14 = KeSetPriorityThread(CurrentThread, 15);
  else
    v14 = -1;
  StartContext = v14;
  v15 = 0;
  if ( v4 )
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
      if ( ++v15 >= v4 )
        goto LABEL_38;
    }
    v4 -= v15;
    if ( _InterlockedExchangeAdd(v21, -v4) == v4 )
      KeSignalGate((__int64)&v23, 1u);
LABEL_38:
    if ( v4 )
      KeSetPriorityThread(CurrentThread, v14);
  }
  if ( v15 )
    KeWaitForGate((__int64)&v23, 0);
  else
    MiZeroInParallelWorker(&StartContext, a2, v11);
}
