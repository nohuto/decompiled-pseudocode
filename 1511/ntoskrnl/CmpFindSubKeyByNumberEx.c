/*
 * XREFs of CmpFindSubKeyByNumberEx @ 0x1403FDA60
 * Callers:
 *     CmEnumerateKey @ 0x1403FDED0 (CmEnumerateKey.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x1405E2410 (CmpFindSubKeyByNumberFromMergedView.c)
 * Callees:
 *     CmRmIsKCBVisible @ 0x1403B47C4 (CmRmIsKCBVisible.c)
 *     CmListGetNextElement @ 0x1403D72EC (CmListGetNextElement.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1403DE9C0 (CmpFindSubkeyInHashByChildCell.c)
 *     CmEqualTrans @ 0x1403E0784 (CmEqualTrans.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1403F9D0C (CmpDelayDerefKeyControlBlock.c)
 *     CmpReferenceKeyControlBlock @ 0x1403FA9B0 (CmpReferenceKeyControlBlock.c)
 *     CmpDoFindSubKeyByNumber @ 0x1403FD290 (CmpDoFindSubKeyByNumber.c)
 *     CmRmIsKCBDeleted @ 0x1403FE220 (CmRmIsKCBDeleted.c)
 */

__int64 __fastcall CmpFindSubKeyByNumberEx(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4,
        __int64 a5,
        void *a6,
        __int64 a7,
        signed __int32 **a8)
{
  signed __int32 *v9; // rsi
  unsigned int v12; // r12d
  _DWORD *v13; // rdi
  signed __int32 **v14; // r15
  unsigned int v15; // eax
  __int64 v16; // rdx
  _WORD *v17; // rax
  __int64 result; // rax
  int v19; // ecx
  int v20; // eax
  unsigned int v21; // ecx
  unsigned int v22; // eax
  unsigned int v23; // ecx
  int v24; // esi
  _WORD *v25; // rax
  unsigned int SubKeyByNumber; // eax
  int *v27; // rdx
  bool v28; // zf
  int SubkeyInHashByChildCell; // eax
  char *NextElement; // rax
  int v31; // eax
  _WORD *v32; // rax
  ULONG_PTR BugCheckParameter4; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v34; // [rsp+38h] [rbp-38h]
  int v35; // [rsp+3Ch] [rbp-34h] BYREF
  unsigned int v36; // [rsp+40h] [rbp-30h]
  unsigned int v37; // [rsp+44h] [rbp-2Ch]
  int v38; // [rsp+48h] [rbp-28h] BYREF
  int v39; // [rsp+4Ch] [rbp-24h] BYREF
  unsigned int v40; // [rsp+50h] [rbp-20h]
  char *v41; // [rsp+58h] [rbp-18h]
  __int64 v42; // [rsp+60h] [rbp-10h] BYREF
  _QWORD *v43; // [rsp+68h] [rbp-8h]
  int v44; // [rsp+A0h] [rbp+30h] BYREF

  v35 = -1;
  v9 = 0LL;
  BugCheckParameter4 = 0LL;
  v12 = 0;
  v13 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, __int64, int *))(a1 + 8))(a1, a2, &v35);
  if ( !v13 )
    return 3221225626LL;
  v14 = a8;
  *a4 = -1;
  if ( v14 )
    *v14 = 0LL;
  if ( a5 )
  {
    v43 = (_QWORD *)(a5 + 200);
    if ( (_QWORD *)*v43 != v43 )
    {
      v19 = v13[5];
      v44 = 0;
      v39 = -1;
      v38 = -1;
      LODWORD(v41) = v19;
      if ( v19 )
        v40 = v13[7];
      else
        v40 = -1;
      v20 = v13[6];
      if ( v20 )
        v37 = v13[8];
      else
        v37 = -1;
      v36 = v19 + v20;
      (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v35);
      v21 = v36;
      v22 = 0;
      v13 = 0LL;
      v34 = 0;
      if ( !v36 )
        goto LABEL_48;
      v23 = (unsigned int)v41;
      v24 = -(int)v41;
      LODWORD(v42) = -(int)v41;
      while ( 1 )
      {
        BugCheckParameter4 = 0LL;
        if ( v22 >= v23 )
        {
          v32 = (_WORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, v37, &v38);
          if ( !v32 )
            return 3221225626LL;
          SubKeyByNumber = CmpDoFindSubKeyByNumber(a1, v32, v24 + v34);
          v27 = &v38;
        }
        else
        {
          v25 = (_WORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, v40, &v39);
          if ( !v25 )
            return 3221225626LL;
          SubKeyByNumber = CmpDoFindSubKeyByNumber(a1, v25, v34);
          v27 = &v39;
        }
        *a4 = SubKeyByNumber;
        (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, v27);
        if ( *a4 == -1 )
          return 3221225626LL;
        result = CmpFindSubkeyInHashByChildCell(a5, a6, a1, *a4, &BugCheckParameter4);
        v12 = result;
        if ( (int)result < 0 )
          return result;
        v9 = (signed __int32 *)BugCheckParameter4;
        if ( !BugCheckParameter4
          || CmRmIsKCBVisible(BugCheckParameter4, a7) && !(unsigned __int8)CmRmIsKCBDeleted(v9, a7) )
        {
          ++v44;
        }
        if ( v44 == a3 + 1 )
          break;
        if ( v9 )
          CmpDelayDerefKeyControlBlock((ULONG_PTR)v9);
        v22 = v34 + 1;
        v34 = v22;
        v28 = v22 == v36;
        if ( v22 >= v36 )
          goto LABEL_49;
        v23 = (unsigned int)v41;
        v24 = v42;
      }
      v22 = v34;
      v21 = v36;
LABEL_48:
      v28 = v22 == v21;
LABEL_49:
      if ( v28 )
      {
        v42 = 0LL;
        *a4 = -1;
        while ( 1 )
        {
          NextElement = CmListGetNextElement(v43, &v42, 32);
          v41 = NextElement;
          if ( !NextElement )
            goto LABEL_10;
          if ( CmEqualTrans(*((_QWORD *)NextElement + 7), a7) )
          {
            v31 = *((_DWORD *)v41 + 17);
            if ( v31 == 1 )
            {
              v9 = (signed __int32 *)*((_QWORD *)v41 + 10);
            }
            else
            {
              if ( v31 != 10 )
                goto LABEL_55;
              v9 = (signed __int32 *)*((_QWORD *)v41 + 11);
            }
            BugCheckParameter4 = (ULONG_PTR)v9;
            if ( CmRmIsKCBVisible((__int64)v9, a7) && !(unsigned __int8)CmRmIsKCBDeleted(v9, a7) )
            {
              if ( v44 == a3 )
              {
                *a4 = v9[10];
                CmpReferenceKeyControlBlock(v9);
                goto LABEL_10;
              }
              ++v44;
            }
          }
LABEL_55:
          v9 = 0LL;
          BugCheckParameter4 = 0LL;
        }
      }
      goto LABEL_10;
    }
  }
  v15 = v13[5];
  v44 = -1;
  *a4 = -1;
  if ( a3 < v15 )
  {
    v16 = (unsigned int)v13[7];
LABEL_7:
    v17 = (_WORD *)(*(__int64 (__fastcall **)(__int64, __int64, int *))(a1 + 8))(a1, v16, &v44);
    if ( v17 )
    {
      *a4 = CmpDoFindSubKeyByNumber(a1, v17, a3);
      (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v44);
    }
    else
    {
      v12 = -1073741670;
    }
    v9 = (signed __int32 *)BugCheckParameter4;
    goto LABEL_10;
  }
  if ( *(_DWORD *)(a1 + 192) > 1u )
  {
    a3 -= v15;
    if ( a3 < v13[6] )
    {
      v16 = (unsigned int)v13[8];
      goto LABEL_7;
    }
  }
LABEL_10:
  if ( !v14 || *a4 == -1 )
  {
    if ( v9 )
      CmpDelayDerefKeyControlBlock((ULONG_PTR)v9);
  }
  else
  {
    if ( !v9 )
    {
      if ( v13 )
      {
        (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v35);
        v13 = 0LL;
      }
      SubkeyInHashByChildCell = CmpFindSubkeyInHashByChildCell(a5, a6, a1, *a4, &BugCheckParameter4);
      v9 = (signed __int32 *)BugCheckParameter4;
      v12 = SubkeyInHashByChildCell;
      if ( SubkeyInHashByChildCell < 0 )
        *a4 = -1;
    }
    *v14 = v9;
  }
  if ( v13 )
    (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v35);
  return v12;
}
