/*
 * XREFs of s_pbmReportHostedAppStateChange @ 0x18002C440
 * Callers:
 *     <none>
 * Callees:
 *     ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBGKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x18001D080 (-OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBGKW4HOSTED_APP_CHANGED@@PEAPEAX@Z.c)
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x18002C620 (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 */

__int64 __fastcall s_pbmReportHostedAppStateChange(
        void *a1,
        const unsigned __int16 *a2,
        int a3,
        CPickerHostContext **a4)
{
  __int64 result; // rax
  unsigned int v8[6]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v9; // [rsp+58h] [rbp+20h] BYREF

  if ( !a4 )
    return 2147942487LL;
  result = RpcClientProcessSessionId(a1, v8, &v9);
  if ( !(_DWORD)result )
    return PickerHostContextManager::OnHostedAppStateChanged(a2, v9, a3, a4);
  if ( (int)result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
