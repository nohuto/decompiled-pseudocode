/*
 * XREFs of sub_1800160E4 @ 0x1800160E4
 * Callers:
 *     sub_180014AD0 @ 0x180014AD0 (sub_180014AD0.c)
 *     sub_180014D90 @ 0x180014D90 (sub_180014D90.c)
 *     sub_180014F10 @ 0x180014F10 (sub_180014F10.c)
 *     sub_180015080 @ 0x180015080 (sub_180015080.c)
 *     sub_1800151F0 @ 0x1800151F0 (sub_1800151F0.c)
 *     sub_180015360 @ 0x180015360 (sub_180015360.c)
 *     sub_1800154D0 @ 0x1800154D0 (sub_1800154D0.c)
 *     sub_180015980 @ 0x180015980 (sub_180015980.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_180016EB4 @ 0x180016EB4 (sub_180016EB4.c)
 *     sub_180016F34 @ 0x180016F34 (sub_180016F34.c)
 *     sub_180017E70 @ 0x180017E70 (sub_180017E70.c)
 *     sub_180017F00 @ 0x180017F00 (sub_180017F00.c)
 *     sub_180018340 @ 0x180018340 (sub_180018340.c)
 *     sub_1800187A4 @ 0x1800187A4 (sub_1800187A4.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800160E4(__int64 a1, char *a2, __int64 a3, __int64 a4, __int16 a5, __int64 a6)
{
  __int64 v9; // rdi
  unsigned __int8 v10; // r13
  __int64 v11; // rdi
  char *v12; // r15
  int v13; // ecx
  int v14; // ebx
  int v15; // edi
  unsigned __int64 v16; // r12
  __int64 v17; // rbx
  _QWORD *v18; // r13
  __int16 *v19; // rax
  __int16 i; // cx
  unsigned __int64 v21; // rax
  char v22; // cl
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  __int16 v26; // ax
  char *v27; // rax
  char v28; // al
  char *v29; // rcx
  void *v30; // rdx
  unsigned __int64 v31; // r8
  char v32; // r9
  _QWORD *v33; // rax
  char *v34; // rax
  __int16 v36; // [rsp+28h] [rbp-99h]
  __int16 v37; // [rsp+2Ah] [rbp-97h]
  unsigned int v38; // [rsp+2Ch] [rbp-95h]
  unsigned __int64 v40; // [rsp+40h] [rbp-81h]
  __int64 v41; // [rsp+48h] [rbp-79h]
  _QWORD v42[3]; // [rsp+50h] [rbp-71h] BYREF
  __int64 v43; // [rsp+68h] [rbp-59h]
  _QWORD v44[3]; // [rsp+70h] [rbp-51h] BYREF
  unsigned __int64 v45; // [rsp+88h] [rbp-39h]
  _WORD v46[28]; // [rsp+90h] [rbp-31h] BYREF

  HIBYTE(v41) = -1;
  v9 = sub_1800187A4(a6);
  sub_180016EB4(v9, v44);
  v10 = 0;
  if ( v44[2] )
    v37 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9);
  else
    v37 = 0;
  v11 = sub_180018340(a6);
  (*(void (__fastcall **)(__int64, const char *, char *, _WORD *))(*(_QWORD *)v11 + 88LL))(
    v11,
    "0123456789ABCDEFabcdef-+Xx",
    "",
    v46);
  v12 = a2;
  if ( !*(_BYTE *)(a3 + 8) )
    sub_180017F00(a3);
  if ( !*(_BYTE *)(a4 + 8) )
    sub_180017F00(a4);
  if ( *(_QWORD *)a3 )
  {
    if ( *(_QWORD *)a4 )
      goto LABEL_21;
  }
  else if ( !*(_QWORD *)a4 )
  {
    goto LABEL_21;
  }
  if ( !*(_BYTE *)(a3 + 8) )
    sub_180017F00(a3);
  if ( *(_WORD *)(a3 + 10) == v46[23] )
  {
    *a2 = 43;
LABEL_20:
    v12 = a2 + 1;
    sub_180017E70(a3);
    goto LABEL_21;
  }
  if ( !*(_BYTE *)(a3 + 8) )
    sub_180017F00(a3);
  if ( *(_WORD *)(a3 + 10) == v46[22] )
  {
    *a2 = 45;
    goto LABEL_20;
  }
LABEL_21:
  v13 = a5 & 0xE00;
  v14 = 10;
  v15 = v13 != 0 ? 0xA : 0;
  if ( v13 == 2048 )
    v15 = 16;
  if ( v13 == 1024 )
    v15 = 8;
  v38 = v15;
  v36 = 0;
  if ( !*(_BYTE *)(a3 + 8) )
    sub_180017F00(a3);
  if ( !*(_BYTE *)(a4 + 8) )
    sub_180017F00(a4);
  if ( *(_QWORD *)a3 )
  {
    if ( *(_QWORD *)a4 )
      goto LABEL_54;
  }
  else if ( !*(_QWORD *)a4 )
  {
    goto LABEL_54;
  }
  if ( !*(_BYTE *)(a3 + 8) )
    sub_180017F00(a3);
  if ( *(_WORD *)(a3 + 10) != v46[0] )
  {
LABEL_54:
    if ( !v15 )
      goto LABEL_58;
    goto LABEL_55;
  }
  v10 = 1;
  LOBYTE(v36) = 1;
  sub_180017E70(a3);
  if ( !*(_BYTE *)(a3 + 8) )
    sub_180017F00(a3);
  if ( !*(_BYTE *)(a4 + 8) )
    sub_180017F00(a4);
  if ( *(_QWORD *)a3 )
  {
    if ( *(_QWORD *)a4 )
      goto LABEL_52;
  }
  else if ( !*(_QWORD *)a4 )
  {
    goto LABEL_52;
  }
  if ( !*(_BYTE *)(a3 + 8) )
    sub_180017F00(a3);
  if ( *(_WORD *)(a3 + 10) == v46[25] )
    goto LABEL_50;
  if ( !*(_BYTE *)(a3 + 8) )
    sub_180017F00(a3);
  if ( *(_WORD *)(a3 + 10) == v46[24] )
  {
LABEL_50:
    if ( (v15 & 0xFFFFFFEF) == 0 )
    {
      v15 = 16;
      v38 = 16;
      v10 = 0;
      LOBYTE(v36) = 0;
      sub_180017E70(a3);
      goto LABEL_56;
    }
  }
LABEL_52:
  if ( !v15 )
  {
    v15 = 8;
    v38 = 8;
    goto LABEL_54;
  }
LABEL_55:
  if ( v15 != 10 )
  {
LABEL_56:
    v14 = 22;
    if ( v15 == 8 )
      v14 = 8;
  }
LABEL_58:
  v40 = v14;
  v16 = 15LL;
  v43 = 15LL;
  LOWORD(v42[0]) = v10;
  v42[2] = 1LL;
  v17 = 0LL;
  v18 = (_QWORD *)v42[0];
  while ( 1 )
  {
    if ( !*(_BYTE *)(a3 + 8) )
      sub_180017F00(a3);
    if ( !*(_BYTE *)(a4 + 8) )
      sub_180017F00(a4);
    if ( *(_QWORD *)a3 )
    {
      if ( *(_QWORD *)a4 )
        goto LABEL_94;
    }
    else if ( !*(_QWORD *)a4 )
    {
      goto LABEL_94;
    }
    if ( !*(_BYTE *)(a3 + 8) )
      sub_180017F00(a3);
    v19 = v46;
    for ( i = v46[0]; i && i != *(_WORD *)(a3 + 10); i = *v19 )
      ++v19;
    v21 = v19 - v46;
    if ( v21 >= v40 )
      break;
    v22 = a0123456789abcd[v21];
    *v12 = v22;
    if ( (HIBYTE(v36) || v22 != 48) && v12 < a2 + 31 )
    {
      ++v12;
      HIBYTE(v36) = 1;
    }
    LOBYTE(v36) = 1;
    v23 = v42;
    if ( v16 >= 0x10 )
      v23 = v18;
    if ( *((_BYTE *)v23 + v17) != 127 )
    {
      v24 = v42;
      if ( v16 >= 0x10 )
        v24 = v18;
      ++*((_BYTE *)v24 + v17);
      goto LABEL_92;
    }
LABEL_93:
    sub_180017E70(a3);
  }
  v25 = v42;
  if ( v16 >= 0x10 )
    v25 = v18;
  if ( *((_BYTE *)v25 + v17) )
  {
    v26 = v37;
    if ( v37 )
    {
      if ( !*(_BYTE *)(a3 + 8) )
      {
        sub_180017F00(a3);
        v26 = v37;
      }
      if ( *(_WORD *)(a3 + 10) == v26 )
      {
        sub_180016F34(v42, 1LL);
        ++v17;
LABEL_92:
        v18 = (_QWORD *)v42[0];
        v16 = v43;
        goto LABEL_93;
      }
    }
  }
LABEL_94:
  if ( !v17 )
    goto LABEL_100;
  v27 = (char *)v42;
  if ( v16 >= 0x10 )
    v27 = (char *)v18;
  if ( v27[v17] <= 0 )
  {
    v28 = 0;
  }
  else
  {
    ++v17;
LABEL_100:
    v28 = v36;
  }
  v29 = (char *)v44;
  v30 = (void *)v44[0];
  v31 = v45;
  if ( v45 >= 0x10 )
    v29 = (char *)v44[0];
  if ( v28 )
  {
    while ( v17 )
    {
      v32 = *v29;
      if ( *v29 == 127 )
        break;
      if ( --v17 )
      {
        v33 = v42;
        if ( v16 >= 0x10 )
          v33 = v18;
        if ( v32 != *((_BYTE *)v33 + v17) )
          goto LABEL_118;
      }
      if ( !v17 )
      {
        v34 = (char *)v42;
        if ( v16 >= 0x10 )
          v34 = (char *)v18;
        if ( v32 < *v34 )
          goto LABEL_118;
      }
      if ( v29[1] > 0 )
        ++v29;
    }
    if ( !HIBYTE(v36) )
      *v12++ = 48;
  }
  else
  {
LABEL_118:
    v12 = a2;
  }
  *v12 = 0;
  if ( v16 >= 0x10 )
  {
    operator delete(v18);
    v31 = v45;
    v30 = (void *)v44[0];
  }
  if ( v31 >= 0x10 )
    operator delete(v30);
  return v38;
}
