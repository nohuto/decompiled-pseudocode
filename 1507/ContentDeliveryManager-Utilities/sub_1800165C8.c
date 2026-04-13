/*
 * XREFs of sub_1800165C8 @ 0x1800165C8
 * Callers:
 *     sub_180015640 @ 0x180015640 (sub_180015640.c)
 *     sub_180015760 @ 0x180015760 (sub_180015760.c)
 *     sub_180015870 @ 0x180015870 (sub_180015870.c)
 * Callees:
 *     sub_18000B438 @ 0x18000B438 (sub_18000B438.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_180016EB4 @ 0x180016EB4 (sub_180016EB4.c)
 *     sub_180016F34 @ 0x180016F34 (sub_180016F34.c)
 *     sub_1800172BC @ 0x1800172BC (sub_1800172BC.c)
 *     sub_180017E70 @ 0x180017E70 (sub_180017E70.c)
 *     sub_180017F00 @ 0x180017F00 (sub_180017F00.c)
 *     sub_180018340 @ 0x180018340 (sub_180018340.c)
 *     sub_1800187A4 @ 0x1800187A4 (sub_1800187A4.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800165C8(int a1, char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v10; // rax
  __int64 v11; // r12
  void (__fastcall ***v12)(_QWORD, __int64); // rax
  char *v13; // r12
  _QWORD *v14; // rax
  __int64 v15; // r15
  void (__fastcall ***v16)(_QWORD, __int64); // rax
  char v17; // r15
  int v18; // edi
  unsigned int v19; // ebx
  void **v20; // r13
  __int16 v21; // r15
  unsigned __int64 v22; // rdi
  __int64 v23; // rbx
  void **v24; // r13
  __int16 *v25; // rcx
  __int16 j; // ax
  unsigned __int64 v27; // rcx
  int v28; // edx
  void **v29; // rax
  void **v30; // rax
  void **v31; // rax
  void **v32; // r13
  void **v33; // rax
  __int64 v34; // rbx
  char v35; // cl
  void **v36; // rax
  void **v37; // rax
  __int16 *v38; // rcx
  __int16 i; // ax
  unsigned __int64 v40; // rcx
  int k; // r13d
  __int16 *v42; // rcx
  __int16 m; // ax
  unsigned __int64 v44; // rcx
  int v45; // ebx
  __int16 *v46; // rax
  __int16 n; // cx
  unsigned __int64 v48; // rax
  char v49; // [rsp+38h] [rbp-89h]
  char v50; // [rsp+39h] [rbp-88h]
  unsigned int v51; // [rsp+3Ch] [rbp-85h]
  __int64 v52; // [rsp+40h] [rbp-81h] BYREF
  __int64 v53; // [rsp+48h] [rbp-79h]
  __int64 v54; // [rsp+50h] [rbp-71h] BYREF
  void **v55; // [rsp+58h] [rbp-69h]
  char *v56; // [rsp+60h] [rbp-61h]
  __int64 v57; // [rsp+68h] [rbp-59h]
  void *v58[3]; // [rsp+70h] [rbp-51h] BYREF
  __int64 v59; // [rsp+88h] [rbp-39h]
  void *v60[3]; // [rsp+90h] [rbp-31h] BYREF
  unsigned __int64 v61; // [rsp+A8h] [rbp-19h]
  _WORD v62[10]; // [rsp+B0h] [rbp-11h] BYREF
  __int16 v63; // [rsp+C4h] [rbp+3h]
  __int16 v64; // [rsp+C6h] [rbp+5h]
  __int16 v65; // [rsp+C8h] [rbp+7h]
  __int16 v66; // [rsp+CAh] [rbp+9h]

  v57 = -2LL;
  v56 = a2;
  if ( (*(_DWORD *)(a5 + 24) & 0x3000) == 0x3000 )
    return sub_1800172BC(a1, (_DWORD)a2, a3, a4, a5, a6);
  v10 = sub_18000B438(a5, &v54);
  v11 = sub_1800187A4(v10);
  v53 = v11;
  if ( v54 )
  {
    v12 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
    if ( v12 )
      (**v12)(v12, 1LL);
  }
  sub_180016EB4(v11, v60);
  v13 = a2;
  v50 = 0;
  v14 = sub_18000B438(a5, &v52);
  v15 = sub_180018340(v14);
  if ( v52 )
  {
    v16 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
    if ( v16 )
      (**v16)(v16, 1LL);
  }
  (*(void (__fastcall **)(__int64, const char *, char *, _WORD *))(*(_QWORD *)v15 + 88LL))(
    v15,
    "0123456789-+Ee",
    "",
    v62);
  if ( !*(_BYTE *)(a3 + 8) )
    sub_180017F00(a3);
  if ( !*(_BYTE *)(a4 + 8) )
    sub_180017F00(a4);
  if ( *(_QWORD *)a3 )
  {
    if ( *(_QWORD *)a4 )
      goto LABEL_26;
  }
  else if ( !*(_QWORD *)a4 )
  {
    goto LABEL_26;
  }
  if ( !*(_BYTE *)(a3 + 8) )
    sub_180017F00(a3);
  if ( *(_WORD *)(a3 + 10) == v64 )
  {
    *a2 = 43;
  }
  else
  {
    if ( !*(_BYTE *)(a3 + 8) )
      sub_180017F00(a3);
    if ( *(_WORD *)(a3 + 10) != v63 )
      goto LABEL_26;
    *a2 = 45;
  }
  v13 = a2 + 1;
  sub_180017E70(a3);
LABEL_26:
  v17 = 0;
  v49 = 0;
  v18 = 0;
  LODWORD(v52) = 0;
  v19 = 0;
  v51 = 0;
  v20 = v60;
  if ( v61 >= 0x10 )
    v20 = (void **)v60[0];
  v55 = v20;
  if ( (unsigned __int8)(*(_BYTE *)v20 - 1) > 0x7Du )
  {
    while ( 1 )
    {
      if ( !*(_BYTE *)(a3 + 8) )
        sub_180017F00(a3);
      if ( !*(_BYTE *)(a4 + 8) )
        sub_180017F00(a4);
      if ( *(_QWORD *)a3 )
      {
        if ( *(_QWORD *)a4 )
          goto LABEL_110;
      }
      else if ( !*(_QWORD *)a4 )
      {
        goto LABEL_110;
      }
      if ( !*(_BYTE *)(a3 + 8) )
        sub_180017F00(a3);
      v38 = v62;
      for ( i = v62[0]; i && i != *(_WORD *)(a3 + 10); i = *v38 )
        ++v38;
      v40 = v38 - v62;
      if ( v40 >= 0xA )
      {
LABEL_110:
        v51 = v19;
        v49 = v17;
        goto LABEL_112;
      }
      if ( v18 < 36 )
      {
        if ( v40 || v18 )
        {
          *v13++ = a0123456789Ee[v40];
          ++v18;
        }
      }
      else
      {
        ++v19;
      }
      v17 = 1;
      sub_180017E70(a3);
    }
  }
  if ( v60[2] )
    v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v53 + 32LL))(v53);
  else
    v21 = 0;
  v22 = 15LL;
  v59 = 15LL;
  LOWORD(v58[0]) = 0;
  v58[2] = (void *)1;
  v23 = 0LL;
  v24 = (void **)v58[0];
  while ( 1 )
  {
    if ( !*(_BYTE *)(a3 + 8) )
      sub_180017F00(a3);
    if ( !*(_BYTE *)(a4 + 8) )
      sub_180017F00(a4);
    if ( *(_QWORD *)a3 )
    {
      if ( *(_QWORD *)a4 )
        goto LABEL_69;
    }
    else if ( !*(_QWORD *)a4 )
    {
      goto LABEL_69;
    }
    if ( !*(_BYTE *)(a3 + 8) )
      sub_180017F00(a3);
    v25 = v62;
    for ( j = v62[0]; j && j != *(_WORD *)(a3 + 10); j = *v25 )
      ++v25;
    v27 = v25 - v62;
    if ( v27 >= 0xA )
      break;
    v49 = 1;
    v28 = v52;
    if ( (int)v52 < 36 )
    {
      if ( v27 || (_DWORD)v52 )
      {
        *v13++ = a0123456789Ee[v27];
        LODWORD(v52) = v28 + 1;
      }
    }
    else
    {
      ++v51;
    }
    v29 = v58;
    if ( v22 >= 0x10 )
      v29 = v24;
    if ( *((_BYTE *)v29 + v23) != 127 )
    {
      v30 = v58;
      if ( v22 >= 0x10 )
        v30 = v24;
      ++*((_BYTE *)v30 + v23);
      goto LABEL_67;
    }
LABEL_68:
    sub_180017E70(a3);
  }
  v31 = v58;
  if ( v22 >= 0x10 )
    v31 = v24;
  if ( *((_BYTE *)v31 + v23) && v21 )
  {
    if ( !*(_BYTE *)(a3 + 8) )
      sub_180017F00(a3);
    if ( *(_WORD *)(a3 + 10) == v21 )
    {
      sub_180016F34(v58, 1LL);
      ++v23;
LABEL_67:
      v24 = (void **)v58[0];
      v22 = v59;
      goto LABEL_68;
    }
  }
LABEL_69:
  v32 = v55;
  if ( v23 )
  {
    v33 = v58;
    if ( v22 >= 0x10 )
      v33 = (void **)v58[0];
    if ( *((char *)v33 + v23) <= 0 )
    {
LABEL_86:
      v50 = 1;
    }
    else
    {
      v34 = v23 + 1;
      while ( v34 )
      {
        v35 = *(_BYTE *)v32;
        if ( *(_BYTE *)v32 == 127 )
          break;
        if ( --v34 )
        {
          v36 = v58;
          if ( v22 >= 0x10 )
            v36 = (void **)v58[0];
          if ( v35 != *((_BYTE *)v36 + v34) )
            goto LABEL_86;
        }
        if ( !v34 )
        {
          v37 = v58;
          if ( v22 >= 0x10 )
            v37 = (void **)v58[0];
          if ( v35 < *(char *)v37 )
            goto LABEL_86;
        }
        if ( *((char *)v32 + 1) > 0 )
          v32 = (void **)((char *)v32 + 1);
      }
    }
  }
  if ( v22 >= 0x10 )
    operator delete(v58[0]);
  v17 = v49;
  v18 = v52;
LABEL_112:
  if ( v17 && !v18 )
    *v13++ = 48;
  if ( !*(_BYTE *)(a3 + 8) )
    sub_180017F00(a3);
  if ( !*(_BYTE *)(a4 + 8) )
    sub_180017F00(a4);
  if ( *(_QWORD *)a3 )
  {
    if ( !*(_QWORD *)a4 )
      goto LABEL_123;
  }
  else if ( *(_QWORD *)a4 )
  {
LABEL_123:
    if ( !*(_BYTE *)(a3 + 8) )
      sub_180017F00(a3);
    if ( *(_WORD *)(a3 + 10) == (*(unsigned __int16 (__fastcall **)(__int64))(*(_QWORD *)v53 + 24LL))(v53) )
    {
      *v13++ = *localeconv()->decimal_point;
      sub_180017E70(a3);
    }
    v17 = v49;
  }
  if ( v18 )
    goto LABEL_144;
  for ( k = v51; ; --k )
  {
    if ( !*(_BYTE *)(a3 + 8) )
      sub_180017F00(a3);
    if ( !*(_BYTE *)(a4 + 8) )
      sub_180017F00(a4);
    if ( *(_QWORD *)a3 )
    {
      if ( *(_QWORD *)a4 )
        break;
    }
    else if ( !*(_QWORD *)a4 )
    {
      break;
    }
    if ( !*(_BYTE *)(a3 + 8) )
      sub_180017F00(a3);
    if ( *(_WORD *)(a3 + 10) != v62[0] )
      break;
    v17 = 1;
    sub_180017E70(a3);
  }
  v51 = k;
  if ( k < 0 )
  {
    *v13++ = 48;
    v51 = k + 1;
  }
  while ( 1 )
  {
LABEL_144:
    if ( !*(_BYTE *)(a3 + 8) )
      sub_180017F00(a3);
    if ( !*(_BYTE *)(a4 + 8) )
      sub_180017F00(a4);
    if ( *(_QWORD *)a3 )
    {
      if ( *(_QWORD *)a4 )
        break;
    }
    else if ( !*(_QWORD *)a4 )
    {
      break;
    }
    if ( !*(_BYTE *)(a3 + 8) )
      sub_180017F00(a3);
    v42 = v62;
    for ( m = v62[0]; m && m != *(_WORD *)(a3 + 10); m = *v42 )
      ++v42;
    v44 = v42 - v62;
    if ( v44 >= 0xA )
      break;
    if ( v18 < 36 )
    {
      *v13++ = a0123456789Ee[v44];
      ++v18;
    }
    v17 = 1;
    sub_180017E70(a3);
  }
  if ( v17 )
  {
    if ( !*(_BYTE *)(a3 + 8) )
      sub_180017F00(a3);
    if ( !*(_BYTE *)(a4 + 8) )
      sub_180017F00(a4);
    if ( *(_QWORD *)a3 )
    {
      if ( !*(_QWORD *)a4 )
      {
LABEL_171:
        if ( !*(_BYTE *)(a3 + 8) )
          sub_180017F00(a3);
        if ( *(_WORD *)(a3 + 10) == v66 )
          goto LABEL_177;
        if ( !*(_BYTE *)(a3 + 8) )
          sub_180017F00(a3);
        if ( *(_WORD *)(a3 + 10) == v65 )
        {
LABEL_177:
          *v13++ = 101;
          sub_180017E70(a3);
          v17 = 0;
          v45 = 0;
          if ( !*(_BYTE *)(a3 + 8) )
            sub_180017F00(a3);
          if ( !*(_BYTE *)(a4 + 8) )
            sub_180017F00(a4);
          if ( *(_QWORD *)a3 )
          {
            if ( *(_QWORD *)a4 )
              goto LABEL_195;
          }
          else if ( !*(_QWORD *)a4 )
          {
            goto LABEL_195;
          }
          if ( !*(_BYTE *)(a3 + 8) )
            sub_180017F00(a3);
          if ( *(_WORD *)(a3 + 10) == v64 )
          {
            *v13 = 43;
          }
          else
          {
            if ( !*(_BYTE *)(a3 + 8) )
              sub_180017F00(a3);
            if ( *(_WORD *)(a3 + 10) != v63 )
              goto LABEL_195;
            *v13 = 45;
          }
          ++v13;
          while ( 1 )
          {
            sub_180017E70(a3);
LABEL_195:
            if ( !*(_BYTE *)(a3 + 8) )
              sub_180017F00(a3);
            if ( !*(_BYTE *)(a4 + 8) )
              sub_180017F00(a4);
            if ( *(_QWORD *)a3 )
            {
              if ( *(_QWORD *)a4 )
                break;
            }
            else if ( !*(_QWORD *)a4 )
            {
              break;
            }
            if ( !*(_BYTE *)(a3 + 8) )
              sub_180017F00(a3);
            if ( *(_WORD *)(a3 + 10) != v62[0] )
              break;
            v17 = 1;
          }
          if ( v17 )
            *v13++ = 48;
          while ( 1 )
          {
            if ( !*(_BYTE *)(a3 + 8) )
              sub_180017F00(a3);
            if ( !*(_BYTE *)(a4 + 8) )
              sub_180017F00(a4);
            if ( *(_QWORD *)a3 )
            {
              if ( *(_QWORD *)a4 )
                break;
            }
            else if ( !*(_QWORD *)a4 )
            {
              break;
            }
            if ( !*(_BYTE *)(a3 + 8) )
              sub_180017F00(a3);
            v46 = v62;
            for ( n = v62[0]; n && n != *(_WORD *)(a3 + 10); n = *v46 )
              ++v46;
            v48 = v46 - v62;
            if ( v48 >= 0xA )
              break;
            if ( v45 < 8 )
            {
              *v13++ = a0123456789Ee[v48];
              ++v45;
            }
            v17 = 1;
            sub_180017E70(a3);
          }
        }
      }
    }
    else if ( *(_QWORD *)a4 )
    {
      goto LABEL_171;
    }
  }
  if ( v50 || !v17 )
    v13 = v56;
  *v13 = 0;
  if ( v61 >= 0x10 )
    operator delete(v60[0]);
  return v51;
}
