/*
 * XREFs of GreGetCharWidthW @ 0x1C014CB8C
 * Callers:
 *     NtGdiGetCharWidthW @ 0x1C014C9E0 (NtGdiGetCharWidthW.c)
 * Callees:
 *     bFToL @ 0x1C0018BF4 (bFToL.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002D6C4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEAAXPEAGI@Z @ 0x1C002E5E8 (-vFixUpGlyphIndices@RFONTOBJ@@QEAAXPEAGI@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C002E60C (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1C002E74C (-lOverhang@RFONTOBJ@@QEAAJXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002EAC0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
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
  int v17; // ebx
  unsigned int v18; // eax
  _WORD *v19; // rcx
  unsigned __int16 *v20; // r9
  __int64 v21; // rcx
  float *v22; // rsi
  GLYPHDEF **p_pgdf; // r11
  __int64 v24; // r14
  GLYPHDEF *v25; // rax
  __int64 v26; // r11
  GLYPHDEF **v27; // rcx
  __int64 v28; // rdx
  GLYPHDEF *v29; // rax
  unsigned __int16 v31[4]; // [rsp+38h] [rbp-D0h] BYREF
  struct _FD_XFORM *v32; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+48h] [rbp-C0h]
  __int64 v34; // [rsp+50h] [rbp-B8h]
  unsigned __int16 *v35; // [rsp+58h] [rbp-B0h]
  unsigned __int16 *v36; // [rsp+60h] [rbp-A8h]
  __int64 v37; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v38; // [rsp+78h] [rbp-90h] BYREF
  struct _GLYPHPOS v39; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v40[64]; // [rsp+398h] [rbp+290h] BYREF

  v6 = 0;
  v7 = a2;
  *(_DWORD *)v31 = a2;
  v36 = a4;
  LODWORD(v33) = a3;
  v8 = a4;
  v34 = a6;
  v35 = 0LL;
  v10 = 0;
  v11 = 0LL;
  DCOBJ::DCOBJ((DCOBJ *)&v37, a1);
  if ( !v37 )
  {
    EngSetLastError(6u);
    goto LABEL_42;
  }
  if ( !a6 )
    goto LABEL_42;
  v12 = RFONTOBJ::bInit(&v32, (struct XDCOBJ *)&v37, 0, (a5 & 8) != 0 ? 4 : 2);
  v13 = v32;
  if ( v12 )
    GreAcquireSemaphore(*(_QWORD *)&v32[33].eXX);
  if ( !v13 )
  {
    EngSetLastError(6u);
    goto LABEL_41;
  }
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
    v35 = v8;
  }
  else
  {
    v10 = v7;
  }
  while ( 1 )
  {
    v16 = v33 - 1;
    if ( v8 )
      break;
    if ( v10 - v7 > v16 )
      goto LABEL_40;
    v17 = 32;
    v18 = v10;
    if ( v7 + (_DWORD)v33 - v10 < 0x20 )
      v17 = v7 + v33 - v10;
    v19 = v40;
    if ( v10 < v17 + v10 )
    {
      do
        *v19++ = v18++;
      while ( v18 < v17 + v10 );
    }
    v20 = (unsigned __int16 *)v40;
LABEL_27:
    if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(
                          (RFONTOBJ *)&v32,
                          (struct RFONTOBJ *)(unsigned int)v17,
                          &v39,
                          v20,
                          (struct XDCOBJ *)&v37,
                          0LL) )
      goto LABEL_41;
    if ( (a5 & 2) != 0 )
    {
      if ( v17 > 0 )
      {
        v22 = (float *)v34;
        p_pgdf = &v39.pgdf;
        v24 = (unsigned int)v17;
        do
        {
          v25 = *p_pgdf;
          *(_DWORD *)v31 = 0;
          bFToL((float)(v14 + HIDWORD(v25[1].ppo)) * eYY, v31, 0);
          p_pgdf = (GLYPHDEF **)(v26 + 24);
          *v22++ = *(float *)v31;
          --v24;
        }
        while ( v24 );
LABEL_36:
        v34 = (__int64)v22;
        v8 = v36;
      }
    }
    else if ( v17 > 0 )
    {
      v22 = (float *)v34;
      v27 = &v39.pgdf;
      v28 = (unsigned int)v17;
      do
      {
        v29 = *v27;
        v27 += 3;
        *v22++ = (float)((float)SHIDWORD(v29[1].ppo) * 0.0625) * eYY;
        --v28;
      }
      while ( v28 );
      goto LABEL_36;
    }
    v11 = v35;
    if ( v8 )
    {
      v11 = &v35[(unsigned __int16)v17];
      v35 = v11;
    }
    else
    {
      v10 += v17;
    }
  }
  v21 = v11 - v8;
  if ( (unsigned int)v21 <= v16 )
  {
    v17 = 32;
    v20 = v11;
    if ( (unsigned int)(v33 - v21) < 0x20 )
      v17 = v33 - v21;
    goto LABEL_27;
  }
LABEL_40:
  v6 = 1;
LABEL_41:
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v32);
LABEL_42:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)&v37);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(&v38);
  return v6;
}
