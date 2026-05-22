/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VMPCInputProviderBase@@VNil@Details@23@V5623@V5623@V5623@V5623@V5623@V5623@V5623@@WRL@Microsoft@@UEAA@XZ @ 0x180046BC0
 * Callers:
 *     _MPCSixDofProcessor::MPCSixDofProcessor_::_1_::dtor$0 @ 0x1800A144A (_MPCSixDofProcessor--MPCSixDofProcessor_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_MPCProcessor_IInputProcessor_InputProcessorCreateParams_____ptr64_&___ptr64__::_1_::dtor$3 @ 0x1800A14D7 (_Microsoft--WRL--Details--MakeAndInitialize_MPCProcessor_IInputProcessor_InputProce_ea_1800A14D7.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>(
        MPCInputProviderBase *a1)
{
  *((_DWORD *)a1 + 41) = -1073741823;
  MPCInputProviderBase::~MPCInputProviderBase(a1);
}
