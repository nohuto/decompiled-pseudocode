/*
 * XREFs of xxxPSMTextOut @ 0x1C02449F4
 * Callers:
 *     xxxDrawMenuBarUnderlines @ 0x1C010E45C (xxxDrawMenuBarUnderlines.c)
 *     ?xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C023EEA4 (-xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C0242490 (xxxRealDrawMenuItem.c)
 * Callees:
 *     GreSetBkColor @ 0x1C0015630 (GreSetBkColor.c)
 *     GreExtTextOutWInternal @ 0x1C0040128 (GreExtTextOutWInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     CALL_LPK @ 0x1C00CD148 (CALL_LPK.c)
 *     GetPrefixCount @ 0x1C00CD17C (GetPrefixCount.c)
 *     _GetTextMetricsW @ 0x1C00E7D40 (_GetTextMetricsW.c)
 *     GreGetTextExtentW @ 0x1C01027C0 (GreGetTextExtentW.c)
 *     GreGetTextColor @ 0x1C01450AC (GreGetTextColor.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     xxxClientPSMTextOut @ 0x1C0214F8C (xxxClientPSMTextOut.c)
 */

unsigned __int8 *__fastcall xxxPSMTextOut(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        WCHAR *SourceString,
        int a5,
        unsigned int a6)
{
  unsigned __int16 *v6; // rsi
  int v8; // r13d
  __int64 ThreadWin32Thread; // rax
  unsigned __int8 *result; // rax
  int PrefixCount; // edi
  int v15; // ebx
  LONG v16; // edi
  int TextColor; // eax
  int v18; // ebx
  struct tagSIZE v19; // [rsp+50h] [rbp-69h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-61h] BYREF
  _BYTE v21[4]; // [rsp+68h] [rbp-51h] BYREF
  int v22; // [rsp+6Ch] [rbp-4Dh]
  int v23; // [rsp+88h] [rbp-31h]
  struct tagRECT v24; // [rsp+A8h] [rbp-11h] BYREF

  v6 = &word_1C032F310;
  v8 = 0;
  v19 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    return xxxClientPSMTextOut(a1, a2, a3, (char **)&DestinationString, a5, a6);
  }
  else if ( (unsigned __int64)a5 < 0xFF
         || (result = (unsigned __int8 *)Win32AllocPool(2LL * (a5 + 1)), (v6 = (unsigned __int16 *)result) != 0LL) )
  {
    PrefixCount = GetPrefixCount((__int16 *)SourceString, a5, v6, a5);
    if ( (a6 & 0x200000) == 0 )
      GreExtTextOutWInternal(a1, a2, a3, 0, 0LL, v6, a5 - HIWORD(PrefixCount), 0LL, 0LL, 0);
    if ( (_WORD)PrefixCount != 0xFFFF && (a6 & 0x100000) == 0 )
    {
      if ( (unsigned int)GetTextMetricsW(a1, (__int64)v21) )
      {
        v15 = v23;
        v8 = v22;
      }
      else
      {
        v15 = 0;
      }
      if ( (_WORD)PrefixCount )
      {
        GreGetTextExtentW(a1, v6, (unsigned __int16)PrefixCount, &v19, 1);
        a2 += v19.cx - v15;
      }
      GreGetTextExtentW(a1, &v6[(unsigned __int16)PrefixCount], 1u, &v19, 1);
      v24.left = a2;
      v16 = v8 + a3 + 1;
      v24.top = v16;
      v24.right = a2 + LOWORD(v19.cx) - v15 / 2;
      v24.bottom = v16 + 1;
      TextColor = GreGetTextColor(a1);
      v18 = GreSetBkColor(a1, TextColor);
      GreExtTextOutWInternal(a1, a2, v16, 2, &v24, (unsigned __int16 *)&word_1C0153C60, 0, 0LL, 0LL, 0);
      GreSetBkColor(a1, v18);
    }
    result = (unsigned __int8 *)&word_1C032F310;
    if ( v6 != &word_1C032F310 )
      return (unsigned __int8 *)Win32FreePool(v6);
  }
  return result;
}
