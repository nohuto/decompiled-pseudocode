/*
 * XREFs of MiAllocateLargeZeroPages @ 0x14062B1CC
 * Callers:
 *     MiCreatePagingFileMap @ 0x1403C89F8 (MiCreatePagingFileMap.c)
 *     MiCreateLargePageVad @ 0x14062B3E0 (MiCreateLargePageVad.c)
 * Callees:
 *     MiZeroInParallel @ 0x1400BC21C (MiZeroInParallel.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiFindLargePageMemory @ 0x14062B53C (MiFindLargePageMemory.c)
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
  v11 = dword_1402FE70C;
  v12 = (unsigned int)dword_1402FE70C;
  if ( 24 * (unsigned __int64)(unsigned int)dword_1402FE70C / 0x18 != dword_1402FE70C
    || (v13 = ExAllocatePoolWithTag(NonPagedPoolNx, 24LL * (unsigned int)dword_1402FE70C, 0x6C646D4Du),
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
