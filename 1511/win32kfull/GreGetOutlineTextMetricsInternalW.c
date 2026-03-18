/*
 * XREFs of GreGetOutlineTextMetricsInternalW @ 0x1C00E8DF8
 * Callers:
 *     NtGdiGetOutlineTextMetricsInternalW @ 0x1C00E8CC0 (NtGdiGetOutlineTextMetricsInternalW.c)
 * Callees:
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C001CB54 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0022088 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x1C002213C (--1LFONTOBJ@@QEAA@XZ.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C0022154 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0023A60 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0027184 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     cjIFIMetricsToOTMW @ 0x1C00E7ED0 (cjIFIMetricsToOTMW.c)
 *     ?cjOTMAWSize@@YAIPEAU_IFIMETRICS@@PEAI@Z @ 0x1C00E9050 (-cjOTMAWSize@@YAIPEAU_IFIMETRICS@@PEAI@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 __fastcall GreGetOutlineTextMetricsInternalW(HDC a1, size_t Size, char *a3, _BYTE *a4)
{
  unsigned int v4; // esi
  size_t v5; // r14
  unsigned int v8; // r15d
  __int64 v9; // rdx
  int v10; // eax
  struct LFONT *v11; // rbx
  __int64 v12; // rdi
  unsigned int v13; // eax
  int v14; // r14d
  struct LFONT *v16; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v17; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v20; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+60h] [rbp-A0h] BYREF
  struct _POINTL v22; // [rsp+68h] [rbp-98h] BYREF
  unsigned int Src[60]; // [rsp+70h] [rbp-90h] BYREF

  v4 = 0;
  v5 = (unsigned int)Size;
  v8 = 0;
  if ( (_DWORD)Size || !a3 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v18, a1);
    v9 = v18[0];
    if ( !v18[0] )
    {
      EngSetLastError(6u);
LABEL_17:
      XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v18);
      return v4;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(v18[0] + 80LL) + 8LL) & 0x10) != 0 )
    {
      v19 = *(_QWORD *)(v18[0] + 48LL);
      if ( (*(_DWORD *)(v19 + 56) & 0x40) == 0 )
      {
        PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v19);
        v9 = v18[0];
      }
      LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v16, *(struct HLFONT__ **)(*(_QWORD *)(v9 + 80) + 176LL), (struct PDEVOBJ *)&v19);
      if ( !v16 )
      {
        LFONTOBJ::~LFONTOBJ(&v16);
        goto LABEL_17;
      }
      v21 = ghsemPublicPFT;
      GreAcquireSemaphore(ghsemPublicPFT);
      LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v16, (struct XDCOBJ *)v18, &v20, &v22, &v17, 0);
      SEMOBJ::vUnlock((SEMOBJ *)&v21);
      LFONTOBJ::~LFONTOBJ(&v16);
    }
    v10 = RFONTOBJ::bInit((struct _FD_XFORM **)&v16, (struct XDCOBJ *)v18, 0, 2u);
    v11 = v16;
    if ( v10 )
      GreAcquireSemaphore(*((_QWORD *)v16 + 66));
    if ( v11 && (v12 = *((_QWORD *)v11 + 14)) != 0 )
    {
      if ( *(_QWORD *)(*((_QWORD *)v11 + 10) + 3112LL) )
      {
        *(_DWORD *)a4 = cjOTMAWSize(*(struct _IFIMETRICS **)(v12 + 32), &v17);
        if ( a3 )
        {
          if ( (unsigned int)v5 <= 0xE8 )
          {
            memset(Src, 0, 0xE8uLL);
            if ( (unsigned int)cjIFIMetricsToOTMW(
                                 a4,
                                 Src,
                                 (struct RFONTOBJ *)&v16,
                                 (struct DCOBJ *)v18,
                                 *(struct _IFIMETRICS **)(v12 + 32),
                                 0) )
            {
              memmove(a3, Src, v5);
              v4 = v5;
            }
            goto LABEL_16;
          }
          if ( (unsigned int)v5 >= v17 )
          {
            v13 = cjIFIMetricsToOTMW(
                    a4,
                    (unsigned int *)a3,
                    (struct RFONTOBJ *)&v16,
                    (struct DCOBJ *)v18,
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
          v8 = v17;
        }
      }
      v4 = v8;
    }
    else
    {
      EngSetLastError(6u);
    }
LABEL_16:
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v16);
    goto LABEL_17;
  }
  EngSetLastError(0x57u);
  return 0LL;
}
