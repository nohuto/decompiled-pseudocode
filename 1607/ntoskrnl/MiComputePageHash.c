/*
 * XREFs of MiComputePageHash @ 0x140115750
 * Callers:
 *     MiValidatePagefilePageHash @ 0x140115370 (MiValidatePagefilePageHash.c)
 *     MiWritePageFileHash @ 0x1401155B0 (MiWritePageFileHash.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14001D720 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140034510 (MiMapPageInHyperSpaceWorker.c)
 *     MiGetPagingFileOffset @ 0x1400B7610 (MiGetPagingFileOffset.c)
 */

__int64 __fastcall MiComputePageHash(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  unsigned __int8 CurrentIrql; // di
  _QWORD *v5; // rsi
  unsigned int PagingFileOffset; // eax
  __int64 v7; // rdx
  __int64 v8; // r10
  _QWORD *v9; // r9
  __int64 v10; // r8
  _QWORD *v11; // rcx
  __int64 v12; // r11
  __int64 v13; // rbx
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 result; // rax
  unsigned __int64 v17; // rcx

  v2 = a2;
  if ( a2 )
  {
    CurrentIrql = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v17 = (__int64)((unsigned __int128)((a1 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
    v2 = MiMapPageInHyperSpaceWorker((v17 >> 63) + v17, 0LL, 0);
  }
  v5 = (_QWORD *)(v2 + 4064);
  PagingFileOffset = MiGetPagingFileOffset(a1 + 16);
  v10 = v9[1];
  v11 = v9 + 2;
  v12 = v9[2];
  v13 = *v9 + PagingFileOffset;
  v14 = v9[3];
  do
  {
    v11 += 4;
    v10 += *(v11 - 1);
    v13 += *(v11 - 2);
    v12 += *v11;
    v14 += v11[1];
  }
  while ( v11 - 2 != v5 );
  v15 = v10 + v14 + v12 + v13;
  if ( v8 )
  {
    LOBYTE(v7) = 17;
    MiUnmapPageInHyperSpaceWorker(v8, v7);
    __writecr8(CurrentIrql);
  }
  result = (unsigned int)(v15 + HIDWORD(v15));
  if ( (unsigned int)result < 3 )
    return 3LL;
  return result;
}
