/*
 * XREFs of MiComputePageHash @ 0x14010875C
 * Callers:
 *     MiValidatePagefilePageHash @ 0x140108248 (MiValidatePagefilePageHash.c)
 *     MiWritePageFileHash @ 0x140108598 (MiWritePageFileHash.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400A99A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400A9AE0 (MiMapPageInHyperSpaceWorker.c)
 *     MI_GET_PAGING_FILE_OFFSET @ 0x1400BB740 (MI_GET_PAGING_FILE_OFFSET.c)
 */

__int64 __fastcall MiComputePageHash(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // rsi
  _QWORD *v3; // rdi
  unsigned __int8 CurrentIrql; // bp
  unsigned int v6; // eax
  __int64 v7; // r8
  _QWORD *v8; // rcx
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 result; // rax
  unsigned __int64 v14; // rcx

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
    v14 = (__int64)((unsigned __int128)((a1 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
    v2 = MiMapPageInHyperSpaceWorker((v14 >> 63) + v14, 0LL, 0);
    v3 = (_QWORD *)v2;
  }
  v6 = MI_GET_PAGING_FILE_OFFSET(a1 + 16);
  v7 = v3[1];
  v8 = v3 + 2;
  v9 = v3[2];
  v10 = v3[3];
  v11 = *v3 + v6;
  do
  {
    v8 += 4;
    v7 += *(v8 - 1);
    v11 += *(v8 - 2);
    v9 += *v8;
    v10 += v8[1];
  }
  while ( v8 - 2 != v3 + 508 );
  v12 = v7 + v10 + v9 + v11;
  if ( v2 )
  {
    MiUnmapPageInHyperSpaceWorker(v2, 0x11u);
    __writecr8(CurrentIrql);
  }
  result = (unsigned int)(v12 + HIDWORD(v12));
  if ( (unsigned int)result < 3 )
    return 3LL;
  return result;
}
