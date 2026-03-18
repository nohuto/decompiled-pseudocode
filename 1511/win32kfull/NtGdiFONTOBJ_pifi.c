/*
 * XREFs of NtGdiFONTOBJ_pifi @ 0x1C02AE060
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C0009550 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00DFB80 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C010E454 (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C01468CC (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     FONTOBJ_pifi @ 0x1C02860F0 (FONTOBJ_pifi.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C028638C (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C02A26E4 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C02A2964 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 */

IFIMETRICS *__fastcall NtGdiFONTOBJ_pifi(__int64 a1)
{
  IFIMETRICS *v2; // rdi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  __int64 v5; // rbx
  IFIMETRICS *result; // rax
  struct PFT *v7; // rax
  FONTOBJ *v8; // rsi
  IFIMETRICS *v9; // rsi
  char *v10; // rax
  char v11; // [rsp+48h] [rbp+10h] BYREF
  struct UMPDOBJ *v12; // [rsp+50h] [rbp+18h]

  v2 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v5 = (__int64)ThreadCurrentObj;
  v12 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
    ++*((_DWORD *)ThreadCurrentObj + 108);
  result = 0LL;
  if ( v5 )
  {
    v7 = (struct PFT *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>(v5, a1);
    v8 = (FONTOBJ *)v7;
    if ( v7 )
    {
      v2 = *(IFIMETRICS **)(v5 + 320);
      if ( !v2 )
      {
        PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&v11, v7);
        UMPDAcquireRFONTSem((struct RFONTOBJ *)&v11, (struct UMPDOBJ *)v5, 0, 0, 0LL);
        v2 = FONTOBJ_pifi(v8);
        if ( v2 && v2 >= MmSystemRangeStart )
        {
          v9 = v2;
          v10 = UMPDOBJ::_AllocUserMem((UMPDOBJ *)v5, v2->cjThis, 0);
          v2 = (IFIMETRICS *)v10;
          if ( v10 )
          {
            memmove(v10, v9, v9->cjThis);
            *(_QWORD *)(v5 + 320) = v2;
          }
        }
        UMPDReleaseRFONTSem((struct RFONTOBJ *)&v11, (struct UMPDOBJ *)v5, 0LL, 0LL, 0LL);
        RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v11);
      }
    }
    --*(_DWORD *)(v5 + 432);
    return v2;
  }
  return result;
}
