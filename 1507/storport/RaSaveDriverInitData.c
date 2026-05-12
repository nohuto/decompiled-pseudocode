/*
 * XREFs of RaSaveDriverInitData @ 0x1C004CB60
 * Callers:
 *     StorPortInitialize @ 0x1C0007C00 (StorPortInitialize.c)
 * Callees:
 *     memmove @ 0x1C0012FC0 (memmove.c)
 *     memset @ 0x1C0013300 (memset.c)
 */

__int64 __fastcall RaSaveDriverInitData(__int64 a1, unsigned int *a2)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  _QWORD *v7; // rax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xE0uLL, 0x49486152u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  memset(PoolWithTag, 0, 0xD0uLL);
  memmove(v5, a2, *a2);
  v6 = *(_QWORD *)(a1 + 96);
  v7 = v5 + 26;
  v5[26] = v6;
  v5[27] = a1 + 96;
  if ( *(_QWORD *)(v6 + 8) != a1 + 96 )
    __fastfail(3u);
  *(_QWORD *)(v6 + 8) = v7;
  *(_QWORD *)(a1 + 96) = v7;
  return 0LL;
}
