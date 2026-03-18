/*
 * XREFs of CmpFlushNotify @ 0x14049A0FC
 * Callers:
 *     CmpDeleteKeyObject @ 0x14043C400 (CmpDeleteKeyObject.c)
 *     NtUnloadKeyEx @ 0x14049A1D4 (NtUnloadKeyEx.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14049FEF8 (CmpFlushNotifiesOnKeyBodyList.c)
 *     NtUnloadKey2 @ 0x140549F84 (NtUnloadKey2.c)
 *     CmpRefreshHive @ 0x14060D810 (CmpRefreshHive.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x1400F05A0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400F0700 (ExReleaseFastMutexUnsafe.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     SeReleaseSubjectContext @ 0x14041F9B0 (SeReleaseSubjectContext.c)
 *     CmpPostNotify @ 0x14049A9D4 (CmpPostNotify.c)
 */

void __fastcall CmpFlushNotify(__int64 a1, char a2, __int64 a3)
{
  __int64 v6; // rdi
  __int64 v7; // rcx
  char *v8; // rbx

  if ( *(_QWORD *)(a1 + 16) )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL);
    if ( !a2 )
      ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v6 + 2832));
    v7 = *(_QWORD *)(a1 + 16);
    if ( !v7 )
      goto LABEL_14;
    if ( *(_QWORD *)(v7 + 16) != v7 + 16 )
      CmpPostNotify(v7, a2, a3, 267, 0, 0LL, a3);
    v8 = *(char **)(a1 + 16);
    if ( v8 )
    {
      SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(v8 + 56));
      **((_QWORD **)v8 + 1) = *(_QWORD *)v8;
      if ( *(_QWORD *)v8 )
        *(_QWORD *)(*(_QWORD *)v8 + 8LL) = *((_QWORD *)v8 + 1);
      *(_QWORD *)(a1 + 16) = 0LL;
      if ( !a2 )
        ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v6 + 2832));
      ExFreePoolWithTag(v8, 0);
    }
    else
    {
LABEL_14:
      if ( !a2 )
        ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v6 + 2832));
    }
  }
}
