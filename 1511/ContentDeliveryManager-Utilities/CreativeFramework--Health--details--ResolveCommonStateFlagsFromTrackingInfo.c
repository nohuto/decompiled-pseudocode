/*
 * XREFs of CreativeFramework::Health::details::ResolveCommonStateFlagsFromTrackingInfo @ 0x18000DAF4
 * Callers:
 *     ?EvaluateStateFlags@?$BaseEventsWithEvaluation@$00$00@details@Health@CreativeFramework@@MEAA?AW4HealthStateFlags@234@XZ @ 0x1800194E0 (-EvaluateStateFlags@-$BaseEventsWithEvaluation@$00$00@details@Health@CreativeFramework@@MEAA-AW4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CreativeFramework::Health::details::ResolveCommonStateFlagsFromTrackingInfo(__int64 a1)
{
  __int64 result; // rax
  bool v2; // zf
  __int64 v3; // rdx

  if ( !*(_BYTE *)(a1 + 74) )
    return 2LL;
  result = 4LL;
  if ( !*(_QWORD *)(a1 + 8) )
    result = 12LL;
  v2 = *(_QWORD *)a1 == 0LL;
  if ( !*(_QWORD *)a1 )
  {
    result |= 0x10uLL;
    v2 = *(_QWORD *)a1 == 0LL;
  }
  if ( !v2 && !*(_DWORD *)(a1 + 56) )
    result |= 0x20uLL;
  v3 = *(_QWORD *)(a1 + 32);
  if ( !v3 )
    goto LABEL_15;
  if ( *(_BYTE *)(a1 + 73) )
    result |= 0x40uLL;
  if ( !*(_BYTE *)(a1 + 72) )
LABEL_15:
    result |= 0x80uLL;
  if ( v3 )
  {
    if ( !*(_DWORD *)(a1 + 60) )
      return result | 0x100;
  }
  return result;
}
