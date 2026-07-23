/*
 * XREFs of CmpFindSubKeyByNumberEx @ 0x140437BB0
 * Callers:
 *     CmEnumerateKey @ 0x140437F90 (CmEnumerateKey.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x1406012EC (CmpFindSubKeyByNumberFromMergedView.c)
 * Callees:
 *     CmEqualTrans @ 0x1403FC890 (CmEqualTrans.c)
 *     CmListGetNextElement @ 0x140401CEC (CmListGetNextElement.c)
 *     CmpIsKeyDeleted @ 0x140403EF0 (CmpIsKeyDeleted.c)
 *     CmpDelayDerefKeyControlBlock @ 0x14043622C (CmpDelayDerefKeyControlBlock.c)
 *     CmpDoFindSubKeyByNumber @ 0x1404373E0 (CmpDoFindSubKeyByNumber.c)
 *     CmpFindSubKeyByNumber @ 0x140437590 (CmpFindSubKeyByNumber.c)
 *     CmRmIsKCBVisible @ 0x1404A72C0 (CmRmIsKCBVisible.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1405185D4 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpReferenceKeyControlBlock @ 0x140518944 (CmpReferenceKeyControlBlock.c)
 */

__int64 __fastcall CmpFindSubKeyByNumberEx(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8)
{
  unsigned int SubKeyByNumber; // r14d
  __int64 v9; // r13
  _DWORD *v12; // rdi
  __int64 result; // rax
  int v14; // ecx
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // eax
  unsigned int v18; // ecx
  int v19; // r14d
  _WORD *v20; // rax
  int v21; // eax
  _DWORD *v22; // rdx
  bool v23; // zf
  int SubkeyInHashByChildCell; // eax
  char *NextElement; // rax
  int v26; // eax
  _WORD *v27; // rax
  unsigned int v28; // [rsp+30h] [rbp-50h]
  __int64 v29; // [rsp+38h] [rbp-48h] BYREF
  unsigned int v30; // [rsp+40h] [rbp-40h]
  _DWORD v31[2]; // [rsp+48h] [rbp-38h] BYREF
  unsigned int v32; // [rsp+50h] [rbp-30h]
  unsigned int v33; // [rsp+54h] [rbp-2Ch]
  char *v34; // [rsp+58h] [rbp-28h]
  _DWORD v35[2]; // [rsp+60h] [rbp-20h] BYREF
  _DWORD v36[2]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v37; // [rsp+70h] [rbp-10h] BYREF
  int v38; // [rsp+C0h] [rbp+40h]

  v31[0] = -1;
  v31[1] = 0;
  SubKeyByNumber = 0;
  v29 = 0LL;
  v9 = 0LL;
  v12 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(a1 + 8))(a1, a2, v31);
  if ( !v12 )
    return 3221225626LL;
  *a4 = -1;
  if ( a8 )
    *a8 = 0LL;
  if ( !a5 || *(_QWORD *)(a5 + 200) == a5 + 200 )
  {
    SubKeyByNumber = CmpFindSubKeyByNumber(a1, v12, a3, a4);
  }
  else
  {
    v35[0] = -1;
    v38 = 0;
    v35[1] = 0;
    v36[1] = 0;
    v14 = v12[5];
    v36[0] = -1;
    LODWORD(v34) = v14;
    if ( v14 )
      v32 = v12[7];
    else
      v32 = -1;
    v15 = v12[6];
    if ( v15 )
      v33 = v12[8];
    else
      v33 = -1;
    v30 = v14 + v15;
    (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v31);
    v16 = v30;
    v28 = 0;
    v12 = 0LL;
    v17 = 0;
    if ( !v30 )
      goto LABEL_41;
    v18 = (unsigned int)v34;
    v19 = -(int)v34;
    LODWORD(v37) = -(int)v34;
    while ( 1 )
    {
      v29 = 0LL;
      if ( v17 >= v18 )
      {
        v27 = (_WORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, v33, v36);
        if ( !v27 )
          return 3221225626LL;
        v21 = CmpDoFindSubKeyByNumber(a1, v27, v19 + v28);
        v22 = v36;
      }
      else
      {
        v20 = (_WORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, v32, v35);
        if ( !v20 )
          return 3221225626LL;
        v21 = CmpDoFindSubKeyByNumber(a1, v20, v28);
        v22 = v35;
      }
      *a4 = v21;
      (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v22);
      if ( *a4 == -1 )
        return 3221225626LL;
      result = CmpFindSubkeyInHashByChildCell(a5, a6, a1, *a4, (__int64)&v29);
      SubKeyByNumber = result;
      if ( (int)result < 0 )
        return result;
      v9 = v29;
      if ( !v29 || (unsigned __int8)CmRmIsKCBVisible(v29, a7) && !(unsigned __int8)CmpIsKeyDeleted(v9, a7) )
        ++v38;
      if ( v38 == a3 + 1 )
        break;
      if ( v9 )
        CmpDelayDerefKeyControlBlock(v9);
      v17 = v28 + 1;
      v28 = v17;
      v23 = v17 == v30;
      if ( v17 >= v30 )
        goto LABEL_42;
      v18 = (unsigned int)v34;
      v19 = v37;
    }
    v17 = v28;
    v16 = v30;
LABEL_41:
    v23 = v17 == v16;
LABEL_42:
    if ( v23 )
    {
      v37 = 0LL;
      *a4 = -1;
      while ( 1 )
      {
        NextElement = CmListGetNextElement((_QWORD *)(a5 + 200), &v37, 32);
        v34 = NextElement;
        if ( !NextElement )
          break;
        if ( CmEqualTrans(*((_QWORD *)NextElement + 7), a7) )
        {
          v26 = *((_DWORD *)v34 + 17);
          if ( v26 == 1 )
          {
            v9 = *((_QWORD *)v34 + 11);
          }
          else
          {
            if ( v26 != 10 )
              goto LABEL_48;
            v9 = *((_QWORD *)v34 + 12);
          }
          v29 = v9;
          if ( (unsigned __int8)CmRmIsKCBVisible(v9, a7) && !(unsigned __int8)CmpIsKeyDeleted(v9, a7) )
          {
            if ( v38 == a3 )
            {
              *a4 = *(_DWORD *)(v9 + 32);
              CmpReferenceKeyControlBlock(v9);
              break;
            }
            ++v38;
          }
        }
LABEL_48:
        v9 = 0LL;
        v29 = 0LL;
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
      if ( v12 )
      {
        (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v31);
        v12 = 0LL;
      }
      SubkeyInHashByChildCell = CmpFindSubkeyInHashByChildCell(a5, a6, a1, *a4, (__int64)&v29);
      v9 = v29;
      SubKeyByNumber = SubkeyInHashByChildCell;
      if ( SubkeyInHashByChildCell < 0 )
        *a4 = -1;
    }
    *a8 = v9;
  }
  if ( v12 )
    (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v31);
  return SubKeyByNumber;
}
