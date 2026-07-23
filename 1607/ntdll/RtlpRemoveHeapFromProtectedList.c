/*
 * XREFs of RtlpRemoveHeapFromProtectedList @ 0x18002C844
 * Callers:
 *     RtlpMoveHeapBetweenLists @ 0x18002D944 (RtlpMoveHeapBetweenLists.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpRemoveHeapFromProtectedList(__int64 a1)
{
  __int64 result; // rax
  unsigned __int16 v2; // r8
  _QWORD *v3; // r9
  unsigned __int16 v4; // dx
  unsigned __int16 v5; // r8

  result = a1 + 36;
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
    result = a1 + 208;
  v2 = RtlpNumberOfProtectedHeaps;
  v3 = RtlpProtectedHeapsList;
  v4 = 0;
  for ( *(_WORD *)result = 0; v4 < v2; ++v4 )
  {
    result = v4;
    if ( v3[v4] == a1 )
      break;
  }
  if ( v3[v4] == a1 )
  {
    v5 = v2 - 1;
    RtlpNumberOfProtectedHeaps = v5;
    result = v3[v5];
    v3[v4] = result;
    v3[v5] = 0LL;
  }
  return result;
}
