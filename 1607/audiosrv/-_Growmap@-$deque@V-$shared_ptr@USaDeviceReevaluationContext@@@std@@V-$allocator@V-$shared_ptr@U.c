/*
 * XREFs of ?_Growmap@?$deque@V?$shared_ptr@USaDeviceReevaluationContext@@@std@@V?$allocator@V?$shared_ptr@USaDeviceReevaluationContext@@@std@@@2@@std@@IEAAX_K@Z @ 0x180079394
 * Callers:
 *     ?push_back@?$deque@V?$shared_ptr@USaDeviceReevaluationContext@@@std@@V?$allocator@V?$shared_ptr@USaDeviceReevaluationContext@@@std@@@2@@std@@QEAAXAEBV?$shared_ptr@USaDeviceReevaluationContext@@@2@@Z @ 0x180079650 (-push_back@-$deque@V-$shared_ptr@USaDeviceReevaluationContext@@@std@@V-$allocator@V-$shared_ptr@.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180028674 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800291CC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     memset @ 0x180036D30 (memset.c)
 */

void __fastcall std::deque<std::shared_ptr<SaDeviceReevaluationContext>>::_Growmap(_QWORD *a1)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rsi
  _QWORD *v6; // r15
  size_t v7; // rbx
  char *v8; // rax
  const void *v9; // rdx
  char *v10; // rcx
  char *v11; // rax
  void *v12; // rcx
  size_t v13; // r8
  char *v14; // rax
  _QWORD *v15; // rcx

  v2 = 1LL;
  v3 = a1[2];
  if ( v3 )
    v2 = v3;
  while ( v2 == v3 || v2 < 8 )
  {
    if ( 0xFFFFFFFFFFFFFFFLL - v2 < v2 )
      std::_Xlength_error("deque<T> too long");
    v2 *= 2LL;
  }
  v4 = a1[3];
  v5 = v2 - v3;
  v6 = std::_Allocate(v5 + v3, 8uLL);
  v7 = (8LL * a1[2] - 8 * v4) & 0xFFFFFFFFFFFFFFF8uLL;
  v8 = (char *)memmove(&v6[v4], (const void *)(a1[1] + 8 * v4), v7);
  v9 = (const void *)a1[1];
  v10 = &v8[v7];
  if ( v4 > v5 )
  {
    memmove(v10, v9, 8 * v5);
    v14 = (char *)memmove(v6, (const void *)(8 * v5 + a1[1]), (8 * v4 - 8 * v5) & 0xFFFFFFFFFFFFFFF8uLL)
        + ((8 * v4 - 8 * v5) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v5 )
      goto LABEL_15;
    v12 = v14;
    v13 = 8 * v5;
    goto LABEL_14;
  }
  v11 = (char *)memmove(v10, v9, 8 * v4) + 8 * v4;
  if ( v5 != v4 )
    memset(v11, 0, 8 * (v5 - v4));
  if ( v4 )
  {
    v12 = v6;
    v13 = 8 * v4;
LABEL_14:
    memset(v12, 0, v13);
  }
LABEL_15:
  v15 = (_QWORD *)a1[1];
  if ( v15 )
    std::_Deallocate(v15, a1[2], 8uLL);
  a1[1] = v6;
  a1[2] += v5;
}
