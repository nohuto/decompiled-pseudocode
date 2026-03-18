/*
 * XREFs of NtGdiGetCharWidthW @ 0x14027FDD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x14006FBA8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     PALLOCNOZ @ 0x140184030 (PALLOCNOZ.c)
 *     ?GrepGetCharWidthW@@YAHAEAVDCOBJ@@IIPEAGKPEAX@Z @ 0x1401C524C (-GrepGetCharWidthW@@YAHAEAVDCOBJ@@IIPEAGKPEAX@Z.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x140282670 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14033A28C (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 */

__int64 __fastcall NtGdiGetCharWidthW(HDC a1, __int64 a2, __int64 a3, const void *a4, char a5, void *a6)
{
  __int64 v7; // r14
  unsigned int CharWidthW; // edi
  float *v10; // rsi
  void *v11; // r15
  int v12; // ebx
  __int64 SessionState; // rax
  _BYTE v15[56]; // [rsp+48h] [rbp-E0h] BYREF
  _QWORD v16[21]; // [rsp+80h] [rbp-A8h] BYREF
  unsigned int v17; // [rsp+138h] [rbp+10h]

  v17 = a2;
  v7 = (unsigned int)a3;
  CharWidthW = 0;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0;
  if ( !(_DWORD)a3 )
    return 0LL;
  if ( a4 )
  {
    v12 = 1;
    if ( (unsigned int)a3 <= 0x1388000 )
      v11 = (void *)PALLOCNOZ(2 * (int)a3, 1886221383LL, a3);
  }
  if ( !v12 || v11 )
  {
    if ( (unsigned int)v7 <= 0x9C4000 )
      v10 = (float *)AllocFreeTmpBuffer((unsigned int)(4 * v7));
    if ( v10 )
    {
      if ( v12 )
        GreProbeAndReadFromUntrustedVa(v11, 2 * v7, a4, 2 * v7, 1uLL);
      SessionState = W32GetSessionState((_DWORD)a1, a2);
      EUDCCountRegion::EUDCCountRegion(
        (EUDCCountRegion *)v15,
        (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4864LL));
      if ( !EUDCCountRegion::IsReady((EUDCCountRegion *)v15) )
      {
        EngSetLastError(0x15u);
LABEL_15:
        EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v15);
        return 0LL;
      }
      APIDCOBJ::APIDCOBJ((APIDCOBJ *)v16, a1);
      if ( !v16[0] )
      {
        EngSetLastError(6u);
        APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v16);
        goto LABEL_15;
      }
      CharWidthW = GrepGetCharWidthW((struct DCOBJ *)v16, v17, v7, (unsigned __int16 *)v11, a5, v10);
      APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v16);
      EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v15);
      if ( CharWidthW )
        GreProbeAndWriteToUntrustedVa(a6, 4LL * (unsigned int)v7, v10, 4LL * (unsigned int)v7, 1uLL);
      FreeTmpBuffer(v10);
    }
    if ( v12 )
      Win32FreePool(v11);
  }
  return CharWidthW;
}
