/*
 * XREFs of CmpCleanupLightWeightUoWData @ 0x14053AF14
 * Callers:
 *     CmpCleanupLightWeightPrepare @ 0x14053AED8 (CmpCleanupLightWeightPrepare.c)
 * Callees:
 *     MiDeleteSubsection @ 0x1400A6E14 (MiDeleteSubsection.c)
 *     CmpDereferenceSecurityNode @ 0x1401B63F8 (CmpDereferenceSecurityNode.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmpCleanupDiscardReplaceContext @ 0x1403FAEDC (CmpCleanupDiscardReplaceContext.c)
 *     CmpFreeKeyByCell @ 0x1403FF488 (CmpFreeKeyByCell.c)
 *     CmpFreeValue @ 0x140400540 (CmpFreeValue.c)
 *     CmpLightWeightCleanupSetValueKeyUoW @ 0x14053B590 (CmpLightWeightCleanupSetValueKeyUoW.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x14060E390 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 */

void __fastcall CmpCleanupLightWeightUoWData(__int64 a1)
{
  ULONG_PTR *v1; // rdi
  int v3; // eax
  void *v4; // rdx
  _QWORD *v5; // rcx
  ULONG_PTR v6; // rdx
  unsigned int *v7; // rax
  ULONG_PTR v8; // rdx

  v1 = *(ULONG_PTR **)(a1 + 104);
  if ( !v1 )
    return;
  v3 = *(_DWORD *)(a1 + 68);
  switch ( v3 )
  {
    case 0:
      goto LABEL_11;
    case 1:
      goto LABEL_25;
    case 2:
      goto LABEL_12;
    case 3:
LABEL_25:
      *(_QWORD *)(a1 + 104) = 0LL;
      return;
  }
  if ( v3 <= 3 )
    return;
  if ( v3 > 6 )
  {
    if ( v3 == 9 )
    {
      v6 = *(unsigned int *)v1;
      if ( (_DWORD)v6 != -1 )
        CmpDereferenceSecurityNode(v1[1], v6);
      ExFreePoolWithTag(v1, 0x77554D43u);
      *(_QWORD *)(a1 + 104) = 0LL;
      return;
    }
    if ( v3 != 10 )
    {
      if ( v3 != 12 )
        return;
LABEL_11:
      CmpFreeKeyByCell(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL), *(unsigned int *)(*(_QWORD *)(a1 + 48) + 32LL), 0);
      *(_DWORD *)(*(_QWORD *)(a1 + 48) + 32LL) = *(_DWORD *)(a1 + 88);
      *(_DWORD *)(a1 + 88) = 0;
LABEL_12:
      v4 = *(void **)(a1 + 104);
      if ( v4 )
      {
        CmpLightWeightCleanupModifyKeyDataUoW(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL), v4);
        *(_QWORD *)(a1 + 104) = 0LL;
      }
      v5 = *(_QWORD **)(a1 + 112);
      if ( v5 )
      {
        CmpCleanupDiscardReplaceContext(v5);
        MiDeleteSubsection(*(PPRIVILEGE_SET *)(a1 + 112));
LABEL_16:
        *(_QWORD *)(a1 + 112) = 0LL;
        return;
      }
      return;
    }
    goto LABEL_25;
  }
  CmpLightWeightCleanupSetValueKeyUoW(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL), *(_QWORD *)(a1 + 104));
  v7 = *(unsigned int **)(a1 + 112);
  *(_QWORD *)(a1 + 104) = 0LL;
  if ( v7 )
  {
    v8 = *v7;
    if ( (_DWORD)v8 != -1 )
      CmpFreeValue(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL), v8);
    ExFreePoolWithTag(*(PVOID *)(a1 + 112), 0x77554D43u);
    goto LABEL_16;
  }
}
