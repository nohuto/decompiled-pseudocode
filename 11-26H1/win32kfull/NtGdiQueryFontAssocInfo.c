/*
 * XREFs of NtGdiQueryFontAssocInfo @ 0x140281810
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x14006FBA8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@HK@Z @ 0x1400C3E98 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@HK@Z.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z @ 0x14010DE20 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x14010FB74 (--1LFONTOBJ@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x140282670 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14033A28C (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 */

__int64 __fastcall NtGdiQueryFontAssocInfo(HDC a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdi
  __int64 v6; // rdx
  int v7; // ecx
  __int64 SessionState; // rax
  __int64 v9; // rcx
  int v10; // edx
  struct LFONT *v11[2]; // [rsp+28h] [rbp-69h] BYREF
  _QWORD v12[14]; // [rsp+38h] [rbp-59h] BYREF
  _BYTE v13[64]; // [rsp+A8h] [rbp+17h] BYREF
  __int64 v14; // [rsp+F8h] [rbp+67h] BYREF

  v3 = 0;
  v4 = *(_QWORD *)(W32GetSessionState((_DWORD)a1, a2) + 96);
  if ( !a1 )
    return *(unsigned int *)(v4 + 18936);
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v12, a1);
  if ( !v12[0] )
  {
    EngSetLastError(6u);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v12);
    return 0LL;
  }
  SessionState = W32GetSessionState(v7, v6);
  EUDCCountRegion::EUDCCountRegion(
    (EUDCCountRegion *)v13,
    (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4864LL));
  if ( EUDCCountRegion::IsReady((EUDCCountRegion *)v13) )
  {
    v14 = 0LL;
    RFONTOBJ::vInit((RFONTOBJ *)&v14, (struct XDCOBJ *)v12, 0, 2u);
    if ( !v14 )
      goto LABEL_19;
    v9 = *(_QWORD *)(v14 + 120);
    LOBYTE(v9) = *(_BYTE *)(*(_QWORD *)(v9 + 32) + 44LL);
    if ( (_BYTE)v9 == 0x80 || (unsigned __int8)(v9 + 127) <= 7u && (v10 = 161, _bittest(&v10, v9 + 127)) )
    {
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v14);
      v3 = 2;
      goto LABEL_20;
    }
    if ( (_BYTE)v9 )
    {
      if ( (_BYTE)v9 == 0xFF )
      {
        if ( (*(_DWORD *)(v4 + 18936) & 1) == 0 )
          goto LABEL_19;
        goto LABEL_14;
      }
    }
    else if ( (*(_DWORD *)(v4 + 18936) & 2) != 0 )
    {
LABEL_14:
      LFONTOBJ::LFONTOBJ((LFONTOBJ *)v11, *(struct HLFONT__ **)(v12[0] + 1744LL), 0LL);
      if ( v11[0] && (*((_BYTE *)v11[0] + 277) & 0x40) == 0 )
      {
        LFONTOBJ::~LFONTOBJ(v11);
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v14);
        v3 = 1;
        goto LABEL_20;
      }
      LFONTOBJ::~LFONTOBJ(v11);
LABEL_19:
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v14);
      goto LABEL_20;
    }
    if ( (_BYTE)v9 != 2 || (*(_DWORD *)(v4 + 18936) & 4) == 0 )
      goto LABEL_19;
    goto LABEL_14;
  }
LABEL_20:
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v13);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v12);
  return v3;
}
