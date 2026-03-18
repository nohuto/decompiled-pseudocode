/*
 * XREFs of ProcessorpIndexInstance @ 0x1C006FFF0
 * Callers:
 *     ProcessorAddInstance @ 0x1C006FEA4 (ProcessorAddInstance.c)
 * Callees:
 *     memset @ 0x1C0023B40 (memset.c)
 */

__int64 __fastcall ProcessorpIndexInstance(int a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v5; // rbx
  int v6; // eax
  int v7; // esi
  __int64 v8; // rdi
  _DWORD *i; // rbx
  PVOID PoolWithTag; // rax
  __int64 **v12; // rax
  _DWORD *v13; // rax
  _QWORD *v14; // rax

  v2 = *(unsigned __int16 *)(a2 + 4);
  v5 = *(_QWORD *)(ProcessorGroupByNumber + 8 * v2);
  if ( !v5 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x49706341u);
    v5 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    memset(PoolWithTag, 0, 0x28uLL);
    *(_WORD *)(v5 + 32) = v2;
    *(_DWORD *)(v5 + 36) = *(_DWORD *)(a2 + 20);
    *(_QWORD *)(v5 + 24) = v5 + 16;
    *(_QWORD *)(v5 + 16) = v5 + 16;
    v12 = (__int64 **)qword_1C00590D8;
    *(_QWORD *)v5 = &ProcessorGroupListHead;
    *(_QWORD *)(v5 + 8) = v12;
    if ( *v12 != &ProcessorGroupListHead )
      __fastfail(3u);
    *v12 = (__int64 *)v5;
    qword_1C00590D8 = v5;
    *(_QWORD *)(ProcessorGroupByNumber + 8 * v2) = v5;
  }
  v6 = 1;
  if ( *(_DWORD *)(a2 + 20) != 1 )
    v6 = *(_DWORD *)(v5 + 36);
  if ( v6 == *(_DWORD *)(v5 + 36) )
  {
    if ( v6 == 3 )
      v7 = *(_DWORD *)(a2 + 16);
    else
      v7 = 0;
  }
  else
  {
    v7 = (a1 << 16) | 0xFFFF;
  }
  v8 = v5 + 16;
  for ( i = *(_DWORD **)(v5 + 16); i != (_DWORD *)v8; i = *(_DWORD **)i )
  {
    if ( i[4] == v7 )
      goto LABEL_10;
  }
  v13 = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x49706341u);
  i = v13;
  if ( v13 )
  {
    memset(v13, 0, 0x28uLL);
    i[4] = v7;
    i[8] = *(unsigned __int8 *)(a2 + 6);
    v14 = *(_QWORD **)(v8 + 8);
    *(_QWORD *)i = v8;
    *((_QWORD *)i + 1) = v14;
    if ( *v14 != v8 )
      __fastfail(3u);
    *v14 = i;
    *(_QWORD *)(v8 + 8) = i;
LABEL_10:
    *((_QWORD *)i + 3) |= 1LL << *(_BYTE *)(a2 + 6);
    return 0LL;
  }
  return 3221225626LL;
}
