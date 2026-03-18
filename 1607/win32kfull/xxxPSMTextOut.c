/*
 * XREFs of xxxPSMTextOut @ 0x1C023C4C4
 * Callers:
 *     xxxDrawMenuBarUnderlines @ 0x1C0131828 (xxxDrawMenuBarUnderlines.c)
 *     ?xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C0236810 (-xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C023882C (xxxRealDrawMenuItem.c)
 * Callees:
 *     _GetTextMetricsW @ 0x1C0011560 (_GetTextMetricsW.c)
 *     GreExtTextOutWInternal @ 0x1C00399F8 (GreExtTextOutWInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     GreSetBkColor @ 0x1C00B1198 (GreSetBkColor.c)
 *     CALL_LPK @ 0x1C00B98EC (CALL_LPK.c)
 *     GetPrefixCount @ 0x1C00B9920 (GetPrefixCount.c)
 *     GreGetTextExtentW @ 0x1C0123640 (GreGetTextExtentW.c)
 *     GreGetTextColor @ 0x1C014F0D0 (GreGetTextColor.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     xxxClientPSMTextOut @ 0x1C020DDD8 (xxxClientPSMTextOut.c)
 */

unsigned __int8 *__fastcall xxxPSMTextOut(HDC a1, __int64 a2, __int64 a3, WCHAR *SourceString, int a5, int a6)
{
  unsigned __int16 *v6; // rsi
  int v8; // r13d
  int v10; // r12d
  int v11; // r15d
  __int64 ThreadWin32Thread; // rax
  unsigned __int8 *result; // rax
  __int64 v14; // rdx
  int PrefixCount; // edi
  __int64 v16; // r8
  int v17; // ebx
  LONG v18; // edi
  int TextColor; // eax
  int v20; // ebx
  struct tagSIZE v21; // [rsp+50h] [rbp-69h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-61h] BYREF
  _BYTE v23[4]; // [rsp+68h] [rbp-51h] BYREF
  int v24; // [rsp+6Ch] [rbp-4Dh]
  int v25; // [rsp+88h] [rbp-31h]
  struct tagRECT v26; // [rsp+A8h] [rbp-11h] BYREF

  v6 = &word_1C0334870;
  v8 = 0;
  v21 = 0LL;
  v10 = a3;
  v11 = a2;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, (__int64)SourceString);
  if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    return xxxClientPSMTextOut(a1, v11, v10, (char **)&DestinationString, a5, a6);
  }
  else if ( (unsigned __int64)a5 < 0xFF
         || (result = (unsigned __int8 *)Win32AllocPool(2LL * (a5 + 1), 1953657685LL),
             (v6 = (unsigned __int16 *)result) != 0LL) )
  {
    PrefixCount = GetPrefixCount((__int16 *)SourceString, a5, (__int64)v6, a5);
    if ( (a6 & 0x200000) == 0 )
      GreExtTextOutWInternal(a1, v11, v10, 0, 0LL, v6, a5 - HIWORD(PrefixCount), 0LL, 0LL, 0);
    if ( (_WORD)PrefixCount != 0xFFFF && (a6 & 0x100000) == 0 )
    {
      if ( (unsigned int)GetTextMetricsW(a1, (__int64)v23) )
      {
        v17 = v25;
        v8 = v24;
      }
      else
      {
        v17 = 0;
      }
      if ( (_WORD)PrefixCount )
      {
        GreGetTextExtentW(a1, v6, (unsigned __int16)PrefixCount, &v21, 1);
        v11 += v21.cx - v17;
      }
      GreGetTextExtentW(a1, &v6[(unsigned __int16)PrefixCount], 1u, &v21, 1);
      v26.left = v11;
      v18 = v8 + v10 + 1;
      v26.top = v18;
      v26.right = v11 + LOWORD(v21.cx) - v17 / 2;
      v26.bottom = v18 + 1;
      TextColor = GreGetTextColor(a1);
      v20 = GreSetBkColor(a1, TextColor);
      GreExtTextOutWInternal(a1, v11, v18, 2, &v26, (unsigned __int16 *)&qword_1C015B240, 0, 0LL, 0LL, 0);
      GreSetBkColor(a1, v20);
    }
    result = (unsigned __int8 *)&word_1C0334870;
    if ( v6 != &word_1C0334870 )
      return (unsigned __int8 *)Win32FreePool(v6, v14, v16);
  }
  return result;
}
