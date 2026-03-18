/*
 * XREFs of ??1CAnalogSwapChain@@MEAA@XZ @ 0x180168034
 * Callers:
 *     ??_GCAnalogSwapChain@@MEAAPEAXI@Z @ 0x1801680A0 (--_GCAnalogSwapChain@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAnalogSwapChain::~CAnalogSwapChain(CAnalogSwapChain *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)this = &CAnalogSwapChain::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 3) = &CStandardSwapChain::`vftable'{for `IDeviceResource'};
  v4 = *((_QWORD *)this + 36);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 88LL))(v4);
  v5 = *((_QWORD *)this + 36);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  CSwapChainBase::~CSwapChainBase(this, a2, a3);
}
