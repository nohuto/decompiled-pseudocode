/*
 * XREFs of GreGetKerningPairs @ 0x1C027FC74
 * Callers:
 *     GreGetCharacterPlacementW @ 0x1C02921F0 (GreGetCharacterPlacementW.c)
 *     NtGdiGetKerningPairs @ 0x1C02A7320 (NtGdiGetKerningPairs.c)
 * Callees:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002B2F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002F3C8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     bFToL @ 0x1C00A95A4 (bFToL.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C012610C (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bGetNtoWScale@@YAHPEAVEFLOAT@@AEAVDCOBJ@@AEAVRFONTOBJ@@AEAVPFEOBJ@@@Z @ 0x1C027F940 (-bGetNtoWScale@@YAHPEAVEFLOAT@@AEAVDCOBJ@@AEAVRFONTOBJ@@AEAVPFEOBJ@@@Z.c)
 *     ?cKernPairs@PFEOBJ@@QEAAKPEAPEAU_FD_KERNINGPAIR@@@Z @ 0x1C02B9C40 (-cKernPairs@PFEOBJ@@QEAAKPEAPEAU_FD_KERNINGPAIR@@@Z.c)
 */

__int64 __fastcall GreGetKerningPairs(HDC a1, unsigned int a2, unsigned __int64 a3)
{
  char v6; // r14
  float *v7; // rbx
  _QWORD *v8; // rbx
  __int64 v9; // r15
  unsigned __int64 v10; // r11
  struct _FD_KERNINGPAIR *v11; // rcx
  int fwdKern; // eax
  float *v13; // [rsp+20h] [rbp-78h] BYREF
  struct _FD_KERNINGPAIR *v14; // [rsp+28h] [rbp-70h] BYREF
  _QWORD v15[2]; // [rsp+30h] [rbp-68h] BYREF
  float v16; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v17[7]; // [rsp+48h] [rbp-50h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v17, a1);
  if ( !v17[0] )
    goto LABEL_2;
  v6 = 0;
  if ( (unsigned int)RFONTOBJ::bInit((struct _FD_XFORM **)&v13, (struct XDCOBJ *)v17, 0, 2u) )
    GreAcquireSemaphore(*((_QWORD *)v13 + 66));
  if ( !v13
    || (v7 = v13,
        v15[0] = *((_QWORD *)v13 + 14),
        !(unsigned int)bGetNtoWScale((struct EFLOAT *)&v16, (struct DCOBJ *)v17, &v13, (struct PFEOBJ *)v15)) )
  {
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v13);
LABEL_2:
    DCOBJ::~DCOBJ((DCOBJ *)v17);
    return 0LL;
  }
  v8 = (_QWORD *)*((_QWORD *)v7 + 14);
  v9 = *((_QWORD *)v13 + 15);
  if ( (*(_DWORD *)(*(_QWORD *)(v9 + 88) + 56LL) & 0x8000) != 0 )
  {
    v15[0] = ghsemPublicPFT;
    GreAcquireSemaphore(ghsemPublicPFT);
    v6 = 1;
    ++*(_DWORD *)(v9 + 68);
    SEMOBJ::vUnlock((SEMOBJ *)v15);
  }
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v13);
  v15[0] = v8;
  if ( a2 && a3 )
  {
    if ( PFEOBJ::cKernPairs((PFEOBJ *)v15, &v14) < a2 )
      a2 = PFEOBJ::cKernPairs((PFEOBJ *)v15, &v14);
    v10 = a3 + 8LL * a2;
    while ( a3 < v10 )
    {
      v11 = v14;
      *(_WORD *)a3 = v14->wcFirst;
      *(_WORD *)(a3 + 2) = v11->wcSecond;
      fwdKern = v11->fwdKern;
      LODWORD(v13) = 0;
      bFToL((float)fwdKern * v16, &v13, 0);
      *(_DWORD *)(a3 + 4) = (_DWORD)v13;
      ++v14;
      a3 += 8LL;
      v17[6] = a3;
    }
  }
  else
  {
    a2 = *(_DWORD *)(v8[4] + 164LL);
  }
  if ( v6 )
  {
    v15[0] = *v8;
    PFFOBJ::vDeleteRFONTRef((PFFOBJ *)v15);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v17);
  return a2;
}
