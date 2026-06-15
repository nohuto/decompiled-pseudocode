/*
 * XREFs of ?push_back@?$deque@V?$shared_ptr@USaDeviceReevaluationContext@@@std@@V?$allocator@V?$shared_ptr@USaDeviceReevaluationContext@@@std@@@2@@std@@QEAAXAEBV?$shared_ptr@USaDeviceReevaluationContext@@@2@@Z @ 0x180079650
 * Callers:
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUIStreamGroupProxy@@PEAUIAudioStreamInfo@@@Z @ 0x18001E9D0 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUIStreamGroupProxy@@PEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180028674 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Growmap@?$deque@V?$shared_ptr@USaDeviceReevaluationContext@@@std@@V?$allocator@V?$shared_ptr@USaDeviceReevaluationContext@@@std@@@2@@std@@IEAAX_K@Z @ 0x180079394 (-_Growmap@-$deque@V-$shared_ptr@USaDeviceReevaluationContext@@@std@@V-$allocator@V-$shared_ptr@U.c)
 *     ?_Reset0@?$_Ptr_base@USaDeviceReevaluationContext@@@std@@QEAAXPEAUSaDeviceReevaluationContext@@PEAV_Ref_count_base@2@@Z @ 0x18007951C (-_Reset0@-$_Ptr_base@USaDeviceReevaluationContext@@@std@@QEAAXPEAUSaDeviceReevaluationContext@@P.c)
 */

void __fastcall std::deque<std::shared_ptr<SaDeviceReevaluationContext>>::push_back(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rdi
  _QWORD *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx

  if ( a1[2] <= (unsigned __int64)(a1[4] + 1LL) )
    std::deque<std::shared_ptr<SaDeviceReevaluationContext>>::_Growmap(a1);
  a1[3] &= a1[2] - 1LL;
  v4 = (a1[2] - 1LL) & (a1[4] + a1[3]);
  if ( !*(_QWORD *)(a1[1] + 8 * v4) )
    *(_QWORD *)(a1[1] + 8 * v4) = std::_Allocate(1uLL, 0x10uLL);
  v5 = *(_QWORD **)(a1[1] + 8 * v4);
  if ( v5 )
  {
    *v5 = 0LL;
    v5[1] = 0LL;
    v6 = a2[1];
    v7 = *a2;
    if ( v6 )
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    std::_Ptr_base<SaDeviceReevaluationContext>::_Reset0(v5, v7, v6);
  }
  ++a1[4];
}
