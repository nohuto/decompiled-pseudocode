/*
 * XREFs of ?GetInstanceOffInputThread@MPC3DStateHelper@@SAPEAV1@XZ @ 0x180007654
 * Callers:
 *     ?Register3DCompositor@@YAHPEAUIUnknown@@@Z @ 0x1800056E0 (-Register3DCompositor@@YAHPEAUIUnknown@@@Z.c)
 *     ?Unregister3DCompositor@@YAHXZ @ 0x1800057E0 (-Unregister3DCompositor@@YAHXZ.c)
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_9c299e43976df575cbfcf7e1416abcbe_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x1800571E0 (--$_Callback_once@V-$tuple@$$QEAV_lambda_9c299e43976df575cbfcf7e1416abcbe_@@AEAVexception_ptr@st.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

struct MPC3DStateHelper *MPC3DStateHelper::GetInstanceOffInputThread(void)
{
  DWORD v0; // eax
  const char *v1; // r9
  struct MPC3DStateHelper *result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v0 = WaitForSingleObjectEx(MPC3DStateHelper::s_isInstanceCreatedEvent, 0xFFFFFFFF, 0);
  if ( v0 != 258 && v0 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x90F,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      v1);
    __debugbreak();
  }
  result = MPC3DStateHelper::s_instance;
  if ( !MPC3DStateHelper::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x38,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpc3dstatehelper.cpp",
      v1);
    JUMPOUT(0x1800076B4LL);
  }
  return result;
}
