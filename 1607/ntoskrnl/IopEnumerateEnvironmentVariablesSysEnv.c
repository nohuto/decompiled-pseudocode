/*
 * XREFs of IopEnumerateEnvironmentVariablesSysEnv @ 0x1406285AC
 * Callers:
 *     <none>
 * Callees:
 *     IopIssueSystemEnvironmentRequest @ 0x140628D34 (IopIssueSystemEnvironmentRequest.c)
 */

__int64 __fastcall IopEnumerateEnvironmentVariablesSysEnv(__int64 a1, __int64 a2, int a3, void *a4, ULONG *a5)
{
  __int64 result; // rax
  ULONG *v6; // rbx
  __int64 v7[3]; // [rsp+50h] [rbp-18h] BYREF
  char InputBuffer; // [rsp+80h] [rbp+18h] BYREF

  if ( a3 == 1 )
  {
    InputBuffer = 0;
  }
  else
  {
    if ( a3 != 2 )
      return 3221225485LL;
    InputBuffer = 1;
  }
  v6 = a5;
  result = IopIssueSystemEnvironmentRequest(0x52000Cu, &InputBuffer, 1u, a4, *a5, (__int64)v7);
  if ( (_DWORD)result == -1073741789 )
    *v6 = v7[0];
  return result;
}
