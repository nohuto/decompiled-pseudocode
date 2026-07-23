/*
 * XREFs of PsGetProcessWow64Process @ 0x1400987D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessWow64Process(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 1064);
  if ( result )
    return *(_QWORD *)result;
  return result;
}
