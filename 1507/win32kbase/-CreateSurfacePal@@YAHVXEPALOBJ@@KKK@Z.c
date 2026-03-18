/*
 * XREFs of ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1C00BFCCC
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00349B0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 * Callees:
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C000C0A0 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C00A3FC8 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z @ 0x1C00B1320 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z.c)
 */

__int64 __fastcall CreateSurfacePal(__int64 a1, int a2, unsigned int a3, unsigned int a4)
{
  unsigned int *v5; // r9
  unsigned int v7; // r8d
  int v8; // edx
  unsigned int Palette; // esi
  unsigned int v10; // edx
  struct HOBJ__ **v11; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  struct HOBJ__ *v15; // rcx
  struct HOBJ__ *v16; // rcx
  unsigned int v17; // eax
  int v18; // eax
  struct HOBJ__ *v19; // rcx
  struct HOBJ__ **v21; // [rsp+50h] [rbp-10h] BYREF
  int v22; // [rsp+58h] [rbp-8h]
  __int64 v23; // [rsp+80h] [rbp+20h] BYREF
  int v24; // [rsp+88h] [rbp+28h]

  v24 = a2;
  v23 = a1;
  v5 = *(unsigned int **)(a1 + 128);
  v7 = *(_DWORD *)(a1 + 28);
  v8 = *(_DWORD *)(a1 + 24) & 0x1F;
  v22 = 0;
  v21 = 0LL;
  Palette = PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v21, v8, v7, v5, 0, 0, 0, 0x800u, 1);
  if ( Palette )
  {
    v10 = a3 >> 1;
    if ( a3 >> 1 > a4 || (v11 = v21, a4 > *((_DWORD *)v21 + 7)) )
    {
      Palette = 0;
    }
    else
    {
      Palette = 1;
      *(_DWORD *)(v23 + 24) = *(_DWORD *)(v23 + 24) & 0xFFFFF5FF | 0x800;
      *(_DWORD *)(v23 + 60) = a3;
      *((_DWORD *)v11 + 15) = a3;
      if ( v10 )
      {
        v12 = 0LL;
        v13 = v10;
        v14 = a4 - v10;
        do
        {
          v15 = v11[16];
          v24 = *(_DWORD *)((char *)v15 + v12);
          HIBYTE(v24) = 48;
          *(_DWORD *)((char *)v15 + v12) = v24;
          v12 += 4LL;
          v16 = v11[16];
          v24 = *((_DWORD *)v16 + v14);
          HIBYTE(v24) = 48;
          *((_DWORD *)v16 + v14) = v24;
          v14 = (unsigned int)(v14 + 1);
          --v13;
        }
        while ( v13 );
      }
      v17 = *(_DWORD *)(v23 + 28);
      if ( *((_DWORD *)v11 + 7) < v17 )
        v17 = *((_DWORD *)v11 + 7);
      memmove(*(void **)(v23 + 128), v11[16], 4LL * v17);
      *(_QWORD *)(v23 + 48) = v11;
      v18 = XEPALOBJ::ulTime((XEPALOBJ *)&v23);
      *((_DWORD *)v11 + 8) = v18;
      v19 = v11[17];
      if ( v19 != (struct HOBJ__ *)v11 )
        *((_DWORD *)v19 + 8) = v18;
      v21 = 0LL;
    }
  }
  PALMEMOBJ::~PALMEMOBJ(&v21);
  return Palette;
}
