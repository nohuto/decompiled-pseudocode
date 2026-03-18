/*
 * XREFs of NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x14032F550
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1400701C0 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1400D52F0 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1400D58A0 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1400D785C (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1400D7FD8 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1400D80A8 (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     FONTOBJ_pQueryGlyphAttrs @ 0x1403206C0 (FONTOBJ_pQueryGlyphAttrs.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

void *__fastcall NtGdiFONTOBJ_pQueryGlyphAttrs(__int64 a1, ULONG a2)
{
  struct _GRETHREAD *CurrentThread; // rax
  UMPDOBJ *v5; // rbx
  struct PFT *v6; // rax
  FONTOBJ *v7; // rsi
  void *v8; // rdi
  PFD_GLYPHATTR GlyphAttrs; // rax
  PFD_GLYPHATTR v10; // r14
  unsigned int cjThis; // esi
  void *v12; // rax
  UMPDOBJ *v14[4]; // [rsp+30h] [rbp-78h] BYREF
  UMPDOBJ *v15; // [rsp+50h] [rbp-58h]
  char v16; // [rsp+C0h] [rbp+18h] BYREF
  UMPDOBJ *v17; // [rsp+C8h] [rbp+20h]

  CurrentThread = GreGetCurrentThread(a1);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v14, CurrentThread);
  v5 = v15;
  v17 = v15;
  if ( v15 && (v6 = (struct PFT *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)v15, a1), (v7 = (FONTOBJ *)v6) != 0LL) )
  {
    v8 = 0LL;
    if ( *((_QWORD *)v5 + 42) )
    {
      v8 = (void *)*((_QWORD *)v5 + 42);
    }
    else
    {
      PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&v16, v6);
      UMPDAcquireRFONTSem((struct RFONTOBJ *)&v16, v5, 0, 0, 0LL);
      GlyphAttrs = FONTOBJ_pQueryGlyphAttrs(v7, a2);
      v10 = GlyphAttrs;
      if ( GlyphAttrs )
      {
        cjThis = GlyphAttrs->cjThis;
        v12 = UMPDOBJ::_AllocUserMem(v5, GlyphAttrs->cjThis, 0);
        v8 = v12;
        if ( v12 )
        {
          memmove(v12, v10, cjThis);
          *((_QWORD *)v5 + 42) = v8;
        }
      }
      UMPDReleaseRFONTSem((struct RFONTOBJ *)&v16, v5, 0LL, 0LL, 0LL);
      RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v16);
    }
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v14);
    return v8;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v14);
    return 0LL;
  }
}
