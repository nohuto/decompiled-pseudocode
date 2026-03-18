/*
 * XREFs of ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1C002E74C
 * Callers:
 *     ?bIFIMetricsToTextMetricWStrict@@YAHAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS@@@Z @ 0x1C0012348 (-bIFIMetricsToTextMetricWStrict@@YAHAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS.c)
 *     ?bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z @ 0x1C002DA64 (-bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z.c)
 *     ?bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z @ 0x1C002DE58 (-bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z.c)
 *     GreGetCharWidthW @ 0x1C014CB8C (GreGetCharWidthW.c)
 * Callees:
 *     bFToL @ 0x1C0018BF4 (bFToL.c)
 *     ?pptlBaseline@IFIOBJ@@QEAAPEAU_POINTL@@XZ @ 0x1C00266B4 (-pptlBaseline@IFIOBJ@@QEAAPEAU_POINTL@@XZ.c)
 *     ?vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x1C002D608 (-vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 *     ??0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z @ 0x1C00394A4 (--0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall RFONTOBJ::lOverhang(RFONTOBJ *this)
{
  __int64 v1; // rdx
  unsigned int v2; // ebx
  unsigned int v4; // edi
  int v5; // r9d
  __int64 v6; // r8
  __int64 v8; // rax
  int v9; // edx
  int v10; // [rsp+28h] [rbp-29h] BYREF
  float v11[2]; // [rsp+30h] [rbp-21h] BYREF
  float v12; // [rsp+38h] [rbp-19h] BYREF
  _QWORD v13[2]; // [rsp+40h] [rbp-11h] BYREF
  __int64 v14; // [rsp+50h] [rbp-1h] BYREF
  _BYTE v15[40]; // [rsp+60h] [rbp+Fh] BYREF

  v1 = *(_QWORD *)this;
  v2 = 0;
  v4 = 0;
  v5 = *(_DWORD *)(*(_QWORD *)this + 12LL);
  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 32LL);
  if ( (*(_DWORD *)(v6 + 48) & 6) == 0 || *(_DWORD *)(v1 + 88) )
    return v4;
  if ( (v5 & 0x4000) != 0 )
    v4 = (*(_DWORD *)(v1 + 344) - 1) / 2;
  if ( (v5 & 0x2000) == 0 )
    return v4;
  v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 32LL);
  if ( (*(_DWORD *)(v6 + 48) & 4) == 0 )
    return ++v4;
  EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v13, (struct MATRIX *)v15, 8u);
  if ( v13[0] )
  {
    RFONTOBJ::vSetNotionalToDevice(this, (struct EXFORMOBJ *)v13);
    v8 = (__int64)*IFIOBJ::pptlBaseline((IFIOBJ *)&v14);
    v11[0] = (float)(int)v8;
    v11[1] = (float)SHIDWORD(v8);
    if ( (*(_DWORD *)(v13[0] + 32LL) & 2) != 0
      || EXFORMOBJ::bXform((EXFORMOBJ *)v13, (struct VECTORFL *)v11, (struct VECTORFL *)v11, 1uLL) )
    {
      EFLOAT::eqLength(&v12, &v10, v11);
      v10 = 0;
      bFToL(v12, &v10, 0);
      v9 = v10;
      if ( !v10 )
        v9 = 1;
      v4 += v9;
      return v4;
    }
    return 1;
  }
  return v2;
}
