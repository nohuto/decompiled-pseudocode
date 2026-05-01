/*
 * XREFs of ?RmpActivityHostComputeImportanceForCategory@@YA?AT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_ACTIVITY_HOST@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x1800125F0
 * Callers:
 *     ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x1800121E0 (-RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     RmpActivityImportanceMergeVectors @ 0x180012690 (RmpActivityImportanceMergeVectors.c)
 */

__int64 __fastcall RmpActivityHostComputeImportanceForCategory(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  bool v4; // zf
  __int64 result; // rax
  __int64 v6; // rbx
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rcx

  v2 = 3LL * a2 + 77;
  v3 = *(_QWORD *)(a1 + 8 * v2);
  v4 = v3 == a1 + 8 * v2;
  result = 1LL;
  if ( !v4 )
  {
    v6 = v3 - 1368;
    while ( v6 )
    {
      if ( *(_DWORD *)(v6 + 1352) == 2 || (*(_BYTE *)(v6 + 1404) & 0x10) != 0 )
        result = RmpActivityImportanceMergeVectors((unsigned int)result, *(unsigned int *)(v6 + 1424));
      v7 = *(_QWORD *)(v6 + 1368);
      v8 = 3LL * *(int *)(v6 + 1400);
      v9 = *(_QWORD *)(v6 + 1392);
      v6 = 0LL;
      if ( v7 != v9 + 8 * (v8 + 77) )
        v6 = v7 - 1368;
    }
  }
  return result;
}
