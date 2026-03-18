/*
 * XREFs of NtGdiGetCharacterPlacementW @ 0x14032A5F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x14006FBA8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x140282670 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?GrepGetCharacterPlacementW@@YAKAEAVDCOBJ@@PEAGKKPEAUtagGCP_RESULTSW@@K@Z @ 0x1403339C4 (-GrepGetCharacterPlacementW@@YAKAEAVDCOBJ@@PEAGKKPEAUtagGCP_RESULTSW@@K@Z.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14033A28C (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall NtGdiGetCharacterPlacementW(
        HDC a1,
        const void *a2,
        unsigned int a3,
        signed int a4,
        __m128i *a5,
        unsigned int a6)
{
  int v7; // r12d
  int v8; // ebx
  unsigned int v9; // edi
  struct tagGCP_RESULTSW *v10; // r14
  __int64 v11; // rsi
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int32 v22; // ecx
  __int64 SessionState; // rax
  unsigned int CharacterPlacementW; // eax
  unsigned __int64 nGlyphs; // rdi
  unsigned int v26; // r12d
  unsigned int v27; // r15d
  unsigned int v29; // [rsp+34h] [rbp-174h]
  unsigned int v30; // [rsp+38h] [rbp-170h]
  unsigned int v31; // [rsp+3Ch] [rbp-16Ch]
  unsigned int v32; // [rsp+40h] [rbp-168h]
  unsigned int v33; // [rsp+44h] [rbp-164h]
  unsigned int v34; // [rsp+48h] [rbp-160h]
  unsigned int v35; // [rsp+4Ch] [rbp-15Ch]
  unsigned int v36; // [rsp+50h] [rbp-158h]
  __m128i v37; // [rsp+80h] [rbp-128h] BYREF
  __m128i v38; // [rsp+90h] [rbp-118h]
  __m128i v39; // [rsp+A0h] [rbp-108h]
  __m128i v40; // [rsp+B0h] [rbp-F8h]
  _BYTE v41[64]; // [rsp+C0h] [rbp-E8h] BYREF
  _QWORD v42[21]; // [rsp+100h] [rbp-A8h] BYREF

  v7 = a3;
  v29 = a3;
  v8 = 0;
  v30 = 0;
  v9 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v10 = 0LL;
  v11 = 0LL;
  memset_0(&v37, 0, 0x40uLL);
  if ( v7 < 0 || a4 < -1 || !a2 )
    return 0LL;
  if ( a5 )
  {
    GreProbeForWriteToUntrustedVa(a5, 0x40uLL, 4uLL);
    v37 = *a5;
    v38 = a5[1];
    v39 = a5[2];
    v40 = a5[3];
    v12 = _mm_cvtsi128_si32(_mm_srli_si128(v40, 8));
    if ( v7 > v12 )
      v7 = v12;
    v29 = v7;
  }
  if ( (unsigned int)v7 > 0x9C4000 )
    return 0LL;
  v13 = 2 * v7;
  v14 = 4 * v7;
  if ( a5 )
  {
    v9 = 64;
    if ( v37.m128i_i64[1] )
    {
      v31 = 64;
      v9 = ((v13 + 3) & 0xFFFFFFFC) + 64;
      if ( ((v13 + 3) & 0xFFFFFFFC) >= 0xFFFFFFC0 )
        return 0LL;
      v14 = 4 * v7;
    }
    if ( !v38.m128i_i64[0] || (v32 = v9, v9 += v14, v9 >= v32) )
    {
      if ( !v38.m128i_i64[1] || (v33 = v9, v9 += v14, v9 >= v33) )
      {
        if ( !v39.m128i_i64[0] || (v34 = v9, v9 += v14, v9 >= v34) )
        {
          if ( !v39.m128i_i64[1] || (v35 = v9, v9 += (v7 + 3) & 0xFFFFFFFC, v9 >= v35) )
          {
            if ( !v40.m128i_i64[0] )
              goto LABEL_23;
            v36 = v9;
            v9 += v13;
            if ( v9 >= v36 )
              goto LABEL_23;
          }
        }
      }
    }
    return 0LL;
  }
LABEL_23:
  if ( v9 <= 40960000 - v13 )
  {
    v11 = AllocFreeTmpBuffer(v9 + v13);
    v13 = 2 * v7;
  }
  if ( v11 )
  {
    if ( a5 )
    {
      v10 = (struct tagGCP_RESULTSW *)v11;
      if ( v37.m128i_i64[1] )
        v15 = v11 + v31;
      else
        v15 = 0LL;
      *(_QWORD *)(v11 + 8) = v15;
      if ( v38.m128i_i64[0] )
        v16 = v11 + v32;
      else
        v16 = 0LL;
      *(_QWORD *)(v11 + 16) = v16;
      if ( v38.m128i_i64[1] )
        v17 = v11 + v33;
      else
        v17 = 0LL;
      *(_QWORD *)(v11 + 24) = v17;
      if ( v39.m128i_i64[0] )
        v18 = v11 + v34;
      else
        v18 = 0LL;
      *(_QWORD *)(v11 + 32) = v18;
      if ( v39.m128i_i64[1] )
        v19 = v11 + v35;
      else
        v19 = 0LL;
      *(_QWORD *)(v11 + 40) = v19;
      if ( v40.m128i_i64[0] )
        v20 = v11 + v36;
      else
        v20 = 0LL;
      *(_QWORD *)(v11 + 48) = v20;
      *(_DWORD *)v11 = v9;
      *(_DWORD *)(v11 + 56) = v29;
    }
    GreProbeAndReadFromUntrustedVa((void *)(v11 + v9), v13, a2, v13, 1uLL);
    if ( (a6 & 0x200000) != 0 )
    {
      if ( a5 )
      {
        v22 = v38.m128i_i32[2];
        if ( v38.m128i_i64[1] )
          GreProbeAndReadFromUntrustedVa(
            v10->lpDx,
            (unsigned int)(4 * v7),
            (const void *)v38.m128i_i64[1],
            (unsigned int)(4 * v7),
            1uLL);
      }
    }
    SessionState = W32GetSessionState(v22, v21);
    EUDCCountRegion::EUDCCountRegion(
      (EUDCCountRegion *)v41,
      (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4864LL));
    if ( EUDCCountRegion::IsReady((EUDCCountRegion *)v41) )
    {
      APIDCOBJ::APIDCOBJ((APIDCOBJ *)v42, a1);
      if ( v42[0] )
      {
        CharacterPlacementW = GrepGetCharacterPlacementW(
                                (struct DCOBJ *)v42,
                                (unsigned __int16 *)(v11 + v9),
                                v29,
                                a4,
                                v10,
                                a6);
        v30 = CharacterPlacementW;
      }
      else
      {
        CharacterPlacementW = 0;
      }
      if ( CharacterPlacementW && a5 )
      {
        a5[3].m128i_i32[3] = v10->nMaxFit;
        nGlyphs = (int)v10->nGlyphs;
        a5[3].m128i_i32[2] = nGlyphs;
        v26 = 2 * nGlyphs;
        v27 = 4 * nGlyphs;
        if ( v37.m128i_i64[1] )
          GreProbeAndWriteToUntrustedVa((void *)v37.m128i_i64[1], v26, v10->lpOutString, v26, 1uLL);
        if ( v38.m128i_i64[0] )
          GreProbeAndWriteToUntrustedVa((void *)v38.m128i_i64[0], v27, v10->lpOrder, v27, 1uLL);
        if ( v38.m128i_i64[1] )
          GreProbeAndWriteToUntrustedVa((void *)v38.m128i_i64[1], v27, v10->lpDx, v27, 1uLL);
        if ( v39.m128i_i64[0] )
          GreProbeAndWriteToUntrustedVa((void *)v39.m128i_i64[0], v27, v10->lpCaretPos, v27, 1uLL);
        if ( v39.m128i_i64[1] )
          GreProbeAndWriteToUntrustedVa((void *)v39.m128i_i64[1], nGlyphs, v10->lpClass, nGlyphs, 1uLL);
        if ( v40.m128i_i64[0] )
          GreProbeAndWriteToUntrustedVa((void *)v40.m128i_i64[0], v26, v10->lpGlyphs, v26, 1uLL);
        v8 = 1;
      }
      else
      {
        v8 = 1;
      }
      APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v42);
    }
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v41);
    FreeTmpBuffer(v11);
  }
  return v8 != 0 ? v30 : 0;
}
