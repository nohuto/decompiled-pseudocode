/*
 * XREFs of ?push_back@?$deque@V?$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@std@@V?$allocator@V?$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@std@@@2@@std@@QEAAXAEBV?$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@2@@Z @ 0x180093658
 * Callers:
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUIStreamGroupProxy@@PEAUIAudioStreamInfo@@@Z @ 0x1800250A0 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUIStreamGroupProxy@@PEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x180042E78 (-_Xbad_alloc@std@@YAXXZ.c)
 *     ?_Growmap@?$deque@V?$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@std@@V?$allocator@V?$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@std@@@2@@std@@IEAAX_K@Z @ 0x1800933D4 (-_Growmap@-$deque@V-$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@std@@V-$allocator@V-$sh.c)
 *     ?_Reset0@?$_Ptr_base@UNonDefaultSaDeviceReevaluationContext@@@std@@QEAAXPEAUNonDefaultSaDeviceReevaluationContext@@PEAV_Ref_count_base@2@@Z @ 0x180093534 (-_Reset0@-$_Ptr_base@UNonDefaultSaDeviceReevaluationContext@@@std@@QEAAXPEAUNonDefaultSaDeviceRe.c)
 */

void __fastcall std::deque<std::shared_ptr<NonDefaultSaDeviceReevaluationContext>>::push_back(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdi
  LPVOID v7; // rcx
  _QWORD *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx

  if ( a1[2] <= (unsigned __int64)(a1[4] + 1LL) )
    std::deque<std::shared_ptr<NonDefaultSaDeviceReevaluationContext>>::_Growmap(a1);
  v4 = a1[1];
  v5 = a1[2] - 1LL;
  a1[3] &= v5;
  v6 = v5 & (a1[4] + a1[3]);
  if ( !*(_QWORD *)(v4 + 8 * v6) )
  {
    v7 = operator new(0x10uLL);
    if ( !v7 )
      std::_Xbad_alloc();
    *(_QWORD *)(a1[1] + 8 * v6) = v7;
  }
  v8 = *(_QWORD **)(a1[1] + 8 * v6);
  if ( v8 )
  {
    *v8 = 0LL;
    v8[1] = 0LL;
    v9 = a2[1];
    v10 = *a2;
    if ( v9 )
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    std::_Ptr_base<NonDefaultSaDeviceReevaluationContext>::_Reset0(v8, v10, v9);
  }
  ++a1[4];
}
