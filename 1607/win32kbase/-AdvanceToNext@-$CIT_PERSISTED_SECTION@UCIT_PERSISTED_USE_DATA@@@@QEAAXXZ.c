/*
 * XREFs of ?AdvanceToNext@?$CIT_PERSISTED_SECTION@UCIT_PERSISTED_USE_DATA@@@@QEAAXXZ @ 0x1C00F5904
 * Callers:
 *     ?CitpSavedDataPrepare@@YAJPEBU_CIT_IMPACT_CONTEXT@@PEAPEAU_CIT_PERSISTED_HEADER@@PEAI@Z @ 0x1C00F7360 (-CitpSavedDataPrepare@@YAJPEBU_CIT_IMPACT_CONTEXT@@PEAPEAU_CIT_PERSISTED_HEADER@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CIT_PERSISTED_SECTION<CIT_PERSISTED_USE_DATA>::AdvanceToNext(__int64 a1)
{
  __int64 v1; // r8
  unsigned __int64 result; // rax

  v1 = *(unsigned int *)(a1 + 12);
  result = *(unsigned int *)(a1 + 8);
  if ( v1 + 24 <= result )
  {
    *(_QWORD *)(a1 + 16) += 24LL;
    result = (unsigned int)(v1 + 24);
    *(_DWORD *)(a1 + 12) = result;
  }
  return result;
}
