/*
 * XREFs of NtGdiEudcLoadUnloadLink @ 0x140325810
 * Callers:
 *     <none>
 * Callees:
 *     __report_rangecheckfailure @ 0x140297D70 (__report_rangecheckfailure.c)
 *     GreEudcLoadLinkW @ 0x14032453C (GreEudcLoadLinkW.c)
 *     GreEudcUnloadLinkW @ 0x140324810 (GreEudcUnloadLinkW.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiEudcLoadUnloadLink(
        _WORD *a1,
        unsigned int a2,
        const void *a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        int a7)
{
  __int64 v7; // r15
  unsigned int v10; // ebx
  unsigned int v11; // r12d
  void *v12; // rsi
  __int64 v13; // rdx
  unsigned int v14; // r9d
  unsigned int LinkW; // eax
  _WORD v18[40]; // [rsp+50h] [rbp-98h] BYREF

  v7 = a4;
  v10 = 0;
  if ( a2 <= 0x20 && a3 && a4 - 1 <= 0x122 )
  {
    v11 = 2 * a4 + 2;
    v12 = (void *)AllocFreeTmpBuffer(v11);
    if ( v12 )
    {
      if ( a1 )
      {
        GreProbeAndReadFromUntrustedVa(v18, 0x21uLL, a1, 2LL * a2, 2uLL);
        if ( 2 * (unsigned __int64)a2 >= 0x42 )
          _report_rangecheckfailure();
        v18[a2] = 0;
        a1 = v18;
      }
      GreProbeAndReadFromUntrustedVa(v12, v11, a3, 2 * v7, 2uLL);
      *((_WORD *)v12 + v7) = 0;
      if ( a7 )
        LinkW = GreEudcLoadLinkW(a1, v13, (char *)v12, v14, a5, a6);
      else
        LinkW = GreEudcUnloadLinkW(a1, v13, (unsigned __int16 *)v12);
      v10 = LinkW;
      FreeTmpBuffer(v12);
    }
    return v10;
  }
  else
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
}
