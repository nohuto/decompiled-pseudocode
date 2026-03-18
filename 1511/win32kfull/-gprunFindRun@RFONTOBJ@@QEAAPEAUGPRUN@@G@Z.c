/*
 * XREFs of ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1C00258A0
 * Callers:
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0023760 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C00238E4 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C00270D0 (-pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0028490 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z @ 0x1C00293F0 (-vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z.c)
 *     ?vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@@Z @ 0x1C0029860 (-vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@@Z.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C029A604 (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

struct GPRUN *__fastcall RFONTOBJ::gprunFindRun(RFONTOBJ *this, unsigned __int16 a2)
{
  __int64 v2; // rax
  int v3; // r8d
  _DWORD *v4; // r9
  struct GPRUN *result; // rax
  struct GPRUN *v6; // r8
  _DWORD *v7; // r9
  unsigned int v8; // r10d
  int v9; // ecx
  int v10; // r11d
  __int64 v11; // rdx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // ecx
  int v25; // eax
  int v26; // eax

  v2 = *(_QWORD *)this;
  v3 = *(_DWORD *)(*(_QWORD *)this + 656LL);
  v4 = *(_DWORD **)(*(_QWORD *)this + 480LL);
  if ( v3 )
  {
    v7 = v4 + 4;
    v8 = a2;
    if ( (unsigned int)a2 < *v7 )
    {
      return (struct GPRUN *)v7;
    }
    else
    {
      v9 = *(_DWORD *)(v2 + 664);
      v10 = 0;
      v11 = *(int *)(v2 + 660);
      if ( v9 != 13 )
      {
        switch ( v9 )
        {
          case 1:
            goto LABEL_58;
          case 2:
            goto LABEL_54;
          case 3:
            goto LABEL_50;
          case 4:
            goto LABEL_46;
          case 5:
            goto LABEL_42;
          case 6:
            goto LABEL_38;
          case 7:
            goto LABEL_34;
          case 8:
            goto LABEL_30;
          case 9:
            goto LABEL_26;
          case 10:
            goto LABEL_22;
          case 11:
            goto LABEL_18;
          case 12:
            goto LABEL_14;
          case 14:
            goto LABEL_82;
          case 15:
            goto LABEL_78;
          case 16:
            v24 = 0;
            if ( v8 >= v7[4 * v11] )
              v24 = 0x8000;
            LODWORD(v11) = v24 + v11 - 0x4000;
LABEL_78:
            if ( (int)v11 > v3 || (v25 = 0x4000, v8 < v7[4 * (int)v11]) )
              v25 = 0;
            LODWORD(v11) = v25 + v11 - 0x2000;
LABEL_82:
            if ( (int)v11 > v3 || (v26 = 0x2000, v8 < v7[4 * (int)v11]) )
              v26 = 0;
            LODWORD(v11) = v26 + v11 - 4096;
            break;
          default:
            goto LABEL_62;
        }
      }
      if ( (int)v11 <= v3 && v8 >= v7[4 * (int)v11] )
        v12 = 4096;
      else
        v12 = 0;
      LODWORD(v11) = v12 + v11 - 2048;
LABEL_14:
      if ( (int)v11 <= v3 && v8 >= v7[4 * (int)v11] )
        v13 = 2048;
      else
        v13 = 0;
      LODWORD(v11) = v13 + v11 - 1024;
LABEL_18:
      if ( (int)v11 <= v3 && v8 >= v7[4 * (int)v11] )
        v14 = 1024;
      else
        v14 = 0;
      LODWORD(v11) = v14 + v11 - 512;
LABEL_22:
      if ( (int)v11 <= v3 && v8 >= v7[4 * (int)v11] )
        v15 = 512;
      else
        v15 = 0;
      LODWORD(v11) = v15 + v11 - 256;
LABEL_26:
      if ( (int)v11 <= v3 && v8 >= v7[4 * (int)v11] )
        v16 = 256;
      else
        v16 = 0;
      LODWORD(v11) = v16 + v11 - 128;
LABEL_30:
      if ( (int)v11 <= v3 && v8 >= v7[4 * (int)v11] )
        v17 = 128;
      else
        v17 = 0;
      LODWORD(v11) = v17 + v11 - 64;
LABEL_34:
      if ( (int)v11 <= v3 && v8 >= v7[4 * (int)v11] )
        v18 = 64;
      else
        v18 = 0;
      LODWORD(v11) = v18 + v11 - 32;
LABEL_38:
      if ( (int)v11 <= v3 && v8 >= v7[4 * (int)v11] )
        v19 = 32;
      else
        v19 = 0;
      LODWORD(v11) = v19 + v11 - 16;
LABEL_42:
      if ( (int)v11 <= v3 && v8 >= v7[4 * (int)v11] )
        v20 = 16;
      else
        v20 = 0;
      LODWORD(v11) = v20 + v11 - 8;
LABEL_46:
      if ( (int)v11 <= v3 && v8 >= v7[4 * (int)v11] )
        v21 = 8;
      else
        v21 = 0;
      LODWORD(v11) = v21 + v11 - 4;
LABEL_50:
      if ( (int)v11 > v3 || (v22 = 4, v8 < v7[4 * (int)v11]) )
        v22 = 0;
      LODWORD(v11) = v22 + v11 - 2;
LABEL_54:
      if ( (int)v11 > v3 || v8 < v7[4 * (int)v11] )
        v23 = 0;
      else
        v23 = 2;
      LODWORD(v11) = v23 + v11 - 1;
LABEL_58:
      if ( (int)v11 <= v3 && v8 >= v7[4 * (int)v11] )
        v10 = 1;
      LODWORD(v11) = v10 + v11 - 1;
LABEL_62:
      result = (struct GPRUN *)&v7[4 * (int)v11];
      if ( v8 - *(_DWORD *)result >= *((_DWORD *)result + 1) )
        return (struct GPRUN *)v7;
    }
  }
  else
  {
    result = (struct GPRUN *)(v4 + 4);
    v6 = (struct GPRUN *)&v4[4 * (*v4 - 1) + 4];
    if ( a2 <= (unsigned int)(*(_DWORD *)v6 + *((_DWORD *)v6 + 1) - 1) )
    {
      if ( v4 + 4 > (_DWORD *)v6 )
      {
        return (struct GPRUN *)(v4 + 4);
      }
      else
      {
        while ( (unsigned int)a2 - *(_DWORD *)result >= *((_DWORD *)result + 1) )
        {
          result = (struct GPRUN *)((char *)result + 16);
          if ( result > v6 )
            return (struct GPRUN *)(v4 + 4);
        }
      }
    }
  }
  return result;
}
