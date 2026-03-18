/*
 * XREFs of xxxPSMTextOut @ 0x1401FB8A8
 * Callers:
 *     xxxDrawMenuBarUnderlines @ 0x14017819C (xxxDrawMenuBarUnderlines.c)
 *     xxxRealDrawMenuItem @ 0x1401F9D14 (xxxRealDrawMenuItem.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1401FAD80 (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 * Callees:
 *     GreSetBkColor @ 0x140027C40 (GreSetBkColor.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _GetTextMetricsW @ 0x140122AE8 (_GetTextMetricsW.c)
 *     ?CALL_LPK@@YAHQEAUtagTHREADINFO@@@Z @ 0x140123D9C (-CALL_LPK@@YAHQEAUtagTHREADINFO@@@Z.c)
 *     GreExtTextOutW @ 0x14012725C (GreExtTextOutW.c)
 *     GreGetTextColor @ 0x1401F0918 (GreGetTextColor.c)
 *     GetPrefixCount @ 0x1401FB59C (GetPrefixCount.c)
 *     GreGetTextExtentW @ 0x1401FB67C (GreGetTextExtentW.c)
 *     xxxClientPSMTextOut @ 0x1401FBB08 (xxxClientPSMTextOut.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall xxxPSMTextOut(HDC a1, __int64 a2, unsigned int a3, WCHAR *a4, unsigned int a5, int a6)
{
  unsigned int v8; // r15d
  __int64 v10; // r12
  unsigned __int16 *v11; // rsi
  __int64 v12; // rcx
  struct tagTHREADINFO *v13; // rax
  int PrefixCount; // edi
  int v15; // ebx
  int v16; // r12d
  unsigned int v17; // edi
  int TextColor; // eax
  int v19; // ebx
  struct tagSIZE v20; // [rsp+40h] [rbp-69h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-61h] BYREF
  _OWORD v22[2]; // [rsp+58h] [rbp-51h] BYREF
  __int128 v23; // [rsp+78h] [rbp-31h]
  __int64 v24; // [rsp+88h] [rbp-21h]
  int v25; // [rsp+90h] [rbp-19h]
  _DWORD v26[4]; // [rsp+98h] [rbp-11h] BYREF

  v8 = a2;
  memset(v22, 0, sizeof(v22));
  v10 = W32GetUserSessionState(a1, a2) + 57016;
  v24 = 0LL;
  v11 = (unsigned __int16 *)v10;
  v25 = 0;
  v20 = 0LL;
  *(_QWORD *)&DestinationString.Length = v10;
  v23 = 0LL;
  v13 = PtiCurrent(v12);
  if ( (unsigned int)CALL_LPK(v13) )
  {
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, a4);
    xxxClientPSMTextOut(a1, a5, a6);
    return;
  }
  if ( a5 < 0xFF || (v11 = (unsigned __int16 *)Win32AllocPoolZInit(2LL * (int)(a5 + 1), 1953657685LL)) != 0LL )
  {
    PrefixCount = GetPrefixCount((__int16 *)a4, a5, (__int64)v11, a5);
    if ( (a6 & 0x200000) == 0 )
      GreExtTextOutW(a1, v8, a3, 0, 0LL, (__int64)v11, a5 - HIWORD(PrefixCount));
    if ( (_WORD)PrefixCount == 0xFFFF || (a6 & 0x100000) != 0 )
    {
      if ( v11 == (unsigned __int16 *)v10 )
        return;
      goto LABEL_17;
    }
    if ( (unsigned int)GetTextMetricsW(a1, (__int64)v22) )
    {
      v15 = v23;
      v16 = DWORD1(v22[0]);
    }
    else
    {
      v15 = 0;
      v16 = 0;
    }
    if ( (_WORD)PrefixCount )
    {
      GreGetTextExtentW(a1, v11, (unsigned __int16)PrefixCount, &v20);
      v8 += v20.cx - v15;
    }
    GreGetTextExtentW(a1, &v11[(unsigned __int16)PrefixCount], 1u, &v20);
    v17 = v16 + a3 + 1;
    v26[0] = v8;
    v26[1] = v17;
    v26[3] = v17 + 1;
    v26[2] = v8 + LOWORD(v20.cx) - v15 / 2;
    TextColor = GreGetTextColor(a1);
    v19 = GreSetBkColor(a1, TextColor);
    GreExtTextOutW(a1, v8, v17, 2, (__int64)v26, (__int64)&pszFormat, 0);
    GreSetBkColor(a1, v19);
    if ( v11 != *(unsigned __int16 **)&DestinationString.Length )
LABEL_17:
      Win32FreePool(v11);
  }
}
