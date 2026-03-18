/*
 * XREFs of GreGetCharSet @ 0x1C0023BD8
 * Callers:
 *     NtGdiGetCharSet @ 0x1C0023A30 (NtGdiGetCharSet.c)
 *     GreGetTextCharsetInfo @ 0x1C0023ACC (GreGetTextCharsetInfo.c)
 * Callees:
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0023CFC (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x1C0023DB0 (--1LFONTOBJ@@QEAA@XZ.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C0023DC8 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C002A12C (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bGotFonts@PDEVOBJ@@QEBAHXZ @ 0x1C025A5F4 (-bGotFonts@PDEVOBJ@@QEBAHXZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C025B160 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C025B464 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall GreGetCharSet(HDC a1)
{
  __int64 v2; // rdx
  unsigned int v3; // ebx
  __int64 v5; // [rsp+30h] [rbp-50h] BYREF
  __int64 v6; // [rsp+38h] [rbp-48h] BYREF
  struct _POINTL v7; // [rsp+40h] [rbp-40h] BYREF
  __int64 v8; // [rsp+48h] [rbp-38h] BYREF
  int v9; // [rsp+50h] [rbp-30h]
  int v10; // [rsp+54h] [rbp-2Ch]
  _BYTE v11[40]; // [rsp+58h] [rbp-28h] BYREF
  unsigned int v12; // [rsp+98h] [rbp+18h] BYREF
  unsigned int v13; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v14; // [rsp+A8h] [rbp+28h] BYREF

  v8 = 0LL;
  v9 = 0;
  v10 = 0;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v11);
  XDCOBJ::vLock((XDCOBJ *)&v8, a1);
  v2 = v8;
  if ( v8 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v8 + 80) + 8LL) & 0x10) != 0 )
    {
      v5 = *(_QWORD *)(v8 + 48);
      if ( !(unsigned int)PDEVOBJ::bGotFonts((PDEVOBJ *)&v5) )
        PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v5);
      LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v14, *(struct HLFONT__ **)(*(_QWORD *)(v8 + 80) + 176LL), (struct PDEVOBJ *)&v5);
      if ( !v14 )
      {
        LFONTOBJ::~LFONTOBJ((LFONTOBJ *)&v14);
        goto LABEL_8;
      }
      v6 = ghsemPublicPFT;
      GreAcquireSemaphore(ghsemPublicPFT);
      LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v14, (struct XDCOBJ *)&v8, &v13, &v7, &v12, 0);
      SEMOBJ::vUnlock((SEMOBJ *)&v6);
      LFONTOBJ::~LFONTOBJ((LFONTOBJ *)&v14);
      v2 = v8;
    }
    v3 = *(_DWORD *)(*(_QWORD *)(v2 + 80) + 64LL);
    goto LABEL_11;
  }
  EngSetLastError(6u);
LABEL_8:
  v3 = 0x10000;
LABEL_11:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)&v8);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v11);
  return v3;
}
