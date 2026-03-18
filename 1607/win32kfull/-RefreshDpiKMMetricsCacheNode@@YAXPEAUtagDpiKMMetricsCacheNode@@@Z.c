/*
 * XREFs of ?RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01DFC64
 * Callers:
 *     GetDPIMETRICSForDpiUnsafe @ 0x1C00B5C20 (GetDPIMETRICSForDpiUnsafe.c)
 *     GetDPIServerInfoForDpiUnsafe @ 0x1C00B7700 (GetDPIServerInfoForDpiUnsafe.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?EnsureScaledFontAndGetDimensions@@YAXPEAUHFONT__@@PEAPEAU1@HHPEAH2@Z @ 0x1C01DFBD0 (-EnsureScaledFontAndGetDimensions@@YAXPEAUHFONT__@@PEAPEAU1@HHPEAH2@Z.c)
 *     CreateScaledFont @ 0x1C01DFEC4 (CreateScaledFont.c)
 *     GreSelectFontInternal @ 0x1C0292FA8 (GreSelectFontInternal.c)
 */

void __fastcall RefreshDpiKMMetricsCacheNode(struct tagDpiKMMetricsCacheNode *a1)
{
  __int64 v2; // r8
  __int64 v3; // r8
  int CharDimensions; // eax
  int v5; // edx
  int v6; // ecx
  int v7; // ecx
  int v8; // edx
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // r8
  _BYTE v12[4]; // [rsp+30h] [rbp-68h] BYREF
  int v13; // [rsp+34h] [rbp-64h]
  int v14; // [rsp+40h] [rbp-58h]
  int v15; // [rsp+50h] [rbp-48h]

  if ( *((_WORD *)a1 + 1) )
  {
    EnsureScaledFontAndGetDimensions(
      *(HFONT *)(gpsi + 5528LL),
      (HFONT *)a1 + 3,
      (__int64)a1 + 196,
      *(unsigned __int16 *)a1,
      (int *)a1 + 48,
      (int *)a1 + 49);
    EnsureScaledFontAndGetDimensions(
      *(HFONT *)(gpsi + 5536LL),
      (HFONT *)a1 + 4,
      (__int64)a1 + 44,
      *(unsigned __int16 *)a1,
      (int *)a1 + 10,
      (int *)a1 + 11);
    EnsureScaledFontAndGetDimensions(
      (HFONT)gdpi96[5],
      (HFONT *)a1 + 20,
      v2,
      *(unsigned __int16 *)a1,
      (int *)a1 + 50,
      (int *)a1 + 51);
    if ( !*((_QWORD *)a1 + 16) )
    {
      if ( (unsigned int)CreateScaledFont(gdpi96[1], (char *)a1 + 128, v3, *(unsigned __int16 *)a1) )
      {
        GreSelectFontInternal(*(HDC *)(gpDispInfo + 32LL));
        CharDimensions = GetCharDimensions(*(_QWORD *)(gpDispInfo + 32LL), v12, (char *)a1 + 172);
        v5 = v14;
        v6 = v15;
        *((_DWORD *)a1 + 42) = CharDimensions;
        *((_DWORD *)a1 + 44) = v6;
        *((_DWORD *)a1 + 45) = v5;
        v7 = v5 + *((_DWORD *)a1 + 43) + *(_DWORD *)(gpsi + 2064LL);
        v8 = v13;
        *((_DWORD *)a1 + 46) = v13;
        *((_DWORD *)a1 + 47) = v7;
        *((_DWORD *)a1 + 46) = v8 + *(_DWORD *)(gpsi + 1904LL);
        GreSelectFontInternal(*(HDC *)(gpDispInfo + 32LL));
      }
    }
    EnsureScaledFontAndGetDimensions((HFONT)gdpi96[0], (HFONT *)a1 + 15, v3, *(unsigned __int16 *)a1, 0LL, 0LL);
    EnsureScaledFontAndGetDimensions((HFONT)gdpi96[2], (HFONT *)a1 + 17, v9, *(unsigned __int16 *)a1, 0LL, 0LL);
    EnsureScaledFontAndGetDimensions((HFONT)gdpi96[3], (HFONT *)a1 + 18, v10, *(unsigned __int16 *)a1, 0LL, 0LL);
    EnsureScaledFontAndGetDimensions((HFONT)gdpi96[4], (HFONT *)a1 + 19, v11, *(unsigned __int16 *)a1, 0LL, 0LL);
    *((_WORD *)a1 + 1) = 0;
  }
}
