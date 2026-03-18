/*
 * XREFs of SmpProcessQueryStoreStats @ 0x14025697C
 * Callers:
 *     MiReleaseOutSwappedProcessCommit @ 0x14021023C (MiReleaseOutSwappedProcessCommit.c)
 *     SmProcessQueryStoreStats @ 0x1406D9B70 (SmProcessQueryStoreStats.c)
 * Callees:
 *     ?SmStGetStoreStats@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x1400DA1F8 (-SmStGetStoreStats@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z.c)
 *     SmpKeyedStoreEntryGet @ 0x1400F0084 (SmpKeyedStoreEntryGet.c)
 */

__int64 __fastcall SmpProcessQueryStoreStats(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  int v4; // eax
  int v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  if ( a1 )
  {
    v7 = a1;
    v3 = SmpKeyedStoreEntryGet((ULONG_PTR)&qword_140352D30, &v7, 0, 0LL);
    if ( !v3 )
      return 3221226021LL;
    v4 = *(unsigned __int16 *)(v3 + 16);
  }
  else
  {
    v4 = dword_140352D58;
  }
  if ( v4 == -1 )
    return 3221226021LL;
  v6 = 1528;
  return SMKM_STORE<SM_TRAITS>::SmStGetStoreStats(SmGlobals[22 * (v4 & 0x1F)], 0LL, a2, (__int64)&v6);
}
