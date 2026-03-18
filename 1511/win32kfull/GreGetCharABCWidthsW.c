/*
 * XREFs of GreGetCharABCWidthsW @ 0x1C00E18E0
 * Callers:
 *     NtGdiGetCharABCWidthsW @ 0x1C00E1790 (NtGdiGetCharABCWidthsW.c)
 * Callees:
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEAAXPEAGI@Z @ 0x1C00236A0 (-vFixUpGlyphIndices@RFONTOBJ@@QEAAXPEAGI@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0023760 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0023A60 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0027184 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     bFToL @ 0x1C0116F84 (bFToL.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
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
  __int64 v19; // rcx
  struct _GLYPHPOS *v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // eax
  struct _GLYPHPOS *v27; // r8
  float *v28; // r9
  GLYPHDEF *pgdf; // rdx
  unsigned __int16 v30[4]; // [rsp+38h] [rbp-D0h] BYREF
  struct _FD_XFORM *v31; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v32; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v33; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+58h] [rbp-B0h]
  __int64 v35; // [rsp+60h] [rbp-A8h]
  __int64 v36; // [rsp+68h] [rbp-A0h] BYREF
  struct _GLYPHPOS v37[32]; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int16 v38[32]; // [rsp+378h] [rbp+270h] BYREF

  v6 = a2;
  *(_DWORD *)v30 = a2;
  v33 = a6;
  v35 = a6;
  DCOBJ::DCOBJ((DCOBJ *)&v36, a1);
  v9 = 0;
  if ( v36 )
  {
    if ( a3 )
    {
      v10 = RFONTOBJ::bInit(&v31, (struct XDCOBJ *)&v36, 0, (a5 & 2) != 0 ? 4 : 2);
      v11 = v31;
      if ( v10 )
        GreAcquireSemaphore(*(_QWORD *)&v31[33].eXX);
      if ( v11 )
      {
        if ( (LODWORD(v11[4].eXY) & 4) != 0 )
        {
          if ( a4 )
          {
            RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v31, a4, a3);
          }
          else
          {
            RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v31, v30, 1u);
            v6 = *(_DWORD *)v30;
          }
        }
        eYY = v11[42].eYY;
        if ( (a5 & 3) != 1 || *(_QWORD *)(*(_QWORD *)&v11[5].eXX + 3112LL) )
        {
          while ( 1 )
          {
            v13 = v37;
            v14 = a3;
            if ( a3 > 0x20 )
              v14 = 32LL;
            LODWORD(v34) = v14;
            if ( a4 )
            {
              v18 = a4;
              a4 += v14;
            }
            else
            {
              v15 = 0LL;
              v16 = v38;
              v17 = (unsigned __int64)(2 * v14 + 1) >> 1;
              if ( v38 > &v38[v14] )
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
              v18 = v38;
            }
            if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(
                                  (RFONTOBJ *)&v31,
                                  (struct RFONTOBJ *)(unsigned int)v14,
                                  v37,
                                  v18,
                                  (struct XDCOBJ *)&v36,
                                  0LL) )
              break;
            if ( (a5 & 1) != 0 )
            {
              v20 = &v37[(unsigned int)v14];
              if ( v37 < v20 )
              {
                v14 = v33;
                do
                {
                  LODWORD(v32) = 0;
                  bFToL(v19, &v32, 0LL);
                  *(_DWORD *)v30 = 0;
                  bFToL(v21, v30, v22);
                  LODWORD(v33) = 0;
                  bFToL(v23, &v33, v24);
                  ++v13;
                  v25 = *(_DWORD *)v30 - v32;
                  *(_DWORD *)v14 = v32;
                  *(_DWORD *)(v14 + 4) = v25;
                  *(_DWORD *)(v14 + 8) = v33 - *(_DWORD *)v30;
                  v14 += 12LL;
                }
                while ( v13 < v20 );
                v33 = v14;
                LODWORD(v14) = v34;
              }
            }
            else
            {
              v27 = &v37[(unsigned int)v14];
              if ( v37 < v27 )
              {
                v28 = (float *)v35;
                do
                {
                  pgdf = v13->pgdf;
                  ++v13;
                  *v28 = (float)SLODWORD(pgdf[2].pgb) * eYY;
                  v28[1] = (float)(HIDWORD(pgdf[2].ppo) - LODWORD(pgdf[2].pgb)) * eYY;
                  v28[2] = (float)(HIDWORD(pgdf[1].ppo) - HIDWORD(pgdf[2].ppo)) * eYY;
                  v28 += 3;
                }
                while ( v13 < v27 );
                v35 = (__int64)v28;
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
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v31);
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
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)&v36);
  return v9;
}
