/*
 * XREFs of ?bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z @ 0x1C0063DF4
 * Callers:
 *     ?bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C0064060 (-bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@.c)
 * Callees:
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C0027D7C (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C0027E40 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     ?cComputeGISET@@YAKPEAGKPEAU_GISET@@K@Z @ 0x1C010664C (-cComputeGISET@@YAKPEAGKPEAU_GISET@@K@Z.c)
 */

__int64 __fastcall bComputeGISET(struct _IFIMETRICS *a1, struct PFE *a2, struct _GISET **a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rcx
  unsigned int v7; // ebp
  struct _FD_GLYPHSET *v8; // rdi
  struct PDEV *v9; // rdx
  int v10; // r14d
  PTRDIFF dpwszFamilyName; // esi
  _DWORD *v12; // rax
  unsigned __int64 v14; // rax
  void *v15; // rax
  void *v16; // rsi
  _WORD *v17; // r9
  __int64 i; // r8
  __int64 v19; // rcx
  HGLYPH *phg; // rdx
  __int64 cGlyphs; // rax
  unsigned __int64 v22; // r11
  unsigned __int64 v23; // r10
  unsigned int v24; // r15d
  struct _GISET *v25; // rax
  __int64 v26; // rdx
  struct _GISET *v27; // r14
  struct _FD_GLYPHSET *v28; // rax
  WCHAR wcLow; // ax
  unsigned __int16 v30; // cx
  __int64 *v31; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  v31 = (__int64 *)a2;
  *a3 = 0LL;
  v5 = *(_QWORD *)a2;
  v7 = 1;
  v8 = 0LL;
  v9 = *(struct PDEV **)(*(_QWORD *)a2 + 88LL);
  if ( v9 == gppdevTrueType || v9 == (struct PDEV *)qword_1C0334780 && !*(_DWORD *)(*(_QWORD *)(v5 + 80) + 8LL) )
  {
    v10 = 1;
  }
  else
  {
    v10 = 0;
    v28 = PFEOBJ::pfdg(&v31);
    v8 = v28;
    if ( !v28 )
      return v3;
    if ( (v28->flAccel & 6) == 0 )
      goto LABEL_25;
  }
  dpwszFamilyName = 0;
  if ( a1->cjIfiExtra > 8 )
    dpwszFamilyName = a1[1].dpwszFamilyName;
  if ( !v10 )
  {
    if ( !dpwszFamilyName )
    {
      v14 = 2LL * v8->cGlyphsSupported;
      if ( v14 <= 0xFFFFFFFF )
      {
        v15 = PALLOCMEM2((unsigned int)v14, 1936484167LL, 1);
        v16 = v15;
        if ( v15 )
        {
          v17 = v15;
          for ( i = 0LL; (unsigned int)i < v8->cRuns; i = (unsigned int)(i + 1) )
          {
            v19 = (unsigned int)i;
            phg = v8->awcrun[v19].phg;
            if ( phg )
            {
              cGlyphs = v8->awcrun[v19].cGlyphs;
              v22 = 0LL;
              v23 = (unsigned __int64)(4 * cGlyphs + 3) >> 2;
              if ( phg > &phg[cGlyphs] )
                v23 = 0LL;
              if ( v23 )
              {
                do
                {
                  ++v22;
                  *v17++ = *(_WORD *)phg++;
                }
                while ( v22 < v23 );
              }
            }
            else
            {
              v26 = v8->awcrun[v19].cGlyphs;
              if ( !(_WORD)v26 )
                goto LABEL_30;
              wcLow = v8->awcrun[v19].wcLow;
              v30 = v26 - 1 + wcLow;
              while ( wcLow <= v30 )
                *v17 = wcLow++;
            }
          }
          qsort(v16, v8->cGlyphsSupported, 2uLL, CompareRoutine);
          v24 = cComputeGISET((unsigned __int16 *)v16, v8->cGlyphsSupported, 0LL, 0);
          v25 = (struct _GISET *)PALLOCMEM2(4 * v24 + 8, 1936484167LL, 1);
          v27 = v25;
          if ( v25 )
          {
            cComputeGISET((unsigned __int16 *)v16, v8->cGlyphsSupported, v25, v24);
            *a3 = v27;
          }
          else
          {
LABEL_30:
            v7 = 0;
          }
          Win32FreePool(v16, v26, i);
          goto LABEL_25;
        }
      }
      goto LABEL_38;
    }
LABEL_7:
    v12 = PALLOCMEM2(0xCuLL, 1936484167LL, 1);
    if ( v12 )
    {
      *v12 = dpwszFamilyName;
      v12[1] = 1;
      *((_WORD *)v12 + 4) = 0;
      *((_WORD *)v12 + 5) = dpwszFamilyName;
      *a3 = (struct _GISET *)v12;
      goto LABEL_9;
    }
LABEL_38:
    v7 = 0;
LABEL_9:
    if ( v10 )
      return v7;
LABEL_25:
    PFEOBJ::vFreepfdg(&v31);
    return v7;
  }
  if ( dpwszFamilyName )
    goto LABEL_7;
  return v3;
}
