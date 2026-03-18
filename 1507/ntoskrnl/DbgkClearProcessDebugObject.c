/*
 * XREFs of DbgkClearProcessDebugObject @ 0x1405685D8
 * Callers:
 *     PspTerminateAllThreads @ 0x14041CBA4 (PspTerminateAllThreads.c)
 *     NtRemoveProcessDebug @ 0x140668A2C (NtRemoveProcessDebug.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     DbgkpMarkProcessPeb @ 0x140666EA8 (DbgkpMarkProcessPeb.c)
 *     DbgkpWakeTarget @ 0x140668390 (DbgkpWakeTarget.c)
 */

__int64 __fastcall DbgkClearProcessDebugObject(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v10; // rdi
  int v11; // r14d
  unsigned __int8 v12; // bl
  signed __int32 v13; // eax
  __int64 v14; // r9
  __int64 v16; // rax
  __int64 v17; // rsi
  unsigned __int8 v18; // r12
  __int64 **v19; // rcx
  __int64 ***v20; // rax
  __int64 **v21; // r9
  __int64 ****v22; // r8
  __int64 ***v23; // r8
  unsigned __int8 v24; // si
  signed __int32 v25; // eax
  __int64 *v26; // rcx
  __int64 *v27; // rax
  __int64 *v28; // [rsp+20h] [rbp-10h] BYREF
  __int64 **v29; // [rsp+28h] [rbp-8h]

  v6 = KeAbPreAcquire((ULONG_PTR)&DbgkpProcessDebugPortMutex, 0LL, 0LL, a4);
  v7 = v6;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&DbgkpProcessDebugPortMutex, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&DbgkpProcessDebugPortMutex, v6);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  qword_14034D468 = (__int64)KeGetCurrentThread();
  dword_14034D490 = CurrentIrql;
  v10 = *(_QWORD *)(BugCheckParameter1 + 1056);
  if ( v10 && (v10 == a2 || !a2) )
  {
    *(_QWORD *)(BugCheckParameter1 + 1056) = 0LL;
    v11 = 0;
  }
  else
  {
    v10 = 0LL;
    v11 = -1073740973;
  }
  qword_14034D468 = 0LL;
  v12 = dword_14034D490;
  v13 = _InterlockedCompareExchange((volatile signed __int32 *)&DbgkpProcessDebugPortMutex, 1, 0);
  if ( v13 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&DbgkpProcessDebugPortMutex, v13);
  __writecr8(v12);
  KeAbPostRelease((ULONG_PTR)&DbgkpProcessDebugPortMutex);
  if ( v11 >= 0 )
    DbgkpMarkProcessPeb(BugCheckParameter1);
  if ( v10 )
  {
    v29 = &v28;
    v28 = (__int64 *)&v28;
    v16 = KeAbPreAcquire(v10 + 24, 0LL, 0LL, v14);
    v17 = v16;
    v18 = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)(v10 + 24), 0) )
      ExpAcquireFastMutexContended(v10 + 24, v16);
    if ( v17 )
      *(_BYTE *)(v17 + 26) |= 1u;
    *(_QWORD *)(v10 + 32) = KeGetCurrentThread();
    *(_DWORD *)(v10 + 72) = v18;
    v19 = *(__int64 ***)(v10 + 80);
    while ( v19 != (__int64 **)(v10 + 80) )
    {
      v20 = (__int64 ***)v19;
      v19 = (__int64 **)*v19;
      if ( v20[7] == (__int64 **)BugCheckParameter1 )
      {
        v21 = *v20;
        v22 = (__int64 ****)v20[1];
        if ( (*v20)[1] != (__int64 *)v20 || *v22 != v20 )
          __fastfail(3u);
        *v22 = (__int64 ***)v21;
        v21[1] = (__int64 *)v22;
        v23 = (__int64 ***)v29;
        *v20 = &v28;
        v20[1] = (__int64 **)v23;
        if ( *v23 != &v28 )
          __fastfail(3u);
        *v23 = (__int64 **)v20;
        v29 = (__int64 **)v20;
      }
    }
    *(_QWORD *)(v10 + 32) = 0LL;
    v24 = *(_BYTE *)(v10 + 72);
    v25 = _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 24), 1, 0);
    if ( v25 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)(v10 + 24), v25);
    __writecr8(v24);
    KeAbPostRelease(v10 + 24);
    ObfDereferenceObject((PVOID)v10);
    while ( 1 )
    {
      v26 = v28;
      if ( v28 == (__int64 *)&v28 )
        break;
      v27 = (__int64 *)*v28;
      if ( (__int64 **)v28[1] != &v28 || (__int64 *)v27[1] != v28 )
        __fastfail(3u);
      v28 = (__int64 *)*v28;
      v27[1] = (__int64)&v28;
      *((_DWORD *)v26 + 18) = -1073740972;
      DbgkpWakeTarget();
    }
  }
  return (unsigned int)v11;
}
