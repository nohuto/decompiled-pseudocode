/*
 * XREFs of ?CloseEndpoint@CInputSinkStruct@@AEAAJPEAI@Z @ 0x180170904
 * Callers:
 *     ?CleanupEndpoints@CInputSinkStruct@@AEAAXXZ @ 0x1800A6890 (-CleanupEndpoints@CInputSinkStruct@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetInputThreadMessageSession@CInputManager@@SAPEAUIMessageSession@@XZ @ 0x18016A3C4 (-GetInputThreadMessageSession@CInputManager@@SAPEAUIMessageSession@@XZ.c)
 */

__int64 __fastcall CInputSinkStruct::CloseEndpoint(CInputSinkStruct *this, unsigned int *a2)
{
  unsigned int v3; // edi
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
