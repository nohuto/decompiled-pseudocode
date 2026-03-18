/*
 * XREFs of ?bInit@DDA_CLIPLINE@@QEAAHPEAU_POINTFIX@@0@Z @ 0x1C02D744C
 * Callers:
 *     ?bEnumStartLine@XCLIPOBJ@@QEAAHK@Z @ 0x1C02CB52C (-bEnumStartLine@XCLIPOBJ@@QEAAHK@Z.c)
 *     ?vUpdateCosmeticStyleState@EPATHOBJ@@QEAAXPEAVSURFACE@@PEAU_LINEATTRS@@@Z @ 0x1C02CC0B4 (-vUpdateCosmeticStyleState@EPATHOBJ@@QEAAXPEAVSURFACE@@PEAU_LINEATTRS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DDA_CLIPLINE::bInit(DDA_CLIPLINE *this, struct _POINTFIX *a2, struct _POINTFIX *a3)
{
  int v3; // r11d
  FIX x; // r10d
  FIX v7; // eax
  bool v8; // sf
  __int64 result; // rax
  FIX y; // r8d
  FIX v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // ecx
  FIX v14; // eax
  int v15; // eax
  int v16; // ebp
  __int64 v17; // rcx
  int v18; // r10d
  int v19; // eax
  int v20; // r8d
  __int64 v21; // rdx
  int v22; // r14d
  int v23; // r15d
  __int64 v24; // r12
  int v25; // esi
  signed int v26; // edi
  int v27; // ebx
  signed int v28; // ebx
  int v29; // ecx
  int v30; // r8d
  __int64 v31; // rax
  int v32; // ecx

  v3 = 0;
  *(_DWORD *)this = 0;
  x = a2->x;
  v7 = a3->x;
  *((_DWORD *)this + 4) = a3->x;
  if ( v7 < x )
  {
    x = -x;
    *(_DWORD *)this = 32;
    *((_DWORD *)this + 4) = -v7;
  }
  v8 = *((_DWORD *)this + 4) - x < 0;
  *((_DWORD *)this + 4) -= x;
  if ( v8 )
    return 0LL;
  y = a2->y;
  v11 = a3->y;
  *((_DWORD *)this + 3) = v11;
  if ( v11 < y )
  {
    y = -y;
    *(_DWORD *)this |= 8u;
    *((_DWORD *)this + 3) = -v11;
  }
  v8 = *((_DWORD *)this + 3) - y < 0;
  *((_DWORD *)this + 3) -= y;
  v12 = *((_DWORD *)this + 3);
  if ( v8 )
    return 0LL;
  v13 = *((_DWORD *)this + 4);
  if ( v12 >= v13 )
  {
    if ( v12 == v13 )
    {
      *(_DWORD *)this |= 0x10u;
    }
    else
    {
      *(_DWORD *)this |= 5u;
      *((_DWORD *)this + 4) = v12;
      v14 = x;
      x = y;
      *((_DWORD *)this + 3) = v13;
      y = v14;
    }
  }
  v15 = x >> 4;
  v16 = *(_DWORD *)this | gaflRound[(*(_DWORD *)this >> 2) & 0xF];
  v17 = *((int *)this + 3);
  v18 = x & 0xF;
  *((_DWORD *)this + 1) = v15;
  v19 = y >> 4;
  v20 = y & 0xF;
  *((_DWORD *)this + 2) = v19;
  *(_DWORD *)this = v16;
  v21 = *((int *)this + 4) * (__int64)(v20 + 8) - v18 * v17;
  *((_QWORD *)this + 3) = v21;
  if ( (v16 & 0x8000) != 0 )
    *((_QWORD *)this + 3) = v21 - 1;
  *((__int64 *)this + 3) >>= 4;
  v22 = *((_DWORD *)this + 4);
  v23 = *((_DWORD *)this + 3);
  v24 = *((_QWORD *)this + 3);
  v25 = ((_BYTE)v23 + (_BYTE)v20) & 0xF;
  v26 = ((unsigned int)(v22 + v18) >> 4) - 1;
  v27 = ((_BYTE)v22 + (_BYTE)v18) & 0xF;
  if ( (((_BYTE)v22 + (_BYTE)v18) & 0xF) == 0 )
    goto LABEL_20;
  if ( (((_BYTE)v23 + (_BYTE)v20) & 0xF) != 0 )
  {
    if ( (int)abs32(v25 - 8) <= v27 )
LABEL_19:
      v26 = (unsigned int)(v22 + v18) >> 4;
  }
  else if ( ((v27 - ((v16 & 0x80) != 0) + 8) & 0xFFFFFFF0) != 0 )
  {
    goto LABEL_19;
  }
LABEL_20:
  if ( (v16 & 0x90) != 0x90 )
    goto LABEL_27;
  if ( (((_BYTE)v22 + (_BYTE)v18) & 0xF) != 0 && v25 == v27 + 8 )
    --v26;
  if ( v18 && v20 == v18 + 8 )
  {
    v28 = 0;
  }
  else
  {
LABEL_27:
    v28 = 0;
    if ( v18 )
    {
      if ( v20 )
        v28 = (int)abs32(v20 - 8) <= v18;
      else
        v28 = ((v18 - ((v16 & 0x80) != 0) + 8) & 0xFFFFFFF0) != 0;
    }
  }
  if ( v24 >= 0 && (unsigned int)v24 >= v22 - (v23 & (unsigned int)-v28) )
    v3 = 1;
  if ( v26 < v28 )
    return 0LL;
  v29 = *((_DWORD *)this + 1);
  v30 = *((_DWORD *)this + 2);
  *((_DWORD *)this + 8) = v29 + v28;
  *((_DWORD *)this + 10) = v29 + v26;
  *((_DWORD *)this + 9) = v30 + v3;
  v31 = v24 + v26 * (__int64)*((int *)this + 3);
  if ( v31 >= 0xFFFFFFFFLL )
    v31 /= (unsigned __int64)*((unsigned int *)this + 4);
  else
    LODWORD(v31) = (unsigned int)v31 / *((_DWORD *)this + 4);
  v32 = v30 + v31;
  result = 1LL;
  *((_DWORD *)this + 11) = v32;
  return result;
}
