/*
 * XREFs of StorpGetActiveNodeCount @ 0x1C00293F4
 * Callers:
 *     StorPortExtendedFunction @ 0x1C0005260 (StorPortExtendedFunction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorpGetActiveNodeCount(__int64 a1, _DWORD *a2)
{
  USHORT HighestNodeNumber; // ax
  USHORT v5; // di
  USHORT v6; // bp
  unsigned __int16 v7; // si
  __int64 Count; // [rsp+40h] [rbp+8h] BYREF

  Count = a1;
  if ( !a2 )
    return 3238002694LL;
  HighestNodeNumber = KeQueryHighestNodeNumber();
  v5 = 0;
  *a2 = 0;
  v6 = HighestNodeNumber;
  v7 = 0;
  do
  {
    LOWORD(Count) = 0;
    KeQueryNodeActiveAffinity(v5, 0LL, (PUSHORT)&Count);
    if ( (_WORD)Count )
      ++v7;
    ++v5;
  }
  while ( v5 <= v6 );
  *a2 = v7;
  return 0LL;
}
