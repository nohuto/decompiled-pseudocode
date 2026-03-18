/*
 * XREFs of ?bInit@DDA_CLIPLINE@@QEAAHPEAU_POINTFIX@@0@Z @ 0x1C0002340
 * Callers:
 *     ?bEnumStartLine@XCLIPOBJ@@QEAAHK@Z @ 0x1C0001F2C (-bEnumStartLine@XCLIPOBJ@@QEAAHK@Z.c)
 *     ?vUpdateCosmeticStyleState@EPATHOBJ@@QEAAXPEAVSURFACE@@PEAU_LINEATTRS@@@Z @ 0x1C02C8930 (-vUpdateCosmeticStyleState@EPATHOBJ@@QEAAXPEAVSURFACE@@PEAU_LINEATTRS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DDA_CLIPLINE::bInit(DDA_CLIPLINE *this, struct _POINTFIX *a2, struct _POINTFIX *a3)
{
  int v3; // r11d
  FIX x; // r10d
  FIX v6; // eax
  bool v7; // sf
  FIX y; // edx
  FIX v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // ecx
  int v12; // eax
  int v13; // ebp
  __int64 v14; // rcx
  int v15; // r10d
  int v16; // eax
  int v17; // edx
  __int64 v18; // r8
  int v19; // r14d
  int v20; // r15d
  __int64 v21; // r12
  int v22; // esi
  signed int v23; // ebx
  int v24; // r8d
  int v25; // eax
  int v26; // r8d
  int v27; // edi
  int v28; // ecx
  int v29; // r10d
  int v30; // eax
  __int64 v31; // r8
  __int64 v32; // r8
  unsigned __int64 v33; // rax
  int v34; // ecx
  __int64 result; // rax
  FIX v36; // eax

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
  v9 = a3->y;
  *((_DWORD *)this + 3) = v9;
  if ( v9 < y )
  {
    y = -y;
    *(_DWORD *)this |= 8u;
    *((_DWORD *)this + 3) = -v9;
  }
  v7 = *((_DWORD *)this + 3) - y < 0;
  *((_DWORD *)this + 3) -= y;
  v10 = *((_DWORD *)this + 3);
  if ( v7 )
    return 0LL;
  v11 = *((_DWORD *)this + 4);
  if ( v10 >= v11 )
  {
    if ( v10 == v11 )
    {
      *(_DWORD *)this |= 0x10u;
    }
    else
    {
      *(_DWORD *)this |= 5u;
      *((_DWORD *)this + 4) = v10;
      v36 = x;
      x = y;
      *((_DWORD *)this + 3) = v11;
      y = v36;
    }
  }
  v12 = x >> 4;
  v13 = *(_DWORD *)this | gaflRound[(*(_DWORD *)this >> 2) & 0xF];
  v14 = *((int *)this + 3);
  v15 = x & 0xF;
  *((_DWORD *)this + 1) = v12;
  v16 = y >> 4;
  v17 = y & 0xF;
  *((_DWORD *)this + 2) = v16;
  *(_DWORD *)this = v13;
  v18 = *((int *)this + 4) * (__int64)(v17 + 8) - v15 * v14;
  *((_QWORD *)this + 3) = v18;
  if ( (v13 & 0x8000) != 0 )
    *((_QWORD *)this + 3) = v18 - 1;
  *((__int64 *)this + 3) >>= 4;
  v19 = *((_DWORD *)this + 4);
  v20 = *((_DWORD *)this + 3);
  v21 = *((_QWORD *)this + 3);
  v22 = ((_BYTE)v20 + (_BYTE)v17) & 0xF;
  v23 = ((unsigned int)(v19 + v15) >> 4) - 1;
  v24 = ((_BYTE)v19 + (_BYTE)v15) & 0xF;
  if ( (((_BYTE)v19 + (_BYTE)v15) & 0xF) == 0 )
    goto LABEL_18;
  if ( (((_BYTE)v20 + (_BYTE)v17) & 0xF) == 0 )
  {
    if ( ((v24 - ((v13 & 0x80) != 0) + 8) & 0xFFFFFFF0) == 0 )
      goto LABEL_18;
    goto LABEL_17;
  }
  v25 = v22 - 8;
  if ( v22 - 8 < 0 )
    v25 = 8 - v22;
  if ( v25 <= v24 )
LABEL_17:
    v23 = (unsigned int)(v19 + v15) >> 4;
LABEL_18:
  if ( (v13 & 0x90) != 0x90 )
    goto LABEL_24;
  if ( (((_BYTE)v19 + (_BYTE)v15) & 0xF) != 0 && v22 == v24 + 8 )
    --v23;
  if ( v15 && v17 == v15 + 8 )
  {
    v26 = 0;
  }
  else
  {
LABEL_24:
    v26 = 0;
    if ( v15 )
    {
      if ( v17 )
      {
        if ( v17 - 8 >= 0 )
          v27 = v17 - 8;
        else
          v27 = 8 - v17;
        if ( v27 <= v15 )
          v26 = 1;
      }
      else
      {
        v26 = ((v15 - ((v13 & 0x80) != 0) + 8) & 0xFFFFFFF0) != 0;
      }
    }
  }
  if ( v21 >= 0 && (unsigned int)v21 >= v19 - (v20 & (unsigned int)-v26) )
    v3 = 1;
  if ( v23 < v26 )
    return 0LL;
  v28 = *((_DWORD *)this + 1);
  v29 = *((_DWORD *)this + 2);
  v30 = v28 + v26;
  v31 = *((int *)this + 3);
  *((_DWORD *)this + 8) = v30;
  *((_DWORD *)this + 10) = v28 + v23;
  *((_DWORD *)this + 9) = v29 + v3;
  v32 = v21 + v23 * v31;
  if ( v32 >= 0xFFFFFFFFLL )
    v33 = v32 / (unsigned __int64)*((unsigned int *)this + 4);
  else
    LODWORD(v33) = (unsigned int)v32 / *((_DWORD *)this + 4);
  v34 = v29 + v33;
  result = 1LL;
  *((_DWORD *)this + 11) = v34;
  return result;
}
