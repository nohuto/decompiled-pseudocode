/*
 * XREFs of CmpCommitSetSecurityUoW @ 0x14058E3F0
 * Callers:
 *     CmpTransMgrCommitUoW @ 0x1404F16A0 (CmpTransMgrCommitUoW.c)
 * Callees:
 *     CmpRemoveSecurityCellList @ 0x14012AF2C (CmpRemoveSecurityCellList.c)
 *     CmpKeySecurityDecrementReferenceCount @ 0x1401E0EB0 (CmpKeySecurityDecrementReferenceCount.c)
 *     CmpKeySecurityMarkDirtyForReferenceCountDecrement @ 0x1401E0F38 (CmpKeySecurityMarkDirtyForReferenceCountDecrement.c)
 *     CmpAssignSecurityToKcb @ 0x140449C5C (CmpAssignSecurityToKcb.c)
 *     HvFreeCell @ 0x14049FC7C (HvFreeCell.c)
 *     CmpGetSecurityDescriptorNode @ 0x1406597E0 (CmpGetSecurityDescriptorNode.c)
 *     HvMarkCellDirty @ 0x140660960 (HvMarkCellDirty.c)
 */

__int64 __fastcall CmpCommitSetSecurityUoW(__int64 a1, __int64 *a2)
{
  __int64 v3; // r13
  __int64 v4; // r15
  __int64 v5; // rax
  unsigned int v6; // esi
  ULONG_PTR v7; // rdi
  __int64 v8; // r8
  int SecurityDescriptorNode; // esi
  unsigned int *v10; // r14
  unsigned int v11; // ebp
  unsigned int *v12; // rax
  bool v13; // bl
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  unsigned int v18; // [rsp+30h] [rbp-58h]
  __int64 v19; // [rsp+38h] [rbp-50h]
  int v20; // [rsp+90h] [rbp+8h] BYREF
  __int64 *v21; // [rsp+98h] [rbp+10h]
  int v22; // [rsp+A0h] [rbp+18h] BYREF
  int v23; // [rsp+A8h] [rbp+20h] BYREF

  v21 = a2;
  v22 = -1;
  v23 = -1;
  v3 = 0LL;
  v20 = -1;
  v4 = 0LL;
  v5 = *(_QWORD *)(a1 + 48);
  v6 = *(_DWORD *)(v5 + 40);
  v7 = *(_QWORD *)(v5 + 32);
  v18 = v6;
  v19 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v7 + 8))(v7, v6, &v22);
  if ( v19 )
  {
    LOBYTE(v8) = 1;
    if ( (unsigned __int8)HvMarkCellDirty(v7, v6, v8) )
    {
      v3 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v7 + 8))(v7, *(unsigned int *)(a1 + 80), &v23);
      if ( v3
        && (v10 = (unsigned int *)(v19 + 44),
            v11 = *(_DWORD *)(v19 + 44),
            v12 = (unsigned int *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v7 + 8))(v7, v11, &v20),
            (v4 = (__int64)v12) != 0) )
      {
        SecurityDescriptorNode = CmpKeySecurityMarkDirtyForReferenceCountDecrement(v12, v7, v11, 1);
        if ( SecurityDescriptorNode >= 0 )
        {
          SecurityDescriptorNode = CmpGetSecurityDescriptorNode(v7, v18, v19, v3 + 20, 1, v19 + 44);
          if ( SecurityDescriptorNode < 0 )
          {
            *v10 = v11;
          }
          else
          {
            v13 = CmpKeySecurityDecrementReferenceCount(v4, v7, v11);
            (*(void (__fastcall **)(ULONG_PTR, int *))(v7 + 16))(v7, &v20);
            v4 = 0LL;
            if ( v13 )
            {
              CmpRemoveSecurityCellList(v7, v11);
              HvFreeCell(v7, v11, v14, v15);
            }
            v16 = *v21;
            *(_QWORD *)(v19 + 4) = *v21;
            *(_QWORD *)(*(_QWORD *)(a1 + 48) + 168LL) = v16;
            CmpAssignSecurityToKcb(*(_QWORD *)(a1 + 48), *v10, 0LL, 0LL, 0);
          }
        }
      }
      else
      {
        SecurityDescriptorNode = -1073741670;
      }
    }
    else
    {
      SecurityDescriptorNode = -1073741443;
    }
    (*(void (__fastcall **)(ULONG_PTR, int *))(v7 + 16))(v7, &v22);
    if ( v3 )
      (*(void (__fastcall **)(ULONG_PTR, int *))(v7 + 16))(v7, &v23);
    if ( v4 )
      (*(void (__fastcall **)(ULONG_PTR, int *))(v7 + 16))(v7, &v20);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)SecurityDescriptorNode;
}
