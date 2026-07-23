/*
 * XREFs of CmpLightWeightCommitSetValueKeyUoW @ 0x14053B470
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x14053B24C (CmpProcessLightWeightUOW.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmpFreeValue @ 0x140400540 (CmpFreeValue.c)
 *     CmpCleanUpKcbValueCache @ 0x1404361A8 (CmpCleanUpKcbValueCache.c)
 *     CmpLightWeightCleanupSetValueKeyUoW @ 0x14053B590 (CmpLightWeightCleanupSetValueKeyUoW.c)
 */

__int64 __fastcall CmpLightWeightCommitSetValueKeyUoW(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbp
  __int64 v5; // rax
  ULONG_PTR v6; // rsi
  __int64 v7; // rdi
  unsigned int v8; // eax
  unsigned int v9; // ecx
  ULONG_PTR v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rcx
  int v15; // [rsp+40h] [rbp+8h] BYREF
  int v16; // [rsp+44h] [rbp+Ch]

  v15 = -1;
  v2 = *(_QWORD *)(a1 + 104);
  v16 = 0;
  v5 = *(_QWORD *)(a1 + 48);
  v6 = *(_QWORD *)(v5 + 24);
  v7 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v6 + 8))(v6, *(unsigned int *)(v5 + 32), &v15);
  v8 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 112) + 8LL);
  if ( *(_DWORD *)(v7 + 60) < v8 )
  {
    *(_DWORD *)(v7 + 60) = v8;
    *(_WORD *)(*(_QWORD *)(a1 + 48) + 170LL) = *(_WORD *)(*(_QWORD *)(a1 + 112) + 8LL);
  }
  v9 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 12LL);
  if ( *(_DWORD *)(v7 + 64) < v9 )
  {
    *(_DWORD *)(v7 + 64) = v9;
    *(_DWORD *)(*(_QWORD *)(a1 + 48) + 172LL) = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 12LL);
  }
  *(_QWORD *)(v7 + 4) = *a2;
  *(_QWORD *)(*(_QWORD *)(a1 + 48) + 160LL) = *a2;
  v10 = *(unsigned int *)(*(_QWORD *)(a1 + 112) + 4LL);
  if ( (_DWORD)v10 != -1 )
    CmpFreeValue(v6, v10);
  ExFreePoolWithTag(*(PVOID *)(a1 + 112), 0x77554D43u);
  *(_QWORD *)(a1 + 112) = 0LL;
  if ( *(_DWORD *)v2 == 1 )
  {
    v11 = *(_QWORD *)(v7 + 36);
    *(_QWORD *)(v7 + 36) = *(_QWORD *)(v2 + 4);
    *(_QWORD *)(v2 + 4) = v11;
    CmpCleanUpKcbValueCache(*(_QWORD *)(a1 + 48));
    v12 = *(_QWORD *)(a1 + 48);
    v13 = *(unsigned int *)(v7 + 40);
    *(_DWORD *)(v12 + 88) = *(_DWORD *)(v7 + 36);
    *(_QWORD *)(v12 + 96) = v13;
  }
  CmpLightWeightCleanupSetValueKeyUoW(v6, v2);
  *(_QWORD *)(a1 + 104) = 0LL;
  return (*(__int64 (__fastcall **)(ULONG_PTR, int *))(v6 + 16))(v6, &v15);
}
