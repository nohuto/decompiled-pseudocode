/*
 * XREFs of CmpCopyValue @ 0x140585A20
 * Callers:
 *     CmpCopyKeyPartial @ 0x1404F2C38 (CmpCopyKeyPartial.c)
 *     CmpSyncKeyValues @ 0x140585640 (CmpSyncKeyValues.c)
 *     CmpMergeKeyValues @ 0x14065FFA8 (CmpMergeKeyValues.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     CmpGetValueData @ 0x140428050 (CmpGetValueData.c)
 *     HvFreeCell @ 0x14049FC7C (HvFreeCell.c)
 *     CmpFreeValueData @ 0x1404A0954 (CmpFreeValueData.c)
 *     CmpCopyCell @ 0x1404A0A38 (CmpCopyCell.c)
 *     CmpSetValueDataNew @ 0x14054384C (CmpSetValueDataNew.c)
 */

__int64 __fastcall CmpCopyValue(__int64 a1, __int64 a2, ULONG_PTR a3, unsigned int a4)
{
  unsigned int v6; // r12d
  __int64 v8; // rax
  __int64 v9; // r13
  unsigned int v10; // r15d
  char v11; // bl
  unsigned int v12; // r14d
  unsigned int v13; // ebx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  bool v20; // zf
  unsigned int v21; // ebx
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  bool ValueData; // al
  __int64 v26; // r8
  __int64 v27; // r9
  ULONG_PTR v28; // rcx
  void *v29; // rbx
  __int64 v30; // r9
  unsigned int *v31; // rax
  int v32; // [rsp+40h] [rbp-20h] BYREF
  unsigned int Size; // [rsp+44h] [rbp-1Ch] BYREF
  int Size_4; // [rsp+48h] [rbp-18h] BYREF
  _DWORD Src[5]; // [rsp+4Ch] [rbp-14h] BYREF
  unsigned int v36; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v37; // [rsp+B8h] [rbp+58h]

  v37 = a4;
  v32 = -1;
  v6 = a2;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(a1 + 8))(a1, a2, &v32);
  v9 = v8;
  if ( !v8 )
    return (unsigned int)-1;
  v10 = *(_DWORD *)(v8 + 4);
  if ( v10 >= 0x80000000 )
  {
    v10 += 0x80000000;
    v11 = 1;
  }
  else
  {
    v11 = 0;
  }
  v36 = *(_DWORD *)(v8 + 8);
  Size = v10;
  v12 = CmpCopyCell(a1, v6, a3, a4);
  if ( v12 == -1 || !v10 )
  {
LABEL_20:
    if ( v9 )
      (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v32);
    return v12;
  }
  if ( v10 <= 4 )
  {
    v20 = v11 == 0;
    v21 = *(_DWORD *)(v9 + 8);
    if ( v20 )
    {
      (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v32);
      v31 = (unsigned int *)(*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, v21, &v32);
      if ( !v31 )
        goto LABEL_38;
      v21 = *v31;
    }
    (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v32);
    v22 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a3 + 8))(a3, v12, &v32);
    if ( v22 )
    {
      *(_DWORD *)(v22 + 8) = v21;
      *(_DWORD *)(v22 + 4) = v10 + 0x80000000;
      (*(void (__fastcall **)(ULONG_PTR, int *))(a3 + 16))(a3, &v32);
      v9 = 0LL;
      goto LABEL_20;
    }
LABEL_38:
    HvFreeCell(a3, v12, v23, v24);
    return 0xFFFFFFFFLL;
  }
  if ( (*(_DWORD *)(a1 + 196) < 4u || v10 - 16345 > 0x7FFFC026)
    && (*(_DWORD *)(a3 + 196) < 4u || v10 - 16345 > 0x7FFFC026) )
  {
    v13 = CmpCopyCell(a1, v36, a3, v37);
    goto LABEL_12;
  }
  Size_4 = -1;
  ValueData = CmpGetValueData(a1, v6, v9, &Size, (__int64 *)&Src[1], &v36, (__int64)&Size_4);
  v28 = a3;
  if ( !ValueData )
  {
LABEL_30:
    HvFreeCell(v28, v12, v26, v27);
    v12 = -1;
    goto LABEL_20;
  }
  v29 = *(void **)&Src[1];
  v10 = Size;
  if ( (int)CmpSetValueDataNew(a3, *(char **)&Src[1], Size, v37, Src) < 0 )
  {
    if ( (_BYTE)v36 == 1 )
      ExFreePoolWithTag(v29, 0);
    else
      (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &Size_4);
    v28 = a3;
    goto LABEL_30;
  }
  if ( (_BYTE)v36 == 1 )
    ExFreePoolWithTag(v29, 0);
  else
    (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &Size_4);
  v13 = Src[0];
LABEL_12:
  if ( v13 == -1 )
  {
    HvFreeCell(a3, v12, v14, v15);
    v12 = -1;
    goto LABEL_20;
  }
  (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v32);
  v16 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a3 + 8))(a3, v12, &v32);
  if ( v16 )
  {
    *(_DWORD *)(v16 + 8) = v13;
    *(_DWORD *)(v16 + 4) = v10;
    (*(void (__fastcall **)(ULONG_PTR, int *))(a3 + 16))(a3, &v32);
    return v12;
  }
  HvFreeCell(a3, v12, v17, v18);
  CmpFreeValueData(a3, v13, v10, v30);
  return 0xFFFFFFFFLL;
}
