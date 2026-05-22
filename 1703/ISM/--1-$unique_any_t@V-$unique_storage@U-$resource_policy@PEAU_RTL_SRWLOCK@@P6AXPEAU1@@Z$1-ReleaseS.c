/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800074B4
 * Callers:
 *     _Register3DCompositor_::_1_::dtor$0 @ 0x18009EEDD (_Register3DCompositor_--_1_--dtor$0.c)
 *     _MPC3DStateHelper::OnSecureModeChanged_::_1_::dtor$0 @ 0x18009F04F (_MPC3DStateHelper--OnSecureModeChanged_--_1_--dtor$0.c)
 *     _MPC3DStateHelper::FireEventsOnInputThread_::_1_::dtor$2 @ 0x18009F073 (_MPC3DStateHelper--FireEventsOnInputThread_--_1_--dtor$2.c)
 *     _MPC3DStateHelper::RegisterFor3DCompositorRunningChanged_::_1_::dtor$1 @ 0x18009F08B (_MPC3DStateHelper--RegisterFor3DCompositorRunningChanged_--_1_--dtor$1.c)
 *     _MPCHolographicInputManager::MPCHolographicInputManager_::_1_::dtor$70 @ 0x1800A16BB (_MPCHolographicInputManager--MPCHolographicInputManager_--_1_--dtor$70.c)
 *     _InputDeliveryServer::Create_::_1_::dtor$0 @ 0x1800A24F5 (_InputDeliveryServer--Create_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>>(
        RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v1; // rcx

  v1 = *a1;
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
}
