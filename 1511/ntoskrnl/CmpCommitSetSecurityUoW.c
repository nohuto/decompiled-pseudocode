/*
 * XREFs of CmpCommitSetSecurityUoW @ 0x14051A854
 * Callers:
 *     CmpTransMgrCommitUoW @ 0x1403D7344 (CmpTransMgrCommitUoW.c)
 * Callees:
 *     CmpRemoveSecurityCellList @ 0x1400EE0DC (CmpRemoveSecurityCellList.c)
 *     HvFreeCell @ 0x1403D9010 (HvFreeCell.c)
 *     CmpAssignSecurityToKcb @ 0x1403DFE54 (CmpAssignSecurityToKcb.c)
 *     CmpAssignSecurityDescriptor @ 0x1403DFF74 (CmpAssignSecurityDescriptor.c)
 *     HvpMarkCellDirty @ 0x1403F76E0 (HvpMarkCellDirty.c)
 */

__int64 __fastcall CmpCommitSetSecurityUoW(__int64 a1, __int64 *a2)
{
  __int64 v3; // r15
  __int64 v4; // rsi
  __int64 v5; // rax
  ULONG_PTR v6; // rdi
  unsigned int v7; // ebx
  __int64 v8; // r14
  unsigned int v9; // ebp
  __int64 v10; // rax
  unsigned int v11; // r12d
  int v12; // ebx
  int v13; // eax
  __int64 v14; // rcx
  unsigned int BugCheckParameter3; // [rsp+30h] [rbp-58h]
  int v17; // [rsp+90h] [rbp+8h] BYREF
  __int64 *v18; // [rsp+98h] [rbp+10h]
  int v19; // [rsp+A0h] [rbp+18h] BYREF
  int v20; // [rsp+A8h] [rbp+20h] BYREF

  v18 = a2;
  v19 = -1;
  v20 = -1;
  v3 = 0LL;
  v17 = -1;
  v4 = 0LL;
  v5 = *(_QWORD *)(a1 + 48);
  v6 = *(_QWORD *)(v5 + 32);
  v7 = *(_DWORD *)(v5 + 40);
  v8 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v6 + 8))(v6, v7, &v19);
  if ( !v8 )
    return (unsigned int)-1073741670;
  if ( !HvpMarkCellDirty(v6, v7, 1) )
  {
LABEL_21:
    v12 = -1073741443;
    goto LABEL_12;
  }
  v3 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v6 + 8))(v6, *(unsigned int *)(a1 + 80), &v20);
  if ( v3 )
  {
    v9 = *(_DWORD *)(v8 + 44);
    v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v6 + 8))(v6, v9, &v17);
    v4 = v10;
    if ( v10 )
    {
      v11 = *(_DWORD *)(v10 + 8);
      BugCheckParameter3 = *(_DWORD *)(v10 + 4);
      if ( HvpMarkCellDirty(v6, v9, 1) && HvpMarkCellDirty(v6, v11, 1) && HvpMarkCellDirty(v6, BugCheckParameter3, 1) )
      {
        v12 = CmpAssignSecurityDescriptor(v6, v7, v8, (void *)(v3 + 20));
        if ( v12 < 0 )
        {
          *(_DWORD *)(v8 + 44) = v9;
        }
        else
        {
          v13 = *(_DWORD *)(v4 + 12);
          if ( v13 == 1 )
          {
            (*(void (__fastcall **)(ULONG_PTR, int *))(v6 + 16))(v6, &v17);
            v4 = 0LL;
            CmpRemoveSecurityCellList(v6, v9);
            HvFreeCell(v6, v9);
          }
          else
          {
            *(_DWORD *)(v4 + 12) = v13 - 1;
          }
          v14 = *v18;
          *(_QWORD *)(v8 + 4) = *v18;
          *(_QWORD *)(*(_QWORD *)(a1 + 48) + 168LL) = v14;
          CmpAssignSecurityToKcb(*(_QWORD *)(a1 + 48), *(unsigned int *)(v8 + 44), 0LL, 0, 0);
        }
        goto LABEL_12;
      }
      goto LABEL_21;
    }
  }
  v12 = -1073741670;
LABEL_12:
  (*(void (__fastcall **)(ULONG_PTR, int *))(v6 + 16))(v6, &v19);
  if ( v3 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(v6 + 16))(v6, &v20);
  if ( v4 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(v6 + 16))(v6, &v17);
  return (unsigned int)v12;
}
