/*
 * XREFs of MiUnlinkSubsectionWaitBlock @ 0x1401EDB84
 * Callers:
 *     MiChangingSubsectionProtos @ 0x1401ED094 (MiChangingSubsectionProtos.c)
 *     MiAllocateFileExtents @ 0x14065A430 (MiAllocateFileExtents.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall MiUnlinkSubsectionWaitBlock(__int64 *a1, __int64 a2, int a3)
{
  __int64 v3; // rsi
  KIRQL v6; // dl
  _QWORD *v7; // rax
  _QWORD *v8; // rcx

  v3 = *a1;
  if ( a3 == 1 )
    v6 = 17;
  else
    v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
  if ( !*(_DWORD *)(a2 + 12) )
  {
    v7 = (_QWORD *)a1[3];
    v8 = 0LL;
    if ( !v7 )
      goto LABEL_10;
    do
    {
      if ( v7 == (_QWORD *)a2 )
        break;
      v8 = v7;
      v7 = (_QWORD *)*v7;
    }
    while ( v7 );
    if ( v8 )
      *v8 = *v7;
    else
LABEL_10:
      a1[3] = *v7;
  }
  if ( v6 != 17 )
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72), v6);
}
