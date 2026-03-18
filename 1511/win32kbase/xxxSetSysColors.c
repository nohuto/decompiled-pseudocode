/*
 * XREFs of xxxSetSysColors @ 0x1C0049F7C
 * Callers:
 *     ?ResetSystemColors@@YAXXZ @ 0x1C006A0AC (-ResetSystemColors@@YAXXZ.c)
 *     xxxODI_ColorInit @ 0x1C006C4E0 (xxxODI_ColorInit.c)
 *     NtUserSetSysColors @ 0x1C007A510 (NtUserSetSysColors.c)
 * Callees:
 *     xxxInternalInvalidate_0 @ 0x1C00023E8 (xxxInternalInvalidate_0.c)
 *     IsCheckWinstaAttributeAccessSupported_0 @ 0x1C0002B40 (IsCheckWinstaAttributeAccessSupported_0.c)
 *     CheckWinstaAttributeAccess_0 @ 0x1C0002B48 (CheckWinstaAttributeAccess_0.c)
 *     IsRecolorDeskPatternSupported_0 @ 0x1C0002B50 (IsRecolorDeskPatternSupported_0.c)
 *     RecolorDeskPattern_0 @ 0x1C0002B58 (RecolorDeskPattern_0.c)
 *     IsxxxSetWindowNCMetricsSupported_0 @ 0x1C0002B60 (IsxxxSetWindowNCMetricsSupported_0.c)
 *     xxxSetWindowNCMetrics_0 @ 0x1C0002B68 (xxxSetWindowNCMetrics_0.c)
 *     IsxxxSendNotifyMessageSupported_0 @ 0x1C0002B70 (IsxxxSendNotifyMessageSupported_0.c)
 *     xxxSendNotifyMessage_0 @ 0x1C0002B78 (xxxSendNotifyMessage_0.c)
 *     IsxxxInternalInvalidateSupported_0 @ 0x1C0002B80 (IsxxxInternalInvalidateSupported_0.c)
 *     SetSysColor @ 0x1C0049E44 (SetSysColor.c)
 *     GreGetDeviceCaps @ 0x1C004AB10 (GreGetDeviceCaps.c)
 */

__int64 __fastcall xxxSetSysColors(__int64 a1, unsigned int a2, char *a3, unsigned int *a4, char a5)
{
  char v5; // di
  __int64 v6; // rsi
  int v9; // r8d
  int v10; // eax
  unsigned int *v11; // r14
  __int64 v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned int v15; // edx

  v5 = a5;
  v6 = a2;
  if ( (a5 & 1) != 0
    && (int)IsCheckWinstaAttributeAccessSupported_0() >= 0
    && !(unsigned int)CheckWinstaAttributeAccess_0() )
  {
    return 0LL;
  }
  if ( (int)GreGetDeviceCaps(*(_QWORD *)(gpDispInfo + 24), 24LL) <= 16 )
    v5 = a5 | 8;
  v9 = 1146882;
  v10 = v5 & 4;
  if ( (v5 & 4) == 0 )
    goto LABEL_12;
  if ( (_DWORD)v6 )
  {
    v11 = a4;
    v12 = v6;
    do
    {
      v13 = *(unsigned int *)((char *)v11 + a3 - (char *)a4);
      if ( (unsigned int)v13 <= 0x14 && _bittest(&v9, v13) )
      {
        SetSysColor(v13, *v11, v5);
        v9 = 1146882;
      }
      ++v11;
      --v12;
    }
    while ( v12 );
    v10 = v5 & 4;
LABEL_12:
    if ( (_DWORD)v6 )
    {
      do
      {
        v14 = *(unsigned int *)a3;
        a3 += 4;
        v15 = *a4++;
        if ( (unsigned int)v14 < 0x1F && (!v10 || (unsigned int)v14 > 0x14 || !_bittest(&v9, v14)) )
          SetSysColor(v14, v15, v5);
        v10 = v5 & 4;
        v9 = 1146882;
        --v6;
      }
      while ( v6 );
    }
  }
  if ( (v5 & 1) != 0 )
  {
    if ( (int)IsRecolorDeskPatternSupported_0() >= 0 )
      RecolorDeskPattern_0();
    if ( (int)IsxxxSetWindowNCMetricsSupported_0() >= 0 )
      xxxSetWindowNCMetrics_0();
    if ( (int)IsxxxSendNotifyMessageSupported_0() >= 0 )
      xxxSendNotifyMessage_0();
    if ( (int)IsxxxInternalInvalidateSupported_0() >= 0 )
      xxxInternalInvalidate_0();
  }
  return 1LL;
}
