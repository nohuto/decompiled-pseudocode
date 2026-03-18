/*
 * XREFs of ??1?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@QEAA@XZ @ 0x180097A64
 * Callers:
 *     _dynamic_atexit_destructor_for__CManipulationManager::s_InputQueue__ @ 0x18009C710 (_dynamic_atexit_destructor_for__CManipulationManager--s_InputQueue__.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ @ 0x18012A2B4 (-InternalRelease@-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Remove@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA?AV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@_NPEAI@Z @ 0x18012B7AC (-Remove@-$CQueue@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA-AV-$ComPtr@VCManipulation.c)
 */

void __fastcall CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::~CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  bool v3; // bl
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1;
  do
  {
    LOBYTE(a3) = 1;
    CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Remove(a1, &v4, a3, 0LL);
    v3 = v4 != 0;
    Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease(&v4);
  }
  while ( v3 );
  DeleteCriticalSection(&stru_180195D18);
}
