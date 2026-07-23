/*
 * XREFs of ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAU_SMKM_STORE_HELPER_PARAMS@@@Z @ 0x14011EA60
 * Callers:
 *     <none>
 * Callees:
 *     SmFpFree @ 0x14011B318 (SmFpFree.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x14011EB50 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?SmStCheckResident@?$SMKM_STORE@USM_TRAITS@@@@SA?AW4_SMST_RESIDENT_CHECK_RESULT@1@PEAXK@Z @ 0x14011EC58 (-SmStCheckResident@-$SMKM_STORE@USM_TRAITS@@@@SA-AW4_SMST_RESIDENT_CHECK_RESULT@1@PEAXK@Z.c)
 *     memcmp @ 0x14014E450 (memcmp.c)
 *     ?SmStUnhandledExceptionFilter@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAXPEAU_EXCEPTION_POINTERS@@W4_SMST_STORE_EXCEPTION_SOURCE@1@@Z @ 0x14021D324 (-SmStUnhandledExceptionFilter@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAXPEAU_EXCEPTION_POINTERS@@W4_SMST.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStCompareRegionDataCallback(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rbx
  unsigned int *v3; // rdi
  __int64 v4; // rcx
  const void *v5; // rsi
  const void *v6; // r14
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rcx
  struct _MDL *v10; // r9
  __int64 v11; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  struct _MDL *v17; // r9
  unsigned int v18; // [rsp+30h] [rbp-28h]

  v2 = a1 - 6072;
  v3 = a2 + 2;
  v4 = *(_QWORD *)(a1 - 6072 + 6056);
  v5 = (const void *)(a2[3] + (*(_QWORD *)(v4 + 8LL * a2[2]) & 0x7FFFFFFFFFFF0000LL));
  v6 = (const void *)((*(_QWORD *)(v4 + 8LL * a2[4]) & 0x7FFFFFFFFFFF0000LL) + a2[5]);
  if ( (unsigned int)SMKM_STORE<SM_TRAITS>::SmStCheckResident(v5, a2[6]) == 1 )
    v18 = memcmp(v5, v6, v3[4]) != 0 ? 0xC0000059 : 0;
  else
    v18 = -1073741653;
  v9 = *v3;
  if ( (*(_BYTE *)(v2 + 5861) & 4) != 0 )
  {
    SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v2, v9, v7, v8);
  }
  else
  {
    v13 = *(_QWORD *)(v2 + 6056);
    v10 = (struct _MDL *)(*(_QWORD *)(v13 + 8 * v9) & 0xFFFFFFFFFFFFFFF8uLL);
    v14 = *(_QWORD *)(v13 + 8 * v9) & 0xFFFFFFFFFFFFFFFEuLL;
    *(_QWORD *)(v13 + 8 * v9) = v14;
    if ( (v14 & 3) == 0 )
      SmFpFree(v2 + 6448, 5, (__int64)KeGetCurrentThread(), v10);
  }
  v11 = v3[2];
  if ( (*(_BYTE *)(v2 + 5861) & 4) != 0 )
  {
    SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v2, v11, v7, (_DWORD)v10);
  }
  else
  {
    v15 = *(_QWORD *)(v2 + 6056);
    v16 = *(_QWORD *)(v15 + 8 * v11);
    v17 = (struct _MDL *)(v16 & 0xFFFFFFFFFFFFFFF8uLL);
    v16 &= ~1uLL;
    *(_QWORD *)(v15 + 8LL * v3[2]) = v16;
    if ( (v16 & 3) == 0 )
      SmFpFree(v2 + 6448, 5, (__int64)KeGetCurrentThread(), v17);
  }
  _InterlockedDecrement((volatile signed __int32 *)(v2 + 6436));
  return v18;
}
