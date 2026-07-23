/*
 * XREFs of WdipSemUpdateProviderEntryForEvent @ 0x140565FD0
 * Callers:
 *     WdipSemUpdateProviderEntriesForScenario @ 0x140565F84 (WdipSemUpdateProviderEntriesForScenario.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WdipSemUpdateProviderEntryForEvent(__int64 a1, char a2)
{
  __int64 v2; // r10
  unsigned __int8 v3; // r8
  __int64 v4; // r9
  __int64 result; // rax
  unsigned __int8 v6; // dl
  __int64 v7; // r8

  v2 = *(_QWORD *)(a1 + 40);
  v3 = *(_BYTE *)(v2 + 16);
  v4 = *(_QWORD *)(a1 + 24) | *(_QWORD *)(v2 + 24);
  if ( *(_BYTE *)(a1 + 18) > v3 )
    v3 = *(_BYTE *)(a1 + 18);
  result = *(unsigned int *)(a1 + 36);
  *(_DWORD *)(v2 + 32) |= result;
  ++*(_DWORD *)(v2 + 40);
  *(_BYTE *)(v2 + 36) |= 1u;
  *(_QWORD *)(v2 + 24) = v4;
  *(_BYTE *)(v2 + 16) = v3;
  if ( a2 )
  {
    v6 = *(_BYTE *)(v2 + 48);
    v7 = *(_QWORD *)(a1 + 24) | *(_QWORD *)(v2 + 56);
    if ( *(_BYTE *)(a1 + 18) > v6 )
      v6 = *(_BYTE *)(a1 + 18);
    result = *(unsigned int *)(a1 + 36);
    *(_DWORD *)(v2 + 64) |= result;
    *(_BYTE *)(v2 + 68) |= 1u;
    *(_QWORD *)(v2 + 56) = v7;
    *(_BYTE *)(v2 + 48) = v6;
  }
  return result;
}
