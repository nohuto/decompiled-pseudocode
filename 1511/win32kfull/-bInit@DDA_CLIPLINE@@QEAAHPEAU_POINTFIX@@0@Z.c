/*
 * XREFs of ?bInit@DDA_CLIPLINE@@QEAAHPEAU_POINTFIX@@0@Z @ 0x1C02D439C
 * Callers:
 *     ?bEnumStartLine@XCLIPOBJ@@QEAAHK@Z @ 0x1C02C7E2C (-bEnumStartLine@XCLIPOBJ@@QEAAHK@Z.c)
 *     ?vUpdateCosmeticStyleState@EPATHOBJ@@QEAAXPEAVSURFACE@@PEAU_LINEATTRS@@@Z @ 0x1C02C89B4 (-vUpdateCosmeticStyleState@EPATHOBJ@@QEAAXPEAVSURFACE@@PEAU_LINEATTRS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DDA_CLIPLINE::bInit(DDA_CLIPLINE *this, struct _POINTFIX *a2, struct _POINTFIX *a3)
{
  int v3; // r11d
  FIX x; // r10d
  FIX v6; // eax
  bool v7; // sf
  __int64 result; // rax
  FIX y; // edx
  FIX v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // ecx
  FIX v13; // eax
  int v14; // eax
  int v15; // ebp
  __int64 v16; // rcx
  int v17; // r10d
  int v18; // eax
  int v19; // edx
  __int64 v20; // r8
  int v21; // r14d
  int v22; // r15d
  __int64 v23; // r12
  int v24; // esi
  signed int v25; // ebx
  int v26; // r8d
  int v27; // eax
  int v28; // r8d
  int v29; // edi
  int v30; // ecx
  int v31; // r10d
  int v32; // eax
  __int64 v33; // r8
  __int64 v34; // r8
  unsigned __int64 v35; // rax
  int v36; // ecx

  v3 = 0;
  *(_DWORD *)this = 0;
  x = a2->x;
  v6 = a3->x;
  *((_DWORD *)this + 4) = a3->x;
  if ( v6 < x )
  {
    x = -x;
    *(_DWORD *)this = 32;
    *((_DWORD *)this + 4) = -v6;
  }
  v7 = *((_DWORD *)this + 4) - x < 0;
  *((_DWORD *)this + 4) -= x;
  if ( v7 )
    return 0LL;
  y = a2->y;
  v10 = a3->y;
  *((_DWORD *)this + 3) = v10;
  if ( v10 < y )
  {
    y = -y;
    *(_DWORD *)this |= 8u;
    *((_DWORD *)this + 3) = -v10;
  }
  v7 = *((_DWORD *)this + 3) - y < 0;
  *((_DWORD *)this + 3) -= y;
  v11 = *((_DWORD *)this + 3);
  if ( v7 )
    return 0LL;
  v12 = *((_DWORD *)this + 4);
  if ( v11 >= v12 )
  {
    if ( v11 == v12 )
    {
      *(_DWORD *)this |= 0x10u;
    }
    else
    {
      *(_DWORD *)this |= 5u;
      *((_DWORD *)this + 4) = v11;
      v13 = x;
      x = y;
      *((_DWORD *)this + 3) = v12;
      y = v13;
    }
  }
  v14 = x >> 4;
  v15 = *(_DWORD *)this | gaflRound[(*(_DWORD *)this >> 2) & 0xF];
  v16 = *((int *)this + 3);
  v17 = x & 0xF;
  *((_DWORD *)this + 1) = v14;
  v18 = y >> 4;
  v19 = y & 0xF;
  *((_DWORD *)this + 2) = v18;
  *(_DWORD *)this = v15;
  v20 = *((int *)this + 4) * (__int64)(v19 + 8) - v17 * v16;
  *((_QWORD *)this + 3) = v20;
  if ( (v15 & 0x8000) != 0 )
    *((_QWORD *)this + 3) = v20 - 1;
  *((__int64 *)this + 3) >>= 4;
  v21 = *((_DWORD *)this + 4);
  v22 = *((_DWORD *)this + 3);
  v23 = *((_QWORD *)this + 3);
  v24 = ((_BYTE)v22 + (_BYTE)v19) & 0xF;
  v25 = ((unsigned int)(v21 + v17) >> 4) - 1;
  v26 = ((_BYTE)v21 + (_BYTE)v17) & 0xF;
  if ( (((_BYTE)v21 + (_BYTE)v17) & 0xF) == 0 )
    goto LABEL_22;
  if ( (((_BYTE)v22 + (_BYTE)v19) & 0xF) != 0 )
  {
    v27 = v24 - 8;
    if ( v24 - 8 < 0 )
      v27 = 8 - v24;
    if ( v27 <= v26 )
      goto LABEL_21;
  }
  else if ( ((v26 - ((v15 & 0x80) != 0) + 8) & 0xFFFFFFF0) != 0 )
  {
LABEL_21:
    v25 = (unsigned int)(v21 + v17) >> 4;
  }
LABEL_22:
  if ( (v15 & 0x90) != 0x90 )
    goto LABEL_29;
  if ( (((_BYTE)v21 + (_BYTE)v17) & 0xF) != 0 && v24 == v26 + 8 )
    --v25;
  if ( v17 && v19 == v17 + 8 )
  {
    v28 = 0;
  }
  else
  {
LABEL_29:
    v28 = 0;
    if ( v17 )
    {
      if ( v19 )
      {
        if ( v19 - 8 >= 0 )
          v29 = v19 - 8;
        else
          v29 = 8 - v19;
        if ( v29 <= v17 )
          v28 = 1;
      }
      else
      {
        v28 = ((v17 - ((v15 & 0x80) != 0) + 8) & 0xFFFFFFF0) != 0;
      }
    }
  }
  if ( v23 >= 0 && (unsigned int)v23 >= v21 - (v22 & (unsigned int)-v28) )
    v3 = 1;
  if ( v25 < v28 )
    return 0LL;
  v30 = *((_DWORD *)this + 1);
  v31 = *((_DWORD *)this + 2);
  v32 = v30 + v28;
  v33 = *((int *)this + 3);
  *((_DWORD *)this + 8) = v32;
  *((_DWORD *)this + 10) = v30 + v25;
  *((_DWORD *)this + 9) = v31 + v3;
  v34 = v23 + v25 * v33;
  if ( v34 >= 0xFFFFFFFFLL )
    v35 = v34 / (unsigned __int64)*((unsigned int *)this + 4);
  else
    LODWORD(v35) = (unsigned int)v34 / *((_DWORD *)this + 4);
  v36 = v31 + v35;
  result = 1LL;
  *((_DWORD *)this + 11) = v36;
  return result;
}
