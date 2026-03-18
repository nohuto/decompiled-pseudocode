/*
 * XREFs of GreGetOutlineTextMetricsInternalW @ 0x1C0012A48
 * Callers:
 *     NtGdiGetOutlineTextMetricsInternalW @ 0x1C0012910 (NtGdiGetOutlineTextMetricsInternalW.c)
 * Callees:
 *     cjIFIMetricsToOTMW @ 0x1C0011C6C (cjIFIMetricsToOTMW.c)
 *     ?cjOTMAWSize@@YAIPEAU_IFIMETRICS@@PEAI@Z @ 0x1C0012CCC (-cjOTMAWSize@@YAIPEAU_IFIMETRICS@@PEAI@Z.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0023CFC (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x1C0023DB0 (--1LFONTOBJ@@QEAA@XZ.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C0023DC8 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C002A12C (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002D6C4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002EAC0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall GreGetOutlineTextMetricsInternalW(HDC a1, size_t Size, char *a3, _BYTE *a4)
{
  unsigned int v4; // esi
  size_t v5; // r14
  unsigned int v8; // r15d
  int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rdi
  unsigned int v13; // eax
  int v14; // r14d
  unsigned int v15; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v19; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v20; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v21; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v22[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v23[32]; // [rsp+70h] [rbp-90h] BYREF
  struct _POINTL v24; // [rsp+90h] [rbp-70h] BYREF
  unsigned int Src[60]; // [rsp+A0h] [rbp-60h] BYREF

  v4 = 0;
  v5 = (unsigned int)Size;
  v8 = 0;
  if ( !(_DWORD)Size && a3 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  DCOBJ::DCOBJ((DCOBJ *)v22, a1);
  if ( v22[0] )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v22[0] + 80LL) + 8LL) & 0x10) != 0 )
    {
      v18 = *(_QWORD *)(v22[0] + 48LL);
      if ( (*(_DWORD *)(v18 + 56) & 0x40) == 0 )
        PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v18);
      LFONTOBJ::LFONTOBJ(
        (LFONTOBJ *)&v16,
        *(struct HLFONT__ **)(*(_QWORD *)(v22[0] + 80LL) + 176LL),
        (struct PDEVOBJ *)&v18);
      if ( !v16 )
      {
        LFONTOBJ::~LFONTOBJ((LFONTOBJ *)&v16);
        goto LABEL_28;
      }
      v21 = ghsemPublicPFT;
      GreAcquireSemaphore(ghsemPublicPFT);
      LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v16, (struct XDCOBJ *)v22, &v20, &v24, &v19, 0);
      SEMOBJ::vUnlock((SEMOBJ *)&v21);
      LFONTOBJ::~LFONTOBJ((LFONTOBJ *)&v16);
    }
    v10 = RFONTOBJ::bInit((RFONTOBJ *)&v17, (struct XDCOBJ *)v22, 0, 2u);
    v11 = v17;
    if ( v10 )
      GreAcquireSemaphore(*(_QWORD *)(v17 + 528));
    if ( v11 && (v12 = *(_QWORD *)(v11 + 112)) != 0 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(v11 + 80) + 3104LL) )
      {
        *(_DWORD *)a4 = cjOTMAWSize(*(struct _IFIMETRICS **)(v12 + 32), &v15);
        if ( a3 )
        {
          if ( (unsigned int)v5 <= 0xE8 )
          {
            memset(Src, 0, 0xE8uLL);
            if ( (unsigned int)cjIFIMetricsToOTMW(
                                 a4,
                                 Src,
                                 (struct RFONTOBJ *)&v17,
                                 (struct DCOBJ *)v22,
                                 *(struct _IFIMETRICS **)(v12 + 32),
                                 0) )
            {
              memmove(a3, Src, v5);
              v4 = v5;
            }
            goto LABEL_27;
          }
          if ( (unsigned int)v5 >= v15 )
          {
            v13 = cjIFIMetricsToOTMW(
                    a4,
                    (unsigned int *)a3,
                    (struct RFONTOBJ *)&v17,
                    (struct DCOBJ *)v22,
                    *(struct _IFIMETRICS **)(v12 + 32),
                    1);
            v14 = v5 - v13;
            v8 = v13;
            if ( v14 > 0 )
              memset(&a3[v13], 0, v14);
          }
        }
        else
        {
          v8 = v15;
        }
      }
      v4 = v8;
    }
    else
    {
      EngSetLastError(6u);
    }
LABEL_27:
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v17);
    goto LABEL_28;
  }
  EngSetLastError(6u);
LABEL_28:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v22);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v23);
  return v4;
}
