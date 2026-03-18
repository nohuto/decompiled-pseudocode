/*
 * XREFs of NtGdiFONTOBJ_pfdg @ 0x1C02B04C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002D6C4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00680A8 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C02841D4 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C0284BE0 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C02A3658 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C02A38D8 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z @ 0x1C02AAFAC (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1C02AB0C0 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ?WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z @ 0x1C02AB8E4 (-WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z.c)
 */

void *__fastcall NtGdiFONTOBJ_pfdg(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v5; // rbx
  void *v6; // rdi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rsi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbp
  struct _FD_GLYPHSET *v11; // rbp
  void *v12; // rdi
  unsigned int v13; // r14d
  char *v14; // rax
  unsigned __int64 v16; // [rsp+58h] [rbp+10h] BYREF
  UMPDOBJ *v17; // [rsp+60h] [rbp+18h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL(&v17, ThreadCurrentObj);
  if ( !v17 )
    goto LABEL_14;
  v9 = UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)ThreadCurrentObj, a1);
  v10 = v9;
  if ( !v9 || (v6 = (void *)*((_QWORD *)ThreadCurrentObj + 41)) != 0LL )
  {
    v5 = v6;
LABEL_14:
    v12 = v5;
    goto LABEL_15;
  }
  v16 = v9;
  UMPDAcquireRFONTSem((struct RFONTOBJ *)&v16, ThreadCurrentObj, 0, 0, 0LL);
  v11 = *(struct _FD_GLYPHSET **)(v10 + 472);
  v12 = 0LL;
  if ( v11 )
  {
    if ( v11 < MmSystemRangeStart )
    {
      v12 = v11;
      *((_QWORD *)ThreadCurrentObj + 41) = v11;
    }
    else
    {
      v13 = 4 * (v11->cGlyphsSupported + 4 * (v11->cRuns + 1));
      if ( v13 )
      {
        v14 = UMPDOBJ::_AllocUserMem(ThreadCurrentObj, v13, 0);
        v12 = v14;
        if ( v14 )
        {
          if ( (unsigned int)WriteFD_GLYPHSET((struct _FD_GLYPHSET *)v14, v11, v13) )
            *((_QWORD *)ThreadCurrentObj + 41) = v12;
          else
            v12 = 0LL;
        }
      }
    }
  }
  UMPDReleaseRFONTSem((struct RFONTOBJ *)&v16, ThreadCurrentObj, 0LL, 0LL, 0LL);
  v16 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v16);
LABEL_15:
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v17);
  return v12;
}
