/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawInputProvider@@UIMouseProcessorForwarding@@UICursorBasedInputProcessor@@UIGetClosestInteractiveBounds@@VMPCInputProviderBase@@VNil@Details@23@V9Details@23@V9Details@23@V9Details@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180042F70
 * Callers:
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawInputProvider@@UIMouseProcessorForwarding@@UICursorBasedInputProcessor@@UIGetClosestInteractiveBounds@@VMPCInputProviderBase@@VNil@Details@23@V9Details@23@V9Details@23@V9Details@23@@WRL@Microsoft@@WCA@EAAPEAXI@Z @ 0x1800438E0 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawInputProvider@@UIMo_ea_1800438E0.c)
 * Callees:
 *     ??1MPCInputProviderBase@@UEAA@XZ @ 0x18004EB18 (--1MPCInputProviderBase@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,IMouseProcessorForwarding,ICursorBasedInputProcessor,IGetClosestInteractiveBounds,MPCInputProviderBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vector deleting destructor'(
        _DWORD *Block,
        char a2)
{
  Block[49] = -1073741823;
  MPCInputProviderBase::~MPCInputProviderBase((MPCInputProviderBase *)(Block + 8));
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
