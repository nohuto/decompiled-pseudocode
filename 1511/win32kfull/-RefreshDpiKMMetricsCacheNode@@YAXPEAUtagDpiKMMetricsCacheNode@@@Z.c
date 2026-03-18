/*
 * XREFs of ?RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01E9540
 * Callers:
 *     GetDPIMETRICSForDpi @ 0x1C0015CB8 (GetDPIMETRICSForDpi.c)
 *     GetDPIServerInfoForDpi @ 0x1C00C67B4 (GetDPIServerInfoForDpi.c)
 * Callees:
 *     GreSelectFont @ 0x1C0018350 (GreSelectFont.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?CreateScaledFont@@YAHPEAUHFONT__@@PEAPEAU1@HH@Z @ 0x1C01E9280 (-CreateScaledFont@@YAHPEAUHFONT__@@PEAPEAU1@HH@Z.c)
 *     ?EnsureScaledFontAndGetDimensions@@YAXPEAUHFONT__@@PEAPEAU1@HHPEAH2@Z @ 0x1C01E93E8 (-EnsureScaledFontAndGetDimensions@@YAXPEAUHFONT__@@PEAPEAU1@HHPEAH2@Z.c)
 */

void __fastcall RefreshDpiKMMetricsCacheNode(struct tagDpiKMMetricsCacheNode *a1)
{
  __int64 v2; // r8
  __int64 v3; // r8
  __int64 v4; // rdi
  int CharDimensions; // eax
  int v6; // edx
  int v7; // ecx
  int v8; // ecx
  int v9; // edx
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r8
  _BYTE v13[4]; // [rsp+30h] [rbp-68h] BYREF
  int v14; // [rsp+34h] [rbp-64h]
  int v15; // [rsp+40h] [rbp-58h]
  int v16; // [rsp+50h] [rbp-48h]

  if ( *((_WORD *)a1 + 1) )
  {
    EnsureScaledFontAndGetDimensions(
      *(HBRUSH *)(gpsi + 4136LL),
      (HFONT *)a1 + 3,
      (__int64)a1 + 196,
      *(unsigned __int16 *)a1,
      (int *)a1 + 48,
      (int *)a1 + 49);
    EnsureScaledFontAndGetDimensions(
      *(HBRUSH *)(gpsi + 4144LL),
      (HFONT *)a1 + 4,
      (__int64)a1 + 44,
      *(unsigned __int16 *)a1,
      (int *)a1 + 10,
      (int *)a1 + 11);
    EnsureScaledFontAndGetDimensions(
      (HBRUSH)gdpi96[5],
      (HFONT *)a1 + 20,
      v2,
      *(unsigned __int16 *)a1,
      (int *)a1 + 50,
      (int *)a1 + 51);
    if ( !*((_QWORD *)a1 + 16) )
    {
      if ( (unsigned int)CreateScaledFont((HBRUSH)gdpi96[1], (HFONT *)a1 + 16, v3, *(unsigned __int16 *)a1) )
      {
        v4 = GreSelectFont(*(_QWORD *)(gpDispInfo + 32LL), *((_QWORD *)a1 + 16));
        CharDimensions = GetCharDimensions(*(_QWORD *)(gpDispInfo + 32LL), v13, (char *)a1 + 172);
        v6 = v15;
        v7 = v16;
        *((_DWORD *)a1 + 42) = CharDimensions;
        *((_DWORD *)a1 + 44) = v7;
        *((_DWORD *)a1 + 45) = v6;
        v8 = v6 + *((_DWORD *)a1 + 43) + *(_DWORD *)(gpsi + 2064LL);
        v9 = v14;
        *((_DWORD *)a1 + 46) = v14;
        *((_DWORD *)a1 + 47) = v8;
        *((_DWORD *)a1 + 46) = v9 + *(_DWORD *)(gpsi + 1904LL);
        GreSelectFont(*(_QWORD *)(gpDispInfo + 32LL), v4);
      }
    }
    EnsureScaledFontAndGetDimensions((HBRUSH)gdpi96[0], (HFONT *)a1 + 15, v3, *(unsigned __int16 *)a1, 0LL, 0LL);
    EnsureScaledFontAndGetDimensions((HBRUSH)gdpi96[2], (HFONT *)a1 + 17, v10, *(unsigned __int16 *)a1, 0LL, 0LL);
    EnsureScaledFontAndGetDimensions((HBRUSH)gdpi96[3], (HFONT *)a1 + 18, v11, *(unsigned __int16 *)a1, 0LL, 0LL);
    EnsureScaledFontAndGetDimensions((HBRUSH)gdpi96[4], (HFONT *)a1 + 19, v12, *(unsigned __int16 *)a1, 0LL, 0LL);
    *((_WORD *)a1 + 1) = 0;
  }
}
