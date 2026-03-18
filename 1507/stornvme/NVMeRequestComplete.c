/*
 * XREFs of NVMeRequestComplete @ 0x1C00023B8
 * Callers:
 *     NVMeDeviceCompleteAllIORequests @ 0x1C0004BCC (NVMeDeviceCompleteAllIORequests.c)
 *     NVMeControllerCompleteAllIORequests @ 0x1C0004CD4 (NVMeControllerCompleteAllIORequests.c)
 *     ProcessCommand @ 0x1C000C470 (ProcessCommand.c)
 *     NVMeCompletionDpcRoutine @ 0x1C000C700 (NVMeCompletionDpcRoutine.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000CD2C (WaitForCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeRequestComplete(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  unsigned int v5; // ecx
  __int64 result; // rax
  _DWORD *v7; // r9
  unsigned int v8; // edx

  v2 = a1 + 560;
  if ( a2 != a1 + 560 )
  {
    v5 = 0;
    while ( 1 )
    {
      result = 104LL * v5 + a1 + 664;
      if ( a2 == result )
        break;
      if ( ++v5 >= 4 )
        return StorPortNotification(0LL, a1, a2, a1);
    }
  }
  if ( a2 == v2 )
  {
    v7 = (_DWORD *)(a1 + 552);
  }
  else
  {
    v8 = 0;
    while ( 1 )
    {
      result = 104LL * v8 + a1 + 664;
      if ( a2 == result )
        break;
      if ( ++v8 >= 4 )
        return result;
    }
    result = v8;
    v7 = (_DWORD *)(104LL * v8 + a1 + 656);
  }
  if ( v7 )
    *v7 = 0;
  return result;
}
