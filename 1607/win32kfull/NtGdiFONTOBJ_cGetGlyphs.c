/*
 * XREFs of NtGdiFONTOBJ_cGetGlyphs @ 0x1C02B0150
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C000AA50 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00680A8 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C0124DAC (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     FONTOBJ_cGetGlyphs @ 0x1C0283E50 (FONTOBJ_cGetGlyphs.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C02841D4 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z @ 0x1C0284268 (-CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z.c)
 *     ?CacheGlyphPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU2@@Z @ 0x1C02842F0 (-CacheGlyphPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU2@@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C0284B04 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C02A3658 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C02A38D8 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z @ 0x1C02AAFAC (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1C02AB0C0 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiFONTOBJ_cGetGlyphs(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, PVOID *a5)
{
  ULONG v5; // r15d
  struct _W32THREAD *ThreadWin32Thread; // rax
  UMPDOBJ *ThreadCurrentObj; // rdi
  struct PFT *v9; // r14
  HGLYPH *v10; // rsi
  ULONG Glyphs; // ebx
  struct _GLYPHBITS **v12; // rsi
  struct _GLYPHBITS *v13; // rdx
  struct _GLYPHBITS *v14; // rax
  struct _PATHOBJ *v15; // rax
  PVOID *v16; // rdx
  HGLYPH v18; // [rsp+34h] [rbp-54h] BYREF
  PVOID ppvGlyph; // [rsp+38h] [rbp-50h] BYREF
  UMPDOBJ *v20[2]; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v21[56]; // [rsp+50h] [rbp-38h] BYREF

  v5 = a2;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v20[1] = ThreadCurrentObj;
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL(v20, ThreadCurrentObj);
  if ( v20[0] && (v9 = (struct PFT *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)ThreadCurrentObj, a1)) != 0LL && v5 - 1 <= 1 )
  {
    v10 = (HGLYPH *)a4;
    if ( a4 )
    {
      if ( a4 >= W32UserProbeAddress )
        v10 = (HGLYPH *)W32UserProbeAddress;
      v18 = *v10;
      v10 = &v18;
    }
    PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v21, v9);
    UMPDAcquireRFONTSem((struct RFONTOBJ *)v21, ThreadCurrentObj, 0, 0, 0LL);
    Glyphs = FONTOBJ_cGetGlyphs((FONTOBJ *)v9, v5, 1u, v10, &ppvGlyph);
    if ( Glyphs == 1 )
    {
      v12 = (struct _GLYPHBITS **)ppvGlyph;
      if ( (unsigned int)UMPDOBJ::ThunkMemBlock(ThreadCurrentObj, (const void **)&ppvGlyph, 0x40u) )
      {
        v13 = *v12;
        if ( v5 == 1 )
        {
          if ( v13 )
          {
            v14 = UMPDOBJ::CacheGlyphBits(ThreadCurrentObj, v13);
            *(_QWORD *)ppvGlyph = v14;
            Glyphs = v14 != 0LL;
          }
        }
        else if ( v13 )
        {
          v15 = UMPDOBJ::CacheGlyphPath(ThreadCurrentObj, (struct _PATHOBJ *)v13);
          *(_QWORD *)ppvGlyph = v15;
          Glyphs = v15 != 0LL;
        }
      }
      else
      {
        Glyphs = 0;
      }
    }
    UMPDReleaseRFONTSem((struct RFONTOBJ *)v21, ThreadCurrentObj, 0LL, 0LL, 0LL);
    if ( Glyphs )
    {
      v16 = a5;
      if ( (unsigned __int64)a5 >= W32UserProbeAddress )
        v16 = (PVOID *)W32UserProbeAddress;
      *v16 = ppvGlyph;
    }
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v21);
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v20);
    return Glyphs;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v20);
    return 0LL;
  }
}
