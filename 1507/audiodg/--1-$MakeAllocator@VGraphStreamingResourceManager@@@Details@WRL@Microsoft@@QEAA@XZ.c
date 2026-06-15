/*
 * XREFs of ??1?$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x140026800
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_GraphStreamingResourceManager_GraphStreamingResourceManager__::_1_::dtor$1 @ 0x14001BE04 (_Microsoft--WRL--Details--MakeAndInitialize_GraphStreamingResourceManager_GraphStre_ea_14001BE04.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x140018AB8 (--3@YAXPEAX@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<GraphStreamingResourceManager>::~MakeAllocator<GraphStreamingResourceManager>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
