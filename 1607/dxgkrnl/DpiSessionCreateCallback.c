/*
 * XREFs of DpiSessionCreateCallback @ 0x1C00DB7F4
 * Callers:
 *     ?DxgkNotifySessionStateChange@@YAJK@Z @ 0x1C00DB7B0 (-DxgkNotifySessionStateChange@@YAJK@Z.c)
 * Callees:
 *     DpiFdoStartAdapterThread @ 0x1C00EC3D0 (DpiFdoStartAdapterThread.c)
 *     DpiLdaValidateSystemChainStatus @ 0x1C00FB6D8 (DpiLdaValidateSystemChainStatus.c)
 */

__int64 DpiSessionCreateCallback()
{
  __int64 v0; // rbx
  NTSTATUS v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rax

  LODWORD(v0) = 0;
  if ( !byte_1C0056E93 )
  {
    byte_1C0056E93 = 1;
    v2 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v0 = v2;
    if ( v2 )
    {
      v4 = WdLogNewEntry5_WdError(v3);
      *(_QWORD *)(v4 + 24) = v0;
      WdLogEvent5_WdError(v4);
      LODWORD(v0) = 0;
    }
    DpiFdoStartAdapterThread(0LL);
    DpiLdaValidateSystemChainStatus();
  }
  return (unsigned int)v0;
}
