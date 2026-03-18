/*
 * XREFs of FsRtlpWaitForIoAtEof @ 0x140101EB4
 * Callers:
 *     FsRtlGetIoAtEof @ 0x1400FF160 (FsRtlGetIoAtEof.c)
 *     FsRtlAcquireEofLock @ 0x1400FFD60 (FsRtlAcquireEofLock.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     PsBoostThreadIoEx @ 0x140040D00 (PsBoostThreadIoEx.c)
 *     PsGetIoPriorityThread @ 0x140070170 (PsGetIoPriorityThread.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeQueryPriorityThread @ 0x140102090 (KeQueryPriorityThread.c)
 *     KeSetPriorityBoost @ 0x1401020B0 (KeSetPriorityBoost.c)
 *     IoBoostThreadIoPriority @ 0x1401028BC (IoBoostThreadIoPriority.c)
 */

char __fastcall FsRtlpWaitForIoAtEof(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r15
  struct _KTHREAD *v4; // r14
  int IoPriorityThread; // esi
  KPRIORITY PriorityThread; // edi
  __int64 v8; // rcx
  __int64 v9; // rdx
  _QWORD *v10; // rax
  KPRIORITY v12; // eax
  bool v13; // cc
  int v14; // eax
  _QWORD v15[2]; // [rsp+30h] [rbp-40h] BYREF
  __int16 Object; // [rsp+40h] [rbp-30h] BYREF
  char v17; // [rsp+42h] [rbp-2Eh]
  int v18; // [rsp+44h] [rbp-2Ch]
  _QWORD v19[4]; // [rsp+48h] [rbp-28h] BYREF
  KPRIORITY v20; // [rsp+68h] [rbp-8h]
  int v21; // [rsp+6Ch] [rbp-4h]

  CurrentThread = KeGetCurrentThread();
  v4 = *(struct _KTHREAD **)a1;
  IoPriorityThread = PsGetIoPriorityThread((__int64)CurrentThread);
  if ( IoPriorityThread >= 2 )
    IoPriorityThread = 2;
  if ( IoPriorityThread > 1 && !*(_BYTE *)(a1 + 36) && (int)PsGetIoPriorityThread((__int64)v4) < 2 )
  {
    PsBoostThreadIoEx((__int64)v4, 0, 0, 0LL);
    IoBoostThreadIoPriority(v4, (unsigned int)IoPriorityThread);
    *(_BYTE *)(a1 + 36) = 1;
  }
  PriorityThread = KeQueryPriorityThread(CurrentThread);
  if ( PriorityThread >= 15 )
    PriorityThread = 15;
  if ( PriorityThread > *(_DWORD *)(a1 + 32) )
  {
    *(_DWORD *)(a1 + 32) = PriorityThread;
    if ( PriorityThread > KeQueryPriorityThread(v4) )
      KeSetPriorityBoost(v4, (unsigned int)PriorityThread);
  }
  v8 = *(_QWORD *)(a1 + 16);
  v9 = a1 + 8;
  while ( v8 != v9 )
  {
    v12 = *(_DWORD *)(v8 + 56);
    v13 = PriorityThread <= v12;
    if ( PriorityThread <= v12 )
    {
      if ( *(_DWORD *)(v8 + 60) >= IoPriorityThread )
        break;
      v13 = PriorityThread <= v12;
    }
    if ( !v13 )
      v12 = PriorityThread;
    *(_DWORD *)(v8 + 56) = v12;
    v14 = *(_DWORD *)(v8 + 60);
    if ( IoPriorityThread > v14 )
      v14 = IoPriorityThread;
    *(_DWORD *)(v8 + 60) = v14;
    v8 = *(_QWORD *)(v8 + 8);
  }
  Object = 1;
  v19[1] = v19;
  v17 = 6;
  v19[0] = v19;
  v10 = *(_QWORD **)(a1 + 16);
  v18 = 0;
  v19[3] = CurrentThread;
  v20 = PriorityThread;
  v21 = IoPriorityThread;
  v19[2] = a2;
  v15[0] = a1 + 8;
  v15[1] = v10;
  if ( *v10 != v9 )
    __fastfail(3u);
  *v10 = v15;
  *(_QWORD *)(a1 + 16) = v15;
  KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(*(_QWORD *)(a1 + 24) + 48LL));
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  ExAcquireFastMutex(*(PFAST_MUTEX *)(*(_QWORD *)(a1 + 24) + 48LL));
  if ( a2 >= 0 && a2 <= *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL) )
    return 0;
  if ( IoPriorityThread < 2 && v21 >= 2 && !*(_BYTE *)(a1 + 36) )
  {
    PsBoostThreadIoEx((__int64)CurrentThread, 0, 0, 0LL);
    *(_BYTE *)(a1 + 36) = 1;
  }
  return 1;
}
