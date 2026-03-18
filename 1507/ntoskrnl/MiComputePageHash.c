/*
 * XREFs of MiComputePageHash @ 0x140231C88
 * Callers:
 *     MiValidatePagefilePageHash @ 0x140231FD8 (MiValidatePagefilePageHash.c)
 *     MiWritePageFileHash @ 0x14023228C (MiWritePageFileHash.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14005A4E0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400E6520 (MiMapPageInHyperSpaceWorker.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 */

__int64 __fastcall MiComputePageHash(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // rdi
  _QWORD *v3; // r9
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 v6; // rcx
  __int64 PteShadow; // rax
  _QWORD *v8; // rbp
  unsigned __int64 v9; // rax
  __int64 v10; // r8
  _QWORD *v11; // rcx
  __int64 v12; // r10
  __int64 v13; // r11
  __int64 v14; // rbx
  __int64 v15; // rbx
  __int64 result; // rax

  v2 = 0LL;
  v3 = a2;
  if ( a2 )
  {
    CurrentIrql = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v6 = (__int64)((unsigned __int128)((a1 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
    v2 = MiMapPageInHyperSpaceWorker((v6 >> 63) + v6, 0LL);
    v3 = (_QWORD *)v2;
  }
  PteShadow = *(_QWORD *)(a1 + 16);
  v8 = v3 + 508;
  if ( (unsigned __int64)(a1 + 0x90482413010LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(a1 + 16, *(_QWORD *)(a1 + 16));
  if ( (PteShadow & 4) != 0 )
    v9 = MiReverseSwizzleInvalidPte(PteShadow) >> 32;
  else
    LODWORD(v9) = 0;
  v10 = v3[1];
  v11 = v3 + 2;
  v12 = v3[2];
  v13 = v3[3];
  v14 = *v3 + (unsigned int)v9;
  do
  {
    v11 += 4;
    v10 += *(v11 - 1);
    v14 += *(v11 - 2);
    v12 += *v11;
    v13 += v11[1];
  }
  while ( v11 - 2 != v8 );
  v15 = v10 + v13 + v12 + v14;
  if ( v2 )
  {
    MiUnmapPageInHyperSpaceWorker(v2, 0x11u);
    __writecr8(CurrentIrql);
  }
  result = (unsigned int)(v15 + HIDWORD(v15));
  if ( (unsigned int)result < 3 )
    return 3LL;
  return result;
}
