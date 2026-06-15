/*
 * XREFs of ??1?$ComPtr@VCpuManager@@@WRL@Microsoft@@QEAA@XZ @ 0x140017390
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CpuManager_CpuManager__::_1_::dtor$0 @ 0x14001BF68 (_Microsoft--WRL--Details--MakeAndInitialize_CpuManager_CpuManager__--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CpuManager>::~ComPtr<CpuManager>(CpuManager **a1)
{
  return Microsoft::WRL::ComPtr<CpuManager>::InternalRelease(a1);
}
