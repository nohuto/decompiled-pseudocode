/*
 * XREFs of GreGetAspectRatioFilter @ 0x14031C9D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEBAKXZ @ 0x14010F6B4 (-ulLogPixelsX@PDEVOBJ@@QEBAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEBAKXZ @ 0x14010F700 (-ulLogPixelsY@PDEVOBJ@@QEBAKXZ.c)
 */

__int64 __fastcall GreGetAspectRatioFilter(HDC a1, _DWORD *a2)
{
  unsigned int v2; // ebx
  _QWORD v5[15]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v6; // [rsp+A8h] [rbp+10h] BYREF

  v2 = 0;
  if ( a2 )
  {
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v5, a1);
    if ( v5[0] )
    {
      v6 = *(_QWORD *)(v5[0] + 48LL);
      if ( (*(_DWORD *)(*(_QWORD *)(v5[0] + 976LL) + 236LL) & 1) != 0 )
      {
        *a2 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v6);
        v2 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v6);
      }
      else
      {
        *a2 = 0;
      }
      a2[1] = v2;
      v2 = 1;
    }
    else
    {
      EngSetLastError(6u);
    }
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v5);
    return v2;
  }
  else
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
}
