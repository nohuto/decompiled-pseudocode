/*
 * XREFs of ?bIFIMetricsToLogFontW2@@YAHAEAVDCOBJ@@PEAUtagENUMLOGFONTEXW@@PEAU_IFIMETRICS@@VEFLOATEXT@@@Z @ 0x1C001D26C
 * Callers:
 *     cjCopyFontDataW @ 0x1C001BCD8 (cjCopyFontDataW.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0019C30 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vIFIMetricsToEnumLogFontW@@YAXPEAUtagENUMLOGFONTW@@PEAU_IFIMETRICS@@@Z @ 0x1C001D6BC (-vIFIMetricsToEnumLogFontW@@YAXPEAUtagENUMLOGFONTW@@PEAU_IFIMETRICS@@@Z.c)
 *     ?pptlBaseline@IFIOBJ@@QEAAPEAU_POINTL@@XZ @ 0x1C001D8CC (-pptlBaseline@IFIOBJ@@QEAAPEAU_POINTL@@XZ.c)
 *     bFToL @ 0x1C0116F84 (bFToL.c)
 */

__int64 __fastcall bIFIMetricsToLogFontW2(struct XDCOBJ *a1, __int64 a2, struct _IFIMETRICS *a3, int a4)
{
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // r11
  __int64 v9; // rcx
  __int64 v10; // r8
  float x; // xmm0_4
  int v13; // r9d
  __int64 v14; // rcx
  int v15; // ecx
  int v16; // r9d
  __int64 v17; // rcx
  int v18; // [rsp+20h] [rbp-50h] BYREF
  float v19[3]; // [rsp+24h] [rbp-4Ch] BYREF
  float v20[2]; // [rsp+30h] [rbp-40h] BYREF
  float v21[2]; // [rsp+38h] [rbp-38h] BYREF
  float v22; // [rsp+40h] [rbp-30h] BYREF
  float v23; // [rsp+44h] [rbp-2Ch]
  float v24; // [rsp+48h] [rbp-28h] BYREF
  float v25; // [rsp+4Ch] [rbp-24h]
  _QWORD v26[2]; // [rsp+50h] [rbp-20h] BYREF
  _QWORD v27[2]; // [rsp+60h] [rbp-10h] BYREF
  float v28; // [rsp+A0h] [rbp+30h] BYREF

  LODWORD(v19[1]) = a4;
  v26[0] = a3;
  vIFIMetricsToEnumLogFontW((struct tagENUMLOGFONTW *)a2, a3);
  v7 = 0;
  if ( (*(_DWORD *)(v26[0] + 48LL) & 0x3000010) != 0 )
  {
    v28 = 0.0;
    bFToL(v6, &v28, 0LL);
    *(float *)(a2 + 4) = v28;
    v9 = (unsigned int)(*(__int16 *)(v8 + 60) + *(__int16 *)(v8 + 62));
    v28 = 0.0;
    bFToL(v9, &v28, v10);
    *(float *)a2 = v28;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v27, a1, 0x402u);
  if ( v27[0] )
  {
    if ( (*(_DWORD *)(v27[0] + 32LL) & 2) != 0 )
      return 1;
    IFIOBJ::pptlBaseline((IFIOBJ *)v26);
    x = (float)IFIOBJ::pptlBaseline((IFIOBJ *)v26)->x;
    v23 = (float)v13;
    v22 = x;
    EFLOAT::eqLength(&v28, &v18, &v22);
    v20[0] = v22 / v28;
    v20[1] = v23 / v28;
    if ( (*(_DWORD *)(v27[0] + 32LL) & 2) != 0
      || EXFORMOBJ::bXform((EXFORMOBJ *)v27, (struct VECTORFL *)v20, (struct VECTORFL *)v20, 1uLL) )
    {
      EFLOAT::eqLength(&v28, &v18, v20);
      v18 = 0;
      bFToL(v14, &v18, 0LL);
      *(_DWORD *)(a2 + 4) = v18;
      IFIOBJ::pptlBaseline((IFIOBJ *)v26);
      v15 = -IFIOBJ::pptlBaseline((IFIOBJ *)v26)->y;
      v25 = (float)v16;
      v24 = (float)v15;
      EFLOAT::eqLength(v19, &v18, &v24);
      v21[0] = v24 / v19[0];
      v21[1] = v25 / v19[0];
      if ( (*(_DWORD *)(v27[0] + 32LL) & 2) != 0
        || EXFORMOBJ::bXform((EXFORMOBJ *)v27, (struct VECTORFL *)v21, (struct VECTORFL *)v21, 1uLL) )
      {
        EFLOAT::eqLength(v19, &v18, v21);
        v28 = 0.0;
        bFToL(v17, &v28, 0LL);
        *(float *)a2 = v28;
        return 1;
      }
    }
  }
  return v7;
}
