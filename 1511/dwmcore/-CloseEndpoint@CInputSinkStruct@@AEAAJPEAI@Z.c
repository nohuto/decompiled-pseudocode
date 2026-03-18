/*
 * XREFs of ?CloseEndpoint@CInputSinkStruct@@AEAAJPEAI@Z @ 0x180143240
 * Callers:
 *     ?CleanupEndpoints@CInputSinkStruct@@AEAAXXZ @ 0x1800A8748 (-CleanupEndpoints@CInputSinkStruct@@AEAAXXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetInputThreadMessageSession@CInputManager@@SAPEAUIMessageSession@@XZ @ 0x18013F208 (-GetInputThreadMessageSession@CInputManager@@SAPEAUIMessageSession@@XZ.c)
 */

__int64 __fastcall CInputSinkStruct::CloseEndpoint(CInputSinkStruct *this, unsigned int *a2)
{
  unsigned int v3; // esi
  struct IMessageSession *InputThreadMessageSession; // rax
  struct IMessageSession *v5; // rbx
  unsigned int v6; // eax

  v3 = -2147467259;
  InputThreadMessageSession = CInputManager::GetInputThreadMessageSession();
  v5 = InputThreadMessageSession;
  if ( InputThreadMessageSession )
  {
    (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)InputThreadMessageSession + 8LL))(InputThreadMessageSession);
    v6 = (*(__int64 (__fastcall **)(struct IMessageSession *, _QWORD, __int64))(*(_QWORD *)v5 + 136LL))(v5, *a2, 1LL);
    *a2 = 0;
    v3 = v6;
    (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return v3;
}
