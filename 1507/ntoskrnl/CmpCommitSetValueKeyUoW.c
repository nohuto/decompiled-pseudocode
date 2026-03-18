/*
 * XREFs of CmpCommitSetValueKeyUoW @ 0x1404F19C4
 * Callers:
 *     CmpTransMgrCommitUoW @ 0x1404F16A0 (CmpTransMgrCommitUoW.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     CmpGetValueData @ 0x140428050 (CmpGetValueData.c)
 *     CmpFindNameInList @ 0x140429D40 (CmpFindNameInList.c)
 *     CmpSetValueKeyExisting @ 0x14042B410 (CmpSetValueKeyExisting.c)
 *     HvpMarkCellDirty @ 0x14049F7A0 (HvpMarkCellDirty.c)
 *     CmpSetValueKeyNew @ 0x1404A10D0 (CmpSetValueKeyNew.c)
 *     CmpCleanUpKcbValueCache @ 0x1404CC8C0 (CmpCleanUpKcbValueCache.c)
 *     CmpInitializeValueNameString @ 0x1404F1CC4 (CmpInitializeValueNameString.c)
 */

__int64 __fastcall CmpCommitSetValueKeyUoW(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdx
  void *Src; // r12
  __int64 v5; // r15
  PVOID v6; // r13
  __int64 v7; // rax
  ULONG_PTR v8; // rdi
  __int64 v9; // rax
  ULONG_PTR v10; // rbx
  unsigned int v11; // r14d
  char v12; // al
  int v13; // ebx
  unsigned __int16 v14; // cx
  __int64 v15; // rcx
  bool ValueData; // al
  unsigned int v18; // r13d
  _DWORD *v19; // r8
  int *Size; // [rsp+28h] [rbp-50h]
  size_t v21; // [rsp+30h] [rbp-48h]
  int v22; // [rsp+40h] [rbp-38h] BYREF
  int v23; // [rsp+44h] [rbp-34h] BYREF
  int v24; // [rsp+48h] [rbp-30h] BYREF
  void *v25; // [rsp+50h] [rbp-28h] BYREF
  PVOID P; // [rsp+58h] [rbp-20h]
  unsigned __int16 v27[12]; // [rsp+60h] [rbp-18h] BYREF
  char v28; // [rsp+C0h] [rbp+48h]
  char v30; // [rsp+D0h] [rbp+58h] BYREF
  int v31; // [rsp+D8h] [rbp+60h] BYREF

  v2 = *(unsigned int *)(a1 + 84);
  Src = 0LL;
  v24 = -1;
  v22 = -1;
  v5 = 0LL;
  v23 = -1;
  v6 = 0LL;
  v7 = *(_QWORD *)(a1 + 48);
  v25 = 0LL;
  v28 = 0;
  v30 = 0;
  v8 = *(_QWORD *)(v7 + 32);
  v9 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(v8 + 8))(v8, v2, &v24);
  v10 = v9;
  if ( !v9 )
    return (unsigned int)-1073741670;
  v11 = *(_DWORD *)(v9 + 4);
  if ( v11 < 0x80000000 )
  {
    v12 = 0;
  }
  else
  {
    v11 += 0x80000000;
    v12 = 1;
  }
  v31 = v11;
  if ( v11 )
  {
    if ( v12 == 1 )
    {
      Src = (void *)(v10 + 8);
    }
    else
    {
      ValueData = CmpGetValueData(
                    v8,
                    *(unsigned int *)(a1 + 84),
                    v10,
                    (unsigned int *)&v31,
                    (__int64 *)&v25,
                    &v30,
                    (__int64)&v22);
      Src = v25;
      if ( !ValueData )
        goto LABEL_37;
      v11 = v31;
      v28 = 1;
    }
  }
  v5 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v8 + 8))(
         v8,
         *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL),
         &v23);
  if ( !v5 )
  {
LABEL_37:
    v13 = -1073741670;
    goto LABEL_20;
  }
  if ( HvpMarkCellDirty(v8, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL), 0, 0LL) )
  {
    *(_DWORD *)(a1 + 72) = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 40LL) >> 31;
    P = ExAllocatePoolWithTag(PagedPool, 0x8000uLL, 0x62534D43u);
    v6 = P;
    if ( P )
    {
      CmpInitializeValueNameString(v10);
      Size = &v31;
      if ( CmpFindNameInList(v8, v5 + 36) )
      {
        if ( *(_DWORD *)(a1 + 68) != 5 || (v18 = v31, v31 == -1) )
        {
          LODWORD(v21) = v11;
          v13 = CmpSetValueKeyNew(v8, v5, v27, (unsigned int)v25, *(_DWORD *)(v10 + 12), Src, v21, *(_DWORD *)(a1 + 72));
        }
        else
        {
          v31 = -1;
          v19 = (_DWORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v8 + 8))(v8, v18, &v31);
          if ( !v19 )
          {
            v13 = -1073741670;
LABEL_19:
            v6 = P;
            goto LABEL_20;
          }
          LODWORD(Size) = v11;
          v13 = CmpSetValueKeyExisting(v8, v18, v19, *(_DWORD *)(v10 + 12), Src, (size_t)Size, *(_DWORD *)(a1 + 72));
          (*(void (__fastcall **)(ULONG_PTR, int *))(v8 + 16))(v8, &v31);
        }
        if ( v13 >= 0 )
        {
          HvpMarkCellDirty(v8, *(unsigned int *)(a1 + 84), 0, 0LL);
          v14 = v27[0];
          if ( *(_DWORD *)(v5 + 60) < (unsigned int)v27[0] )
          {
            *(_DWORD *)(v5 + 60) = v27[0];
            *(_WORD *)(*(_QWORD *)(a1 + 48) + 178LL) = v14;
          }
          if ( *(_DWORD *)(v5 + 64) < v11 )
          {
            *(_DWORD *)(v5 + 64) = v11;
            *(_DWORD *)(*(_QWORD *)(a1 + 48) + 180LL) = v11;
          }
          v15 = *a2;
          *(_QWORD *)(v5 + 4) = *a2;
          *(_QWORD *)(*(_QWORD *)(a1 + 48) + 168LL) = v15;
          CmpCleanUpKcbValueCache(*(_QWORD *)(a1 + 48));
          *(_DWORD *)(*(_QWORD *)(a1 + 48) + 96LL) = *(_DWORD *)(v5 + 36);
          *(_QWORD *)(*(_QWORD *)(a1 + 48) + 104LL) = *(unsigned int *)(v5 + 40);
        }
        goto LABEL_19;
      }
    }
    goto LABEL_37;
  }
  v13 = -1073741443;
LABEL_20:
  if ( Src && v28 )
  {
    if ( v30 )
      ExFreePoolWithTag(Src, 0);
    else
      (*(void (__fastcall **)(ULONG_PTR, int *))(v8 + 16))(v8, &v22);
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( v5 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(v8 + 16))(v8, &v23);
  (*(void (__fastcall **)(ULONG_PTR, int *))(v8 + 16))(v8, &v24);
  return (unsigned int)v13;
}
