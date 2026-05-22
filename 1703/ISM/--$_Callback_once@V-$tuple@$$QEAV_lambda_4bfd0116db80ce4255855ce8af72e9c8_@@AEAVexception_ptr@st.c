/*
 * XREFs of ??$_Callback_once@V?$tuple@$$QEAV_lambda_4bfd0116db80ce4255855ce8af72e9c8_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x180008A00
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000324C (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnSecureModeChanged@MPC3DStateHelper@@AEAAX_N@Z @ 0x180007780 (-OnSecureModeChanged@MPC3DStateHelper@@AEAAX_N@Z.c)
 *     ?create@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@QEAAXW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x180007DC0 (-create@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@XZ @ 0x180008500 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@IV-$function@$$A6AX_N@Z@std@@U-$less@I@2@V-$all.c)
 *     ??$__AddEventHandler_Windows_Internal_Shell_Holographic_SecureModeListener_SecureModeChangedEvent@VMPC3DStateHelper@@@SecureModeListener@Holographic@Shell@Internal@Windows@@QEAAJPEAVMPC3DStateHelper@@P85@EAAX_N@Z@Z @ 0x18000854C (--$__AddEventHandler_Windows_Internal_Shell_Holographic_SecureModeListener_SecureModeChangedEven.c)
 *     ??2@YAPEAX_K@Z @ 0x18009DFE0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=35
__int64 __fastcall std::_Callback_once<std::tuple<_lambda_4bfd0116db80ce4255855ce8af72e9c8_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>(
        __int64 a1,
        void **a2)
{
  RTL_SRWLOCK *v2; // rbx
  RTL_SRWLOCK *v3; // rsi
  PVOID Ptr; // rcx
  int v5; // eax
  const char *v6; // r9
  const char *v7; // r9
  void *v9; // rbx
  void *v10; // rax
  _QWORD v11[6]; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  try
  {
    v2 = (RTL_SRWLOCK *)operator new(0x50uLL);
    v2->Ptr = 0LL;
    v3 = v2 + 1;
    v2[1].Ptr = 0LL;
    LODWORD(v2[2].Ptr) = 1;
    BYTE4(v2[2].Ptr) = 0;
    BYTE5(v2[2].Ptr) = 0;
    BYTE6(v2[2].Ptr) = 0;
    HIBYTE(v2[2].Ptr) = 0;
    LOBYTE(v2[3].Ptr) = 0;
    v2[4].Ptr = 0LL;
    v2[5].Ptr = 0LL;
    v2[6].Ptr = 0LL;
    v2[5].Ptr = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Buyheadnode();
    v11[0] = v2 + 7;
    v2[7].Ptr = 0LL;
    v2[8].Ptr = 0LL;
    v2[7].Ptr = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Buyheadnode();
    v2[9].Ptr = 0LL;
    Ptr = v2[1].Ptr;
    if ( Ptr )
    {
      v3->Ptr = 0LL;
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
    }
    v5 = CoreUICreate(v3);
    if ( v5 < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x40,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpc3dstatehelper.cpp",
        (const char *)(unsigned int)v5);
    if ( !v3->Ptr )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x41,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpc3dstatehelper.cpp",
        v6);
    if ( ((1LL << gdwDeviceFamily) & 0xA) != 0 )
    {
      Windows::Internal::Shell::Holographic::SecureModeListener::__AddEventHandler_Windows_Internal_Shell_Holographic_SecureModeListener_SecureModeChangedEvent<MPC3DStateHelper>(
        (__int64)&Windows::Internal::Shell::Holographic::SecureModeListener::s_listener,
        (__int64)v2);
      MPC3DStateHelper::OnSecureModeChanged(v2, byte_1800D38D9);
    }
    wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_exception_policy>::create(
      &v2[9].Ptr,
      0);
    MPC3DStateHelper::s_instance = (struct MPC3DStateHelper *)v2;
    if ( !SetEvent(MPC3DStateHelper::s_isInstanceCreatedEvent) )
      wil::details::in1diag3::_FailFast_GetLastError(
        retaddr,
        (void *)0x86F,
        (__int64)"internal\\sdk\\inc\\wil\\resource.h",
        v7);
  }
  catch ( ... )
  {
    v9 = *a2;
    v10 = std::current_exception(v11);
    __ExceptionPtrAssign(v9, v10);
    __ExceptionPtrDestroy(v11);
    return 0LL;
  }
  return 1LL;
}
