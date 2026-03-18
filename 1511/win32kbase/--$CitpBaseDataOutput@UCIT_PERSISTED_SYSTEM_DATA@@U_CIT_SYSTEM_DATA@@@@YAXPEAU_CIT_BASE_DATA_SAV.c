/*
 * XREFs of ??$CitpBaseDataOutput@UCIT_PERSISTED_SYSTEM_DATA@@U_CIT_SYSTEM_DATA@@@@YAXPEAU_CIT_BASE_DATA_SAVE_CONTEXT@@PEAUCIT_PERSISTED_SYSTEM_DATA@@PEBU_CIT_SYSTEM_DATA@@@Z @ 0x1C00E3558
 * Callers:
 *     ?CitpSavedDataPrepare@@YAJPEBU_CIT_IMPACT_CONTEXT@@PEAPEAU_CIT_PERSISTED_HEADER@@PEAI@Z @ 0x1C00E5424 (-CitpSavedDataPrepare@@YAJPEBU_CIT_IMPACT_CONTEXT@@PEAPEAU_CIT_PERSISTED_HEADER@@PEAI@Z.c)
 * Callees:
 *     memmove @ 0x1C0088D80 (memmove.c)
 *     ?AdvanceToNext@?$CIT_PERSISTED_SECTION@U_CIT_PERSISTED_BITMAP@@@@QEAAXXZ @ 0x1C00E3B04 (-AdvanceToNext@-$CIT_PERSISTED_SECTION@U_CIT_PERSISTED_BITMAP@@@@QEAAXXZ.c)
 */

void *__fastcall CitpBaseDataOutput<CIT_PERSISTED_SYSTEM_DATA,_CIT_SYSTEM_DATA>(
        __int64 a1,
        _DWORD *a2,
        unsigned int *a3)
{
  unsigned int *v3; // r14
  __int64 v7; // r12
  _DWORD *v8; // r9
  unsigned int v9; // edi
  int v10; // eax
  unsigned int v11; // edi
  int v12; // eax
  unsigned int v13; // edi
  void *result; // rax

  v3 = a3 + 2;
  *a2 = *(_DWORD *)(a1 + 12);
  v7 = 6LL;
  do
  {
    CIT_PERSISTED_SECTION<_CIT_PERSISTED_BITMAP>::AdvanceToNext(a1, a2, a3, *(_QWORD *)(a1 + 16));
    *v8 = *(_DWORD *)(a1 + 84);
    v8[1] = *v3;
    v9 = *(_DWORD *)(a1 + 80) - *(_DWORD *)(a1 + 84);
    if ( *v3 < v9 )
      v9 = *v3;
    memmove(*(void **)(a1 + 88), *((const void **)v3 - 1), v9);
    *(_DWORD *)(a1 + 84) += v9;
    v3 += 4;
    *(_QWORD *)(a1 + 88) += v9;
    --v7;
  }
  while ( v7 );
  a2[1] = *(_DWORD *)(a1 + 12) - *a2;
  v10 = *(_DWORD *)(a1 + 36);
  a2[3] = 88;
  a2[2] = v10;
  v11 = *(_DWORD *)(a1 + 32) - *(_DWORD *)(a1 + 36);
  if ( v11 > 0x58 )
    v11 = 88;
  memmove(*(void **)(a1 + 40), a3 + 24, v11);
  *(_DWORD *)(a1 + 36) += v11;
  *(_QWORD *)(a1 + 40) += v11;
  v12 = *(_DWORD *)(a1 + 60);
  a2[5] = 28;
  a2[4] = v12;
  v13 = *(_DWORD *)(a1 + 56) - *(_DWORD *)(a1 + 60);
  if ( v13 > 0x1C )
    v13 = 28;
  result = memmove(*(void **)(a1 + 64), a3 + 46, v13);
  *(_DWORD *)(a1 + 60) += v13;
  *(_QWORD *)(a1 + 64) += v13;
  return result;
}
