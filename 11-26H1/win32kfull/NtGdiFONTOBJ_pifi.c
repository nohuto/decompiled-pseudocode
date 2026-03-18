/*
 * XREFs of NtGdiFONTOBJ_pifi @ 0x1400D9200
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
 *     FONTOBJ_pifi @ 0x14023A440 (FONTOBJ_pifi.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

unsigned int *__fastcall NtGdiFONTOBJ_pifi(__int64 a1)
{
  unsigned int *p_cjThis; // rdi
  struct _GRETHREAD *CurrentThread; // rax
  UMPDOBJ *v4; // rbx
  struct PFT *v5; // rax
  FONTOBJ *v6; // rsi
  IFIMETRICS *v7; // rax
  IFIMETRICS *v8; // rsi
  unsigned int *v9; // rax
  UMPDOBJ *v11[4]; // [rsp+30h] [rbp-68h] BYREF
  UMPDOBJ *v12; // [rsp+50h] [rbp-48h]
  char v13; // [rsp+A8h] [rbp+10h] BYREF
  UMPDOBJ *v14; // [rsp+B0h] [rbp+18h]

  p_cjThis = 0LL;
  CurrentThread = GreGetCurrentThread(a1);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v11, CurrentThread);
  v4 = v12;
  v14 = v12;
  if ( v12 )
  {
    v5 = (struct PFT *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)v12, a1);
    v6 = (FONTOBJ *)v5;
    if ( v5 )
    {
      p_cjThis = (unsigned int *)*((_QWORD *)v4 + 40);
      if ( !p_cjThis )
      {
        PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&v13, v5);
        UMPDAcquireRFONTSem((struct RFONTOBJ *)&v13, v4, 0, 0, 0LL);
        v7 = FONTOBJ_pifi(v6);
        v8 = v7;
        p_cjThis = &v7->cjThis;
        if ( v7 && GrepIsEngineVa(v7) )
        {
          v9 = (unsigned int *)UMPDOBJ::_AllocUserMem(v4, *p_cjThis, 0);
          p_cjThis = v9;
          if ( v9 )
          {
            memmove(v9, v8, v8->cjThis);
            *((_QWORD *)v4 + 40) = p_cjThis;
          }
        }
        UMPDReleaseRFONTSem((struct RFONTOBJ *)&v13, v4, 0LL, 0LL, 0LL);
        RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v13);
      }
    }
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v11);
    return p_cjThis;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v11);
    return 0LL;
  }
}
