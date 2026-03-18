/*
 * XREFs of PopPdcInvocation @ 0x140549588
 * Callers:
 *     NtPowerInformation @ 0x140452E2C (NtPowerInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopPdcInvocation(unsigned int *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = *a1;
  if ( !(_DWORD)v2 )
    return PopPdcRegister(a1, a2, v2, a1);
  if ( (_DWORD)v2 != 1 )
    return 3221225485LL;
  result = 3221225474LL;
  if ( xmmword_1402DDFE0 )
    return xmmword_1402DDFE0(*((_QWORD *)a1 + 2), *((_QWORD *)a1 + 1));
  return result;
}
