/*
 * XREFs of RegisterHvIdleStates @ 0x1C001D970
 * Callers:
 *     <none>
 * Callees:
 *     RegisterHvCStates @ 0x1C001D364 (RegisterHvCStates.c)
 */

__int64 __fastcall RegisterHvIdleStates(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 248);
  result = 0LL;
  if ( (v1 & 0x200) != 0 )
    return RegisterHvPepIdleStatesV2();
  if ( (v1 & 0x7F077) != 0 )
    return RegisterHvCStates(a1);
  return result;
}
