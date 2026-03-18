/*
 * XREFs of ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1C002B1B4
 * Callers:
 *     ?pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C002D554 (-pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C002E60C (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C002E8C8 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z @ 0x1C0032270 (-vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C029A158 (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

struct GPRUN *__fastcall RFONTOBJ::gprunFindRun(RFONTOBJ *this, unsigned __int16 a2)
{
  __int64 v2; // rax
  _DWORD *v3; // r11
  int v4; // r10d
  _DWORD *v5; // r8
  _DWORD *v6; // r9
  _DWORD *v7; // rcx
  struct GPRUN *result; // rax
  unsigned int v9; // r9d
  int v10; // edx
  __int64 v11; // rcx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // edx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  BOOL v28; // eax
  int v29; // edx
  int v30; // edx
  int v31; // edx
  int v32; // edx
  int v33; // edx
  int v34; // edx
  int v35; // edx
  int v36; // edx
  int v37; // edx
  int v38; // eax
  int v39; // eax

  v2 = *(_QWORD *)this;
  v3 = *(_DWORD **)(*(_QWORD *)this + 480LL);
  v4 = *(_DWORD *)(*(_QWORD *)this + 656LL);
  v5 = v3 + 4;
  if ( v4 )
  {
    v9 = a2;
    if ( (unsigned int)a2 < *v5 )
      return (struct GPRUN *)(v3 + 4);
    v10 = *(_DWORD *)(v2 + 664);
    v11 = *(int *)(v2 + 660);
    if ( v10 <= 9 )
    {
      if ( v10 == 9 )
      {
LABEL_30:
        if ( (int)v11 > v4 || v9 < v5[4 * (int)v11] )
          v20 = 0;
        else
          v20 = 256;
        LODWORD(v11) = v20 + v11 - 128;
        goto LABEL_34;
      }
      v29 = v10 - 1;
      if ( !v29 )
      {
LABEL_62:
        v28 = (int)v11 <= v4 && v9 >= v5[4 * (int)v11];
        LODWORD(v11) = v28 + v11 - 1;
        goto LABEL_66;
      }
      v30 = v29 - 1;
      if ( !v30 )
      {
LABEL_58:
        if ( (int)v11 > v4 || v9 < v5[4 * (int)v11] )
          v27 = 0;
        else
          v27 = 2;
        LODWORD(v11) = v27 + v11 - 1;
        goto LABEL_62;
      }
      v31 = v30 - 1;
      if ( !v31 )
      {
LABEL_54:
        if ( (int)v11 <= v4 && v9 >= v5[4 * (int)v11] )
          v26 = 4;
        else
          v26 = 0;
        LODWORD(v11) = v26 + v11 - 2;
        goto LABEL_58;
      }
      v32 = v31 - 1;
      if ( !v32 )
      {
LABEL_50:
        if ( (int)v11 <= v4 && v9 >= v5[4 * (int)v11] )
          v25 = 8;
        else
          v25 = 0;
        LODWORD(v11) = v25 + v11 - 4;
        goto LABEL_54;
      }
      v33 = v32 - 1;
      if ( !v33 )
      {
LABEL_46:
        if ( (int)v11 <= v4 && v9 >= v5[4 * (int)v11] )
          v24 = 16;
        else
          v24 = 0;
        LODWORD(v11) = v24 + v11 - 8;
        goto LABEL_50;
      }
      v34 = v33 - 1;
      if ( !v34 )
      {
LABEL_42:
        if ( (int)v11 <= v4 && v9 >= v5[4 * (int)v11] )
          v23 = 32;
        else
          v23 = 0;
        LODWORD(v11) = v23 + v11 - 16;
        goto LABEL_46;
      }
      v35 = v34 - 1;
      if ( !v35 )
      {
LABEL_38:
        if ( (int)v11 > v4 || v9 < v5[4 * (int)v11] )
          v22 = 0;
        else
          v22 = 64;
        LODWORD(v11) = v22 + v11 - 32;
        goto LABEL_42;
      }
      if ( v35 == 1 )
      {
LABEL_34:
        if ( (int)v11 > v4 || v9 < v5[4 * (int)v11] )
          v21 = 0;
        else
          v21 = 128;
        LODWORD(v11) = v21 + v11 - 64;
        goto LABEL_38;
      }
    }
    else
    {
      v12 = v10 - 10;
      if ( !v12 )
      {
LABEL_26:
        if ( (int)v11 > v4 || v9 < v5[4 * (int)v11] )
          v19 = 0;
        else
          v19 = 512;
        LODWORD(v11) = v19 + v11 - 256;
        goto LABEL_30;
      }
      v13 = v12 - 1;
      if ( !v13 )
      {
LABEL_22:
        if ( (int)v11 > v4 || v9 < v5[4 * (int)v11] )
          v18 = 0;
        else
          v18 = 1024;
        LODWORD(v11) = v18 + v11 - 512;
        goto LABEL_26;
      }
      v14 = v13 - 1;
      if ( !v14 )
      {
LABEL_18:
        if ( (int)v11 > v4 || v9 < v5[4 * (int)v11] )
          v17 = 0;
        else
          v17 = 2048;
        LODWORD(v11) = v17 + v11 - 1024;
        goto LABEL_22;
      }
      v15 = v14 - 1;
      if ( !v15 )
      {
LABEL_14:
        if ( (int)v11 <= v4 && v9 >= v5[4 * (int)v11] )
          v16 = 4096;
        else
          v16 = 0;
        LODWORD(v11) = v16 + v11 - 2048;
        goto LABEL_18;
      }
      v36 = v15 - 1;
      if ( !v36 )
      {
LABEL_99:
        if ( (int)v11 > v4 || v9 < v5[4 * (int)v11] )
          v39 = 0;
        else
          v39 = 0x2000;
        LODWORD(v11) = v39 + v11 - 4096;
        goto LABEL_14;
      }
      v37 = v36 - 1;
      if ( !v37 )
      {
LABEL_94:
        if ( (int)v11 > v4 || v9 < v5[4 * (int)v11] )
          v38 = 0;
        else
          v38 = 0x4000;
        LODWORD(v11) = v38 + v11 - 0x2000;
        goto LABEL_99;
      }
      if ( v37 == 1 )
      {
        LODWORD(v11) = (v9 >= v5[4 * v11] ? 0x8000 : 0) + v11 - 0x4000;
        goto LABEL_94;
      }
    }
LABEL_66:
    result = (struct GPRUN *)&v5[4 * (int)v11];
    if ( v9 - *(_DWORD *)result >= *((_DWORD *)result + 1) )
      return (struct GPRUN *)(v3 + 4);
    return result;
  }
  v6 = &v3[4 * (*v3 - 1) + 4];
  if ( a2 > (unsigned int)(*v6 + v6[1] - 1) )
    return (struct GPRUN *)(v3 + 4);
  v7 = v3 + 4;
  if ( v5 > v6 )
    return (struct GPRUN *)(v3 + 4);
  while ( (unsigned int)a2 - *v7 >= v7[1] )
  {
    v7 += 4;
    if ( v7 > v6 )
      return (struct GPRUN *)(v3 + 4);
  }
  return (struct GPRUN *)v7;
}
