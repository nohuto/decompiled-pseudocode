/*
 * XREFs of CmpFindSubKeyByNumberFromMergedView @ 0x140658850
 * Callers:
 *     CmQueryKey @ 0x1404C3F30 (CmQueryKey.c)
 *     CmEnumerateKey @ 0x1404C66B0 (CmEnumerateKey.c)
 * Callees:
 *     CmpFindSubKeyByNumberEx @ 0x1404C6BB0 (CmpFindSubKeyByNumberEx.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1404CC960 (CmpDelayDerefKeyControlBlock.c)
 *     CmpCompareKeysByName @ 0x14065E7A4 (CmpCompareKeysByName.c)
 */

__int64 __fastcall CmpFindSubKeyByNumberFromMergedView(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        unsigned int *a6,
        unsigned int **a7,
        _DWORD *a8)
{
  _UNKNOWN **v8; // rax
  unsigned int v9; // esi
  int v10; // r14d
  unsigned int *v11; // rbx
  unsigned int v12; // r12d
  unsigned int *v13; // r15
  char v14; // r13
  unsigned int v15; // edi
  bool v16; // zf
  __int64 v17; // r14
  int SubKeyByNumber; // eax
  int v19; // ecx
  int v20; // eax
  __int64 v21; // r12
  int v22; // eax
  int v23; // r14d
  unsigned int v24; // ecx
  char v25; // al
  int v26; // r14d
  __int64 v27; // r14
  int v28; // eax
  unsigned int v30; // [rsp+48h] [rbp-51h] BYREF
  char v31; // [rsp+4Ch] [rbp-4Dh]
  int v32; // [rsp+50h] [rbp-49h]
  int v33; // [rsp+54h] [rbp-45h]
  int v34; // [rsp+58h] [rbp-41h] BYREF
  unsigned int v35; // [rsp+5Ch] [rbp-3Dh]
  int v36; // [rsp+60h] [rbp-39h] BYREF
  unsigned int v37; // [rsp+64h] [rbp-35h]
  int v38; // [rsp+68h] [rbp-31h] BYREF
  __int64 v39; // [rsp+70h] [rbp-29h]
  __int64 v40; // [rsp+78h] [rbp-21h]
  unsigned int *v41; // [rsp+80h] [rbp-19h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+88h] [rbp-11h] BYREF
  _UNKNOWN *retaddr; // [rsp+E0h] [rbp+47h] BYREF
  __int64 v45; // [rsp+F0h] [rbp+57h]
  unsigned int v46; // [rsp+F8h] [rbp+5Fh]
  __int64 v47; // [rsp+100h] [rbp+67h]

  v8 = &retaddr;
  v47 = a4;
  v46 = a3;
  v45 = a2;
  v37 = 0;
  LOBYTE(v8) = 0;
  v35 = 0;
  v9 = 0;
  v39 = 0LL;
  v10 = -1;
  v38 = -1;
  v11 = 0LL;
  v40 = 0LL;
  v12 = -1;
  v36 = -1;
  v13 = 0LL;
  v32 = (int)v8;
  v14 = 0;
  v15 = -1073741670;
  v30 = -1;
  v34 = -1;
  LOBYTE(v33) = 0;
  *a5 = 0LL;
  v41 = 0LL;
  BugCheckParameter4 = 0LL;
  *a6 = -1;
  if ( !a2 )
  {
    v12 = -1;
    v32 = 1;
    v34 = -1;
  }
  while ( 1 )
  {
    if ( v14 && v9 >= (unsigned int)a3 )
    {
LABEL_73:
      v15 = -2147483622;
LABEL_41:
      v21 = v45;
LABEL_42:
      v27 = a1;
      goto LABEL_43;
    }
    if ( v11 )
    {
      CmpDelayDerefKeyControlBlock(v11, a2, a3, a4);
      v11 = 0LL;
      v41 = 0LL;
    }
    if ( v13 )
    {
      CmpDelayDerefKeyControlBlock(v13, a2, a3, a4);
      v13 = 0LL;
      BugCheckParameter4 = 0LL;
    }
    if ( (_BYTE)v33 )
    {
      v17 = a1;
    }
    else
    {
      v16 = v10 == -1;
      v17 = a1;
      if ( v16 )
      {
        SubKeyByNumber = CmpFindSubKeyByNumberEx(
                           *(_QWORD *)(a1 + 32),
                           *(unsigned int *)(a1 + 40),
                           v37,
                           &v30,
                           a1 & -(__int64)(v47 != 0),
                           v45 & -(__int64)(v47 != 0),
                           v47,
                           (ULONG_PTR *)((unsigned __int64)&v41 & -(__int64)(v47 != 0)));
        v11 = v41;
        v15 = SubKeyByNumber;
        if ( SubKeyByNumber < 0 )
          goto LABEL_41;
        v19 = (unsigned __int8)v33;
        if ( v30 == -1 )
          v19 = 1;
        v33 = v19;
      }
    }
    LOBYTE(v20) = v32;
    if ( !(_BYTE)v32 && v12 == -1 )
    {
      v21 = v45;
      v22 = CmpFindSubKeyByNumberEx(
              *(_QWORD *)(v45 + 32),
              *(unsigned int *)(v45 + 40),
              v35,
              &v34,
              v45 & -(__int64)(v47 != 0),
              v17 & -(__int64)(v47 != 0),
              v47,
              (ULONG_PTR *)((unsigned __int64)&BugCheckParameter4 & -(__int64)(v47 != 0)));
      v13 = (unsigned int *)BugCheckParameter4;
      v15 = v22;
      if ( v22 < 0 )
        goto LABEL_42;
      v12 = v34;
      v20 = (unsigned __int8)v32;
      if ( v34 == -1 )
        v20 = 1;
      v32 = v20;
    }
    if ( (_BYTE)v33 )
    {
      if ( (_BYTE)v20 )
        goto LABEL_73;
      v23 = 2;
    }
    else
    {
      v23 = (_BYTE)v20 != 0;
    }
    if ( v12 != -1 )
    {
      v40 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(v45 + 32) + 8LL))(
              *(_QWORD *)(v45 + 32),
              v12,
              &v36);
      if ( !v40 )
        goto LABEL_41;
    }
    v24 = v30;
    if ( v30 == -1 )
    {
      a4 = v39;
    }
    else
    {
      v39 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(a1 + 32) + 8LL))(
              *(_QWORD *)(a1 + 32),
              v30,
              &v38);
      a4 = v39;
      if ( !v39 )
        goto LABEL_41;
      v24 = v30;
    }
    v25 = 0;
    v31 = 0;
    if ( !v23 )
    {
      v28 = CmpCompareKeysByName(a4, v40);
      if ( v28 >= 0 )
      {
        if ( v28 > 0 )
          goto LABEL_35;
        v25 = 1;
        if ( v14 )
          ++v9;
        v14 = 1;
        if ( v9 == v46 )
        {
LABEL_74:
          v27 = a1;
          a2 = (__int64)a5;
          *a5 = *(_QWORD *)(a1 + 32);
          *a6 = v30;
          goto LABEL_75;
        }
      }
      else
      {
        if ( v14 )
          ++v9;
        v14 = 1;
        if ( v9 == v46 )
          goto LABEL_74;
        v25 = v31;
      }
      goto LABEL_66;
    }
    v26 = v23 - 1;
    if ( v26 )
    {
      if ( v26 != 1 )
        goto LABEL_69;
LABEL_35:
      v16 = v14 == 0;
      v14 = 1;
      if ( !v16 )
        ++v9;
      if ( v9 == v46 )
      {
        a2 = (__int64)a5;
        *a5 = *(_QWORD *)(v45 + 32);
        *a6 = v12;
        if ( a7 )
        {
          *a7 = v13;
          v13 = 0LL;
        }
        v15 = 0;
        goto LABEL_41;
      }
LABEL_67:
      v12 = -1;
      ++v35;
      v34 = -1;
      goto LABEL_68;
    }
    v16 = v14 == 0;
    v14 = 1;
    if ( !v16 )
      ++v9;
    if ( v9 == v46 )
      break;
LABEL_66:
    v30 = -1;
    ++v37;
    if ( v25 )
      goto LABEL_67;
LABEL_68:
    a4 = v39;
LABEL_69:
    if ( a4 )
    {
      (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(a1 + 32) + 16LL))(*(_QWORD *)(a1 + 32), &v38);
      v39 = 0LL;
    }
    v10 = v30;
    a3 = v46;
    if ( v40 )
    {
      (*(void (__fastcall **)(_QWORD, int *, _QWORD))(*(_QWORD *)(v45 + 32) + 16LL))(*(_QWORD *)(v45 + 32), &v36, v46);
      v40 = 0LL;
      a3 = v46;
    }
  }
  v27 = a1;
  a2 = (__int64)a5;
  *a5 = *(_QWORD *)(a1 + 32);
  *a6 = v24;
LABEL_75:
  if ( a7 )
  {
    *a7 = v11;
    v11 = 0LL;
  }
  v21 = v45;
  v15 = 0;
LABEL_43:
  if ( v11 )
    CmpDelayDerefKeyControlBlock(v11, a2, a3, a4);
  if ( v13 )
    CmpDelayDerefKeyControlBlock(v13, a2, a3, a4);
  if ( v40 )
    (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(v21 + 32) + 16LL))(*(_QWORD *)(v21 + 32), &v36);
  if ( v39 )
    (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(v27 + 32) + 16LL))(*(_QWORD *)(v27 + 32), &v38);
  if ( v14 )
    *a8 = v9 + 1;
  else
    *a8 = 0;
  return v15;
}
