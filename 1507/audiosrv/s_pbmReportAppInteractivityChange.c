/*
 * XREFs of s_pbmReportAppInteractivityChange @ 0x180002060
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBGW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x180002150 (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBGW4__MIDL___MIDL_itf_playbackmana.c)
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x18000A160 (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 */

__int64 __fastcall s_pbmReportAppInteractivityChange(void *a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned int v6[6]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v7; // [rsp+58h] [rbp+20h] BYREF

  result = 2147549183LL;
  if ( g_ApplicationManager )
  {
    result = RpcClientProcessSessionId(a1, v6, &v7);
    if ( (_DWORD)result )
    {
      if ( (int)result > 0 )
        return (unsigned __int16)result | 0x80070000;
    }
    else
    {
      return CApplicationManager::ProcessInteractivityNotification(g_ApplicationManager, a2, a3, v7);
    }
  }
  return result;
}
