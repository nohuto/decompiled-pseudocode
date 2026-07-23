/*
 * XREFs of SmHpChunkHeapCleanup @ 0x140004668
 * Callers:
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1400041D8 (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x14000545C (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 * Callees:
 *     SmHpBufferCleanup @ 0x14021FB90 (SmHpBufferCleanup.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall SmHpChunkHeapCleanup(__int64 a1)
{
  unsigned int v1; // edi
  __int64 i; // rbx
  __int64 v3; // rdi
  __int64 v4; // rcx

  v1 = 1;
  for ( i = a1; v1 < *(_DWORD *)(i + 256); ++v1 )
  {
    _BitScanReverse((unsigned int *)&v4, v1);
    if ( *(_QWORD *)(*(_QWORD *)(i + 8 * v4) + 16 * (v1 ^ (unsigned __int64)(unsigned int)(1 << v4))) )
      SmHpBufferCleanup(i);
  }
  v3 = 32LL;
  do
  {
    if ( *(_QWORD *)i )
      ExFreePoolWithTag(*(PVOID *)i, 0);
    i += 8LL;
    --v3;
  }
  while ( v3 );
}
