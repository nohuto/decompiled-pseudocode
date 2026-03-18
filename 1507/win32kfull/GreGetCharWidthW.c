/*
 * XREFs of GreGetCharWidthW @ 0x1C0116BDC
 * Callers:
 *     NtGdiGetCharWidthW @ 0x1C0116A30 (NtGdiGetCharWidthW.c)
 * Callees:
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEAAXPEAGI@Z @ 0x1C002AF34 (-vFixUpGlyphIndices@RFONTOBJ@@QEAAXPEAGI@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C002AF58 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1C002B0DC (-lOverhang@RFONTOBJ@@QEAAJXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002B2F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002F3C8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     bFToL @ 0x1C00A95A4 (bFToL.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
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
  int v13; // eax
  struct _FD_XFORM *v14; // rbx
  int v15; // r12d
  float eYY; // xmm6_4
  unsigned int v17; // eax
  int v18; // ebx
  unsigned int v19; // eax
  _WORD *v20; // rcx
  unsigned __int16 *v21; // r9
  __int64 v22; // rcx
  float *v23; // rsi
  GLYPHDEF **p_pgdf; // r11
  __int64 v25; // r14
  GLYPHDEF *v26; // rax
  __int64 v27; // r11
  GLYPHDEF **v28; // rcx
  __int64 v29; // rdx
  GLYPHDEF *v30; // rax
  unsigned __int16 v31[4]; // [rsp+38h] [rbp-D0h] BYREF
  struct _FD_XFORM *v32; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+48h] [rbp-C0h]
  unsigned __int16 *v34; // [rsp+50h] [rbp-B8h]
  __int64 v35; // [rsp+58h] [rbp-B0h]
  unsigned __int16 *v36; // [rsp+60h] [rbp-A8h]
  _QWORD v37[6]; // [rsp+68h] [rbp-A0h] BYREF
  struct _GLYPHPOS v38; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v39[64]; // [rsp+398h] [rbp+290h] BYREF

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
  DCOBJ::DCOBJ((DCOBJ *)v37, a1);
  if ( !v37[0] )
  {
    EngSetLastError(6u);
    goto LABEL_5;
  }
  if ( !a6 )
    goto LABEL_5;
  v13 = RFONTOBJ::bInit(&v32, (struct XDCOBJ *)v37, 0, (a5 & 8) != 0 ? 4 : 2);
  v14 = v32;
  if ( v13 )
    GreAcquireSemaphore(*(_QWORD *)&v32[33].eXX);
  if ( v14 )
  {
    if ( (LODWORD(v14[4].eXY) & 4) != 0 )
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
    v15 = 0;
    eYY = v14[42].eYY;
    if ( (a5 & 1) != 0 )
      v15 = 16 * RFONTOBJ::lOverhang((RFONTOBJ *)&v32);
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
      v17 = v33 - 1;
      if ( v8 )
      {
        v22 = v11 - v8;
        if ( (unsigned int)v22 > v17 )
        {
LABEL_3:
          v6 = 1;
          goto LABEL_4;
        }
        v18 = 32;
        v21 = v11;
        if ( (unsigned int)(v33 - v22) < 0x20 )
          v18 = v33 - v22;
      }
      else
      {
        if ( v10 - v7 > v17 )
          goto LABEL_3;
        v18 = 32;
        v19 = v10;
        if ( v7 + (_DWORD)v33 - v10 < 0x20 )
          v18 = v7 + v33 - v10;
        v20 = v39;
        if ( v10 < v18 + v10 )
        {
          do
            *v20++ = v19++;
          while ( v19 < v18 + v10 );
        }
        v21 = (unsigned __int16 *)v39;
      }
      if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(
                            (RFONTOBJ *)&v32,
                            (struct RFONTOBJ *)(unsigned int)v18,
                            &v38,
                            v21,
                            (struct XDCOBJ *)v37,
                            0LL) )
        goto LABEL_4;
      if ( (a5 & 2) == 0 )
        break;
      if ( v18 > 0 )
      {
        v23 = (float *)v35;
        p_pgdf = &v38.pgdf;
        v25 = (unsigned int)v18;
        do
        {
          v26 = *p_pgdf;
          *(_DWORD *)v31 = 0;
          bFToL((float)(v15 + HIDWORD(v26[1].ppo)) * eYY, v31, 0);
          p_pgdf = (GLYPHDEF **)(v27 + 24);
          *v23++ = *(float *)v31;
          --v25;
        }
        while ( v25 );
LABEL_30:
        v35 = (__int64)v23;
        v8 = v36;
      }
LABEL_31:
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
      goto LABEL_31;
    v23 = (float *)v35;
    v28 = &v38.pgdf;
    v29 = (unsigned int)v18;
    do
    {
      v30 = *v28;
      v28 += 3;
      *v23++ = (float)((float)SHIDWORD(v30[1].ppo) * 0.0625) * eYY;
      --v29;
    }
    while ( v29 );
    goto LABEL_30;
  }
  EngSetLastError(6u);
LABEL_4:
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v32);
LABEL_5:
  DCOBJ::~DCOBJ((DCOBJ *)v37);
  return v6;
}
