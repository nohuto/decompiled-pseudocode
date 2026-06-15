/*
 * XREFs of PbmReportAppInteractivityChange @ 0x180018440
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBGW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x180016020 (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBGW4__MIDL___MIDL_itf_playbackmana.c)
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x18001B1C4 (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 */

__int64 __fastcall PbmReportAppInteractivityChange(void *a1, const wchar_t *a2, int a3)
{
  __int64 result; // rax
  int v6; // eax
  int v7; // ecx
  unsigned int v8[6]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v9; // [rsp+58h] [rbp+20h] BYREF

  result = 2147549183LL;
  if ( g_ApplicationManager )
  {
    v6 = RpcClientProcessSessionId(a1, v8, &v9);
    v7 = v6;
    if ( v6 )
    {
      result = (unsigned __int16)v6 | 0x80070000;
      if ( v7 <= 0 )
        return (unsigned int)v7;
    }
    else
    {
      return CApplicationManager::ProcessInteractivityNotification((__int64)g_ApplicationManager, a2, a3, v9);
    }
  }
  return result;
}
