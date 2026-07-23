/*
 * XREFs of CmpLightWeightCommitDeleteValueKeyUoW @ 0x14060E6E4
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x14053B24C (CmpProcessLightWeightUOW.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmpFreeValue @ 0x140400540 (CmpFreeValue.c)
 *     CmpCleanUpKcbValueCache @ 0x1404361A8 (CmpCleanUpKcbValueCache.c)
 *     CmpLightWeightCleanupSetValueKeyUoW @ 0x14053B590 (CmpLightWeightCleanupSetValueKeyUoW.c)
 */

__int64 __fastcall CmpLightWeightCommitDeleteValueKeyUoW(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r14
  __int64 v5; // rax
  ULONG_PTR v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rcx
  int v12; // [rsp+40h] [rbp+8h] BYREF
  int v13; // [rsp+44h] [rbp+Ch]

  v12 = -1;
  v2 = *(_QWORD *)(a1 + 104);
  v13 = 0;
  v5 = *(_QWORD *)(a1 + 48);
  v6 = *(_QWORD *)(v5 + 24);
  v7 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v6 + 8))(v6, *(unsigned int *)(v5 + 32), &v12);
  CmpFreeValue(v6, *(unsigned int *)(*(_QWORD *)(a1 + 112) + 4LL));
  ExFreePoolWithTag(*(PVOID *)(a1 + 112), 0x77554D43u);
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(v7 + 4) = *a2;
  *(_QWORD *)(*(_QWORD *)(a1 + 48) + 160LL) = *a2;
  if ( *(_DWORD *)v2 == 1 )
  {
    v8 = *(_QWORD *)(v7 + 36);
    *(_QWORD *)(v7 + 36) = *(_QWORD *)(v2 + 4);
    *(_QWORD *)(v2 + 4) = v8;
    CmpCleanUpKcbValueCache(*(_QWORD *)(a1 + 48));
    v9 = *(_QWORD *)(a1 + 48);
    v10 = *(unsigned int *)(v7 + 40);
    *(_DWORD *)(v9 + 88) = *(_DWORD *)(v7 + 36);
    *(_QWORD *)(v9 + 96) = v10;
    if ( !*(_DWORD *)(v7 + 36) )
    {
      *(_QWORD *)(v7 + 60) = 0LL;
      *(_WORD *)(*(_QWORD *)(a1 + 48) + 170LL) = 0;
      *(_DWORD *)(*(_QWORD *)(a1 + 48) + 172LL) = 0;
    }
  }
  CmpLightWeightCleanupSetValueKeyUoW(v6, (unsigned int *)v2);
  *(_QWORD *)(a1 + 104) = 0LL;
  return (*(__int64 (__fastcall **)(ULONG_PTR, int *))(v6 + 16))(v6, &v12);
}
