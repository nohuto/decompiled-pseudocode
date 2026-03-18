/*
 * XREFs of NtGdiFONTOBJ_cGetGlyphs @ 0x1C02ADBB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C0009550 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00DFB80 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C010E454 (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C0146A58 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     FONTOBJ_cGetGlyphs @ 0x1C0286020 (FONTOBJ_cGetGlyphs.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C028638C (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z @ 0x1C0286420 (-CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z.c)
 *     ?CacheGlyphPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU2@@Z @ 0x1C02864A8 (-CacheGlyphPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU2@@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C02A26E4 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C02A2964 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 */

__int64 __fastcall NtGdiFONTOBJ_cGetGlyphs(__int64 a1, ULONG a2, __int64 a3, HGLYPH *a4, PVOID *a5)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v9; // rbx
  struct PFT *v10; // r15
  HGLYPH *v11; // rsi
  ULONG Glyphs; // edi
  struct _GLYPHBITS **v13; // rsi
  struct _GLYPHBITS *v14; // rdx
  struct _GLYPHBITS *v15; // rax
  struct _PATHOBJ *v16; // rax
  PVOID *v17; // rdx
  HGLYPH v19; // [rsp+34h] [rbp-54h] BYREF
  PVOID ppvGlyph[2]; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v21[8]; // [rsp+48h] [rbp-40h] BYREF
  struct UMPDOBJ *v22; // [rsp+50h] [rbp-38h]

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v9 = ThreadCurrentObj;
  ppvGlyph[1] = ThreadCurrentObj;
  v22 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 108);
  v10 = (struct PFT *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)ThreadCurrentObj, a1);
  if ( !v10 || a2 - 1 > 1 )
  {
    if ( v9 )
      --*((_DWORD *)v9 + 108);
    return 0LL;
  }
  v11 = a4;
  if ( a4 )
  {
    if ( (unsigned __int64)a4 >= W32UserProbeAddress )
      v11 = (HGLYPH *)W32UserProbeAddress;
    v19 = *v11;
    v11 = &v19;
  }
  PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v21, v10);
  UMPDAcquireRFONTSem((struct RFONTOBJ *)v21, v9, 0, 0, 0LL);
  Glyphs = FONTOBJ_cGetGlyphs((FONTOBJ *)v10, a2, 1u, v11, ppvGlyph);
  if ( Glyphs == 1 )
  {
    v13 = (struct _GLYPHBITS **)ppvGlyph[0];
    if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v9, (const void **)ppvGlyph, 0x40u) )
    {
      v14 = *v13;
      if ( a2 == 1 )
      {
        if ( v14 )
        {
          v15 = UMPDOBJ::CacheGlyphBits((char **)v9, v14);
          *(_QWORD *)ppvGlyph[0] = v15;
          Glyphs = v15 != 0LL;
        }
      }
      else if ( v14 )
      {
        v16 = UMPDOBJ::CacheGlyphPath(v9, (struct _PATHOBJ *)v14);
        *(_QWORD *)ppvGlyph[0] = v16;
        Glyphs = v16 != 0LL;
      }
    }
    else
    {
      Glyphs = 0;
    }
  }
  UMPDReleaseRFONTSem((struct RFONTOBJ *)v21, v9, 0LL, 0LL, 0LL);
  if ( Glyphs )
  {
    v17 = a5;
    if ( (unsigned __int64)a5 >= W32UserProbeAddress )
      v17 = (PVOID *)W32UserProbeAddress;
    *v17 = ppvGlyph[0];
  }
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v21);
  if ( v9 )
    --*((_DWORD *)v9 + 108);
  return Glyphs;
}
