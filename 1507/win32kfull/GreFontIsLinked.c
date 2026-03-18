/*
 * XREFs of GreFontIsLinked @ 0x1C00F6F78
 * Callers:
 *     NtGdiFontIsLinked @ 0x1C00F6F70 (NtGdiFontIsLinked.c)
 * Callees:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002B2F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002F3C8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C00385A4 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreFontIsLinked(HDC a1)
{
  unsigned int v1; // esi
  int v2; // eax
  struct _FD_XFORM *v3; // rbx
  __int64 v4; // rdi
  char v6; // cl
  _QWORD v7[6]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v8[8]; // [rsp+50h] [rbp-48h] BYREF
  struct _FD_XFORM *v9; // [rsp+A8h] [rbp+10h] BYREF

  v1 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  if ( v7[0] )
  {
    v2 = RFONTOBJ::bInit(&v9, (struct XDCOBJ *)v7, 0, 2u);
    v3 = v9;
    if ( v2 )
      GreAcquireSemaphore(*(_QWORD *)&v9[33].eXX);
    if ( !v3 )
      goto LABEL_13;
    v4 = *(_QWORD *)&v3[7].eXX;
    GreAcquireSemaphore(ghsemEUDC1);
    ++gcEUDCCount;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
    if ( v4 && (*(_DWORD *)(v4 + 12) & 8) == 0 )
    {
      if ( LODWORD(v3[44].eYY) )
      {
        if ( !gbSystemDBCSFontEnabled )
          goto LABEL_12;
      }
      else if ( *(_OWORD *)&gappfeSysEUDC == 0LL )
      {
        if ( !bFinallyInitializeFontAssocDefault
          || (IFIOBJR::IFIOBJR(
                (IFIOBJR *)v8,
                *(const struct _IFIMETRICS **)(v4 + 32),
                (struct RFONTOBJ *)&v9,
                (struct DCOBJ *)v7),
              v6 = *(_BYTE *)(v8[0] + 44LL),
              v6 == 1)
          || (unsigned __int8)(v6 - 3) <= 0xFBu
          || ((unsigned __int8)fFontAssocStatus & (unsigned __int8)(v6 + 2) & 0xF) == 0 )
        {
          if ( *(_QWORD *)(v4 + 128) )
            v1 = 1;
          goto LABEL_12;
        }
      }
      v1 = 1;
    }
LABEL_12:
    GreAcquireSemaphore(ghsemEUDC1);
    --gcEUDCCount;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
LABEL_13:
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v9);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v7);
  return v1;
}
