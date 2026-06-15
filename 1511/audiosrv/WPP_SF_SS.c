/*
 * XREFs of WPP_SF_Ss @ 0x18009F900
 * Callers:
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBGW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x180003A60 (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBGW4__MIDL___MIDL_itf_playbackmana.c)
 *     ?OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z @ 0x180003FA0 (-OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z.c)
 *     ?OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z @ 0x18001E6C0 (-OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall WPP_SF_Ss(TRACEHANDLE LoggerHandle, USHORT a2, __int64 a3, const wchar_t *a4, const char *a5)
{
  __int64 v6; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  const char *v10; // r10
  __int64 v11; // rdx
  const wchar_t *v12; // rcx

  v6 = -1LL;
  if ( a5 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a5[v8] );
    v9 = v8 + 1;
  }
  else
  {
    v9 = 5LL;
  }
  v10 = "NULL";
  if ( a5 )
    v10 = a5;
  if ( a4 )
  {
    if ( *a4 )
    {
      do
        ++v6;
      while ( a4[v6] );
      v11 = 2 * v6 + 2;
    }
    else
    {
      v11 = 14LL;
    }
  }
  else
  {
    v11 = 10LL;
  }
  if ( a4 )
  {
    v12 = L"<NULL>";
    if ( *a4 )
      v12 = a4;
  }
  else
  {
    v12 = L"NULL";
  }
  return TraceMessage(LoggerHandle, 0x2Bu, &WPP_470fb16e4de1ac112a2f931f3fb204f0_Traceguids, a2, v12, v11, v10, v9, 0LL);
}
