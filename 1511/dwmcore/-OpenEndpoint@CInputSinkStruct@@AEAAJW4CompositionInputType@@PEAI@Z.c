/*
 * XREFs of ?OpenEndpoint@CInputSinkStruct@@AEAAJW4CompositionInputType@@PEAI@Z @ 0x1801432DC
 * Callers:
 *     ?SetupEndpoints@CInputSinkStruct@@AEAAXXZ @ 0x1800A86F4 (-SetupEndpoints@CInputSinkStruct@@AEAAXXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 *     ?GetInputThreadMessageSession@CInputManager@@SAPEAUIMessageSession@@XZ @ 0x18013F208 (-GetInputThreadMessageSession@CInputManager@@SAPEAUIMessageSession@@XZ.c)
 */

__int64 __fastcall CInputSinkStruct::OpenEndpoint(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v6; // esi
  struct IMessageSession *InputThreadMessageSession; // rax
  struct IMessageSession *v8; // rbx
  HRESULT CompositionInputQueueAndTransform; // eax
  LPVOID ppv[2]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v12[32]; // [rsp+30h] [rbp-98h] BYREF

  v6 = -2147467259;
  memset_0(ppv, 0, 0x30uLL);
  InputThreadMessageSession = CInputManager::GetInputThreadMessageSession();
  v8 = InputThreadMessageSession;
  if ( InputThreadMessageSession )
  {
    (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)InputThreadMessageSession + 8LL))(InputThreadMessageSession);
    CompositionInputQueueAndTransform = NtQueryCompositionInputQueueAndTransform(
                                          *(const IID *const *)(a1 + 16),
                                          (const IID *const)a2,
                                          ppv);
    v6 = CompositionInputQueueAndTransform | 0x10000000;
    if ( CompositionInputQueueAndTransform >= 0 )
      v6 = (*(__int64 (__fastcall **)(struct IMessageSession *, _BYTE *, __int64))(*(_QWORD *)v8 + 96LL))(v8, v12, a3);
    (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v6;
}
