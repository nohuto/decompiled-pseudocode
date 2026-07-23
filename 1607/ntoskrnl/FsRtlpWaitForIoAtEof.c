/*
 * XREFs of FsRtlpWaitForIoAtEof @ 0x1400C508C
 * Callers:
 *     FsRtlGetIoAtEof @ 0x1400C3FD0 (FsRtlGetIoAtEof.c)
 *     FsRtlAcquireEofLock @ 0x1400C4AD0 (FsRtlAcquireEofLock.c)
 * Callees:
 *     FsRtlAcquireHeaderMutex @ 0x14002BCA0 (FsRtlAcquireHeaderMutex.c)
 *     PsBoostThreadIoEx @ 0x14002CFC0 (PsBoostThreadIoEx.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     IoBoostThreadIoPriority @ 0x14006DDC4 (IoBoostThreadIoPriority.c)
 *     KeSetPriorityBoost @ 0x14009110C (KeSetPriorityBoost.c)
 *     KeQueryPriorityThread @ 0x1400C5260 (KeQueryPriorityThread.c)
 *     FsRtlReleaseHeaderMutex @ 0x1400C5280 (FsRtlReleaseHeaderMutex.c)
 *     PsGetIoPriorityThread @ 0x1400E5CD0 (PsGetIoPriorityThread.c)
 */

char __fastcall FsRtlpWaitForIoAtEof(__int64 a1, volatile signed __int32 *a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r15
  KSPIN_LOCK *v5; // r14
  __int64 v7; // rdx
  int IoPriorityThread; // esi
  __int64 v9; // r8
  KPRIORITY PriorityThread; // edi
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rdx
  _QWORD *v14; // rax
  KPRIORITY v16; // eax
  bool v17; // cc
  int v18; // eax
  _QWORD v19[2]; // [rsp+30h] [rbp-40h] BYREF
  __int16 Object; // [rsp+40h] [rbp-30h] BYREF
  char v21; // [rsp+42h] [rbp-2Eh]
  int v22; // [rsp+44h] [rbp-2Ch]
  _QWORD v23[4]; // [rsp+48h] [rbp-28h] BYREF
  KPRIORITY v24; // [rsp+68h] [rbp-8h]
  int v25; // [rsp+6Ch] [rbp-4h]

  CurrentThread = KeGetCurrentThread();
  v5 = *(KSPIN_LOCK **)a1;
  IoPriorityThread = PsGetIoPriorityThread(CurrentThread, a2, a3);
  if ( IoPriorityThread >= 2 )
    IoPriorityThread = 2;
  if ( IoPriorityThread > 1 && !*(_BYTE *)(a1 + 36) && (int)PsGetIoPriorityThread(v5, v7, v9) < 2 )
  {
    PsBoostThreadIoEx((__int64)v5, 0, 0, 0LL);
    IoBoostThreadIoPriority(v5, IoPriorityThread, 0);
    *(_BYTE *)(a1 + 36) = 1;
  }
  PriorityThread = KeQueryPriorityThread(CurrentThread);
  if ( PriorityThread >= 15 )
    PriorityThread = 15;
  if ( PriorityThread > *(_DWORD *)(a1 + 32) )
  {
    *(_DWORD *)(a1 + 32) = PriorityThread;
    if ( PriorityThread > KeQueryPriorityThread((PKTHREAD)v5) )
      KeSetPriorityBoost((__int64)v5, PriorityThread, v11);
  }
  v12 = *(_QWORD *)(a1 + 16);
  v13 = a1 + 8;
  while ( v12 != v13 )
  {
    v16 = *(_DWORD *)(v12 + 56);
    v17 = PriorityThread <= v16;
    if ( PriorityThread <= v16 )
    {
      if ( *(_DWORD *)(v12 + 60) >= IoPriorityThread )
        break;
      v17 = PriorityThread <= v16;
    }
    if ( !v17 )
      v16 = PriorityThread;
    *(_DWORD *)(v12 + 56) = v16;
    v18 = *(_DWORD *)(v12 + 60);
    if ( IoPriorityThread > v18 )
      v18 = IoPriorityThread;
    *(_DWORD *)(v12 + 60) = v18;
    v12 = *(_QWORD *)(v12 + 8);
  }
  Object = 1;
  v23[1] = v23;
  v21 = 6;
  v23[0] = v23;
  v14 = *(_QWORD **)(a1 + 16);
  v22 = 0;
  v23[3] = CurrentThread;
  v24 = PriorityThread;
  v25 = IoPriorityThread;
  v23[2] = a3;
  if ( *v14 != v13 )
    __fastfail(3u);
  v19[0] = a1 + 8;
  v19[1] = v14;
  *v14 = v19;
  *(_QWORD *)(a1 + 16) = v19;
  FsRtlReleaseHeaderMutex(a1, a2);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  FsRtlAcquireHeaderMutex(a1, a2);
  if ( a3 >= 0 && a3 <= *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL) )
    return 0;
  if ( IoPriorityThread < 2 && v25 >= 2 && !*(_BYTE *)(a1 + 36) )
  {
    PsBoostThreadIoEx((__int64)CurrentThread, 0, 0, 0LL);
    *(_BYTE *)(a1 + 36) = 1;
  }
  return 1;
}
