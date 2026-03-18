/*
 * XREFs of GreFontIsLinked @ 0x1C011FD48
 * Callers:
 *     NtGdiFontIsLinked @ 0x1C011FD40 (NtGdiFontIsLinked.c)
 * Callees:
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C00127D0 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002D6C4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002EAC0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall GreFontIsLinked(HDC a1)
{
  unsigned int v1; // esi
  int v2; // eax
  struct _FD_XFORM *v3; // rbx
  __int64 v4; // rdi
  char v6; // cl
  _QWORD v7[2]; // [rsp+20h] [rbp-29h] BYREF
  _BYTE v8[32]; // [rsp+30h] [rbp-19h] BYREF
  _QWORD v9[8]; // [rsp+50h] [rbp+7h] BYREF
  struct _FD_XFORM *v10; // [rsp+B8h] [rbp+6Fh] BYREF

  v1 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  if ( v7[0] )
  {
    v2 = RFONTOBJ::bInit(&v10, (struct XDCOBJ *)v7, 0, 2u);
    v3 = v10;
    if ( v2 )
      GreAcquireSemaphore(*(_QWORD *)&v10[33].eXX);
    if ( !v3 )
      goto LABEL_11;
    v4 = *(_QWORD *)&v3[7].eXX;
    GreAcquireSemaphore(ghsemEUDC1);
    ++gcEUDCCount;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
    if ( v4 && (*(_DWORD *)(v4 + 12) & 8) == 0 )
    {
      if ( !LODWORD(v3[44].eYY) )
      {
        if ( *(_OWORD *)&gappfeSysEUDC == 0LL )
        {
          if ( !bFinallyInitializeFontAssocDefault
            || (IFIOBJR::IFIOBJR(
                  (IFIOBJR *)v9,
                  *(const struct _IFIMETRICS **)(v4 + 32),
                  (struct RFONTOBJ *)&v10,
                  (struct DCOBJ *)v7),
                v6 = *(_BYTE *)(v9[0] + 44LL),
                v6 == 1)
            || (unsigned __int8)(v6 - 3) <= 0xFBu
            || ((unsigned __int8)fFontAssocStatus & (unsigned __int8)(v6 + 2) & 0xF) == 0 )
          {
            if ( *(_QWORD *)(v4 + 128) )
              v1 = 1;
            goto LABEL_10;
          }
        }
        goto LABEL_9;
      }
      if ( gbSystemDBCSFontEnabled )
LABEL_9:
        v1 = 1;
    }
LABEL_10:
    GreAcquireSemaphore(ghsemEUDC1);
    --gcEUDCCount;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
LABEL_11:
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v10);
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v7);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v8);
  return v1;
}
