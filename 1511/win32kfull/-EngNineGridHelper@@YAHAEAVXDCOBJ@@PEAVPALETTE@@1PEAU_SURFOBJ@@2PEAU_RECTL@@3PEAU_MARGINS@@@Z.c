/*
 * XREFs of ?EngNineGridHelper@@YAHAEAVXDCOBJ@@PEAVPALETTE@@1PEAU_SURFOBJ@@2PEAU_RECTL@@3PEAU_MARGINS@@@Z @ 0x1C026AE4C
 * Callers:
 *     ?bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z @ 0x1C026E450 (-bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0043CE0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0043D20 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     EngNineGrid @ 0x1C00C1A30 (EngNineGrid.c)
 */

__int64 __fastcall EngNineGridHelper(
        struct XDCOBJ *a1,
        struct PALETTE *a2,
        struct PALETTE *a3,
        struct _SURFOBJ *a4,
        struct _SURFOBJ *a5,
        struct _RECTL *a6,
        struct _RECTL *a7,
        struct _MARGINS *a8)
{
  unsigned int v8; // edi
  int v10; // r15d
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v19; // [rsp+60h] [rbp-39h] BYREF
  __int64 v20; // [rsp+68h] [rbp-31h] BYREF
  _DWORD v21[6]; // [rsp+70h] [rbp-29h] BYREF
  int v22; // [rsp+88h] [rbp-11h] BYREF
  __int64 v23; // [rsp+90h] [rbp-9h]
  __int64 v24; // [rsp+98h] [rbp-1h]
  __int64 v25; // [rsp+A0h] [rbp+7h]
  __int64 v26; // [rsp+E8h] [rbp+4Fh] BYREF
  __int64 v27; // [rsp+F0h] [rbp+57h] BYREF

  v8 = 0;
  v10 = (int)a4;
  v22 = 33488896;
  v21[1] = *(_DWORD *)a8;
  v21[2] = *((_DWORD *)a8 + 1);
  v21[3] = *((_DWORD *)a8 + 2);
  v21[4] = *((_DWORD *)a8 + 3);
  v12 = *(_QWORD *)a1;
  v20 = 0LL;
  v19 = 0LL;
  v27 = 0LL;
  v13 = *(_QWORD *)(v12 + 80);
  v26 = 0LL;
  v21[0] = 5;
  v21[5] = 0;
  if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                       &v20,
                       0LL,
                       0,
                       (__int64)a2,
                       (__int64)a2,
                       (__int64)a3,
                       (__int64)a3,
                       *(_DWORD *)(v13 + 40),
                       *(_DWORD *)(v13 + 32),
                       0,
                       0) )
  {
    if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                         &v19,
                         0LL,
                         0,
                         (__int64)a2,
                         (__int64)gppalRGB,
                         (__int64)a3,
                         (__int64)a3,
                         0,
                         0,
                         0,
                         0) )
    {
      v23 = v19;
      if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                           &v27,
                           0LL,
                           0,
                           (__int64)a2,
                           (__int64)gppalRGB,
                           (__int64)a3,
                           (__int64)a3,
                           0,
                           0,
                           0,
                           0) )
      {
        v24 = v27;
        if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                             &v26,
                             0LL,
                             0,
                             (__int64)gppalRGB,
                             (__int64)a2,
                             (__int64)a3,
                             (__int64)a3,
                             0,
                             0,
                             0,
                             0) )
        {
          v25 = v26;
          v8 = EngNineGrid(v10, (__int64)a5, 0, v20, (__int64)a6, (__int64)a7, (__int64)v21, &v22);
        }
      }
    }
  }
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v26, v14);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v27, v15);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v19, v16);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v20, v17);
  return v8;
}
