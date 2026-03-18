/*
 * XREFs of ?OpenEndpoint@CInputSinkStruct@@AEAAJW4CompositionInputType@@PEAI@Z @ 0x180170980
 * Callers:
 *     ?SetupEndpoints@CInputSinkStruct@@AEAAXXZ @ 0x1800A683C (-SetupEndpoints@CInputSinkStruct@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetInputThreadMessageSession@CInputManager@@SAPEAUIMessageSession@@XZ @ 0x18016A3C4 (-GetInputThreadMessageSession@CInputManager@@SAPEAUIMessageSession@@XZ.c)
 */

__int64 __fastcall CInputSinkStruct::OpenEndpoint(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v6; // edi
  struct IMessageSession *InputThreadMessageSession; // rax
  struct IMessageSession *v8; // rbx
  int CompositionInputQueueAndTransform; // eax
  _BYTE v11[16]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v12[32]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v13[64]; // [rsp+50h] [rbp-78h] BYREF

  v6 = -2147467259;
  memset_0(v11, 0, 0x30uLL);
  InputThreadMessageSession = CInputManager::GetInputThreadMessageSession();
  v8 = InputThreadMessageSession;
  if ( InputThreadMessageSession )
  {
    (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)InputThreadMessageSession + 8LL))(InputThreadMessageSession);
    CompositionInputQueueAndTransform = NtQueryCompositionInputQueueAndTransform(*(_QWORD *)(a1 + 16), a2, v11, v13);
    v6 = CompositionInputQueueAndTransform | 0x10000000;
    if ( CompositionInputQueueAndTransform >= 0 )
      v6 = (*(__int64 (__fastcall **)(struct IMessageSession *, _BYTE *, __int64))(*(_QWORD *)v8 + 96LL))(v8, v12, a3);
    (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v6;
}
