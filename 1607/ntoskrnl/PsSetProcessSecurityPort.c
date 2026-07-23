/*
 * XREFs of PsSetProcessSecurityPort @ 0x14067D304
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PsSetProcessSecurityPort(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 1120) = a2;
  return 0LL;
}
