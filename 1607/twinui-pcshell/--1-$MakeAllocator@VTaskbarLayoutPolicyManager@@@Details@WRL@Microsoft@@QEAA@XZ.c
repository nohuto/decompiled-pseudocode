/*
 * XREFs of ??1?$MakeAllocator@VTaskbarLayoutPolicyManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180008BEC
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_TaskbarLayoutPolicyManager_IUnknown__::_1_::dtor$1 @ 0x1800309B0 (_Microsoft--WRL--Details--MakeAndInitialize_TaskbarLayoutPolicyManager_IUnknown__--_1_--dtor$1.c)
 *     _TaskbarLayoutParser_CreateInstance_::_1_::dtor$2 @ 0x180030D3E (_TaskbarLayoutParser_CreateInstance_--_1_--dtor$2.c)
 *     _Microsoft::WRL::Details::Make_StartLayout::SelectionDataParser__::_1_::dtor$1 @ 0x180030E76 (_Microsoft--WRL--Details--Make_StartLayout--SelectionDataParser__--_1_--dtor$1.c)
 *     _ActionCenterExperienceManagerFactory::GetExperienceManager_::_1_::dtor$1 @ 0x180031243 (_ActionCenterExperienceManagerFactory--GetExperienceManager_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F44C (--3@YAXPEAX_K@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<TaskbarLayoutPolicyManager>::~MakeAllocator<TaskbarLayoutPolicyManager>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
