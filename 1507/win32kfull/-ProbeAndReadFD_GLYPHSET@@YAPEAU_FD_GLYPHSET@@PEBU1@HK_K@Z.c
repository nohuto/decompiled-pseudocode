/*
 * XREFs of ?ProbeAndReadFD_GLYPHSET@@YAPEAU_FD_GLYPHSET@@PEBU1@HK_K@Z @ 0x1C029C374
 * Callers:
 *     ?UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z @ 0x1C029FC50 (-UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 */

struct _FD_GLYPHSET *__fastcall ProbeAndReadFD_GLYPHSET(WCRUN *Src, int a2, unsigned int a3, __int64 a4)
{
  WCRUN *v6; // rcx
  __int64 phg_high; // r12
  int v8; // r15d
  ULONG phg; // ecx
  unsigned int v10; // r14d
  unsigned int *v11; // rax
  unsigned int *v12; // rbx
  char v13; // si
  ULONG v14; // eax
  unsigned int *v15; // r10
  unsigned int v16; // r8d
  unsigned int v17; // r14d
  _BYTE **v18; // r11
  unsigned int v19; // ecx
  unsigned int v20; // eax
  __int64 v21; // rax
  _BYTE *v22; // rdx
  __int64 v23; // r8
  int v24; // [rsp+28h] [rbp-80h]
  ULONG v25; // [rsp+2Ch] [rbp-7Ch]
  unsigned int v26; // [rsp+30h] [rbp-78h]
  unsigned int *v27; // [rsp+40h] [rbp-68h]

  if ( a3 < 0x10 )
    return 0LL;
  if ( !a2 )
  {
    if ( ((unsigned __int8)Src & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = Src + 1;
    if ( (unsigned __int64)v6 > W32UserProbeAddress || v6 < Src )
      *W32UserProbeAddress = 0;
  }
  phg_high = HIDWORD(Src->phg);
  if ( (unsigned int)phg_high > (a3 - 16) >> 4 )
    return 0LL;
  v8 = 16 * phg_high + 16;
  phg = (ULONG)Src->phg;
  v25 = phg;
  if ( phg > (a3 - v8) >> 2 )
    return 0LL;
  v10 = v8 + 4 * phg;
  if ( v10 > 0x2710000 )
    return 0LL;
  v11 = (unsigned int *)PALLOCMEM2(v10, 1886221639LL, 1);
  v12 = v11;
  if ( !v11 )
    return 0LL;
  v13 = 0;
  v24 = 0;
  memmove(v11, Src, 16 * phg_high + 16);
  *v12 = v10;
  if ( v12[3] == (_DWORD)phg_high )
  {
    v14 = v25;
    if ( v12[2] == v25 )
    {
      v15 = &v12[4 * phg_high + 4];
      v27 = v15;
      v16 = 0;
      v17 = 0;
      v18 = (_BYTE **)W32UserProbeAddress;
      while ( v17 < (unsigned int)phg_high )
      {
        v19 = HIWORD(v12[4 * v17 + 4]);
        if ( v14 - v24 < v19 )
          goto LABEL_36;
        v20 = LOWORD(v12[4 * v17 + 4]);
        if ( v20 < v16 )
          goto LABEL_36;
        v16 = v20 + v19;
        v26 = v20 + v19;
        v24 += v19;
        v21 = *(_QWORD *)&v12[4 * v17 + 6];
        if ( v21 )
        {
          v22 = (_BYTE *)(v21 + a4);
          v23 = 4 * v19;
          if ( v21 + a4 < (unsigned __int64)Src
            || v22 - (_BYTE *)Src > (unsigned __int64)a3
            || (unsigned int)v23 > (unsigned __int64)Src + a3 - (_QWORD)v22 )
          {
            goto LABEL_36;
          }
          if ( !a2 && (_DWORD)v23 )
          {
            if ( ((unsigned __int8)v22 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( &v22[v23] > *v18 || &v22[v23] < v22 )
              **v18 = 0;
          }
          memmove(v15, v22, (unsigned int)v23);
          *(_QWORD *)&v12[4 * v17 + 6] = v27;
          v15 = &v27[HIWORD(v12[4 * v17 + 4])];
          v27 = v15;
          v16 = v26;
          v18 = (_BYTE **)W32UserProbeAddress;
        }
        ++v17;
        v14 = v25;
      }
      v13 = 1;
    }
  }
LABEL_36:
  if ( !v13 )
  {
    Win32FreePool(v12);
    return 0LL;
  }
  return (struct _FD_GLYPHSET *)v12;
}
