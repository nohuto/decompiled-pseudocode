/*
 * XREFs of CmpCopyValue @ 0x140608A14
 * Callers:
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x1401B3650 (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpCopyKeyPartial @ 0x1404CDE74 (CmpCopyKeyPartial.c)
 *     CmpMergeKeyValues @ 0x14060903C (CmpMergeKeyValues.c)
 *     CmpSyncKeyValues @ 0x14060990C (CmpSyncKeyValues.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmpSetValueDataNew @ 0x1403FE7F4 (CmpSetValueDataNew.c)
 *     HvFreeCell @ 0x1404005AC (HvFreeCell.c)
 *     CmpFreeValueData @ 0x1404008CC (CmpFreeValueData.c)
 *     CmpGetValueData @ 0x140441E30 (CmpGetValueData.c)
 *     CmpCopyCell @ 0x1404CE184 (CmpCopyCell.c)
 */

__int64 __fastcall CmpCopyValue(__int64 a1, __int64 a2, ULONG_PTR a3, unsigned int a4)
{
  unsigned int v6; // r14d
  __int64 v8; // rax
  __int64 v9; // r13
  unsigned int v10; // r14d
  unsigned int v11; // eax
  unsigned int v12; // r15d
  bool v13; // bl
  bool ValueData; // al
  ULONG_PTR v15; // rcx
  PVOID v16; // rbx
  unsigned int v17; // ebx
  __int64 v18; // rax
  bool v20; // zf
  unsigned int v21; // ebx
  unsigned int *v22; // rax
  __int64 v23; // rax
  unsigned int v24; // [rsp+40h] [rbp-20h] BYREF
  unsigned int BugCheckParameter3; // [rsp+44h] [rbp-1Ch] BYREF
  ULONG_PTR BugCheckParameter3_4; // [rsp+48h] [rbp-18h] BYREF
  _DWORD v27[2]; // [rsp+50h] [rbp-10h] BYREF
  PVOID P; // [rsp+58h] [rbp-8h] BYREF
  unsigned int v29; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v30; // [rsp+A8h] [rbp+48h]

  v30 = a2;
  LODWORD(BugCheckParameter3_4) = -1;
  HIDWORD(BugCheckParameter3_4) = 0;
  v6 = a2;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, ULONG_PTR *))(a1 + 8))(a1, a2, &BugCheckParameter3_4);
  v9 = v8;
  if ( v8 )
  {
    v11 = *(_DWORD *)(v8 + 4);
    if ( v11 < 0x80000000 )
    {
      v12 = v11;
      v24 = v11;
    }
    else
    {
      v12 = v11 + 0x80000000;
      v24 = v11 + 0x80000000;
    }
    v29 = *(_DWORD *)(v9 + 8);
    v13 = v11 >= 0x80000000;
    v10 = CmpCopyCell(a1, v6, a3, a4);
    if ( v10 == -1 || !v12 )
      goto LABEL_37;
    if ( v12 > 4 )
    {
      if ( (*(_DWORD *)(a1 + 196) < 4u || v12 - 16345 > 0x7FFFC026)
        && (*(_DWORD *)(a3 + 196) < 4u || v12 - 16345 > 0x7FFFC026) )
      {
        v17 = CmpCopyCell(a1, v29, a3, a4);
      }
      else
      {
        v27[0] = -1;
        v27[1] = 0;
        ValueData = CmpGetValueData(a1, v30, v9, &v24, (__int64)&P, (__int64)&v29, (__int64)v27);
        v15 = a3;
        if ( !ValueData )
        {
LABEL_14:
          HvFreeCell(v15, v10);
          v10 = -1;
          goto LABEL_37;
        }
        v16 = P;
        v12 = v24;
        if ( (int)CmpSetValueDataNew(a3, (char *)P, v24, a4, &BugCheckParameter3) < 0 )
        {
          if ( (_BYTE)v29 == 1 )
            ExFreePoolWithTag(v16, 0);
          else
            (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v27);
          v15 = a3;
          goto LABEL_14;
        }
        if ( (_BYTE)v29 == 1 )
          ExFreePoolWithTag(v16, 0);
        else
          (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v27);
        v17 = BugCheckParameter3;
      }
      if ( v17 != -1 )
      {
        (*(void (__fastcall **)(__int64, ULONG_PTR *))(a1 + 16))(a1, &BugCheckParameter3_4);
        v18 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, ULONG_PTR *))(a3 + 8))(a3, v10, &BugCheckParameter3_4);
        if ( !v18 )
        {
          HvFreeCell(a3, v10);
          CmpFreeValueData(a3, v17, v12);
          return 0xFFFFFFFFLL;
        }
        *(_DWORD *)(v18 + 8) = v17;
        *(_DWORD *)(v18 + 4) = v12;
        (*(void (__fastcall **)(ULONG_PTR, ULONG_PTR *))(a3 + 16))(a3, &BugCheckParameter3_4);
        return v10;
      }
      HvFreeCell(a3, v10);
      v10 = -1;
      goto LABEL_37;
    }
    v20 = !v13;
    v21 = *(_DWORD *)(v9 + 8);
    if ( v20 )
    {
      (*(void (__fastcall **)(__int64, ULONG_PTR *))(a1 + 16))(a1, &BugCheckParameter3_4);
      v22 = (unsigned int *)(*(__int64 (__fastcall **)(__int64, _QWORD, ULONG_PTR *))(a1 + 8))(
                              a1,
                              v21,
                              &BugCheckParameter3_4);
      v9 = 0LL;
      if ( !v22 )
        goto LABEL_33;
      v21 = *v22;
    }
    else
    {
      v9 = 0LL;
    }
    (*(void (__fastcall **)(__int64, ULONG_PTR *))(a1 + 16))(a1, &BugCheckParameter3_4);
    v23 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, ULONG_PTR *))(a3 + 8))(a3, v10, &BugCheckParameter3_4);
    if ( v23 )
    {
      *(_DWORD *)(v23 + 8) = v21;
      *(_DWORD *)(v23 + 4) = v12 + 0x80000000;
      (*(void (__fastcall **)(ULONG_PTR, ULONG_PTR *))(a3 + 16))(a3, &BugCheckParameter3_4);
LABEL_37:
      if ( v9 )
        (*(void (__fastcall **)(__int64, ULONG_PTR *))(a1 + 16))(a1, &BugCheckParameter3_4);
      return v10;
    }
LABEL_33:
    HvFreeCell(a3, v10);
    return 0xFFFFFFFFLL;
  }
  return (unsigned int)-1;
}
