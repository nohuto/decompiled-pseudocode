/*
 * XREFs of NtGdiFONTOBJ_pifi @ 0x1C02B0610
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C000AA50 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00680A8 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C0124DAC (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     FONTOBJ_pifi @ 0x1C0283F20 (FONTOBJ_pifi.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C02841D4 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C0284BE0 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C02A3658 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C02A38D8 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z @ 0x1C02AAFAC (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1C02AB0C0 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 */

IFIMETRICS *__fastcall NtGdiFONTOBJ_pifi(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  IFIMETRICS *v5; // rbx
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rdi
  struct PFT *v9; // rax
  FONTOBJ *v10; // rsi
  IFIMETRICS *v11; // rsi
  char *v12; // rax
  UMPDOBJ *v13; // [rsp+58h] [rbp+10h] BYREF
  char v14; // [rsp+60h] [rbp+18h] BYREF
  struct UMPDOBJ *v15; // [rsp+68h] [rbp+20h]

  v5 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v15 = ThreadCurrentObj;
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL(&v13, ThreadCurrentObj);
  if ( v13 )
  {
    v9 = (struct PFT *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)ThreadCurrentObj, a1);
    v10 = (FONTOBJ *)v9;
    if ( v9 )
    {
      v5 = (IFIMETRICS *)*((_QWORD *)ThreadCurrentObj + 40);
      if ( !v5 )
      {
        PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&v14, v9);
        UMPDAcquireRFONTSem((struct RFONTOBJ *)&v14, ThreadCurrentObj, 0, 0, 0LL);
        v5 = FONTOBJ_pifi(v10);
        if ( v5 && v5 >= MmSystemRangeStart )
        {
          v11 = v5;
          v12 = UMPDOBJ::_AllocUserMem(ThreadCurrentObj, v5->cjThis, 0);
          v5 = (IFIMETRICS *)v12;
          if ( v12 )
          {
            memmove(v12, v11, v11->cjThis);
            *((_QWORD *)ThreadCurrentObj + 40) = v5;
          }
        }
        UMPDReleaseRFONTSem((struct RFONTOBJ *)&v14, ThreadCurrentObj, 0LL, 0LL, 0LL);
        RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v14);
      }
    }
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v13);
    return v5;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v13);
    return 0LL;
  }
}
