/*
 * XREFs of DpiSessionCreateCallback @ 0x1C00D81A0
 * Callers:
 *     ?DxgkNotifySessionStateChange@@YAJK@Z @ 0x1C00D8150 (-DxgkNotifySessionStateChange@@YAJK@Z.c)
 * Callees:
 *     DpiFdoStartAdapterThread @ 0x1C00C7120 (DpiFdoStartAdapterThread.c)
 *     DpiLdaValidateSystemChainStatus @ 0x1C00D8A20 (DpiLdaValidateSystemChainStatus.c)
 */

__int64 DpiSessionCreateCallback()
{
  __int64 v0; // rbx
  NTSTATUS v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // rax

  LODWORD(v0) = 0;
  if ( !byte_1C0046C53 )
  {
    byte_1C0046C53 = 1;
    v2 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v0 = v2;
    if ( v2 )
    {
      v7 = (_QWORD *)WdLogNewEntry5_WdError(v4);
      v7[3] = DpiSessionCreateCallback;
      v7[4] = KeWaitForSingleObject;
      v7[5] = v0;
      WdLogEvent5_WdError(v7);
      LODWORD(v0) = 0;
    }
    DpiFdoStartAdapterThread(3LL, v3, v5, v6);
    DpiLdaValidateSystemChainStatus();
  }
  return (unsigned int)v0;
}
