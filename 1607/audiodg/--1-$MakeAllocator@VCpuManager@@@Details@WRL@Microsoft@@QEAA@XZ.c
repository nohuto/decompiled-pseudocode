/*
 * XREFs of ??1?$MakeAllocator@VCpuManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x140001348
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CpuManager_CpuManager__::_1_::dtor$1 @ 0x14001A412 (_Microsoft--WRL--Details--MakeAndInitialize_CpuManager_CpuManager__--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<CpuManager>::~MakeAllocator<CpuManager>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
