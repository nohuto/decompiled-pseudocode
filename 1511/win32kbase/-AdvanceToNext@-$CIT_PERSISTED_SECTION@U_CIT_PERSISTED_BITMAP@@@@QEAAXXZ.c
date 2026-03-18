/*
 * XREFs of ?AdvanceToNext@?$CIT_PERSISTED_SECTION@U_CIT_PERSISTED_BITMAP@@@@QEAAXXZ @ 0x1C00E3B04
 * Callers:
 *     ??$CitpBaseDataOutput@UCIT_PERSISTED_SYSTEM_DATA@@U_CIT_SYSTEM_DATA@@@@YAXPEAU_CIT_BASE_DATA_SAVE_CONTEXT@@PEAUCIT_PERSISTED_SYSTEM_DATA@@PEBU_CIT_SYSTEM_DATA@@@Z @ 0x1C00E3558 (--$CitpBaseDataOutput@UCIT_PERSISTED_SYSTEM_DATA@@U_CIT_SYSTEM_DATA@@@@YAXPEAU_CIT_BASE_DATA_SAV.c)
 *     ??$CitpBaseDataOutput@UCIT_PERSISTED_USE_DATA@@U_CIT_USE_DATA@@@@YAXPEAU_CIT_BASE_DATA_SAVE_CONTEXT@@PEAUCIT_PERSISTED_USE_DATA@@PEBU_CIT_USE_DATA@@@Z @ 0x1C00E366C (--$CitpBaseDataOutput@UCIT_PERSISTED_USE_DATA@@U_CIT_USE_DATA@@@@YAXPEAU_CIT_BASE_DATA_SAVE_CONT.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CIT_PERSISTED_SECTION<_CIT_PERSISTED_BITMAP>::AdvanceToNext(__int64 a1)
{
  __int64 v1; // r8
  unsigned __int64 result; // rax

  v1 = *(unsigned int *)(a1 + 12);
  result = *(unsigned int *)(a1 + 8);
  if ( v1 + 8 <= result )
  {
    *(_QWORD *)(a1 + 16) += 8LL;
    result = (unsigned int)(v1 + 8);
    *(_DWORD *)(a1 + 12) = result;
  }
  return result;
}
