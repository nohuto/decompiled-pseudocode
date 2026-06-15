/*
 * XREFs of ??1?$ComPtr@VCpuManager@@@WRL@Microsoft@@QEAA@XZ @ 0x140025858
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CpuManager_CpuManager__::_1_::dtor$0 @ 0x14001A406 (_Microsoft--WRL--Details--MakeAndInitialize_CpuManager_CpuManager__--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CpuManager>::~ComPtr<CpuManager>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<CpuManager>::InternalRelease(a1);
}
