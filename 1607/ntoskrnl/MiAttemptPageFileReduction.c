/*
 * XREFs of MiAttemptPageFileReduction @ 0x1401EDC04
 * Callers:
 *     MiProcessDereferenceList @ 0x140122B0C (MiProcessDereferenceList.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiOkToShrinkPageFiles @ 0x140076084 (MiOkToShrinkPageFiles.c)
 *     MiQueueSyncModifiedWriterApc @ 0x14010DBB0 (MiQueueSyncModifiedWriterApc.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     IoSetInformation @ 0x1404CA404 (IoSetInformation.c)
 */

char __fastcall MiAttemptPageFileReduction(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r14
  KIRQL v4; // al
  __int64 v5; // rax
  int *v6; // rbx
  __int64 *v7; // rsi
  __int64 v8; // rcx
  __int64 FileInformation; // [rsp+30h] [rbp-D0h] BYREF
  int v11[24]; // [rsp+40h] [rbp-C0h] BYREF
  int Object[28]; // [rsp+A0h] [rbp-60h] BYREF

  memset(Object, 0, 0x68uLL);
  LOWORD(Object[0]) = 0;
  Object[1] = 0;
  v2 = 16LL;
  v3 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)&Object[4] = &Object[2];
  *(_QWORD *)&Object[2] = &Object[2];
  BYTE2(Object[0]) = 6;
  *(_QWORD *)&Object[6] = v3;
  if ( (*(_BYTE *)(a1 + 79) & 0x10) != 0 )
  {
    v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 1664));
    *(_QWORD *)(a1 + 32) = 0LL;
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 1664), v4);
    LOBYTE(v5) = MiOkToShrinkPageFiles(*(_QWORD *)(v3 + 7208), *(_QWORD *)(v3 + 7336));
    if ( !(_DWORD)v5 )
      return v5;
    Object[8] = 16;
  }
  else
  {
    Object[8] = *(unsigned __int8 *)(a1 + 76);
    Object[9] = *(_DWORD *)(a1 + 40);
  }
  MiQueueSyncModifiedWriterApc(v3, (__int64)v11, (__int64)MiAttemptPageFileReductionApc, (__int64)Object, Object);
  v6 = &Object[10];
  v7 = (__int64 *)(v3 + 6304);
  do
  {
    v5 = (unsigned int)*v6;
    if ( (_DWORD)v5 )
    {
      v8 = *v7;
      FileInformation = v5 << 12;
      LOBYTE(v5) = IoSetInformation(*(PFILE_OBJECT *)(v8 + 56), FileAllocationInformation, 8u, &FileInformation);
    }
    ++v7;
    ++v6;
    --v2;
  }
  while ( v2 );
  return v5;
}
