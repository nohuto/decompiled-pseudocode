/*
 * XREFs of ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1C00C06DC
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0038390 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 * Callees:
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0022AE0 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKK@Z @ 0x1C0022CF0 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKK@Z.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C00A8B70 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 */

__int64 __fastcall CreateSurfacePal(__int64 a1, int a2, unsigned int a3, unsigned int a4)
{
  unsigned int *v5; // r9
  unsigned int v7; // r8d
  int v8; // edx
  unsigned int v9; // edx
  unsigned int Palette; // esi
  int v11; // r8d
  __int64 *v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned int v18; // eax
  int v19; // eax
  __int64 v20; // rcx
  __int64 *v22; // [rsp+40h] [rbp-10h] BYREF
  int v23; // [rsp+48h] [rbp-8h]
  __int64 v24; // [rsp+70h] [rbp+20h] BYREF
  int v25; // [rsp+78h] [rbp+28h]

  v25 = a2;
  v24 = a1;
  v5 = *(unsigned int **)(a1 + 128);
  v7 = *(_DWORD *)(a1 + 28);
  v8 = *(_DWORD *)(a1 + 24) & 0x1F;
  v23 = 0;
  v22 = 0LL;
  Palette = PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v22, v8, v7, v5, 0, 0, 0, 0x800u);
  if ( Palette )
  {
    v9 = a3 >> 1;
    if ( a3 >> 1 > a4 || (v12 = v22, a4 > *((_DWORD *)v22 + 7)) )
    {
      Palette = 0;
    }
    else
    {
      Palette = 1;
      *(_DWORD *)(v24 + 24) = *(_DWORD *)(v24 + 24) & 0xFFFFF5FF | 0x800;
      *(_DWORD *)(v24 + 60) = a3;
      *((_DWORD *)v12 + 15) = a3;
      if ( v9 )
      {
        v13 = 0LL;
        v14 = v9;
        v15 = a4 - v9;
        do
        {
          v16 = v12[16];
          v25 = *(_DWORD *)(v13 + v16);
          HIBYTE(v25) = 48;
          *(_DWORD *)(v13 + v16) = v25;
          v13 += 4LL;
          v17 = v12[16];
          v25 = *(_DWORD *)(v17 + 4 * v15);
          HIBYTE(v25) = 48;
          *(_DWORD *)(v17 + 4 * v15) = v25;
          v15 = (unsigned int)(v15 + 1);
          --v14;
        }
        while ( v14 );
      }
      v18 = *(_DWORD *)(v24 + 28);
      if ( *((_DWORD *)v12 + 7) < v18 )
        v18 = *((_DWORD *)v12 + 7);
      memmove(*(void **)(v24 + 128), (const void *)v12[16], 4LL * v18);
      *(_QWORD *)(v24 + 48) = v12;
      v19 = XEPALOBJ::ulTime((XEPALOBJ *)&v24);
      *((_DWORD *)v12 + 8) = v19;
      v20 = v12[17];
      if ( (__int64 *)v20 != v12 )
        *(_DWORD *)(v20 + 32) = v19;
      v22 = 0LL;
    }
  }
  PALMEMOBJ::~PALMEMOBJ(&v22, v9, v11);
  return Palette;
}
