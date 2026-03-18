/*
 * XREFs of ?bIFIMetricsToLogFontW2@@YAHAEAVDCOBJ@@PEAUtagENUMLOGFONTEXW@@PEAU_IFIMETRICS@@VEFLOATEXT@@@Z @ 0x1C00234C8
 * Callers:
 *     cjCopyFontDataW @ 0x1C0028D7C (cjCopyFontDataW.c)
 * Callees:
 *     bFToL @ 0x1C0018BF4 (bFToL.c)
 *     ?vIFIMetricsToEnumLogFontW@@YAXPEAUtagENUMLOGFONTW@@PEAU_IFIMETRICS@@@Z @ 0x1C0023914 (-vIFIMetricsToEnumLogFontW@@YAXPEAUtagENUMLOGFONTW@@PEAU_IFIMETRICS@@@Z.c)
 *     ?pptlBaseline@IFIOBJ@@QEAAPEAU_POINTL@@XZ @ 0x1C00266B4 (-pptlBaseline@IFIOBJ@@QEAAPEAU_POINTL@@XZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0039508 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 */

__int64 __fastcall bIFIMetricsToLogFontW2(struct XDCOBJ *a1, __int64 a2, struct _IFIMETRICS *a3, int a4)
{
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // r11
  int v9; // ecx
  char v10; // r8
  float x; // xmm0_4
  int v13; // r9d
  float v14; // xmm0_4
  int v15; // ecx
  int v16; // r9d
  float v17; // xmm0_4
  int v18; // [rsp+20h] [rbp-50h] BYREF
  float v19; // [rsp+24h] [rbp-4Ch] BYREF
  float v20; // [rsp+28h] [rbp-48h]
  float v21; // [rsp+30h] [rbp-40h] BYREF
  float v22; // [rsp+34h] [rbp-3Ch]
  float v23[2]; // [rsp+38h] [rbp-38h] BYREF
  float v24; // [rsp+40h] [rbp-30h] BYREF
  float v25; // [rsp+44h] [rbp-2Ch]
  float v26[2]; // [rsp+48h] [rbp-28h] BYREF
  _QWORD v27[2]; // [rsp+50h] [rbp-20h] BYREF
  _QWORD v28[2]; // [rsp+60h] [rbp-10h] BYREF
  float v29; // [rsp+A0h] [rbp+30h] BYREF

  v20 = *(float *)&a4;
  v27[0] = a3;
  vIFIMetricsToEnumLogFontW((struct tagENUMLOGFONTW *)a2, a3);
  v6 = 0;
  if ( (*(_DWORD *)(v27[0] + 48LL) & 0x3000010) != 0 )
  {
    v7 = *(__int16 *)(v27[0] + 76LL);
    v29 = 0.0;
    bFToL((float)v7 * v20, &v29, 0);
    *(float *)(a2 + 4) = v29;
    v9 = *(__int16 *)(v8 + 60) + *(__int16 *)(v8 + 62);
    v29 = 0.0;
    bFToL((float)v9 * v20, &v29, v10);
    *(float *)a2 = v29;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v28, a1, 0x402u);
  if ( v28[0] )
  {
    if ( (*(_DWORD *)(v28[0] + 32LL) & 2) != 0 )
      return 1;
    IFIOBJ::pptlBaseline((IFIOBJ *)v27);
    x = (float)IFIOBJ::pptlBaseline((IFIOBJ *)v27)->x;
    v22 = (float)v13;
    v21 = x;
    EFLOAT::eqLength(&v29, &v18, &v21);
    v23[0] = v21 / v29;
    v23[1] = v22 / v29;
    if ( (*(_DWORD *)(v28[0] + 32LL) & 2) != 0
      || EXFORMOBJ::bXform((EXFORMOBJ *)v28, (struct VECTORFL *)v23, (struct VECTORFL *)v23, 1uLL) )
    {
      EFLOAT::eqLength(&v29, &v18, v23);
      v14 = (float)*(int *)(a2 + 4);
      v18 = 0;
      bFToL(v14 * v29, &v18, 0);
      *(_DWORD *)(a2 + 4) = v18;
      IFIOBJ::pptlBaseline((IFIOBJ *)v27);
      v15 = -IFIOBJ::pptlBaseline((IFIOBJ *)v27)->y;
      v25 = (float)v16;
      v24 = (float)v15;
      EFLOAT::eqLength(&v19, &v18, &v24);
      v26[0] = v24 / v19;
      v26[1] = v25 / v19;
      if ( (*(_DWORD *)(v28[0] + 32LL) & 2) != 0
        || EXFORMOBJ::bXform((EXFORMOBJ *)v28, (struct VECTORFL *)v26, (struct VECTORFL *)v26, 1uLL) )
      {
        EFLOAT::eqLength(&v19, &v18, v26);
        v17 = (float)*(int *)a2;
        v29 = 0.0;
        bFToL(v17 * v19, &v29, 0);
        *(float *)a2 = v29;
        return 1;
      }
    }
  }
  return v6;
}
