/*
 * XREFs of RmpResourceSetGetExecutionSpeed @ 0x18001AE50
 * Callers:
 *     RmpActivityHostIsForegroundBoostAppliedOrPending @ 0x180019F30 (RmpActivityHostIsForegroundBoostAppliedOrPending.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpResourceSetGetExecutionSpeed(__int64 a1)
{
  int v1; // edx
  int v2; // ecx
  int v3; // edx

  v1 = *(_DWORD *)(a1 + 1460);
  v2 = *(_DWORD *)(a1 + 1432);
  v3 = v1 & 3;
  if ( (v2 & 0x40) != 0 && v3 <= 2 )
    v3 = 2;
  if ( (v2 & 0xEu) >= 8 && (v2 & 0x30u) >= 0x20 && v3 <= 1 )
    return 1;
  return (unsigned int)v3;
}
