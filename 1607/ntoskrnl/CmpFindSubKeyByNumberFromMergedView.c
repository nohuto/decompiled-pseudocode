/*
 * XREFs of CmpFindSubKeyByNumberFromMergedView @ 0x1406012EC
 * Callers:
 *     CmEnumerateKey @ 0x140437F90 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x1404396E0 (CmQueryKey.c)
 * Callees:
 *     CmpDelayDerefKeyControlBlock @ 0x14043622C (CmpDelayDerefKeyControlBlock.c)
 *     CmpFindSubKeyByNumberEx @ 0x140437BB0 (CmpFindSubKeyByNumberEx.c)
 *     CmpCompareKeysByName @ 0x140606994 (CmpCompareKeysByName.c)
 */

__int64 __fastcall CmpFindSubKeyByNumberFromMergedView(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        unsigned int *a6,
        __int64 *a7,
        unsigned int *a8)
{
  unsigned int v8; // ecx
  int v9; // r14d
  unsigned int v10; // r13d
  unsigned int v11; // edi
  char v12; // r12
  unsigned int v13; // esi
  __int64 v14; // rbx
  __int64 v15; // r15
  bool v16; // zf
  __int64 v17; // r14
  int SubKeyByNumber; // eax
  int v19; // ecx
  int v20; // eax
  __int64 v21; // r13
  int v22; // eax
  int v23; // r14d
  unsigned int v24; // ecx
  __int64 v25; // rax
  char v26; // al
  int v27; // r14d
  int v28; // eax
  __int64 v29; // r14
  unsigned int v31; // [rsp+48h] [rbp-51h] BYREF
  int v32; // [rsp+50h] [rbp-49h]
  int v33; // [rsp+54h] [rbp-45h]
  int v34; // [rsp+58h] [rbp-41h] BYREF
  unsigned int v35; // [rsp+5Ch] [rbp-3Dh]
  unsigned int v36; // [rsp+60h] [rbp-39h]
  __int64 v37; // [rsp+68h] [rbp-31h]
  __int64 v38; // [rsp+70h] [rbp-29h]
  _DWORD v39[2]; // [rsp+78h] [rbp-21h] BYREF
  _DWORD v40[2]; // [rsp+80h] [rbp-19h] BYREF
  __int64 v41; // [rsp+88h] [rbp-11h] BYREF
  __int64 v42; // [rsp+90h] [rbp-9h] BYREF
  unsigned int v45; // [rsp+F8h] [rbp+5Fh]
  __int64 v46; // [rsp+100h] [rbp+67h]

  v46 = a4;
  v45 = a3;
  v40[0] = -1;
  v8 = 0;
  v39[0] = -1;
  v9 = -1;
  v32 = 0;
  v10 = -1;
  v11 = -1073741670;
  v35 = 0;
  v36 = 0;
  v12 = 0;
  v13 = 0;
  v37 = 0LL;
  *a5 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v40[1] = 0;
  v38 = 0LL;
  v39[1] = 0;
  *a6 = -1;
  v31 = -1;
  v34 = -1;
  LOBYTE(v33) = 0;
  v41 = 0LL;
  v42 = 0LL;
  if ( !a2 )
  {
    v10 = -1;
    v32 = 1;
    v34 = -1;
  }
  while ( 1 )
  {
    if ( v12 && v13 >= (unsigned int)a3 )
    {
LABEL_61:
      v11 = -2147483622;
LABEL_68:
      v21 = a2;
LABEL_69:
      v29 = a1;
      goto LABEL_70;
    }
    if ( v14 )
    {
      CmpDelayDerefKeyControlBlock(v14);
      v8 = 0;
      v14 = 0LL;
      v41 = 0LL;
    }
    if ( v15 )
    {
      CmpDelayDerefKeyControlBlock(v15);
      v8 = 0;
      v15 = 0LL;
      v42 = 0LL;
    }
    if ( (_BYTE)v33 )
    {
      v17 = a1;
    }
    else
    {
      v16 = v9 == -1;
      v17 = a1;
      if ( v16 )
      {
        SubKeyByNumber = CmpFindSubKeyByNumberEx(
                           *(_QWORD *)(a1 + 24),
                           *(unsigned int *)(a1 + 32),
                           v35,
                           &v31,
                           a1 & -(__int64)(v46 != 0),
                           a2 & -(__int64)(v46 != 0),
                           v46,
                           (__int64 *)((unsigned __int64)&v41 & -(__int64)(v46 != 0)));
        v14 = v41;
        v8 = 0;
        v11 = SubKeyByNumber;
        if ( SubKeyByNumber < 0 )
          goto LABEL_68;
        v19 = (unsigned __int8)v33;
        if ( v31 == -1 )
          v19 = 1;
        v33 = v19;
        v8 = 0;
      }
    }
    LOBYTE(v20) = v32;
    if ( !(_BYTE)v32 && v10 == -1 )
    {
      v21 = a2;
      v22 = CmpFindSubKeyByNumberEx(
              *(_QWORD *)(a2 + 24),
              *(unsigned int *)(a2 + 32),
              v36,
              &v34,
              a2 & -(__int64)(v46 != 0),
              v17 & -(__int64)(v46 != 0),
              v46,
              (__int64 *)((unsigned __int64)&v42 & -(__int64)(v46 != 0)));
      v15 = v42;
      v8 = 0;
      v11 = v22;
      if ( v22 < 0 )
        goto LABEL_69;
      v10 = v34;
      v20 = (unsigned __int8)v32;
      if ( v34 == -1 )
        v20 = 1;
      v32 = v20;
    }
    if ( (_BYTE)v33 )
    {
      if ( (_BYTE)v20 )
        goto LABEL_61;
      v23 = 2;
    }
    else
    {
      v23 = (_BYTE)v20 != 0;
    }
    if ( v10 != -1 )
    {
      v38 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(a2 + 24) + 8LL))(
              *(_QWORD *)(a2 + 24),
              v10,
              v39);
      if ( !v38 )
      {
        v8 = 0;
        goto LABEL_68;
      }
    }
    v24 = v31;
    if ( v31 == -1 )
    {
      a4 = v37;
    }
    else
    {
      v25 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(a1 + 24) + 8LL))(
              *(_QWORD *)(a1 + 24),
              v31,
              v40);
      v8 = 0;
      v37 = v25;
      a4 = v25;
      if ( !v25 )
        goto LABEL_68;
      v24 = v31;
    }
    v26 = 0;
    if ( v23 )
    {
      v27 = v23 - 1;
      if ( v27 )
      {
        v8 = 0;
        if ( v27 != 1 )
          goto LABEL_57;
LABEL_35:
        v16 = v12 == 0;
        v12 = 1;
        if ( !v16 )
          ++v13;
        if ( v13 == v45 )
        {
          *a5 = *(_QWORD *)(a2 + 24);
          *a6 = v10;
          if ( a7 )
          {
            *a7 = v15;
            v15 = 0LL;
          }
          v11 = 0;
          goto LABEL_68;
        }
LABEL_55:
        v10 = -1;
        ++v36;
        v34 = -1;
        goto LABEL_56;
      }
      v16 = v12 == 0;
      v12 = 1;
      if ( !v16 )
        ++v13;
      if ( v13 == v45 )
      {
        v29 = a1;
        *a5 = *(_QWORD *)(a1 + 24);
        *a6 = v24;
        goto LABEL_64;
      }
      v8 = 0;
      goto LABEL_54;
    }
    v28 = CmpCompareKeysByName(a4, v38);
    v8 = 0;
    if ( v28 < 0 )
    {
      if ( v12 )
        ++v13;
      v12 = 1;
      if ( v13 == v45 )
        break;
      v26 = 0;
      goto LABEL_54;
    }
    if ( v28 > 0 )
      goto LABEL_35;
    v26 = 1;
    if ( v12 )
      ++v13;
    v12 = 1;
    if ( v13 == v45 )
      break;
LABEL_54:
    v31 = -1;
    ++v35;
    if ( v26 )
      goto LABEL_55;
LABEL_56:
    a4 = v37;
LABEL_57:
    if ( a4 )
    {
      (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24), v40);
      v8 = 0;
      v37 = 0LL;
    }
    v9 = v31;
    a3 = v45;
    if ( v38 )
    {
      (*(void (__fastcall **)(_QWORD, _DWORD *, _QWORD))(*(_QWORD *)(a2 + 24) + 16LL))(*(_QWORD *)(a2 + 24), v39, v45);
      a3 = v45;
      v8 = 0;
      v38 = 0LL;
    }
  }
  v29 = a1;
  *a5 = *(_QWORD *)(a1 + 24);
  *a6 = v31;
LABEL_64:
  v8 = 0;
  if ( a7 )
  {
    *a7 = v14;
    v14 = 0LL;
  }
  v21 = a2;
  v11 = 0;
LABEL_70:
  if ( v14 )
  {
    CmpDelayDerefKeyControlBlock(v14);
    v8 = 0;
  }
  if ( v15 )
  {
    CmpDelayDerefKeyControlBlock(v15);
    v8 = 0;
  }
  if ( v38 )
  {
    (*(void (__fastcall **)(_QWORD, _DWORD *, __int64, __int64))(*(_QWORD *)(v21 + 24) + 16LL))(
      *(_QWORD *)(v21 + 24),
      v39,
      a3,
      a4);
    v8 = 0;
  }
  if ( v37 )
  {
    (*(void (__fastcall **)(_QWORD, _DWORD *, __int64, __int64))(*(_QWORD *)(v29 + 24) + 16LL))(
      *(_QWORD *)(v29 + 24),
      v40,
      a3,
      a4);
    v8 = 0;
  }
  if ( v12 )
    v8 = v13 + 1;
  *a8 = v8;
  return v11;
}
