/*
 * XREFs of ??$make_shared@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@PEBD@std@@YA?AV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@0@$$QEAPEBD@Z @ 0x180049E98
 * Callers:
 *     ?GetCorrelationVector@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@PEAUHSTRING__@@@Z @ 0x1800476F0 (-GetCorrelationVector@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VCorrelationV.c)
 * Callees:
 *     ??$?0PEBD@?$_Ref_count_obj@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@$$QEAPEBD@Z @ 0x18004A224 (--$-0PEBD@-$_Ref_count_obj@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QE.c)
 *     ??2@YAPEAX_K@Z @ 0x18006A518 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<ContentDeliveryManager::Background::CorrelationVectorWrapper,char const *>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // rbx
  void *v5; // rax

  v4 = 0LL;
  v5 = operator new(0xA0uLL);
  if ( v5 )
    v4 = std::_Ref_count_obj<ContentDeliveryManager::Background::CorrelationVectorWrapper>::_Ref_count_obj<ContentDeliveryManager::Background::CorrelationVectorWrapper>(
           v5,
           a2);
  a1[1] = v4;
  *a1 = v4 + 16;
  return a1;
}
