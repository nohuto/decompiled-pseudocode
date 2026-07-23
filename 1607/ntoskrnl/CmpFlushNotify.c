/*
 * XREFs of CmpFlushNotify @ 0x1403E435C
 * Callers:
 *     NtUnloadKeyEx @ 0x1403E3100 (NtUnloadKeyEx.c)
 *     CmpDeleteKeyObject @ 0x14043B2D0 (CmpDeleteKeyObject.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140518304 (CmpFlushNotifiesOnKeyBodyList.c)
 *     NtUnloadKey2 @ 0x14054A4C4 (NtUnloadKey2.c)
 *     CmpRefreshHive @ 0x14060D8C4 (CmpRefreshHive.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x1400EE420 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400EE580 (ExReleaseFastMutexUnsafe.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmpPostNotify @ 0x1403E38F4 (CmpPostNotify.c)
 *     SeReleaseSubjectContext @ 0x14041E870 (SeReleaseSubjectContext.c)
 */

void __fastcall CmpFlushNotify(__int64 a1, __int64 a2, _QWORD *a3)
{
  char v4; // bp
  __int64 v6; // rdi
  __int64 v7; // rcx
  char *v8; // rbx

  v4 = a2;
  if ( *(_QWORD *)(a1 + 16) )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL);
    if ( !(_BYTE)a2 )
      ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v6 + 2832));
    v7 = *(_QWORD *)(a1 + 16);
    if ( !v7 )
      goto LABEL_14;
    if ( *(_QWORD *)(v7 + 16) != v7 + 16 )
      CmpPostNotify(v7, a2, (__int64)a3, 0x10Bu, 0, 0LL, a3);
    v8 = *(char **)(a1 + 16);
    if ( v8 )
    {
      SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(v8 + 56));
      **((_QWORD **)v8 + 1) = *(_QWORD *)v8;
      if ( *(_QWORD *)v8 )
        *(_QWORD *)(*(_QWORD *)v8 + 8LL) = *((_QWORD *)v8 + 1);
      *(_QWORD *)(a1 + 16) = 0LL;
      if ( !v4 )
        ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v6 + 2832));
      ExFreePoolWithTag(v8, 0);
    }
    else
    {
LABEL_14:
      if ( !v4 )
        ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v6 + 2832));
    }
  }
}
