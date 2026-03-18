/*
 * XREFs of MiAttemptPageFileReduction @ 0x1401DBFE8
 * Callers:
 *     MiProcessDereferenceList @ 0x140113D70 (MiProcessDereferenceList.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiOkToShrinkPageFiles @ 0x14001BE3C (MiOkToShrinkPageFiles.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     MiQueueSyncModifiedWriterApc @ 0x1401DD0B0 (MiQueueSyncModifiedWriterApc.c)
 *     IoSetInformation @ 0x1404C362C (IoSetInformation.c)
 */

char __fastcall MiAttemptPageFileReduction(__int64 a1)
{
  bool v2; // zf
  __int64 v3; // rsi
  __int64 v4; // r14
  KIRQL v5; // al
  __int64 v6; // rax
  int *v7; // rbx
  __int64 *v8; // rdi
  __int64 v9; // rcx
  __int64 FileInformation; // [rsp+30h] [rbp-D0h] BYREF
  int v12; // [rsp+40h] [rbp-C0h] BYREF
  int Object[28]; // [rsp+A0h] [rbp-60h] BYREF

  memset(Object, 0, 0x68uLL);
  Object[1] = 0;
  v2 = *(_BYTE *)(a1 + 89) == 0;
  v3 = 16LL;
  v4 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)&Object[4] = &Object[2];
  *(_QWORD *)&Object[2] = &Object[2];
  LOWORD(Object[0]) = 0;
  BYTE2(Object[0]) = 6;
  *(_QWORD *)&Object[6] = v4;
  if ( v2 )
  {
    Object[8] = *(unsigned __int8 *)(a1 + 76);
    Object[9] = *(_DWORD *)(a1 + 40);
  }
  else
  {
    v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 1536));
    *(_QWORD *)(a1 + 32) = 0LL;
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 1536), v5);
    LOBYTE(v6) = MiOkToShrinkPageFiles(*(_QWORD *)(v4 + 5960), *(_QWORD *)(v4 + 6120));
    if ( !(_DWORD)v6 )
      return v6;
    Object[8] = 16;
  }
  MiQueueSyncModifiedWriterApc(v4, (int)&v12, (int)MiAttemptPageFileReductionApc, (int)Object, Object);
  v7 = &Object[10];
  v8 = (__int64 *)(v4 + 5728);
  do
  {
    v6 = (unsigned int)*v7;
    if ( (_DWORD)v6 )
    {
      v9 = *v8;
      FileInformation = v6 << 12;
      LOBYTE(v6) = IoSetInformation(*(PFILE_OBJECT *)(v9 + 56), FileAllocationInformation, 8u, &FileInformation);
    }
    ++v8;
    ++v7;
    --v3;
  }
  while ( v3 );
  return v6;
}
