/*
 * XREFs of NtGdiFONTOBJ_cGetGlyphs @ 0x1400D6720
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1400701C0 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1400D52F0 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1400D58A0 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1400D70E4 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1400D7FD8 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     FONTOBJ_cGetGlyphs @ 0x1400D8030 (FONTOBJ_cGetGlyphs.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1400D80A8 (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     ?CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z @ 0x14021219C (-CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z.c)
 *     ?CacheGlyphPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU2@@Z @ 0x14025B90C (-CacheGlyphPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU2@@Z.c)
 */

__int64 __fastcall NtGdiFONTOBJ_cGetGlyphs(__int64 a1, ULONG a2, __int64 a3, int *a4, void *a5)
{
  struct _GRETHREAD *CurrentThread; // rax
  struct UMPDOBJ *v9; // rdi
  struct PFT *v10; // r15
  ULONG Glyphs; // ebx
  struct _GLYPHBITS **v12; // rsi
  struct _GLYPHBITS *v13; // rdx
  struct _GLYPHBITS *v14; // rax
  struct _PATHOBJ *v16; // rax
  PVOID ppvGlyph; // [rsp+38h] [rbp-B0h] BYREF
  int v18; // [rsp+40h] [rbp-A8h] BYREF
  void *v19; // [rsp+48h] [rbp-A0h] BYREF
  _BYTE v20[16]; // [rsp+50h] [rbp-98h] BYREF
  _BYTE v21[32]; // [rsp+60h] [rbp-88h] BYREF
  UMPDOBJ *v22; // [rsp+80h] [rbp-68h]

  ppvGlyph = 0LL;
  v18 = 0;
  CurrentThread = GreGetCurrentThread(a1);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v21, CurrentThread);
  v9 = v22;
  v19 = v22;
  if ( v22 && (v10 = (struct PFT *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>(v22, a1)) != 0LL && a2 - 1 <= 1 )
  {
    if ( a4 )
    {
      GreProbeAndReadFromUntrustedVa(&v18, 4uLL, a4, 4uLL, 1uLL);
      a4 = &v18;
    }
    PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v20, v10);
    UMPDAcquireRFONTSem((struct RFONTOBJ *)v20, v9, 0, 0, 0LL);
    Glyphs = FONTOBJ_cGetGlyphs((FONTOBJ *)v10, a2, 1u, (HGLYPH *)a4, &ppvGlyph);
    if ( Glyphs == 1 )
    {
      v12 = (struct _GLYPHBITS **)ppvGlyph;
      if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v9, &ppvGlyph, 0x40u) )
      {
        v13 = *v12;
        if ( a2 == 1 )
        {
          if ( v13 )
          {
            v14 = UMPDOBJ::CacheGlyphBits(v9, v13);
            *(_QWORD *)ppvGlyph = v14;
            Glyphs = v14 != 0LL;
          }
        }
        else if ( v13 )
        {
          v16 = UMPDOBJ::CacheGlyphPath(v9, (struct _PATHOBJ *)v13);
          *(_QWORD *)ppvGlyph = v16;
          Glyphs = v16 != 0LL;
        }
      }
      else
      {
        Glyphs = 0;
      }
    }
    UMPDReleaseRFONTSem((struct RFONTOBJ *)v20, v9, 0LL, 0LL, 0LL);
    if ( Glyphs )
    {
      v19 = ppvGlyph;
      GreProbeAndWriteToUntrustedVa(a5, 8uLL, &v19, 8uLL, 1uLL);
    }
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v20);
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v21);
    return Glyphs;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v21);
    return 0LL;
  }
}
