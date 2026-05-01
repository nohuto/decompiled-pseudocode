/*
 * XREFs of ??_E?$CTaskWrapper@V_lambda_96d0bed5b180209255fc5fd7d24cbe07_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180024800
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@VNil@Details@23@V7823@V7823@V7823@V7823@V7823@V7823@V7823@@WRL@Microsoft@@UEAA@XZ @ 0x18000E77C (--1-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@VNil@D.c)
 *     _lambda_96d0bed5b180209255fc5fd7d24cbe07_::__lambda_96d0bed5b180209255fc5fd7d24cbe07_ @ 0x18002241C (_lambda_96d0bed5b180209255fc5fd7d24cbe07_--__lambda_96d0bed5b180209255fc5fd7d24cbe07_.c)
 *     ??3@YAXPEAX@Z @ 0x180025CF8 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_96d0bed5b180209255fc5fd7d24cbe07_>::`vector deleting destructor'(
        __int64 a1,
        char a2)
{
  void *v4; // rcx

  lambda_96d0bed5b180209255fc5fd7d24cbe07_::__lambda_96d0bed5b180209255fc5fd7d24cbe07_((_QWORD *)(a1 + 16));
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(v4);
  return a1;
}
