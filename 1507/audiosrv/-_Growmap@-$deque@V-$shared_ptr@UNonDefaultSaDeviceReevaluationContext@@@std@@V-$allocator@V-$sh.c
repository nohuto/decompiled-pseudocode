/*
 * XREFs of ?_Growmap@?$deque@V?$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@std@@V?$allocator@V?$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@std@@@2@@std@@IEAAX_K@Z @ 0x1800933D4
 * Callers:
 *     ?push_back@?$deque@V?$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@std@@V?$allocator@V?$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@std@@@2@@std@@QEAAXAEBV?$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@2@@Z @ 0x180093658 (-push_back@-$deque@V-$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@std@@V-$allocator@V-$s.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x180042E78 (-_Xbad_alloc@std@@YAXXZ.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180042EC8 (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     memset_0 @ 0x180043A34 (memset_0.c)
 *     ??$_Uninitialized_copy@PEAPEAV?$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@std@@PEAPEAV12@U?$_Wrap_alloc@V?$allocator@PEAV?$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@std@@@std@@@2@@std@@YAPEAPEAV?$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@0@PEAPEAV10@00AEAU?$_Wrap_alloc@V?$allocator@PEAV?$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@std@@@std@@@0@@Z @ 0x180091590 (--$_Uninitialized_copy@PEAPEAV-$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@std@@PEAPEAV.c)
 */

void __fastcall std::deque<std::shared_ptr<NonDefaultSaDeviceReevaluationContext>>::_Growmap(_QWORD *a1)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  char *v6; // r14
  unsigned __int64 v7; // rcx
  void *v8; // rax
  void *v9; // rcx
  void *v10; // rax
  void *v11; // rcx
  size_t v12; // r8
  __int64 v13; // rax
  void *v14; // rcx

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
  v6 = 0LL;
  v7 = v5 + v3;
  if ( v7 )
  {
    if ( v7 > 0x1FFFFFFFFFFFFFFFLL || (v6 = (char *)operator new(8 * v7)) == 0LL )
      std::_Xbad_alloc();
  }
  v8 = (void *)std::_Uninitialized_copy<std::shared_ptr<NonDefaultSaDeviceReevaluationContext> * *,std::shared_ptr<NonDefaultSaDeviceReevaluationContext> * *,std::_Wrap_alloc<std::allocator<std::shared_ptr<NonDefaultSaDeviceReevaluationContext> *>>>(
                 (void *)(a1[1] + 8 * v4),
                 a1[1] + 8LL * a1[2],
                 &v6[8 * v4]);
  v9 = (void *)a1[1];
  if ( v4 > v5 )
  {
    std::_Uninitialized_copy<std::shared_ptr<NonDefaultSaDeviceReevaluationContext> * *,std::shared_ptr<NonDefaultSaDeviceReevaluationContext> * *,std::_Wrap_alloc<std::allocator<std::shared_ptr<NonDefaultSaDeviceReevaluationContext> *>>>(
      v9,
      (__int64)v9 + 8 * v5,
      v8);
    v13 = std::_Uninitialized_copy<std::shared_ptr<NonDefaultSaDeviceReevaluationContext> * *,std::shared_ptr<NonDefaultSaDeviceReevaluationContext> * *,std::_Wrap_alloc<std::allocator<std::shared_ptr<NonDefaultSaDeviceReevaluationContext> *>>>(
            (void *)(a1[1] + 8 * v5),
            a1[1] + 8 * v4,
            v6);
    if ( !v5 )
      goto LABEL_19;
    v11 = (void *)v13;
    v12 = 8 * v5;
    goto LABEL_18;
  }
  v10 = (void *)std::_Uninitialized_copy<std::shared_ptr<NonDefaultSaDeviceReevaluationContext> * *,std::shared_ptr<NonDefaultSaDeviceReevaluationContext> * *,std::_Wrap_alloc<std::allocator<std::shared_ptr<NonDefaultSaDeviceReevaluationContext> *>>>(
                  v9,
                  (__int64)v9 + 8 * v4,
                  v8);
  if ( v5 != v4 )
    memset_0(v10, 0, 8 * (v5 - v4));
  if ( v4 )
  {
    v11 = v6;
    v12 = 8 * v4;
LABEL_18:
    memset_0(v11, 0, v12);
  }
LABEL_19:
  v14 = (void *)a1[1];
  if ( v14 )
    operator delete(v14);
  a1[2] += v5;
  a1[1] = v6;
}
