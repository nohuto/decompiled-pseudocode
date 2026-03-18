/*
 * XREFs of GreGetKerningPairs @ 0x1C027F634
 * Callers:
 *     GreGetCharacterPlacementW @ 0x1C0291D38 (GreGetCharacterPlacementW.c)
 *     NtGdiGetKerningPairs @ 0x1C02A6B30 (NtGdiGetKerningPairs.c)
 * Callees:
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C0021FEC (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0023A60 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0027184 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0036AA0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     bFToL @ 0x1C0116F84 (bFToL.c)
 *     ?bGetNtoWScale@@YAHPEAVEFLOAT@@AEAVDCOBJ@@AEAVRFONTOBJ@@AEAVPFEOBJ@@@Z @ 0x1C027F300 (-bGetNtoWScale@@YAHPEAVEFLOAT@@AEAVDCOBJ@@AEAVRFONTOBJ@@AEAVPFEOBJ@@@Z.c)
 *     ?cKernPairs@PFEOBJ@@QEAAKPEAPEAU_FD_KERNINGPAIR@@@Z @ 0x1C02B901C (-cKernPairs@PFEOBJ@@QEAAKPEAPEAU_FD_KERNINGPAIR@@@Z.c)
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
  float *v13; // [rsp+20h] [rbp-58h] BYREF
  float v14; // [rsp+28h] [rbp-50h] BYREF
  struct _FD_KERNINGPAIR *v15; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v16[3]; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v17[2]; // [rsp+50h] [rbp-28h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v17, a1);
  if ( !v17[0] )
    goto LABEL_2;
  v6 = 0;
  if ( (unsigned int)RFONTOBJ::bInit((struct _FD_XFORM **)&v13, (struct XDCOBJ *)v17, 0, 2u) )
    GreAcquireSemaphore(*((_QWORD *)v13 + 66));
  if ( !v13
    || (v7 = v13,
        v16[0] = *((_QWORD *)v13 + 14),
        !(unsigned int)bGetNtoWScale((struct EFLOAT *)&v14, (struct DCOBJ *)v17, &v13, (struct PFEOBJ *)v16)) )
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
    v16[0] = ghsemPublicPFT;
    GreAcquireSemaphore(ghsemPublicPFT);
    v6 = 1;
    ++*(_DWORD *)(v9 + 68);
    SEMOBJ::vUnlock((SEMOBJ *)v16);
  }
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v13);
  v16[0] = v8;
  if ( a2 && a3 )
  {
    if ( PFEOBJ::cKernPairs((PFEOBJ *)v16, &v15) < a2 )
      a2 = PFEOBJ::cKernPairs((PFEOBJ *)v16, &v15);
    v10 = a3 + 8LL * a2;
    while ( a3 < v10 )
    {
      v11 = v15;
      *(_WORD *)a3 = v15->wcFirst;
      *(_WORD *)(a3 + 2) = v11->wcSecond;
      fwdKern = v11->fwdKern;
      LODWORD(v13) = 0;
      bFToL((float)fwdKern * v14, &v13, 0);
      *(_DWORD *)(a3 + 4) = (_DWORD)v13;
      ++v15;
      a3 += 8LL;
      v16[2] = a3;
    }
  }
  else
  {
    a2 = *(_DWORD *)(v8[4] + 164LL);
  }
  if ( v6 )
  {
    v16[0] = *v8;
    PFFOBJ::vDeleteRFONTRef((PFFOBJ *)v16);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v17);
  return a2;
}
