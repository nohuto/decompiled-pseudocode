/*
 * XREFs of HUBPSM20_CheckingIfOvercurrentBitOne @ 0x1C000D980
 * Callers:
 *     <none>
 * Callees:
 *     HUBREG_UpdateSqmHubOvercurrentDetected @ 0x1C00283A4 (HUBREG_UpdateSqmHubOvercurrentDetected.c)
 */

__int64 __fastcall HUBPSM20_CheckingIfOvercurrentBitOne(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 960);
  if ( (*(_BYTE *)(v2 + 184) & 8) == 0 )
    return 3005LL;
  HUBREG_UpdateSqmHubOvercurrentDetected(*(_QWORD *)v2, a2);
  result = 3089LL;
  *(_DWORD *)(v2 + 1424) = 4;
  return result;
}
