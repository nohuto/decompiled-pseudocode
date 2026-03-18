/*
 * XREFs of MiAllocateLargeZeroPages @ 0x1406A9A90
 * Callers:
 *     MiCreatePagingFileMap @ 0x1404B258C (MiCreatePagingFileMap.c)
 *     MiCreateLargePageVad @ 0x1406A9CA4 (MiCreateLargePageVad.c)
 * Callees:
 *     MiZeroInParallel @ 0x140075AD4 (MiZeroInParallel.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MiFindLargePageMemory @ 0x1406A9E00 (MiFindLargePageMemory.c)
 */

_QWORD *__fastcall MiAllocateLargeZeroPages(int a1, int a2, int a3, int a4)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v9; // rbx
  unsigned int v11; // ebp
  __int64 v12; // rsi
  _QWORD *v13; // rax
  void *v14; // rdi
  _QWORD *v15; // rax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6C646D4Du);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  PoolWithTag[4] = 0LL;
  *((_BYTE *)PoolWithTag + 28) = 0;
  v11 = dword_14034EBBC;
  v12 = (unsigned int)dword_14034EBBC;
  if ( 24 * (unsigned __int64)(unsigned int)dword_14034EBBC / 0x18 != dword_14034EBBC
    || (v13 = ExAllocatePoolWithTag(NonPagedPoolNx, 24LL * (unsigned int)dword_14034EBBC, 0x6C646D4Du),
        (v14 = v13) == 0LL) )
  {
    ExFreePoolWithTag(v9, 0);
    return 0LL;
  }
  if ( v11 )
  {
    v15 = v13 + 2;
    do
    {
      *(v15 - 1) = 0LL;
      *v15 = 0xFFFFFFFFFLL;
      v15 += 3;
      --v12;
    }
    while ( v12 );
  }
  v9[1] = v9;
  *v9 = v9;
  *((_DWORD *)v9 + 6) = 0;
  v9[2] = v14;
  if ( (unsigned int)MiFindLargePageMemory(a1, (_DWORD)v9, a2, a3, a4) )
  {
    if ( *((_DWORD *)v9 + 6) == 1 )
      MiZeroInParallel((__int64)v14, v11, 0);
  }
  else
  {
    ExFreePoolWithTag(v9, 0);
    v9 = 0LL;
  }
  ExFreePoolWithTag(v14, 0);
  return v9;
}
