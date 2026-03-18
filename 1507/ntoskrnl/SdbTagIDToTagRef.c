/*
 * XREFs of SdbTagIDToTagRef @ 0x1405C6D34
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x140577594 (SdbGetDatabaseMatchEx.c)
 *     SdbGetDatabaseMatch @ 0x1405AA8F0 (SdbGetDatabaseMatch.c)
 *     KsepDbGetShimInfo @ 0x14069C004 (KsepDbGetShimInfo.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1405AB1C4 (AslLogCallPrintf.c)
 *     SdbpFindLocalDatabaseByPDB @ 0x1405C6D84 (SdbpFindLocalDatabaseByPDB.c)
 */

__int64 __fastcall SdbTagIDToTagRef(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  int v5; // esi
  unsigned int v6; // ebx
  int v8[6]; // [rsp+20h] [rbp-18h] BYREF

  v8[0] = -1;
  v5 = a3;
  v6 = 0;
  if ( (unsigned int)SdbpFindLocalDatabaseByPDB(a1, a2, a3, v8) )
  {
    v6 = 1;
    *a4 = v5 | (v8[0] << 28);
  }
  else
  {
    AslLogCallPrintf(1LL);
    *a4 = 0;
  }
  return v6;
}
