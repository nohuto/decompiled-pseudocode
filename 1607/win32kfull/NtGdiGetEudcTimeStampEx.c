/*
 * XREFs of NtGdiGetEudcTimeStampEx @ 0x1C028A810
 * Callers:
 *     <none>
 * Callees:
 *     ?FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z @ 0x1C0060E0C (-FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     __report_rangecheckfailure @ 0x1C01BF698 (__report_rangecheckfailure.c)
 */

__int64 __fastcall NtGdiGetEudcTimeStampEx(char *Src, unsigned int a2, int a3)
{
  size_t v4; // rdi
  wchar_t Str1[40]; // [rsp+30h] [rbp-68h] BYREF

  if ( a3 )
    return (unsigned int)dword_1C032929C;
  if ( !Src || !a2 )
    return (unsigned int)dword_1C0329298;
  if ( a2 > 0x20 )
  {
    EngSetLastError(0x57u);
  }
  else
  {
    v4 = 2LL * a2;
    if ( v4 )
    {
      if ( ((unsigned __int8)Src & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&Src[v4] > W32UserProbeAddress || &Src[v4] < Src )
        *W32UserProbeAddress = 0;
    }
    memmove(Str1, Src, v4);
    if ( v4 >= 0x42 )
      _report_rangecheckfailure();
    Str1[v4 / 2] = 0;
  }
  return 0LL;
}
