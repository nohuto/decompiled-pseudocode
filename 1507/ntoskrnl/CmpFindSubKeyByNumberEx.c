/*
 * XREFs of CmpFindSubKeyByNumberEx @ 0x1404C6BB0
 * Callers:
 *     CmEnumerateKey @ 0x1404C66B0 (CmEnumerateKey.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x140658850 (CmpFindSubKeyByNumberFromMergedView.c)
 * Callees:
 *     CmEqualTrans @ 0x140449EE8 (CmEqualTrans.c)
 *     CmpDoFindSubKeyByNumber @ 0x1404C2B50 (CmpDoFindSubKeyByNumber.c)
 *     CmRmIsKCBDeleted @ 0x1404C69A0 (CmRmIsKCBDeleted.c)
 *     CmpFindSubKeyByNumber @ 0x1404C7350 (CmpFindSubKeyByNumber.c)
 *     CmpReferenceKeyControlBlock @ 0x1404CBD60 (CmpReferenceKeyControlBlock.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1404CC960 (CmpDelayDerefKeyControlBlock.c)
 *     CmListGetNextElement @ 0x1404F1644 (CmListGetNextElement.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1405414B8 (CmpFindSubkeyInHashByChildCell.c)
 *     CmRmIsKCBVisible @ 0x140553834 (CmRmIsKCBVisible.c)
 */

__int64 __fastcall CmpFindSubKeyByNumberEx(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        ULONG_PTR *a8)
{
  ULONG_PTR v9; // r14
  unsigned int SubKeyByNumber; // ebp
  _DWORD *v13; // rdi
  __int64 result; // rax
  int v15; // ecx
  int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // eax
  unsigned int v19; // ecx
  int v20; // r14d
  _WORD *v21; // rax
  int v22; // eax
  int *v23; // rdx
  bool v24; // zf
  int SubkeyInHashByChildCell; // eax
  __int64 NextElement; // rax
  int v27; // eax
  _WORD *v28; // rax
  unsigned int v29; // [rsp+30h] [rbp-68h]
  int v30; // [rsp+34h] [rbp-64h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+38h] [rbp-60h] BYREF
  unsigned int v32; // [rsp+40h] [rbp-58h]
  int v33; // [rsp+44h] [rbp-54h] BYREF
  int v34; // [rsp+48h] [rbp-50h] BYREF
  unsigned int v35; // [rsp+4Ch] [rbp-4Ch]
  unsigned int v36; // [rsp+50h] [rbp-48h]
  __int64 v37; // [rsp+58h] [rbp-40h]
  __int64 v38[7]; // [rsp+60h] [rbp-38h] BYREF
  int v39; // [rsp+A0h] [rbp+8h]

  v30 = -1;
  v9 = 0LL;
  BugCheckParameter4 = 0LL;
  SubKeyByNumber = 0;
  v13 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, __int64, int *))(a1 + 8))(a1, a2, &v30);
  if ( !v13 )
    return 3221225626LL;
  *a4 = -1;
  if ( a8 )
    *a8 = 0LL;
  if ( !a5 || *(_QWORD *)(a5 + 200) == a5 + 200 )
  {
    SubKeyByNumber = CmpFindSubKeyByNumber(a1, v13, a3, a4);
  }
  else
  {
    v15 = v13[5];
    v39 = 0;
    v33 = -1;
    v34 = -1;
    LODWORD(v37) = v15;
    if ( v15 )
      v35 = v13[7];
    else
      v35 = -1;
    v16 = v13[6];
    if ( v16 )
      v36 = v13[8];
    else
      v36 = -1;
    v32 = v15 + v16;
    (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v30);
    v17 = v32;
    v18 = 0;
    v13 = 0LL;
    v29 = 0;
    if ( !v32 )
      goto LABEL_41;
    v19 = v37;
    v20 = -(int)v37;
    for ( LODWORD(v38[0]) = -(int)v37; ; v20 = v38[0] )
    {
      BugCheckParameter4 = 0LL;
      if ( v18 >= v19 )
      {
        v28 = (_WORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, v36, &v34);
        if ( !v28 )
          return 3221225626LL;
        v22 = CmpDoFindSubKeyByNumber(a1, v28, v20 + v29);
        v23 = &v34;
      }
      else
      {
        v21 = (_WORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, v35, &v33);
        if ( !v21 )
          return 3221225626LL;
        v22 = CmpDoFindSubKeyByNumber(a1, v21, v29);
        v23 = &v33;
      }
      *a4 = v22;
      (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, v23);
      if ( *a4 == -1 )
        return 3221225626LL;
      result = CmpFindSubkeyInHashByChildCell(a5, a6, a1, *a4, (__int64)&BugCheckParameter4);
      SubKeyByNumber = result;
      if ( (int)result < 0 )
        return result;
      v9 = BugCheckParameter4;
      if ( !BugCheckParameter4 || (unsigned __int8)CmRmIsKCBVisible(BugCheckParameter4, a7) && !CmRmIsKCBDeleted(v9, a7) )
        ++v39;
      if ( v39 == a3 + 1 )
        break;
      if ( v9 )
        CmpDelayDerefKeyControlBlock(v9);
      v18 = v29 + 1;
      v29 = v18;
      v24 = v18 == v32;
      if ( v18 >= v32 )
        goto LABEL_42;
      v19 = v37;
    }
    v18 = v29;
    v17 = v32;
LABEL_41:
    v24 = v18 == v17;
LABEL_42:
    if ( v24 )
    {
      v38[0] = 0LL;
      *a4 = -1;
      while ( 1 )
      {
        NextElement = CmListGetNextElement(a5 + 200, v38, 32LL);
        v37 = NextElement;
        if ( !NextElement )
          break;
        if ( CmEqualTrans(*(_QWORD *)(NextElement + 56), a7) )
        {
          v27 = *(_DWORD *)(v37 + 68);
          if ( v27 == 1 )
          {
            v9 = *(_QWORD *)(v37 + 80);
          }
          else
          {
            if ( v27 != 10 )
              goto LABEL_48;
            v9 = *(_QWORD *)(v37 + 88);
          }
          BugCheckParameter4 = v9;
          if ( (unsigned __int8)CmRmIsKCBVisible(v9, a7) && !CmRmIsKCBDeleted(v9, a7) )
          {
            if ( v39 == a3 )
            {
              *a4 = *(_DWORD *)(v9 + 40);
              CmpReferenceKeyControlBlock(v9);
              break;
            }
            ++v39;
          }
        }
LABEL_48:
        v9 = 0LL;
        BugCheckParameter4 = 0LL;
      }
    }
  }
  if ( !a8 || *a4 == -1 )
  {
    if ( v9 )
      CmpDelayDerefKeyControlBlock(v9);
  }
  else
  {
    if ( !v9 )
    {
      if ( v13 )
      {
        (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v30);
        v13 = 0LL;
      }
      SubkeyInHashByChildCell = CmpFindSubkeyInHashByChildCell(a5, a6, a1, *a4, (__int64)&BugCheckParameter4);
      v9 = BugCheckParameter4;
      SubKeyByNumber = SubkeyInHashByChildCell;
      if ( SubkeyInHashByChildCell < 0 )
        *a4 = -1;
    }
    *a8 = v9;
  }
  if ( v13 )
    (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v30);
  return SubKeyByNumber;
}
