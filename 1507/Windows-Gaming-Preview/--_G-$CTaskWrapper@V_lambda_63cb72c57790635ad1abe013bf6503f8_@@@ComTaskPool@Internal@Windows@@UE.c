/*
 * XREFs of ??_G?$CTaskWrapper@V_lambda_63cb72c57790635ad1abe013bf6503f8_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180024980
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@VNil@Details@23@V7823@V7823@V7823@V7823@V7823@V7823@V7823@@WRL@Microsoft@@UEAA@XZ @ 0x18000EC0C (--1-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@VNil@D.c)
 *     _lambda_63cb72c57790635ad1abe013bf6503f8_::__lambda_63cb72c57790635ad1abe013bf6503f8_ @ 0x1800226AC (_lambda_63cb72c57790635ad1abe013bf6503f8_--__lambda_63cb72c57790635ad1abe013bf6503f8_.c)
 *     ??3@YAXPEAX@Z @ 0x180025E28 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_63cb72c57790635ad1abe013bf6503f8_>::`scalar deleting destructor'(
        __int64 a1,
        char a2)
{
  void *v4; // rcx

  lambda_63cb72c57790635ad1abe013bf6503f8_::__lambda_63cb72c57790635ad1abe013bf6503f8_((_QWORD *)(a1 + 16));
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(v4);
  return a1;
}
