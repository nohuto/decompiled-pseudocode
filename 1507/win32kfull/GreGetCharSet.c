/*
 * XREFs of GreGetCharSet @ 0x1C00DD3C4
 * Callers:
 *     NtGdiGetCharSet @ 0x1C00DD230 (NtGdiGetCharSet.c)
 *     GreGetTextCharsetInfo @ 0x1C00DD2CC (GreGetTextCharsetInfo.c)
 * Callees:
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0029850 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x1C0029904 (--1LFONTOBJ@@QEAA@XZ.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C0029920 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C0126390 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetCharSet(HDC a1)
{
  __int64 v1; // rdx
  unsigned int v2; // ebx
  __int64 v4; // [rsp+30h] [rbp-40h] BYREF
  struct _POINTL v5; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v6[6]; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v7; // [rsp+88h] [rbp+18h] BYREF
  unsigned int v8; // [rsp+90h] [rbp+20h] BYREF
  struct LFONT *v9; // [rsp+98h] [rbp+28h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v6, a1);
  v1 = v6[0];
  if ( v6[0] )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v6[0] + 80LL) + 8LL) & 0x10) != 0 )
    {
      v4 = *(_QWORD *)(v6[0] + 48LL);
      if ( (*(_DWORD *)(v4 + 56) & 0x40) == 0 )
        PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v4);
      LFONTOBJ::LFONTOBJ(
        (LFONTOBJ *)&v9,
        *(struct HLFONT__ **)(*(_QWORD *)(v6[0] + 80LL) + 176LL),
        (struct PDEVOBJ *)&v4);
      if ( !v9 )
      {
        LFONTOBJ::~LFONTOBJ(&v9);
        goto LABEL_8;
      }
      GreAcquireSemaphore(ghsemPublicPFT);
      LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v9, (struct XDCOBJ *)v6, &v8, &v5, &v7, 0);
      if ( ghsemPublicPFT )
      {
        EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPublicPFT);
        GreReleaseSemaphoreInternal(ghsemPublicPFT);
      }
      LFONTOBJ::~LFONTOBJ(&v9);
      v1 = v6[0];
    }
    v2 = *(_DWORD *)(*(_QWORD *)(v1 + 80) + 64LL);
    goto LABEL_13;
  }
  EngSetLastError(6u);
LABEL_8:
  v2 = 0x10000;
LABEL_13:
  DCOBJ::~DCOBJ((DCOBJ *)v6);
  return v2;
}
