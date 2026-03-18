/*
 * XREFs of ??1?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@QEAA@XZ @ 0x1800BCFB8
 * Callers:
 *     _dynamic_atexit_destructor_for__CManipulationManager::s_InputQueue__ @ 0x1800C2F30 (_dynamic_atexit_destructor_for__CManipulationManager--s_InputQueue__.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ @ 0x180007904 (-InternalRelease@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Remove@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA?AV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@_NPEAI@Z @ 0x180008414 (-Remove@-$CQueue@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA-AV-$ComPtr@VCManipulation.c)
 */

void __fastcall CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::~CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>(
        __int64 a1)
{
  bool v1; // bl
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  do
  {
    CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Remove(a1, &v2, 1, 0LL);
    v1 = v2 != 0;
    Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease(&v2);
  }
  while ( v1 );
  DeleteCriticalSection(&CriticalSection);
}
