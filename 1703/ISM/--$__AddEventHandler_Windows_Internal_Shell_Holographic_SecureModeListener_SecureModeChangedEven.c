/*
 * XREFs of ??$__AddEventHandler_Windows_Internal_Shell_Holographic_SecureModeListener_SecureModeChangedEvent@VMPC3DStateHelper@@@SecureModeListener@Holographic@Shell@Internal@Windows@@QEAAJPEAVMPC3DStateHelper@@P85@EAAX_N@Z@Z @ 0x18000854C
 * Callers:
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_4bfd0116db80ce4255855ce8af72e9c8_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x180008A00 (--$_Callback_once@V-$tuple@$$QEAV_lambda_4bfd0116db80ce4255855ce8af72e9c8_@@AEAVexception_ptr@st.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18009DFE0 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall Windows::Internal::Shell::Holographic::SecureModeListener::__AddEventHandler_Windows_Internal_Shell_Holographic_SecureModeListener_SecureModeChangedEvent<MPC3DStateHelper>(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rax

  v4 = operator new(0x20uLL);
  *v4 = &Windows::Internal::Shell::Holographic::SecureModeListener::__InvokeHandlers_Windows_Internal_Shell_Holographic_SecureModeListener_SecureModeChangedEvent<MPC3DStateHelper>::`vftable';
  v4[2] = a2;
  v4[3] = MPC3DStateHelper::OnSecureModeChanged;
  v4[1] = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 64) = v4;
  return 0LL;
}
