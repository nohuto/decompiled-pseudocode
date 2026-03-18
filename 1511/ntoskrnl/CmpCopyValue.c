/*
 * XREFs of CmpCopyValue @ 0x14050F7B0
 * Callers:
 *     CmpCopyKeyPartial @ 0x1404B3BE4 (CmpCopyKeyPartial.c)
 *     CmpSyncKeyValues @ 0x14050F5B0 (CmpSyncKeyValues.c)
 *     CmpMergeKeyValues @ 0x1405E8A90 (CmpMergeKeyValues.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     HvFreeCell @ 0x1403D9010 (HvFreeCell.c)
 *     CmpFreeValueData @ 0x1403D96C0 (CmpFreeValueData.c)
 *     CmpGetValueData @ 0x140422DD0 (CmpGetValueData.c)
 *     CmpSetValueDataNew @ 0x1404AFE2C (CmpSetValueDataNew.c)
 *     CmpCopyCell @ 0x1404B3F68 (CmpCopyCell.c)
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
  __int64 v14; // rax
  bool v16; // zf
  unsigned int v17; // ebx
  __int64 v18; // rax
  bool ValueData; // al
  ULONG_PTR v20; // rcx
  void *v21; // rbx
  unsigned int *v22; // rax
  int v23; // [rsp+40h] [rbp-20h] BYREF
  unsigned int Size; // [rsp+44h] [rbp-1Ch] BYREF
  int Size_4; // [rsp+48h] [rbp-18h] BYREF
  _DWORD Src[5]; // [rsp+4Ch] [rbp-14h] BYREF
  unsigned int v27; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v28; // [rsp+B8h] [rbp+58h]

  v28 = a4;
  v23 = -1;
  v6 = a2;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(a1 + 8))(a1, a2, &v23);
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
  v27 = *(_DWORD *)(v8 + 8);
  Size = v10;
  v12 = CmpCopyCell(a1, v6, a3, a4);
  if ( v12 == -1 || !v10 )
  {
LABEL_20:
    if ( v9 )
      (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v23);
    return v12;
  }
  if ( v10 <= 4 )
  {
    v16 = v11 == 0;
    v17 = *(_DWORD *)(v9 + 8);
    if ( v16 )
    {
      (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v23);
      v22 = (unsigned int *)(*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, v17, &v23);
      if ( !v22 )
        goto LABEL_38;
      v17 = *v22;
    }
    (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v23);
    v18 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a3 + 8))(a3, v12, &v23);
    if ( v18 )
    {
      *(_DWORD *)(v18 + 8) = v17;
      *(_DWORD *)(v18 + 4) = v10 + 0x80000000;
      (*(void (__fastcall **)(ULONG_PTR, int *))(a3 + 16))(a3, &v23);
      v9 = 0LL;
      goto LABEL_20;
    }
LABEL_38:
    HvFreeCell(a3, v12);
    return 0xFFFFFFFFLL;
  }
  if ( (*(_DWORD *)(a1 + 196) < 4u || v10 - 16345 > 0x7FFFC026)
    && (*(_DWORD *)(a3 + 196) < 4u || v10 - 16345 > 0x7FFFC026) )
  {
    v13 = CmpCopyCell(a1, v27, a3, v28);
    goto LABEL_12;
  }
  Size_4 = -1;
  ValueData = CmpGetValueData(a1, v6, v9, &Size, (__int64 *)&Src[1], &v27, (__int64)&Size_4);
  v20 = a3;
  if ( !ValueData )
  {
LABEL_30:
    HvFreeCell(v20, v12);
    v12 = -1;
    goto LABEL_20;
  }
  v21 = *(void **)&Src[1];
  v10 = Size;
  if ( (int)CmpSetValueDataNew(a3, *(char **)&Src[1], Size, v28, Src) < 0 )
  {
    if ( (_BYTE)v27 == 1 )
      ExFreePoolWithTag(v21, 0);
    else
      (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &Size_4);
    v20 = a3;
    goto LABEL_30;
  }
  if ( (_BYTE)v27 == 1 )
    ExFreePoolWithTag(v21, 0);
  else
    (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &Size_4);
  v13 = Src[0];
LABEL_12:
  if ( v13 == -1 )
  {
    HvFreeCell(a3, v12);
    v12 = -1;
    goto LABEL_20;
  }
  (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v23);
  v14 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a3 + 8))(a3, v12, &v23);
  if ( v14 )
  {
    *(_DWORD *)(v14 + 8) = v13;
    *(_DWORD *)(v14 + 4) = v10;
    (*(void (__fastcall **)(ULONG_PTR, int *))(a3 + 16))(a3, &v23);
    return v12;
  }
  HvFreeCell(a3, v12);
  CmpFreeValueData(a3, v13, v10);
  return 0xFFFFFFFFLL;
}
