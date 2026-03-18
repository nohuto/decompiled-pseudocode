/*
 * XREFs of ??1CStandardSwapChain@@MEAA@XZ @ 0x18017D5E8
 * Callers:
 *     ??_ECStandardSwapChain@@MEAAPEAXI@Z @ 0x18017D640 (--_ECStandardSwapChain@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CStandardSwapChain::~CStandardSwapChain(CStandardSwapChain *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx

  *(_QWORD *)this = &CStandardSwapChain::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 3) = &CStandardSwapChain::`vftable'{for `IDeviceResource'};
  v4 = *((_QWORD *)this + 36);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  CSwapChainBase::~CSwapChainBase(this, a2, a3);
}
