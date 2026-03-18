/*
 * XREFs of ?dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z @ 0x1C027FB10
 * Callers:
 *     NtGdiGetDCDword @ 0x1C00D4D40 (NtGdiGetDCDword.c)
 * Callees:
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0029850 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x1C0029904 (--1LFONTOBJ@@QEAA@XZ.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C0029920 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C0126390 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall dwGetFontLanguageInfo(struct XDCOBJ *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp-10h] BYREF
  struct _POINTL v7; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v8; // [rsp+60h] [rbp+20h] BYREF
  unsigned int v9; // [rsp+68h] [rbp+28h] BYREF
  struct LFONT *v10; // [rsp+70h] [rbp+30h] BYREF
  __int64 v11; // [rsp+78h] [rbp+38h] BYREF

  v2 = 0x8000;
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  v11 = v3;
  if ( v3 )
  {
    if ( (*(_DWORD *)(v3 + 56) & 0x40) == 0 )
      PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v11);
    LFONTOBJ::LFONTOBJ(
      (LFONTOBJ *)&v10,
      *(struct HLFONT__ **)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 176LL),
      (struct PDEVOBJ *)&v11);
    if ( v10 )
    {
      v6 = ghsemPublicPFT;
      GreAcquireSemaphore(ghsemPublicPFT);
      v2 = 0;
      v4 = *((_QWORD *)LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v10, a1, &v9, &v7, &v8, 0) + 4);
      if ( *(_DWORD *)(v4 + 164) )
        v2 = 8;
      if ( (*(_DWORD *)(v4 + 48) & 0x80000001) != 0 )
        v2 |= 0x40000u;
      SEMOBJ::vUnlock((SEMOBJ *)&v6);
    }
    LFONTOBJ::~LFONTOBJ(&v10);
  }
  return v2;
}
