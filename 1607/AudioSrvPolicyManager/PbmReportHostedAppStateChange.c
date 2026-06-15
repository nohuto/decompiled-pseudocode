/*
 * XREFs of PbmReportHostedAppStateChange @ 0x180018500
 * Callers:
 *     <none>
 * Callees:
 *     ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBGKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x1800168F8 (-OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBGKW4HOSTED_APP_CHANGED@@PEAPEAX@Z.c)
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x18001B1C4 (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 */

__int64 __fastcall PbmReportHostedAppStateChange(void *a1, __int64 a2, int a3, void **a4)
{
  __int64 result; // rax
  int v8; // eax
  int v9; // ecx
  unsigned int v10[6]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v11; // [rsp+58h] [rbp+20h] BYREF

  if ( !a4 )
    return 2147942487LL;
  v8 = RpcClientProcessSessionId(a1, v10, &v11);
  v9 = v8;
  if ( !v8 )
    return PickerHostContextManager::OnHostedAppStateChanged(a2, v11, a3, a4);
  result = (unsigned __int16)v8 | 0x80070000;
  if ( v9 <= 0 )
    return (unsigned int)v9;
  return result;
}
