/*
 * XREFs of SmpProcessQueryStoreStats @ 0x140135264
 * Callers:
 *     MiReleaseOutSwappedProcessCommit @ 0x1401E0B98 (MiReleaseOutSwappedProcessCommit.c)
 *     SmProcessQueryStoreStats @ 0x14054C408 (SmProcessQueryStoreStats.c)
 * Callees:
 *     SmKmStoreRefFromStoreIndex @ 0x14000321C (SmKmStoreRefFromStoreIndex.c)
 *     ?SmStGetStoreStats@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x1400032B8 (-SmStGetStoreStats@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z.c)
 *     SmpKeyedStoreEntryGet @ 0x1400C92BC (SmpKeyedStoreEntryGet.c)
 */

__int64 __fastcall SmpProcessQueryStoreStats(__int64 a1)
{
  __int64 v1; // rax
  int v3; // edx
  __int64 *v4; // rax
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  if ( a1 == qword_1403BF120 )
  {
    v3 = dword_1403BF178;
  }
  else
  {
    v5 = a1;
    v1 = SmpKeyedStoreEntryGet((ULONG_PTR)&qword_1403BF150, &v5, 0, 0);
    if ( !v1 )
      return 3221226021LL;
    v3 = *(unsigned __int16 *)(v1 + 16);
  }
  if ( v3 == -1 )
    return 3221226021LL;
  v4 = (__int64 *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, v3 & 0x3FF);
  return SMKM_STORE<SM_TRAITS>::SmStGetStoreStats(*v4);
}
