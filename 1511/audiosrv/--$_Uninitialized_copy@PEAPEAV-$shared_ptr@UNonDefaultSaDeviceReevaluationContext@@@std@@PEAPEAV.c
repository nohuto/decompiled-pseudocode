/*
 * XREFs of ??$_Uninitialized_copy@PEAPEAV?$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@std@@PEAPEAV12@U?$_Wrap_alloc@V?$allocator@PEAV?$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@std@@@std@@@2@@std@@YAPEAPEAV?$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@0@PEAPEAV10@00AEAU?$_Wrap_alloc@V?$allocator@PEAV?$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@std@@@std@@@0@@Z @ 0x18008EE50
 * Callers:
 *     ?_Growmap@?$deque@V?$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@std@@V?$allocator@V?$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@std@@@2@@std@@IEAAX_K@Z @ 0x180090C64 (-_Growmap@-$deque@V-$shared_ptr@UNonDefaultSaDeviceReevaluationContext@@@std@@V-$allocator@V-$sh.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Uninitialized_copy<std::shared_ptr<NonDefaultSaDeviceReevaluationContext> * *,std::shared_ptr<NonDefaultSaDeviceReevaluationContext> * *,std::_Wrap_alloc<std::allocator<std::shared_ptr<NonDefaultSaDeviceReevaluationContext> *>>>(
        void *Src,
        __int64 a2,
        void *a3)
{
  return (__int64)memmove(a3, Src, 8 * ((a2 - (__int64)Src) >> 3)) + 8 * ((a2 - (__int64)Src) >> 3);
}
