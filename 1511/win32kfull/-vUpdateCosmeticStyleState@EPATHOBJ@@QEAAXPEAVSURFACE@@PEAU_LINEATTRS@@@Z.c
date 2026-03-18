/*
 * XREFs of ?vUpdateCosmeticStyleState@EPATHOBJ@@QEAAXPEAVSURFACE@@PEAU_LINEATTRS@@@Z @ 0x1C02C89B4
 * Callers:
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00161E0 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?bInit@DDA_CLIPLINE@@QEAAHPEAU_POINTFIX@@0@Z @ 0x1C02D439C (-bInit@DDA_CLIPLINE@@QEAAHPEAU_POINTFIX@@0@Z.c)
 */

void __fastcall EPATHOBJ::vUpdateCosmeticStyleState(EPATHOBJ *this, struct SURFACE *a2, struct _LINEATTRS *a3)
{
  int v4; // ebp
  int v6; // r12d
  _DWORD *v7; // rax
  int v8; // ebp
  PFLOAT_LONG pstyle; // rdx
  union _FLOAT_LONG *i; // rcx
  struct _POINTFIX *j; // rbx
  FIX x; // eax
  unsigned __int64 v13; // rdi
  struct _POINTFIX *v14; // r14
  struct _POINTFIX *v15; // rsi
  unsigned __int64 v16; // r13
  __int64 v17; // rcx
  FIX y; // eax
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rax
  unsigned int v23; // [rsp+20h] [rbp-88h]
  unsigned int v24; // [rsp+24h] [rbp-84h]
  unsigned int v25; // [rsp+28h] [rbp-80h]
  _BYTE v27[32]; // [rsp+38h] [rbp-70h] BYREF
  int v28; // [rsp+58h] [rbp-50h]
  int v29; // [rsp+5Ch] [rbp-4Ch]
  int v30; // [rsp+60h] [rbp-48h]
  int v31; // [rsp+64h] [rbp-44h]

  v4 = 2;
  if ( (a3->fl & 2) != 0 )
  {
    v24 = 1;
    v6 = 1;
    v25 = 1;
    v23 = 1;
  }
  else
  {
    v7 = (_DWORD *)*((_QWORD *)a2 + 6);
    v8 = 0;
    v6 = v7[561];
    v25 = v7[560];
    pstyle = a3->pstyle;
    v24 = v7[559];
    v23 = v6;
    for ( i = &pstyle[a3->cstyle]; i > pstyle; v8 += i->l )
      --i;
    v4 = 2 * v6 * v8;
  }
  for ( j = *(struct _POINTFIX **)(*((_QWORD *)this + 1) + 40LL); ; j = (struct _POINTFIX *)j[1] )
  {
    x = j[2].x;
    if ( (x & 1) != 0 )
      break;
  }
  LODWORD(v13) = 0;
  if ( (x & 4) == 0 )
    LODWORD(v13) = LOWORD(a3->elStyleState.e) + v6 * HIWORD(a3->elStyleState.l);
  v14 = j + 3;
  v15 = j + 4;
  while ( 2 )
  {
    v16 = (unsigned __int64)&j[(unsigned int)j[2].y + 3];
    while ( (unsigned __int64)v15 < v16 )
    {
      if ( !(unsigned int)DDA_CLIPLINE::bInit((DDA_CLIPLINE *)v27, v14, v15) )
        goto LABEL_32;
      if ( v15->x - v14->x >= 0 )
        v17 = (unsigned int)(v15->x - v14->x);
      else
        v17 = (unsigned int)(v14->x - v15->x);
      y = v14->y;
      if ( v15->y - y >= 0 )
        v19 = v15->y - y;
      else
        v19 = y - v15->y;
      if ( v24 == v25 )
      {
        if ( (int)v17 < v19 )
          goto LABEL_23;
      }
      else if ( (unsigned __int64)v24 * v17 < v25 * (unsigned __int64)(unsigned int)v19 )
      {
LABEL_23:
        if ( (v27[0] & 5) != 0 )
          goto LABEL_24;
        goto LABEL_27;
      }
      if ( (v27[0] & 5) == 0 )
      {
LABEL_24:
        v20 = v24;
        v21 = v30 - v28;
        goto LABEL_28;
      }
LABEL_27:
      v20 = v25;
      v21 = v31 - v29;
LABEL_28:
      v22 = (unsigned int)(v21 + 1);
      if ( (v22 & 0xFFFF0000) != 0 )
      {
        v13 = ((int)v13 + v20 * v22) % (unsigned __int64)(unsigned int)v4;
      }
      else
      {
        LODWORD(v13) = v20 * v22 + v13;
        if ( (int)v13 >= v4 )
          LODWORD(v13) = (int)v13 % v4;
      }
LABEL_32:
      v14 = v15++;
    }
    j = (struct _POINTFIX *)*j;
    if ( j )
    {
      v15 = j + 3;
      continue;
    }
    break;
  }
  a3->elStyleState.l = (unsigned __int16)((unsigned int)v13 % v23) | ((unsigned __int16)((unsigned int)v13 / v23) << 16);
}
