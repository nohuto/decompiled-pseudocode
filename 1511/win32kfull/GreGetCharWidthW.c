/*
 * XREFs of GreGetCharWidthW @ 0x1C0141F60
 * Callers:
 *     NtGdiGetCharWidthW @ 0x1C0141DA0 (NtGdiGetCharWidthW.c)
 * Callees:
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEAAXPEAGI@Z @ 0x1C00236A0 (-vFixUpGlyphIndices@RFONTOBJ@@QEAAXPEAGI@Z.c)
 *     ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1C00236C4 (-lOverhang@RFONTOBJ@@QEAAJXZ.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0023760 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0023A60 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0027184 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     bFToL @ 0x1C0116F84 (bFToL.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall GreGetCharWidthW(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int16 *a4,
        char a5,
        __int64 a6)
{
  unsigned int v6; // edi
  unsigned int v7; // r13d
  unsigned __int16 *v8; // rsi
  unsigned int v10; // r15d
  unsigned __int16 *v11; // r14
  int v12; // eax
  struct _FD_XFORM *v13; // rbx
  int v14; // r12d
  float eYY; // xmm6_4
  unsigned int v16; // eax
  __int64 v17; // rcx
  int v18; // ebx
  unsigned __int16 *v19; // r9
  float *v20; // rsi
  GLYPHDEF **p_pgdf; // r11
  __int64 v22; // r14
  GLYPHDEF *v23; // rax
  __int64 v24; // r11
  unsigned int v26; // eax
  _WORD *v27; // rcx
  GLYPHDEF **v28; // rcx
  __int64 v29; // rdx
  GLYPHDEF *v30; // rax
  unsigned __int16 v31[4]; // [rsp+38h] [rbp-D0h] BYREF
  struct _FD_XFORM *v32; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+48h] [rbp-C0h]
  unsigned __int16 *v34; // [rsp+50h] [rbp-B8h]
  __int64 v35; // [rsp+58h] [rbp-B0h]
  unsigned __int16 *v36; // [rsp+60h] [rbp-A8h]
  __int64 v37; // [rsp+68h] [rbp-A0h] BYREF
  struct _GLYPHPOS v38; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v39[64]; // [rsp+378h] [rbp+270h] BYREF

  v6 = 0;
  v7 = a2;
  *(_DWORD *)v31 = a2;
  v36 = a4;
  LODWORD(v33) = a3;
  v8 = a4;
  v35 = a6;
  v34 = 0LL;
  v10 = 0;
  v11 = 0LL;
  DCOBJ::DCOBJ((DCOBJ *)&v37, a1);
  if ( v37 )
  {
    if ( a6 )
    {
      v12 = RFONTOBJ::bInit(&v32, (struct XDCOBJ *)&v37, 0, (a5 & 8) != 0 ? 4 : 2);
      v13 = v32;
      if ( v12 )
        GreAcquireSemaphore(*(_QWORD *)&v32[33].eXX);
      if ( v13 )
      {
        if ( (LODWORD(v13[4].eXY) & 4) != 0 )
        {
          if ( v8 )
          {
            RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v32, v8, a3);
          }
          else
          {
            RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v32, v31, 1u);
            v7 = *(_DWORD *)v31;
          }
        }
        v14 = 0;
        eYY = v13[42].eYY;
        if ( (a5 & 1) != 0 )
          v14 = 16 * RFONTOBJ::lOverhang((RFONTOBJ *)&v32);
        if ( v8 )
        {
          v11 = v8;
          v34 = v8;
        }
        else
        {
          v10 = v7;
        }
        while ( 1 )
        {
          v16 = v33 - 1;
          if ( v8 )
          {
            v17 = v11 - v8;
            if ( (unsigned int)v17 > v16 )
              goto LABEL_24;
            v18 = 32;
            v19 = v11;
            if ( (unsigned int)(v33 - v17) < 0x20 )
              v18 = v33 - v17;
          }
          else
          {
            if ( v10 - v7 > v16 )
            {
LABEL_24:
              v6 = 1;
              goto LABEL_25;
            }
            v18 = 32;
            v26 = v10;
            if ( v7 + (_DWORD)v33 - v10 < 0x20 )
              v18 = v7 + v33 - v10;
            v27 = v39;
            if ( v10 < v18 + v10 )
            {
              do
                *v27++ = v26++;
              while ( v26 < v18 + v10 );
            }
            v19 = (unsigned __int16 *)v39;
          }
          if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(
                                (RFONTOBJ *)&v32,
                                (struct RFONTOBJ *)(unsigned int)v18,
                                &v38,
                                v19,
                                (struct XDCOBJ *)&v37,
                                0LL) )
            goto LABEL_25;
          if ( (a5 & 2) == 0 )
            break;
          if ( v18 > 0 )
          {
            v20 = (float *)v35;
            p_pgdf = &v38.pgdf;
            v22 = (unsigned int)v18;
            do
            {
              v23 = *p_pgdf;
              *(_DWORD *)v31 = 0;
              bFToL((float)(v14 + HIDWORD(v23[1].ppo)) * eYY, v31, 0);
              p_pgdf = (GLYPHDEF **)(v24 + 24);
              *v20++ = *(float *)v31;
              --v22;
            }
            while ( v22 );
LABEL_20:
            v35 = (__int64)v20;
            v8 = v36;
          }
LABEL_21:
          v11 = v34;
          if ( v8 )
          {
            v11 = &v34[(unsigned __int16)v18];
            v34 = v11;
          }
          else
          {
            v10 += v18;
          }
        }
        if ( v18 <= 0 )
          goto LABEL_21;
        v20 = (float *)v35;
        v28 = &v38.pgdf;
        v29 = (unsigned int)v18;
        do
        {
          v30 = *v28;
          v28 += 3;
          *v20++ = (float)((float)SHIDWORD(v30[1].ppo) * 0.0625) * eYY;
          --v29;
        }
        while ( v29 );
        goto LABEL_20;
      }
      EngSetLastError(6u);
LABEL_25:
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v32);
    }
  }
  else
  {
    EngSetLastError(6u);
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)&v37);
  return v6;
}
