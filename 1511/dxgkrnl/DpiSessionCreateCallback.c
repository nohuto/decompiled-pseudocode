/*
 * XREFs of DpiSessionCreateCallback @ 0x1C00C6850
 * Callers:
 *     ?DxgkNotifySessionStateChange@@YAJK@Z @ 0x1C00C6800 (-DxgkNotifySessionStateChange@@YAJK@Z.c)
 * Callees:
 *     DpiLdaValidateSystemChainStatus @ 0x1C00CEAC8 (DpiLdaValidateSystemChainStatus.c)
 *     DpiFdoStartAdapterThread @ 0x1C00D0EB0 (DpiFdoStartAdapterThread.c)
 */

__int64 DpiSessionCreateCallback()
{
  __int64 v0; // rbx
  NTSTATUS v2; // eax
  __int64 v3; // rcx
  _QWORD *v4; // rax

  LODWORD(v0) = 0;
  if ( !byte_1C0046CD3 )
  {
    byte_1C0046CD3 = 1;
    v2 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v0 = v2;
    if ( v2 )
    {
      v4 = (_QWORD *)WdLogNewEntry5_WdError(v3);
      v4[3] = DpiSessionCreateCallback;
      v4[4] = KeWaitForSingleObject;
      v4[5] = v0;
      WdLogEvent5_WdError(v4);
      LODWORD(v0) = 0;
    }
    DpiFdoStartAdapterThread(0LL);
    DpiLdaValidateSystemChainStatus();
  }
  return (unsigned int)v0;
}
