/*
 * XREFs of ?On3DCompositorRunningChanged@MPCHeadUpdateListener@@AEAAX_N@Z @ 0x1800566B0
 * Callers:
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_9c299e43976df575cbfcf7e1416abcbe_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x1800571E0 (--$_Callback_once@V-$tuple@$$QEAV_lambda_9c299e43976df575cbfcf7e1416abcbe_@@AEAVexception_ptr@st.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x1800075AC (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x180007B34 (-GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCHeadUpdateListener::On3DCompositorRunningChanged(MPCHeadUpdateListener *this, char a2)
{
  RTL_SRWLOCK *v3; // rax
  struct IMPCInputPostProcessor *PostProcessor; // rax
  int v5; // eax
  RTL_SRWLOCK *v6; // rax
  struct IMPCInputPostProcessor *v7; // rax
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    MPC3DStateHelper::GetInstance();
    PostProcessor = MPC3DStateHelper::GetPostProcessor(v3);
    v5 = (*(__int64 (__fastcall **)(struct IMPCInputPostProcessor *, BOOL (__fastcall *)(__int128 *)))(*(_QWORD *)PostProcessor + 88LL))(
           PostProcessor,
           MPCHeadUpdateListener::OnHeadEventOccurred);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x75,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadupdatelistener.cpp",
        (const char *)(unsigned int)v5);
      __debugbreak();
    }
    *((_WORD *)this + 68) = 257;
  }
  else
  {
    MPC3DStateHelper::GetInstance();
    v7 = MPC3DStateHelper::GetPostProcessor(v6);
    v8 = (*(__int64 (__fastcall **)(struct IMPCInputPostProcessor *, _QWORD))(*(_QWORD *)v7 + 88LL))(v7, 0LL);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x7D,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadupdatelistener.cpp",
        (const char *)(unsigned int)v8);
      JUMPOUT(0x18005675DLL);
    }
    *((_BYTE *)this + 136) = 0;
    *((_BYTE *)this + 138) = 1;
  }
}
