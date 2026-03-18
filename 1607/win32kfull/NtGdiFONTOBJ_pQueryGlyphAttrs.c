/*
 * XREFs of NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C02B0380
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C000AA50 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00680A8 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C0124DAC (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     FONTOBJ_pQueryGlyphAttrs @ 0x1C0283EB0 (FONTOBJ_pQueryGlyphAttrs.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C02841D4 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C0284BE0 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C02A3658 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C02A38D8 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z @ 0x1C02AAFAC (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1C02AB0C0 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 */

char *__fastcall NtGdiFONTOBJ_pQueryGlyphAttrs(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG v4; // r14d
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rdi
  struct PFT *v9; // rsi
  char *v10; // rbx
  PFD_GLYPHATTR GlyphAttrs; // rax
  PFD_GLYPHATTR v12; // r14
  unsigned int cjThis; // esi
  char *v14; // rax
  UMPDOBJ *v15; // [rsp+70h] [rbp+18h] BYREF
  char v16; // [rsp+78h] [rbp+20h] BYREF

  v4 = a2;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL(&v15, ThreadCurrentObj);
  if ( v15 && (v9 = (struct PFT *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)ThreadCurrentObj, a1)) != 0LL )
  {
    v10 = 0LL;
    if ( *((_QWORD *)ThreadCurrentObj + 42) )
    {
      v10 = (char *)*((_QWORD *)ThreadCurrentObj + 42);
    }
    else
    {
      PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&v16, v9);
      UMPDAcquireRFONTSem((struct RFONTOBJ *)&v16, ThreadCurrentObj, 0, 0, 0LL);
      GlyphAttrs = FONTOBJ_pQueryGlyphAttrs((FONTOBJ *)v9, v4);
      v12 = GlyphAttrs;
      if ( GlyphAttrs )
      {
        cjThis = GlyphAttrs->cjThis;
        v14 = UMPDOBJ::_AllocUserMem(ThreadCurrentObj, GlyphAttrs->cjThis, 0);
        v10 = v14;
        if ( v14 )
        {
          memmove(v14, v12, cjThis);
          *((_QWORD *)ThreadCurrentObj + 42) = v10;
        }
      }
      UMPDReleaseRFONTSem((struct RFONTOBJ *)&v16, ThreadCurrentObj, 0LL, 0LL, 0LL);
      RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v16);
    }
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v15);
    return v10;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v15);
    return 0LL;
  }
}
