/*
 * XREFs of GreGetCharSet @ 0x1C00E1358
 * Callers:
 *     GreGetTextCharsetInfo @ 0x1C00E124C (GreGetTextCharsetInfo.c)
 *     NtGdiGetCharSet @ 0x1C00E1350 (NtGdiGetCharSet.c)
 * Callees:
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C001CB54 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0022088 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x1C002213C (--1LFONTOBJ@@QEAA@XZ.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C0022154 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002DA80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002DBD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetCharSet(HDC a1)
{
  __int64 v1; // rdx
  unsigned int v2; // ebx
  __int64 v4; // [rsp+30h] [rbp-30h] BYREF
  __int64 v5; // [rsp+38h] [rbp-28h] BYREF
  struct _POINTL v6; // [rsp+40h] [rbp-20h] BYREF
  __int64 v7; // [rsp+48h] [rbp-18h] BYREF
  int v8; // [rsp+50h] [rbp-10h]
  int v9; // [rsp+54h] [rbp-Ch]
  unsigned int v10; // [rsp+78h] [rbp+18h] BYREF
  unsigned int v11; // [rsp+80h] [rbp+20h] BYREF
  struct LFONT *v12; // [rsp+88h] [rbp+28h] BYREF

  v7 = 0LL;
  v8 = 0;
  v9 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v7, a1);
  v1 = v7;
  if ( v7 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v7 + 80) + 8LL) & 0x10) == 0 )
    {
LABEL_7:
      v2 = *(_DWORD *)(*(_QWORD *)(v1 + 80) + 64LL);
      goto LABEL_8;
    }
    v4 = *(_QWORD *)(v7 + 48);
    if ( (*(_DWORD *)(v4 + 56) & 0x40) == 0 )
    {
      PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v4);
      v1 = v7;
    }
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v12, *(struct HLFONT__ **)(*(_QWORD *)(v1 + 80) + 176LL), (struct PDEVOBJ *)&v4);
    if ( v12 )
    {
      v5 = ghsemPublicPFT;
      GreAcquireSemaphore(ghsemPublicPFT);
      LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v12, (struct XDCOBJ *)&v7, &v11, &v6, &v10, 0);
      SEMOBJ::vUnlock((SEMOBJ *)&v5);
      LFONTOBJ::~LFONTOBJ(&v12);
      v1 = v7;
      goto LABEL_7;
    }
    LFONTOBJ::~LFONTOBJ(&v12);
  }
  else
  {
    EngSetLastError(6u);
  }
  v1 = v7;
  v2 = 0x10000;
LABEL_8:
  if ( v1 )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v7);
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 12));
  }
  return v2;
}
