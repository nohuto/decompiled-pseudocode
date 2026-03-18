/*
 * XREFs of CmpFindSubKeyByNumberFromMergedView @ 0x1405E2410
 * Callers:
 *     CmEnumerateKey @ 0x1403FDED0 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x1403FF980 (CmQueryKey.c)
 * Callees:
 *     CmpDelayDerefKeyControlBlock @ 0x1403F9D0C (CmpDelayDerefKeyControlBlock.c)
 *     CmpFindSubKeyByNumberEx @ 0x1403FDA60 (CmpFindSubKeyByNumberEx.c)
 *     CmpCompareKeysByName @ 0x1405E7348 (CmpCompareKeysByName.c)
 */

__int64 __fastcall CmpFindSubKeyByNumberFromMergedView(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        _QWORD *a5,
        unsigned int *a6,
        ULONG_PTR *a7,
        _DWORD *a8)
{
  _UNKNOWN **v8; // rax
  unsigned int v9; // esi
  unsigned int v10; // r14d
  ULONG_PTR v11; // rbx
  unsigned int v12; // r12d
  ULONG_PTR v13; // r15
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
  __int64 v25; // r9
  char v26; // al
  int v27; // r14d
  __int64 v28; // r14
  int v29; // eax
  unsigned int v31; // [rsp+48h] [rbp-51h] BYREF
  char v32; // [rsp+4Ch] [rbp-4Dh]
  int v33; // [rsp+50h] [rbp-49h]
  int v34; // [rsp+54h] [rbp-45h]
  unsigned int v35; // [rsp+58h] [rbp-41h] BYREF
  unsigned int v36; // [rsp+5Ch] [rbp-3Dh]
  int v37; // [rsp+60h] [rbp-39h] BYREF
  unsigned int v38; // [rsp+64h] [rbp-35h]
  int v39; // [rsp+68h] [rbp-31h] BYREF
  __int64 v40; // [rsp+70h] [rbp-29h]
  __int64 v41; // [rsp+78h] [rbp-21h]
  ULONG_PTR v42; // [rsp+80h] [rbp-19h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+88h] [rbp-11h] BYREF
  _UNKNOWN *retaddr; // [rsp+E0h] [rbp+47h] BYREF
  unsigned int v47; // [rsp+F8h] [rbp+5Fh]

  v8 = &retaddr;
  v47 = a3;
  v38 = 0;
  LOBYTE(v8) = 0;
  v36 = 0;
  v9 = 0;
  v40 = 0LL;
  v10 = -1;
  v39 = -1;
  v11 = 0LL;
  v41 = 0LL;
  v12 = -1;
  v37 = -1;
  v13 = 0LL;
  v33 = (int)v8;
  v14 = 0;
  v15 = -1073741670;
  v31 = -1;
  v35 = -1;
  LOBYTE(v34) = 0;
  *a5 = 0LL;
  v42 = 0LL;
  BugCheckParameter4 = 0LL;
  *a6 = -1;
  if ( !a2 )
  {
    v12 = -1;
    v33 = 1;
    v35 = -1;
  }
  while ( 1 )
  {
    if ( v14 && v9 >= a3 )
    {
LABEL_73:
      v15 = -2147483622;
LABEL_41:
      v21 = a2;
LABEL_42:
      v28 = a1;
      goto LABEL_43;
    }
    if ( v11 )
    {
      CmpDelayDerefKeyControlBlock(v11);
      v11 = 0LL;
      v42 = 0LL;
    }
    if ( v13 )
    {
      CmpDelayDerefKeyControlBlock(v13);
      v13 = 0LL;
      BugCheckParameter4 = 0LL;
    }
    if ( (_BYTE)v34 )
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
                           v38,
                           &v31,
                           a1 & -(__int64)(a4 != 0),
                           (void *)(a2 & -(__int64)(a4 != 0)),
                           a4,
                           (signed __int32 **)((unsigned __int64)&v42 & -(__int64)(a4 != 0)));
        v11 = v42;
        v15 = SubKeyByNumber;
        if ( SubKeyByNumber < 0 )
          goto LABEL_41;
        v19 = (unsigned __int8)v34;
        if ( v31 == -1 )
          v19 = 1;
        v34 = v19;
      }
    }
    LOBYTE(v20) = v33;
    if ( !(_BYTE)v33 && v12 == -1 )
    {
      v21 = a2;
      v22 = CmpFindSubKeyByNumberEx(
              *(_QWORD *)(a2 + 32),
              *(unsigned int *)(a2 + 40),
              v36,
              &v35,
              a2 & -(__int64)(a4 != 0),
              (void *)(v17 & -(__int64)(a4 != 0)),
              a4,
              (signed __int32 **)((unsigned __int64)&BugCheckParameter4 & -(__int64)(a4 != 0)));
      v13 = BugCheckParameter4;
      v15 = v22;
      if ( v22 < 0 )
        goto LABEL_42;
      v12 = v35;
      v20 = (unsigned __int8)v33;
      if ( v35 == -1 )
        v20 = 1;
      v33 = v20;
    }
    if ( (_BYTE)v34 )
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
      v41 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(a2 + 32) + 8LL))(
              *(_QWORD *)(a2 + 32),
              v12,
              &v37);
      if ( !v41 )
        goto LABEL_41;
    }
    v24 = v31;
    if ( v31 == -1 )
    {
      v25 = v40;
    }
    else
    {
      v40 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(a1 + 32) + 8LL))(
              *(_QWORD *)(a1 + 32),
              v31,
              &v39);
      v25 = v40;
      if ( !v40 )
        goto LABEL_41;
      v24 = v31;
    }
    v26 = 0;
    v32 = 0;
    if ( !v23 )
    {
      v29 = CmpCompareKeysByName(v25, v41);
      if ( v29 >= 0 )
      {
        if ( v29 > 0 )
          goto LABEL_35;
        v26 = 1;
        if ( v14 )
          ++v9;
        v14 = 1;
        if ( v9 == v47 )
        {
LABEL_74:
          v28 = a1;
          *a5 = *(_QWORD *)(a1 + 32);
          *a6 = v31;
          goto LABEL_75;
        }
      }
      else
      {
        if ( v14 )
          ++v9;
        v14 = 1;
        if ( v9 == v47 )
          goto LABEL_74;
        v26 = v32;
      }
      goto LABEL_66;
    }
    v27 = v23 - 1;
    if ( v27 )
    {
      if ( v27 != 1 )
        goto LABEL_69;
LABEL_35:
      v16 = v14 == 0;
      v14 = 1;
      if ( !v16 )
        ++v9;
      if ( v9 == v47 )
      {
        *a5 = *(_QWORD *)(a2 + 32);
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
      ++v36;
      v35 = -1;
      goto LABEL_68;
    }
    v16 = v14 == 0;
    v14 = 1;
    if ( !v16 )
      ++v9;
    if ( v9 == v47 )
      break;
LABEL_66:
    v31 = -1;
    ++v38;
    if ( v26 )
      goto LABEL_67;
LABEL_68:
    v25 = v40;
LABEL_69:
    if ( v25 )
    {
      (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(a1 + 32) + 16LL))(*(_QWORD *)(a1 + 32), &v39);
      v40 = 0LL;
    }
    v10 = v31;
    a3 = v47;
    if ( v41 )
    {
      (*(void (__fastcall **)(_QWORD, int *, _QWORD))(*(_QWORD *)(a2 + 32) + 16LL))(*(_QWORD *)(a2 + 32), &v37, v47);
      v41 = 0LL;
      a3 = v47;
    }
  }
  v28 = a1;
  *a5 = *(_QWORD *)(a1 + 32);
  *a6 = v24;
LABEL_75:
  if ( a7 )
  {
    *a7 = v11;
    v11 = 0LL;
  }
  v21 = a2;
  v15 = 0;
LABEL_43:
  if ( v11 )
    CmpDelayDerefKeyControlBlock(v11);
  if ( v13 )
    CmpDelayDerefKeyControlBlock(v13);
  if ( v41 )
    (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(v21 + 32) + 16LL))(*(_QWORD *)(v21 + 32), &v37);
  if ( v40 )
    (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(v28 + 32) + 16LL))(*(_QWORD *)(v28 + 32), &v39);
  if ( v14 )
    *a8 = v9 + 1;
  else
    *a8 = 0;
  return v15;
}
