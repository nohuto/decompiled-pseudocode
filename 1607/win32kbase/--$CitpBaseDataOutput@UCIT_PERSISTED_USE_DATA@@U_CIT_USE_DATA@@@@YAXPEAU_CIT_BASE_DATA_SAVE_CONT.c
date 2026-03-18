/*
 * XREFs of ??$CitpBaseDataOutput@UCIT_PERSISTED_USE_DATA@@U_CIT_USE_DATA@@@@YAXPEAU_CIT_BASE_DATA_SAVE_CONTEXT@@PEAUCIT_PERSISTED_USE_DATA@@PEBU_CIT_USE_DATA@@@Z @ 0x1C00F548C
 * Callers:
 *     ?CitpSavedDataPrepare@@YAJPEBU_CIT_IMPACT_CONTEXT@@PEAPEAU_CIT_PERSISTED_HEADER@@PEAI@Z @ 0x1C00F7360 (-CitpSavedDataPrepare@@YAJPEBU_CIT_IMPACT_CONTEXT@@PEAPEAU_CIT_PERSISTED_HEADER@@PEAI@Z.c)
 * Callees:
 *     memmove @ 0x1C0089D40 (memmove.c)
 *     ?AdvanceToNext@?$CIT_PERSISTED_SECTION@U_CIT_PERSISTED_BITMAP@@@@QEAAXXZ @ 0x1C00F5924 (-AdvanceToNext@-$CIT_PERSISTED_SECTION@U_CIT_PERSISTED_BITMAP@@@@QEAAXXZ.c)
 */

void *__fastcall CitpBaseDataOutput<CIT_PERSISTED_USE_DATA,_CIT_USE_DATA>(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // rcx
  _DWORD *v8; // r10
  unsigned int v9; // edi
  int v10; // eax
  unsigned int v11; // edi
  int v12; // eax
  unsigned int v13; // edi
  void *result; // rax

  *a2 = *(_DWORD *)(a1 + 12);
  CIT_PERSISTED_SECTION<_CIT_PERSISTED_BITMAP>::AdvanceToNext(a1, a2, a3, a4);
  *v8 = *(_DWORD *)(v7 + 84);
  v8[1] = *(_DWORD *)(a3 + 8);
  v9 = *(_DWORD *)(v7 + 80) - *(_DWORD *)(v7 + 84);
  if ( *(_DWORD *)(a3 + 8) < v9 )
    v9 = *(_DWORD *)(a3 + 8);
  memmove(*(void **)(v7 + 88), *(const void **)a3, v9);
  *(_DWORD *)(a1 + 84) += v9;
  *(_QWORD *)(a1 + 88) += v9;
  a2[1] = *(_DWORD *)(a1 + 12) - *a2;
  v10 = *(_DWORD *)(a1 + 36);
  a2[3] = 48;
  a2[2] = v10;
  v11 = *(_DWORD *)(a1 + 32) - *(_DWORD *)(a1 + 36);
  if ( v11 > 0x30 )
    v11 = 48;
  memmove(*(void **)(a1 + 40), (const void *)(a3 + 16), v11);
  *(_DWORD *)(a1 + 36) += v11;
  *(_QWORD *)(a1 + 40) += v11;
  v12 = *(_DWORD *)(a1 + 60);
  a2[5] = 24;
  a2[4] = v12;
  v13 = *(_DWORD *)(a1 + 56) - *(_DWORD *)(a1 + 60);
  if ( v13 > 0x18 )
    v13 = 24;
  result = memmove(*(void **)(a1 + 64), (const void *)(a3 + 64), v13);
  *(_DWORD *)(a1 + 60) += v13;
  *(_QWORD *)(a1 + 64) += v13;
  return result;
}
