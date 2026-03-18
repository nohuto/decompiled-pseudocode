/*
 * XREFs of CmpCommitDeleteValueKeyUoW @ 0x1403D5C98
 * Callers:
 *     CmpTransMgrCommitUoW @ 0x1403D7344 (CmpTransMgrCommitUoW.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpRemoveValueFromList @ 0x1403D7848 (CmpRemoveValueFromList.c)
 *     CmpInitializeValueNameString @ 0x1403D7DBC (CmpInitializeValueNameString.c)
 *     CmpFreeValue @ 0x1403D8900 (CmpFreeValue.c)
 *     CmpMarkValueDataDirty @ 0x1403DA5C0 (CmpMarkValueDataDirty.c)
 *     CmpFindNameInList @ 0x1403F40B0 (CmpFindNameInList.c)
 *     HvpMarkCellDirty @ 0x1403F76E0 (HvpMarkCellDirty.c)
 *     CmpCleanUpKcbValueCache @ 0x1403F9C74 (CmpCleanUpKcbValueCache.c)
 */

__int64 __fastcall CmpCommitDeleteValueKeyUoW(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  ULONG_PTR v4; // rdi
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rdx
  _DWORD *v8; // r13
  __int64 v9; // r15
  PVOID PoolWithTag; // rax
  int v11; // ebx
  __int64 v12; // rdx
  unsigned int v14; // [rsp+30h] [rbp-20h] BYREF
  PVOID P; // [rsp+38h] [rbp-18h]
  __int16 v16; // [rsp+40h] [rbp-10h] BYREF
  __int64 v17; // [rsp+42h] [rbp-Eh]
  int v18; // [rsp+4Ah] [rbp-6h]
  __int16 v19; // [rsp+4Eh] [rbp-2h]
  ULONG_PTR BugCheckParameter3; // [rsp+90h] [rbp+40h] BYREF
  __int64 *v21; // [rsp+98h] [rbp+48h]
  int v22; // [rsp+A0h] [rbp+50h] BYREF
  int v23; // [rsp+A8h] [rbp+58h] BYREF

  v21 = a2;
  v17 = 0LL;
  v23 = -1;
  v22 = -1;
  v18 = 0;
  v19 = 0;
  v3 = *(_QWORD *)(a1 + 48);
  v16 = 0;
  v4 = *(_QWORD *)(v3 + 32);
  v5 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v4 + 8))(v4, *(unsigned int *)(v3 + 40), &v23);
  v6 = v5;
  if ( !v5 )
    return 3221225626LL;
  v7 = *(unsigned int *)(a1 + 80);
  LODWORD(BugCheckParameter3) = -1;
  v8 = (_DWORD *)(v5 + 36);
  v9 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(v4 + 8))(v4, v7, &v22);
  if ( v9 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x8000uLL, 0x62534D43u);
    P = PoolWithTag;
    if ( PoolWithTag )
    {
      CmpInitializeValueNameString(v9, &v16, PoolWithTag);
      if ( (unsigned __int8)CmpFindNameInList(
                              v4,
                              (_DWORD)v8,
                              (unsigned int)&v16,
                              0,
                              (__int64)&v14,
                              (__int64)&BugCheckParameter3)
        && (_DWORD)BugCheckParameter3 != -1
        && ((*(void (__fastcall **)(ULONG_PTR, int *))(v4 + 16))(v4, &v22),
            (v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v4 + 8))(
                    v4,
                    (unsigned int)BugCheckParameter3,
                    &v22)) != 0) )
      {
        if ( (unsigned __int8)HvpMarkCellDirty(v4, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL))
          && (unsigned __int8)HvpMarkCellDirty(v4, *(unsigned int *)(v6 + 40))
          && (unsigned __int8)HvpMarkCellDirty(v4, (unsigned int)BugCheckParameter3)
          && (unsigned __int8)CmpMarkValueDataDirty(v4) )
        {
          v11 = CmpRemoveValueFromList(v4, v14, v8);
          if ( v11 >= 0 )
          {
            CmpFreeValue(v4, (unsigned int)BugCheckParameter3);
            v12 = *v21;
            *(_QWORD *)(v6 + 4) = *v21;
            *(_QWORD *)(*(_QWORD *)(a1 + 48) + 168LL) = v12;
            if ( !*v8 )
            {
              *(_QWORD *)(v6 + 60) = 0LL;
              *(_WORD *)(*(_QWORD *)(a1 + 48) + 178LL) = 0;
              *(_DWORD *)(*(_QWORD *)(a1 + 48) + 180LL) = 0;
            }
            CmpCleanUpKcbValueCache(*(_QWORD *)(a1 + 48));
            *(_DWORD *)(*(_QWORD *)(a1 + 48) + 96LL) = *v8;
            *(_QWORD *)(*(_QWORD *)(a1 + 48) + 104LL) = *(unsigned int *)(v6 + 40);
          }
        }
        else
        {
          v11 = -1073741443;
        }
      }
      else
      {
        v11 = -1073741670;
      }
      ExFreePoolWithTag(P, 0);
    }
    else
    {
      v11 = -1073741670;
    }
    if ( v9 )
      (*(void (__fastcall **)(ULONG_PTR, int *))(v4 + 16))(v4, &v22);
  }
  else
  {
    v11 = -1073741670;
  }
  (*(void (__fastcall **)(ULONG_PTR, int *))(v4 + 16))(v4, &v23);
  return (unsigned int)v11;
}
