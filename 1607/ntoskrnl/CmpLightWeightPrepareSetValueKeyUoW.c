/*
 * XREFs of CmpLightWeightPrepareSetValueKeyUoW @ 0x14053B5C0
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x14053B24C (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpSwapValueInList @ 0x1400B2914 (CmpSwapValueInList.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmpAddValueToListEx @ 0x1403FEB9C (CmpAddValueToListEx.c)
 *     CmpMarkValueDataDirty @ 0x1403FF334 (CmpMarkValueDataDirty.c)
 *     CmpFreeValue @ 0x140400540 (CmpFreeValue.c)
 *     CmpAddValueKeyNew @ 0x140400A88 (CmpAddValueKeyNew.c)
 *     CmpFindNameInList @ 0x140401914 (CmpFindNameInList.c)
 *     CmpGetValueData @ 0x140441E30 (CmpGetValueData.c)
 *     HvpMarkCellDirty @ 0x1404F6AE0 (HvpMarkCellDirty.c)
 *     CmpInitializeValueNameString @ 0x14053B954 (CmpInitializeValueNameString.c)
 *     CmpLightWeightUpdateSharedSetValueData @ 0x14053B9E0 (CmpLightWeightUpdateSharedSetValueData.c)
 *     CmpLightWeightCreateSetValueData @ 0x14053BA28 (CmpLightWeightCreateSetValueData.c)
 */

__int64 __fastcall CmpLightWeightPrepareSetValueKeyUoW(__int64 a1)
{
  _DWORD *v1; // rbx
  __int64 v2; // rax
  char *v4; // r13
  ULONG_PTR v5; // rdi
  int v6; // ebx
  _QWORD *PoolWithTag; // rsi
  __int64 v8; // rax
  ULONG_PTR v9; // r15
  unsigned int v10; // eax
  unsigned int v11; // r12d
  bool v12; // al
  unsigned int *v13; // rbx
  unsigned int v14; // r15d
  unsigned int v15; // r13d
  __int64 v16; // rax
  int v17; // eax
  unsigned __int16 v18; // ax
  size_t Size; // [rsp+20h] [rbp-59h]
  _DWORD v21[2]; // [rsp+40h] [rbp-39h] BYREF
  _DWORD v22[2]; // [rsp+48h] [rbp-31h] BYREF
  _DWORD v23[2]; // [rsp+50h] [rbp-29h] BYREF
  _DWORD v24[2]; // [rsp+58h] [rbp-21h] BYREF
  PVOID v25; // [rsp+60h] [rbp-19h]
  __int64 v26; // [rsp+68h] [rbp-11h]
  PVOID P; // [rsp+70h] [rbp-9h]
  __int64 v28; // [rsp+78h] [rbp-1h]
  unsigned __int16 v29[40]; // [rsp+80h] [rbp+7h] BYREF
  char v30; // [rsp+E0h] [rbp+67h]
  char v31; // [rsp+E8h] [rbp+6Fh] BYREF
  _DWORD *v32; // [rsp+F0h] [rbp+77h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+F8h] [rbp+7Fh] BYREF

  v1 = *(_DWORD **)(a1 + 104);
  v2 = *(_QWORD *)(a1 + 48);
  v24[0] = -1;
  v24[1] = 0;
  v4 = 0LL;
  v22[0] = -1;
  v22[1] = 0;
  v23[0] = -1;
  v23[1] = 0;
  v21[0] = -1;
  v21[1] = 0;
  v5 = *(_QWORD *)(v2 + 24);
  v25 = 0LL;
  BugCheckParameter3 = 0LL;
  v30 = 0;
  v31 = 0;
  v26 = 0LL;
  v32 = v1;
  if ( !v1 )
  {
    v6 = CmpLightWeightCreateSetValueData(a1, &v32);
    if ( v6 < 0 )
      return (unsigned int)v6;
    v1 = v32;
    CmpLightWeightUpdateSharedSetValueData(v32, *(_QWORD *)(a1 + 48));
    --*v1;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x77554D43u);
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  *PoolWithTag = 0LL;
  PoolWithTag[1] = 0LL;
  *(_DWORD *)PoolWithTag = -1;
  *((_DWORD *)PoolWithTag + 1) = -1;
  v8 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v5 + 8))(v5, *(unsigned int *)(a1 + 92), v24);
  v9 = v8;
  if ( !v8 )
  {
    v6 = -1073741670;
    goto LABEL_49;
  }
  v10 = *(_DWORD *)(v8 + 4);
  if ( v10 < 0x80000000 )
  {
    v11 = v10;
    LODWORD(v32) = v10;
  }
  else
  {
    v11 = v10 + 0x80000000;
    LODWORD(v32) = v10 + 0x80000000;
  }
  v12 = v10 >= 0x80000000;
  if ( !v11 )
  {
LABEL_18:
    if ( !HvpMarkCellDirty(v5, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 32LL), 0) )
    {
      v6 = -1073741443;
LABEL_43:
      if ( v30 && v25 )
      {
        if ( v31 )
          ExFreePoolWithTag(v25, 0);
        else
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v23);
      }
      goto LABEL_48;
    }
    v28 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v5 + 8))(
            v5,
            *(unsigned int *)(*(_QWORD *)(a1 + 48) + 32LL),
            v22);
    *(_DWORD *)(a1 + 72) = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 32LL) >> 31;
    P = ExAllocatePoolWithTag(PagedPool, 0x8000uLL, 0x62534D43u);
    if ( !P )
    {
      v6 = -1073741670;
      goto LABEL_41;
    }
    CmpInitializeValueNameString(v9);
    v13 = v1 + 1;
    if ( !CmpFindNameInList(v5, (int)v13, (int)v29, 0, (__int64)&v32, (__int64)&BugCheckParameter3)
      || (LODWORD(Size) = v11,
          v14 = CmpAddValueKeyNew(v5, v29, *(_DWORD *)(v9 + 12), v4, Size, *(_DWORD *)(a1 + 72)),
          v14 == -1) )
    {
      v6 = -1073741670;
LABEL_40:
      ExFreePoolWithTag(P, 0);
LABEL_41:
      if ( v28 )
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v22);
      goto LABEL_43;
    }
    v15 = BugCheckParameter3;
    if ( (_DWORD)BugCheckParameter3 == -1 )
    {
      v17 = CmpAddValueToListEx(v5, v14, (unsigned int)v32, *(_DWORD *)(a1 + 72), v13, 1);
    }
    else
    {
      if ( !HvpMarkCellDirty(v5, (unsigned int)BugCheckParameter3, 0) )
      {
        v6 = -1073741443;
        goto LABEL_38;
      }
      v16 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v5 + 8))(v5, v15, v21);
      v26 = v16;
      if ( !v16 )
      {
        v6 = -1073741670;
LABEL_38:
        if ( v14 != -1 )
          CmpFreeValue(v5, v14);
        goto LABEL_40;
      }
      if ( !CmpMarkValueDataDirty(v5, v16) )
      {
        v6 = -1073741443;
LABEL_36:
        if ( v26 )
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v21);
        goto LABEL_38;
      }
      v17 = CmpSwapValueInList(v5, v14, (unsigned int)v32, (__int64)v13);
    }
    v6 = v17;
    if ( v17 >= 0 )
    {
      v18 = v29[0];
      v6 = 0;
      *(_DWORD *)PoolWithTag = v14;
      *((_WORD *)PoolWithTag + 4) = v18;
      *((_DWORD *)PoolWithTag + 3) = v11;
      *((_DWORD *)PoolWithTag + 1) = v15;
      *(_QWORD *)(a1 + 112) = PoolWithTag;
      PoolWithTag = 0LL;
      v14 = -1;
    }
    goto LABEL_36;
  }
  if ( v12 )
  {
    v4 = (char *)(v9 + 8);
LABEL_17:
    v25 = v4;
    goto LABEL_18;
  }
  if ( CmpGetValueData(
         v5,
         *(unsigned int *)(a1 + 92),
         v9,
         (unsigned int *)&v32,
         (__int64)&BugCheckParameter3,
         (__int64)&v31,
         (__int64)v23) )
  {
    v4 = (char *)BugCheckParameter3;
    v11 = (unsigned int)v32;
    v30 = 1;
    goto LABEL_17;
  }
  v6 = -1073741670;
LABEL_48:
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v24);
LABEL_49:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x77554D43u);
  return (unsigned int)v6;
}
