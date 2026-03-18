/*
 * XREFs of NtGdiGetCharABCWidthsW @ 0x14027FA40
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x14006FBA8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     PALLOCNOZ @ 0x140184030 (PALLOCNOZ.c)
 *     ?GrepGetCharABCWidthsW@@YAHAEAVDCOBJ@@IKPEAGKPEAX@Z @ 0x1401D5AD0 (-GrepGetCharABCWidthsW@@YAHAEAVDCOBJ@@IKPEAGKPEAX@Z.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x140282670 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14033A28C (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 */

__int64 __fastcall NtGdiGetCharABCWidthsW(HDC a1, __int64 a2, __int64 a3, const void *a4, char a5, void *a6)
{
  __int64 v6; // r12
  unsigned int CharABCWidthsW; // esi
  float *v8; // rbx
  void *v9; // rdi
  int v10; // r15d
  unsigned int v11; // r14d
  __int64 SessionState; // rax
  _BYTE v14[64]; // [rsp+50h] [rbp-E8h] BYREF
  _QWORD v15[21]; // [rsp+90h] [rbp-A8h] BYREF
  unsigned int v17; // [rsp+148h] [rbp+10h]

  v17 = a2;
  v6 = (unsigned int)a3;
  CharABCWidthsW = 0;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0;
  v11 = 0;
  if ( !a6 )
    return 0LL;
  if ( a4 )
  {
    v10 = 1;
    if ( (unsigned int)(a3 - 1) <= 0x1387FFF )
      v9 = (void *)PALLOCNOZ(2 * (int)a3, 1886221383LL, a3);
  }
  if ( !v10 || v9 )
  {
    if ( (unsigned int)v6 <= 0x341555 )
    {
      v11 = 12 * v6;
      v8 = (float *)AllocFreeTmpBuffer((unsigned int)(12 * v6));
    }
    if ( v8 )
    {
      if ( v10 )
        GreProbeAndReadFromUntrustedVa(v9, 2 * v6, a4, 2 * v6, 1uLL);
      SessionState = W32GetSessionState((_DWORD)a1, a2);
      EUDCCountRegion::EUDCCountRegion(
        (EUDCCountRegion *)v14,
        (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4864LL));
      if ( EUDCCountRegion::IsReady((EUDCCountRegion *)v14) )
      {
        APIDCOBJ::APIDCOBJ((APIDCOBJ *)v15, a1);
        if ( v15[0] )
        {
          CharABCWidthsW = GrepGetCharABCWidthsW((struct DCOBJ *)v15, v17, v6, (unsigned __int16 *)v9, a5, v8);
        }
        else
        {
          EngSetLastError(6u);
          CharABCWidthsW = 0;
        }
        if ( CharABCWidthsW )
          GreProbeAndWriteToUntrustedVa(a6, v11, v8, v11, 1uLL);
        APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v15);
      }
      else
      {
        EngSetLastError(0x15u);
        CharABCWidthsW = 0;
      }
      EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v14);
      FreeTmpBuffer(v8);
    }
    if ( v10 )
    {
      if ( v9 )
        Win32FreePool(v9);
    }
  }
  return CharABCWidthsW;
}
