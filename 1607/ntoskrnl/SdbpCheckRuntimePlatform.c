/*
 * XREFs of SdbpCheckRuntimePlatform @ 0x1406C3208
 * Callers:
 *     <none>
 * Callees:
 *     SdbReadDWORDTag @ 0x1404CCBB0 (SdbReadDWORDTag.c)
 */

__int64 __fastcall SdbpCheckRuntimePlatform(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  int v5; // ebx

  v5 = *(_DWORD *)(a2 + 544);
  *a1 = ((unsigned int)SdbReadDWORDTag(a3, a5, 0x1Fu) & v5) != 0;
  return 1LL;
}
