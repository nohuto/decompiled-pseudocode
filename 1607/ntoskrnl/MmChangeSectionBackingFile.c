/*
 * XREFs of MmChangeSectionBackingFile @ 0x1400FAD40
 * Callers:
 *     FsRtlChangeBackingFileObject @ 0x1401333C4 (FsRtlChangeBackingFileObject.c)
 *     MiCreateSection @ 0x14042BC10 (MiCreateSection.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400C0DF0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ObFastReplaceObject @ 0x1400CADF4 (ObFastReplaceObject.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400D1DD0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 */

__int64 __fastcall MmChangeSectionBackingFile(_QWORD *a1, _QWORD *a2, int a3)
{
  int v5; // edi
  KIRQL v6; // r14
  __int64 v7; // rbx
  volatile __int64 *v8; // rcx
  unsigned __int64 v9; // rdi
  void *v10; // rcx
  int v11; // edx
  volatile LONG *v12; // rcx

  if ( (a3 & 0xFFFFFFFC) != 0 || a3 == 3 )
    return 3221225713LL;
  if ( a1 && a1[5] != a2[5] )
    return 3221225712LL;
  v5 = a3 & 1;
  while ( 1 )
  {
    v6 = ExAcquireSpinLockExclusive(&dword_140326580);
    if ( v5 )
      v7 = *(_QWORD *)a2[5];
    else
      v7 = *(_QWORD *)(a2[5] + 16LL);
    if ( !v7 )
    {
      v12 = &dword_140326580;
      goto LABEL_18;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v7 + 72)) )
      break;
    ExReleaseSpinLockExclusive(&dword_140326580, v6);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140326580);
  if ( (*(_DWORD *)(v7 + 56) & 1) == 0 )
  {
    v8 = (volatile __int64 *)(v7 + 64);
    if ( !a1 )
    {
      v9 = *v8 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( !v9 )
        goto LABEL_14;
      ObFastReplaceObject(v8, (__int64)a2);
      ObfReferenceObjectWithTag(a2, 0x746C6644u);
      v10 = (void *)v9;
      goto LABEL_13;
    }
    if ( (_QWORD *)(*v8 & 0xFFFFFFFFFFFFFFF0uLL) == a1 )
    {
      ObFastReplaceObject(v8, (__int64)a2);
      ObfReferenceObjectWithTag(a2, 0x746C6644u);
      v10 = a1;
LABEL_13:
      ObDereferenceObjectDeferDeleteWithTag(v10, 0x746C6644u);
    }
  }
LABEL_14:
  v11 = *(_DWORD *)(v7 + 56);
  if ( (v11 & 0x200) != 0 && ((__int64)KeGetCurrentThread()[1].Queue & 0x40) == 0 )
    *(_DWORD *)(v7 + 56) = v11 & 0xFFFFFDFF;
  v12 = (volatile LONG *)(v7 + 72);
LABEL_18:
  ExReleaseSpinLockExclusive(v12, v6);
  return 0LL;
}
