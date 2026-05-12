/*
 * XREFs of RaSaveDriverInitData @ 0x1C0057A54
 * Callers:
 *     StorPortInitialize @ 0x1C000D300 (StorPortInitialize.c)
 * Callees:
 *     memmove @ 0x1C001AA40 (memmove.c)
 *     memset @ 0x1C001AD80 (memset.c)
 */

__int64 __fastcall RaSaveDriverInitData(__int64 a1, unsigned int *a2)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rcx
  __int64 v7; // rdx
  _QWORD *v8; // rax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xE0uLL, 0x49486152u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  memset(PoolWithTag, 0, 0xD0uLL);
  memmove(v5, a2, *a2);
  v6 = (_QWORD *)(a1 + 96);
  v7 = *(_QWORD *)(a1 + 96);
  v8 = v5 + 26;
  if ( *(_QWORD *)(v7 + 8) != a1 + 96 )
    __fastfail(3u);
  *v8 = v7;
  v5[27] = v6;
  *(_QWORD *)(v7 + 8) = v8;
  *v6 = v8;
  return 0LL;
}
