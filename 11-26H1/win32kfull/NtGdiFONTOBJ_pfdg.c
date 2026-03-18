/*
 * XREFs of NtGdiFONTOBJ_pfdg @ 0x14032F6B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1400D52F0 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1400D58A0 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1400D785C (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1400D7FD8 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z @ 0x140205E80 (-WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z.c)
 */

struct _FD_GLYPHSET *__fastcall NtGdiFONTOBJ_pfdg(__int64 a1)
{
  struct _FD_GLYPHSET *v2; // rdi
  struct _GRETHREAD *CurrentThread; // rax
  UMPDOBJ *v4; // rbx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rsi
  struct _FD_GLYPHSET *v8; // rsi
  unsigned int v9; // ebp
  struct _FD_GLYPHSET *v10; // rax
  UMPDOBJ *v11[4]; // [rsp+30h] [rbp-68h] BYREF
  UMPDOBJ *v12; // [rsp+50h] [rbp-48h]
  unsigned __int64 v13; // [rsp+A8h] [rbp+10h] BYREF

  v2 = 0LL;
  CurrentThread = GreGetCurrentThread(a1);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v11, CurrentThread);
  v4 = v12;
  if ( v12 )
  {
    v6 = UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)v12, a1);
    v7 = v6;
    if ( v6 )
    {
      v2 = (struct _FD_GLYPHSET *)*((_QWORD *)v4 + 41);
      if ( !v2 )
      {
        v13 = v6;
        UMPDAcquireRFONTSem((struct RFONTOBJ *)&v13, v4, 0, 0, 0LL);
        v8 = *(struct _FD_GLYPHSET **)(v7 + 472);
        if ( v8 )
        {
          if ( GrepIsEngineVa(v8) )
          {
            v9 = 4 * (v8->cGlyphsSupported + 4 * (v8->cRuns + 1));
            if ( v9 )
            {
              v10 = (struct _FD_GLYPHSET *)UMPDOBJ::_AllocUserMem(v4, v9, 0);
              v2 = v10;
              if ( v10 )
              {
                if ( (unsigned int)WriteFD_GLYPHSET(v10, v8, v9) )
                  *((_QWORD *)v4 + 41) = v2;
                else
                  v2 = 0LL;
              }
            }
          }
          else
          {
            v2 = v8;
            *((_QWORD *)v4 + 41) = v8;
          }
        }
        UMPDReleaseRFONTSem((struct RFONTOBJ *)&v13, v4, 0LL, 0LL, 0LL);
        v13 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v13);
      }
    }
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v11);
    return v2;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v11);
    return 0LL;
  }
}
