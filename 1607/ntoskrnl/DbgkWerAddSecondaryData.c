/*
 * XREFs of DbgkWerAddSecondaryData @ 0x14061BA64
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x140084C90 (DbgPrintEx.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     DbgkpWerFreePool @ 0x14061C368 (DbgkpWerFreePool.c)
 */

__int64 __fastcall DbgkWerAddSecondaryData(__int64 a1, __int128 *a2, const void *a3, unsigned int a4)
{
  size_t v4; // rsi
  int v8; // eax
  __int64 v9; // rbp
  __int64 v10; // rbp
  int v11; // ecx
  __int64 result; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v14; // rdi
  PVOID v15; // rax
  __int128 v16; // xmm0

  v4 = a4;
  if ( !a1 || !a3 || !a2 || !a4 )
  {
    DbgPrintEx(5u, 0, "DBGK: DbgkWerAddSecondaryData: Invalid parameter.\n\n");
    return 3221225485LL;
  }
  v8 = *(_DWORD *)(a1 + 100);
  if ( v8 != 1 )
  {
    if ( v8 != 2 )
      return 3221225659LL;
    v10 = *(_QWORD *)(a1 + 128);
    if ( v10 )
    {
      v9 = v10 + 32;
      goto LABEL_10;
    }
    return 3221225485LL;
  }
  v9 = a1 + 160;
LABEL_10:
  v11 = *(_DWORD *)(a1 + 92);
  if ( a4 > v11 - *(_DWORD *)(a1 + 96) )
  {
    DbgPrintEx(
      5u,
      0,
      "DBGK: DbgkWerAddSecondaryData: Secondary data exceeds buffer. Size 0x%x Maxsize 0x%x Datasize 0x%x.\n\n",
      a4,
      v11,
      *(_DWORD *)(a1 + 96));
    return 3221225626LL;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x57676244u);
  v14 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  memset(PoolWithTag, 0, 0x28uLL);
  v15 = ExAllocatePoolWithTag(PagedPool, (v4 + 4095) & 0xFFFFFFFFFFFFF000uLL, 0x57676244u);
  v14[2] = v15;
  if ( !v15 )
  {
    DbgkpWerFreePool(v14);
    return 3221225495LL;
  }
  memmove(v15, a3, v4);
  v16 = *a2;
  *((_DWORD *)v14 + 6) = v4;
  *(_OWORD *)v14 = v16;
  *(_DWORD *)(a1 + 96) += v4;
  if ( *(_DWORD *)(a1 + 100) == 1 )
    ++*(_DWORD *)(a1 + 176);
  v14[4] = *(_QWORD *)(v9 + 8);
  result = 0LL;
  *(_QWORD *)(v9 + 8) = v14;
  return result;
}
