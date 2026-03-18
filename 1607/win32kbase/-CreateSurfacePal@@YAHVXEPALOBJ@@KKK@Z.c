/*
 * XREFs of ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1C00CD460
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0032010 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 * Callees:
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C0027224 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0039260 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z @ 0x1C00BF210 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z.c)
 */

__int64 __fastcall CreateSurfacePal(__int64 a1, int a2, unsigned int a3, unsigned int a4)
{
  unsigned int *v5; // r9
  unsigned int v7; // r8d
  int v8; // edx
  unsigned int Palette; // edi
  unsigned int v10; // r8d
  unsigned int *v11; // rbx
  unsigned int v12; // r10d
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int *v20; // rcx
  unsigned int *v22; // [rsp+50h] [rbp-10h] BYREF
  int v23; // [rsp+58h] [rbp-8h]
  __int64 v24; // [rsp+80h] [rbp+20h] BYREF
  int v25; // [rsp+88h] [rbp+28h]

  v25 = a2;
  v24 = a1;
  v5 = *(unsigned int **)(a1 + 120);
  v7 = *(_DWORD *)(a1 + 28);
  v8 = *(_DWORD *)(a1 + 24) & 0x1F;
  v23 = 0;
  v22 = 0LL;
  Palette = PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v22, v8, v7, v5, 0, 0, 0, 0x800u, 1);
  if ( Palette )
  {
    v10 = a3 >> 1;
    if ( a3 >> 1 > a4 || (v11 = v22, a4 > v22[7]) )
    {
      Palette = 0;
    }
    else
    {
      v12 = 0;
      Palette = 1;
      *(_DWORD *)(v24 + 24) = *(_DWORD *)(v24 + 24) & 0xFFFFF5FF | 0x800;
      *(_DWORD *)(v24 + 60) = a3;
      v11[15] = a3;
      if ( v10 )
      {
        v13 = 0LL;
        do
        {
          v14 = *((_QWORD *)v11 + 15);
          v25 = *(_DWORD *)(v13 + v14);
          HIBYTE(v25) = 48;
          *(_DWORD *)(v13 + v14) = v25;
          v15 = *((_QWORD *)v11 + 15);
          v13 += 4LL;
          v16 = v12 - v10;
          ++v12;
          v17 = a4 + v16;
          v25 = *(_DWORD *)(v15 + 4 * v17);
          HIBYTE(v25) = 48;
          *(_DWORD *)(v15 + 4LL * (unsigned int)v17) = v25;
        }
        while ( v12 < v10 );
      }
      v18 = *(_DWORD *)(v24 + 28);
      if ( v11[7] < v18 )
        v18 = v11[7];
      memmove(*(void **)(v24 + 120), *((const void **)v11 + 15), 4LL * v18);
      *(_QWORD *)(v24 + 48) = v11;
      v19 = XEPALOBJ::ulTime((XEPALOBJ *)&v24);
      v11[8] = v19;
      v20 = (unsigned int *)*((_QWORD *)v11 + 16);
      if ( v20 != v11 )
        v20[8] = v19;
      v22 = 0LL;
    }
  }
  PALMEMOBJ::~PALMEMOBJ(&v22);
  return Palette;
}
