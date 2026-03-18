/*
 * XREFs of NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C02ADDF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C0009550 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00DFB80 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C010E454 (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C01468CC (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     FONTOBJ_pQueryGlyphAttrs @ 0x1C0286080 (FONTOBJ_pQueryGlyphAttrs.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C028638C (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C02A26E4 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C02A2964 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 */

char *__fastcall NtGdiFONTOBJ_pQueryGlyphAttrs(__int64 a1, ULONG a2)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v6; // rbx
  struct PFT *v8; // rax
  FONTOBJ *v9; // rsi
  char *v10; // rdi
  PFD_GLYPHATTR GlyphAttrs; // rax
  PFD_GLYPHATTR v12; // r14
  unsigned int cjThis; // esi
  char *v14; // rax
  char v15; // [rsp+60h] [rbp+18h] BYREF
  struct UMPDOBJ *v16; // [rsp+68h] [rbp+20h]

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v6 = ThreadCurrentObj;
  v16 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 108);
  v8 = (struct PFT *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)ThreadCurrentObj, a1);
  v9 = (FONTOBJ *)v8;
  if ( !v8 )
  {
    if ( v6 )
      --*((_DWORD *)v6 + 108);
    return 0LL;
  }
  v10 = 0LL;
  if ( *((_QWORD *)v6 + 42) )
  {
    v10 = (char *)*((_QWORD *)v6 + 42);
  }
  else
  {
    PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&v15, v8);
    UMPDAcquireRFONTSem((struct RFONTOBJ *)&v15, v6, 0, 0, 0LL);
    GlyphAttrs = FONTOBJ_pQueryGlyphAttrs(v9, a2);
    v12 = GlyphAttrs;
    if ( GlyphAttrs )
    {
      cjThis = GlyphAttrs->cjThis;
      v14 = UMPDOBJ::_AllocUserMem(v6, GlyphAttrs->cjThis, 0);
      v10 = v14;
      if ( v14 )
      {
        memmove(v14, v12, cjThis);
        *((_QWORD *)v6 + 42) = v10;
      }
    }
    UMPDReleaseRFONTSem((struct RFONTOBJ *)&v15, v6, 0LL, 0LL, 0LL);
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v15);
  }
  --*((_DWORD *)v6 + 108);
  return v10;
}
