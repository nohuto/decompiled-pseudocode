/*
 * XREFs of GreGetCharABCWidthsW @ 0x1C00DE180
 * Callers:
 *     NtGdiGetCharABCWidthsW @ 0x1C00DE030 (NtGdiGetCharABCWidthsW.c)
 * Callees:
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEAAXPEAGI@Z @ 0x1C002AF34 (-vFixUpGlyphIndices@RFONTOBJ@@QEAAXPEAGI@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C002AF58 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002B2F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002F3C8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     bFToL @ 0x1C00A95A4 (bFToL.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetCharABCWidthsW(HDC a1, int a2, unsigned int a3, unsigned __int16 *a4, char a5, __int64 a6)
{
  int v6; // r12d
  unsigned int v9; // edi
  int v10; // eax
  struct _FD_XFORM *v11; // rbx
  float eYY; // xmm6_4
  struct _GLYPHPOS *v13; // r13
  __int64 v14; // r15
  unsigned __int64 v15; // r8
  unsigned __int16 *v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int16 *v18; // r9
  struct _GLYPHPOS *v19; // rbx
  GLYPHDEF *pgdf; // r11
  __int64 v21; // r11
  float v22; // xmm0_4
  char v23; // r8
  __int64 v24; // r11
  float v25; // xmm0_4
  char v26; // r8
  int v27; // eax
  struct _GLYPHPOS *v29; // r8
  float *v30; // r9
  GLYPHDEF *v31; // rdx
  unsigned __int16 v32[4]; // [rsp+38h] [rbp-D0h] BYREF
  struct _FD_XFORM *v33; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v35; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+58h] [rbp-B0h]
  __int64 v37; // [rsp+60h] [rbp-A8h]
  _QWORD v38[6]; // [rsp+68h] [rbp-A0h] BYREF
  struct _GLYPHPOS v39[32]; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int16 v40[32]; // [rsp+398h] [rbp+290h] BYREF

  v6 = a2;
  *(_DWORD *)v32 = a2;
  v35 = a6;
  v37 = a6;
  DCOBJ::DCOBJ((DCOBJ *)v38, a1);
  v9 = 0;
  if ( v38[0] )
  {
    if ( a3 )
    {
      v10 = RFONTOBJ::bInit(&v33, (struct XDCOBJ *)v38, 0, (a5 & 2) != 0 ? 4 : 2);
      v11 = v33;
      if ( v10 )
        GreAcquireSemaphore(*(_QWORD *)&v33[33].eXX);
      if ( v11 )
      {
        if ( (LODWORD(v11[4].eXY) & 4) != 0 )
        {
          if ( a4 )
          {
            RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v33, a4, a3);
          }
          else
          {
            RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v33, v32, 1u);
            v6 = *(_DWORD *)v32;
          }
        }
        eYY = v11[42].eYY;
        if ( (a5 & 3) != 1 || *(_QWORD *)(*(_QWORD *)&v11[5].eXX + 3112LL) )
        {
          while ( 1 )
          {
            v13 = v39;
            v14 = a3;
            if ( a3 > 0x20 )
              v14 = 32LL;
            LODWORD(v36) = v14;
            if ( a4 )
            {
              v18 = a4;
              a4 += v14;
            }
            else
            {
              v15 = 0LL;
              v16 = v40;
              v17 = (unsigned __int64)(2 * v14 + 1) >> 1;
              if ( v40 > &v40[v14] )
                v17 = 0LL;
              if ( v17 )
              {
                do
                {
                  *v16 = v6;
                  ++v15;
                  ++v6;
                  ++v16;
                }
                while ( v15 < v17 );
              }
              v18 = v40;
            }
            if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(
                                  (RFONTOBJ *)&v33,
                                  (struct RFONTOBJ *)(unsigned int)v14,
                                  v39,
                                  v18,
                                  (struct XDCOBJ *)v38,
                                  0LL) )
              break;
            if ( (a5 & 1) != 0 )
            {
              v19 = &v39[(unsigned int)v14];
              if ( v39 < v19 )
              {
                v14 = v35;
                do
                {
                  pgdf = v13->pgdf;
                  LODWORD(v34) = 0;
                  bFToL((float)SLODWORD(pgdf[2].pgb) * eYY, &v34, 0);
                  v22 = (float)*(int *)(v21 + 20);
                  *(_DWORD *)v32 = 0;
                  bFToL(v22 * eYY, v32, v23);
                  v25 = (float)*(int *)(v24 + 12);
                  LODWORD(v35) = 0;
                  bFToL(v25 * eYY, &v35, v26);
                  ++v13;
                  v27 = *(_DWORD *)v32 - v34;
                  *(_DWORD *)v14 = v34;
                  *(_DWORD *)(v14 + 4) = v27;
                  *(_DWORD *)(v14 + 8) = v35 - *(_DWORD *)v32;
                  v14 += 12LL;
                }
                while ( v13 < v19 );
                v35 = v14;
                LODWORD(v14) = v36;
              }
            }
            else
            {
              v29 = &v39[(unsigned int)v14];
              if ( v39 < v29 )
              {
                v30 = (float *)v37;
                do
                {
                  v31 = v13->pgdf;
                  ++v13;
                  *v30 = (float)SLODWORD(v31[2].pgb) * eYY;
                  v30[1] = (float)(HIDWORD(v31[2].ppo) - LODWORD(v31[2].pgb)) * eYY;
                  v30[2] = (float)(HIDWORD(v31[1].ppo) - HIDWORD(v31[2].ppo)) * eYY;
                  v30 += 3;
                }
                while ( v13 < v29 );
                v37 = (__int64)v30;
              }
            }
            a3 -= v14;
            if ( !a3 )
            {
              v9 = 1;
              break;
            }
          }
        }
      }
      else
      {
        EngSetLastError(6u);
      }
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v33);
    }
    else
    {
      v9 = 1;
    }
  }
  else
  {
    EngSetLastError(6u);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v38);
  return v9;
}
