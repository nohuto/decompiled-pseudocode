/*
 * XREFs of ?CreateDriverSurfMem@@YA?AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C00B38BC
 * Callers:
 *     ?hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C0011DA4 (-hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 *     ?EngCreateLockedBitmap@@YAPEAU_SURFOBJ@@UtagSIZE@@JKKPEAX@Z @ 0x1C00B3A90 (-EngCreateLockedBitmap@@YAPEAU_SURFOBJ@@UtagSIZE@@JKKPEAX@Z.c)
 * Callees:
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C00336C0 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00B1E40 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 */

__int64 __fastcall CreateDriverSurfMem(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        int a7,
        void *a8)
{
  unsigned int v11; // edx
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  char v14; // al
  __int64 v16; // [rsp+68h] [rbp-9h] BYREF
  char v17; // [rsp+70h] [rbp-1h]
  int v18; // [rsp+74h] [rbp+3h]
  unsigned int v19; // [rsp+78h] [rbp+7h] BYREF
  __int64 v20; // [rsp+7Ch] [rbp+Bh]
  _DWORD v21[5]; // [rsp+84h] [rbp+13h]

  if ( (int)a4 < 0 || a4 < 0 )
  {
    *(_QWORD *)a1 = 0LL;
    *(_BYTE *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 12) = 0;
    return a1;
  }
  v21[0] = 0;
  v21[4] = 0;
  v19 = a6 & 0xFFFF7FFF;
  v20 = a4;
  *(_QWORD *)&v21[1] = 0LL;
  v21[3] = a7;
  if ( !a8 )
    goto LABEL_20;
  v11 = a5;
  if ( !a5 )
    goto LABEL_20;
  switch ( a6 & 0xFFFF7FFF )
  {
    case 1u:
      v12 = 8LL * a5;
      goto LABEL_18;
    case 2u:
      v12 = 2LL * a5;
LABEL_18:
      if ( v12 > 0xFFFFFFFF )
      {
        *(_QWORD *)a1 = 0LL;
        *(_BYTE *)(a1 + 8) = 0;
        *(_DWORD *)(a1 + 12) = 0;
        return a1;
      }
      LODWORD(v20) = v12;
      break;
    case 3u:
LABEL_12:
      LODWORD(v20) = v11;
      break;
    case 4u:
LABEL_14:
      v11 >>= 1;
      goto LABEL_12;
    case 5u:
      v11 = (2863311531u * (unsigned __int64)a5) >> 32;
      goto LABEL_14;
    case 6u:
      v11 = a5 >> 2;
      goto LABEL_12;
  }
LABEL_20:
  v16 = 0LL;
  v17 = 0;
  v18 = 0;
  SURFMEM::bCreateDIB(
    (SURFMEM *)&v16,
    (struct _DEVBITMAPINFO *)&v19,
    a8,
    0LL,
    0,
    0LL,
    0LL,
    (a6 & 0x8000) == 0,
    a8 == 0LL,
    0,
    0);
  v13 = v16;
  if ( v16 )
  {
    if ( a2 == 3 )
      *(_DWORD *)(v16 + 112) |= 0x400000u;
    if ( a2 )
    {
      *(_DWORD *)(v13 + 88) = 0;
      *(_QWORD *)(v13 + 80) = 0LL;
      *(_QWORD *)(v13 + 72) = 0LL;
    }
    *(_DWORD *)(v13 + 112) |= 0x200000u;
    *(_QWORD *)(v13 + 56) = a4;
    v14 = v17 | 1;
    *(_QWORD *)(v13 + 24) = a3;
    *(_WORD *)(v13 + 100) = a2;
    if ( (a6 & 0x8000) != 0 )
      *(_DWORD *)(v13 + 112) |= 0x40000u;
    *(_BYTE *)(a1 + 8) = v14;
    *(_DWORD *)(a1 + 12) = v18;
    v18 = 0;
    *(_QWORD *)a1 = v13;
    v16 = 0LL;
    v17 = 0;
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *(_BYTE *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 12) = 0;
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v16);
  return a1;
}
