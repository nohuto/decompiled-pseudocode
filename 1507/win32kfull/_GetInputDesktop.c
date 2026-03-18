/*
 * XREFs of _GetInputDesktop @ 0x1C01E85D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetInputDesktop(__int64 a1, __int64 a2)
{
  __int64 CurrentProcess; // rax
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  CurrentProcess = PsGetCurrentProcess(a1, a2);
  if ( (unsigned __int8)ObFindHandleForObject(CurrentProcess, grpdeskRitInput, 0LL, 0LL, &v4)
    && (unsigned int)SetHandleFlag(v4, 1LL, 1LL) )
  {
    return v4;
  }
  else
  {
    return 0LL;
  }
}
