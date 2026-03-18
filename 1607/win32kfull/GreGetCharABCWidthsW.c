/*
 * XREFs of GreGetCharABCWidthsW @ 0x1C00FFB50
 * Callers:
 *     NtGdiGetCharABCWidthsW @ 0x1C00FFA00 (NtGdiGetCharABCWidthsW.c)
 * Callees:
 *     bFToL @ 0x1C0018BF4 (bFToL.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002D6C4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEAAXPEAGI@Z @ 0x1C002E5E8 (-vFixUpGlyphIndices@RFONTOBJ@@QEAAXPEAGI@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C002E60C (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002EAC0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
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
  unsigned __int16 *v15; // r9
  unsigned __int64 v16; // r8
  unsigned __int16 *v17; // rdx
  unsigned __int64 v18; // rcx
  struct _GLYPHPOS *v19; // rbx
  GLYPHDEF *pgdf; // r11
  __int64 v21; // r11
  float v22; // xmm0_4
  char v23; // r8
  __int64 v24; // r11
  float v25; // xmm0_4
  char v26; // r8
  int v27; // eax
  struct _GLYPHPOS *v28; // r8
  float *v29; // r9
  GLYPHDEF *v30; // rdx
  unsigned __int16 v32[4]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v33; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+48h] [rbp-C0h] BYREF
  struct _FD_XFORM *v35; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+58h] [rbp-B0h]
  __int64 v37; // [rsp+60h] [rbp-A8h]
  __int64 v38; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v39; // [rsp+78h] [rbp-90h] BYREF
  struct _GLYPHPOS v40[32]; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int16 v41[32]; // [rsp+398h] [rbp+290h] BYREF

  v6 = a2;
  *(_DWORD *)v32 = a2;
  v34 = a6;
  v37 = a6;
  DCOBJ::DCOBJ((DCOBJ *)&v38, a1);
  v9 = 0;
  if ( v38 )
  {
    if ( a3 )
    {
      v10 = RFONTOBJ::bInit(&v35, (struct XDCOBJ *)&v38, 0, (a5 & 2) != 0 ? 4 : 2);
      v11 = v35;
      if ( v10 )
        GreAcquireSemaphore(*(_QWORD *)&v35[33].eXX);
      if ( v11 )
      {
        if ( (LODWORD(v11[4].eXY) & 4) != 0 )
        {
          if ( a4 )
          {
            RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v35, a4, a3);
          }
          else
          {
            RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v35, v32, 1u);
            v6 = *(_DWORD *)v32;
          }
        }
        eYY = v11[42].eYY;
        if ( (a5 & 3) != 1 || *(_QWORD *)(*(_QWORD *)&v11[5].eXX + 3104LL) )
        {
          while ( 1 )
          {
            v13 = v40;
            v14 = a3;
            if ( a3 > 0x20 )
              v14 = 32LL;
            LODWORD(v36) = v14;
            if ( a4 )
            {
              v15 = a4;
              a4 += v14;
            }
            else
            {
              v16 = 0LL;
              v17 = v41;
              v18 = (unsigned __int64)(2 * v14 + 1) >> 1;
              if ( v41 > &v41[v14] )
                v18 = 0LL;
              if ( v18 )
              {
                do
                {
                  *v17 = v6;
                  ++v16;
                  ++v6;
                  ++v17;
                }
                while ( v16 < v18 );
              }
              v15 = v41;
            }
            if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(
                                  (RFONTOBJ *)&v35,
                                  (struct RFONTOBJ *)(unsigned int)v14,
                                  v40,
                                  v15,
                                  (struct XDCOBJ *)&v38,
                                  0LL) )
              break;
            if ( (a5 & 1) != 0 )
            {
              v19 = &v40[(unsigned int)v14];
              if ( v40 < v19 )
              {
                v14 = v34;
                do
                {
                  pgdf = v13->pgdf;
                  LODWORD(v33) = 0;
                  bFToL((float)SLODWORD(pgdf[2].pgb) * eYY, &v33, 0);
                  v22 = (float)*(int *)(v21 + 20);
                  *(_DWORD *)v32 = 0;
                  bFToL(v22 * eYY, v32, v23);
                  v25 = (float)*(int *)(v24 + 12);
                  LODWORD(v34) = 0;
                  bFToL(v25 * eYY, &v34, v26);
                  ++v13;
                  v27 = *(_DWORD *)v32 - v33;
                  *(_DWORD *)v14 = v33;
                  *(_DWORD *)(v14 + 4) = v27;
                  *(_DWORD *)(v14 + 8) = v34 - *(_DWORD *)v32;
                  v14 += 12LL;
                }
                while ( v13 < v19 );
                v34 = v14;
                LODWORD(v14) = v36;
              }
            }
            else
            {
              v28 = &v40[(unsigned int)v14];
              if ( v40 < v28 )
              {
                v29 = (float *)v37;
                do
                {
                  v30 = v13->pgdf;
                  ++v13;
                  *v29 = (float)SLODWORD(v30[2].pgb) * eYY;
                  v29[1] = (float)(HIDWORD(v30[2].ppo) - LODWORD(v30[2].pgb)) * eYY;
                  v29[2] = (float)(HIDWORD(v30[1].ppo) - HIDWORD(v30[2].ppo)) * eYY;
                  v29 += 3;
                }
                while ( v13 < v28 );
                v37 = (__int64)v29;
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
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v35);
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
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)&v38);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(&v39);
  return v9;
}
