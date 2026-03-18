/*
 * XREFs of CmpFlushNotify @ 0x1404ECD18
 * Callers:
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140449F10 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpDeleteKeyObject @ 0x1404C1BA0 (CmpDeleteKeyObject.c)
 *     NtUnloadKeyEx @ 0x1404ED38C (NtUnloadKeyEx.c)
 *     NtUnloadKey2 @ 0x140580A7C (NtUnloadKey2.c)
 *     CmpRefreshHive @ 0x140662520 (CmpRefreshHive.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
 *     CmpPostNotify @ 0x1404ECFFC (CmpPostNotify.c)
 */

void __fastcall CmpFlushNotify(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v7; // r14
  ULONG_PTR v8; // rbp
  struct _KTHREAD *CurrentThread; // r12
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rcx
  char *v13; // rbx
  ULONG_PTR v14; // rdi
  signed __int32 v15; // eax
  ULONG_PTR v16; // rbx
  signed __int32 v17; // eax

  if ( *(_QWORD *)(a1 + 16) )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
    if ( !a2 )
    {
      v8 = *(_QWORD *)(v7 + 2832);
      CurrentThread = KeGetCurrentThread();
      v10 = KeAbPreAcquire(v8, 0LL, 0LL, a4);
      v11 = v10;
      if ( !_interlockedbittestandreset((volatile signed __int32 *)v8, 0) )
        ExpAcquireFastMutexContended(v8, v10);
      if ( v11 )
        *(_BYTE *)(v11 + 26) |= 1u;
      *(_QWORD *)(v8 + 8) = CurrentThread;
    }
    v12 = *(_QWORD *)(a1 + 16);
    if ( !v12 )
      goto LABEL_20;
    if ( *(_QWORD *)(v12 + 16) != v12 + 16 )
      CmpPostNotify(v12, a2, a3, 267, 0, 0LL, a3);
    v13 = *(char **)(a1 + 16);
    if ( v13 )
    {
      SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(v13 + 56));
      **((_QWORD **)v13 + 1) = *(_QWORD *)v13;
      if ( *(_QWORD *)v13 )
        *(_QWORD *)(*(_QWORD *)v13 + 8LL) = *((_QWORD *)v13 + 1);
      *(_QWORD *)(a1 + 16) = 0LL;
      if ( !a2 )
      {
        v14 = *(_QWORD *)(v7 + 2832);
        *(_QWORD *)(v14 + 8) = 0LL;
        v15 = _InterlockedCompareExchange((volatile signed __int32 *)v14, 1, 0);
        if ( v15 )
          ExpReleaseFastMutexContended((volatile signed __int32 *)v14, v15);
        KeAbPostRelease(v14);
      }
      ExFreePoolWithTag(v13, 0);
    }
    else
    {
LABEL_20:
      if ( !a2 )
      {
        v16 = *(_QWORD *)(v7 + 2832);
        *(_QWORD *)(v16 + 8) = 0LL;
        v17 = _InterlockedCompareExchange((volatile signed __int32 *)v16, 1, 0);
        if ( v17 )
          ExpReleaseFastMutexContended((volatile signed __int32 *)v16, v17);
        KeAbPostRelease(v16);
      }
    }
  }
}
