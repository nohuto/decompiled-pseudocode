/*
 * XREFs of RtlCompareMemory @ 0x1800AA6B0
 * Callers:
 *     EtwpAddProviderToSession @ 0x180002188 (EtwpAddProviderToSession.c)
 *     RtlIsCapabilitySid @ 0x18000DD10 (RtlIsCapabilitySid.c)
 *     RtlGetAppContainerSidType @ 0x18000DD60 (RtlGetAppContainerSidType.c)
 *     RtlpFindGuidInSection @ 0x18001A0B4 (RtlpFindGuidInSection.c)
 *     RtlpHpSizeHeap @ 0x180046360 (RtlpHpSizeHeap.c)
 *     RtlpValidateHeapHeaders @ 0x18005D2F0 (RtlpValidateHeapHeaders.c)
 *     RtlpCheckBusyBlockTail @ 0x18005D4BC (RtlpCheckBusyBlockTail.c)
 *     EtwpAddWinRtProviderToSession @ 0x180079944 (EtwpAddWinRtProviderToSession.c)
 *     RtlIsPackageSid @ 0x1800867F0 (RtlIsPackageSid.c)
 *     RtlpHeapTrkTrackStack @ 0x18008ED9C (RtlpHeapTrkTrackStack.c)
 *     CompareNamesCaseSensitive @ 0x1800DF1A8 (CompareNamesCaseSensitive.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1800F2E18 (RtlpStdLogCapturedStackTrace.c)
 *     RtlpRegisterStackTrace @ 0x1800F9B54 (RtlpRegisterStackTrace.c)
 *     _ResFindFirstFileExW @ 0x180104254 (_ResFindFirstFileExW.c)
 * Callees:
 *     <none>
 */

SIZE_T __stdcall RtlCompareMemory(const void *Source1, const void *Source2, SIZE_T Length)
{
  _BYTE *v3; // rsi
  _BYTE *v4; // rdi
  __int64 v5; // rcx
  bool v6; // zf
  SIZE_T v7; // rcx
  bool v8; // zf
  bool v9; // zf
  SIZE_T v10; // r8
  SIZE_T v11; // rcx
  bool v13; // zf
  SIZE_T v14; // rcx

  v3 = Source1;
  v4 = Source2;
  if ( (((unsigned __int8)Source1 ^ (unsigned __int8)Source2) & 7) != 0 || Length < 8 )
  {
    v13 = Length == 0;
    if ( Length )
    {
      v14 = Length;
      do
      {
        if ( !v14 )
          break;
        v13 = *v3++ == *v4++;
        --v14;
      }
      while ( v13 );
      if ( !v13 )
        Length -= v14 + 1;
    }
    return Length;
  }
  else
  {
    v5 = -(int)Source1 & 7;
    if ( (_DWORD)v5 )
    {
      Length -= (unsigned int)v5;
      v6 = Length == 0;
      do
      {
        if ( !v5 )
          break;
        v6 = *v3++ == *v4++;
        --v5;
      }
      while ( v6 );
      if ( !v6 )
        goto LABEL_19;
    }
    v7 = Length & 0xFFFFFFFFFFFFFFF8uLL;
    if ( (Length & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
    {
      Length -= v7;
      v7 >>= 3;
      v8 = v7 == 0;
      do
      {
        if ( !v7 )
          break;
        v8 = *(_QWORD *)v3 == *(_QWORD *)v4;
        v3 += 8;
        v4 += 8;
        --v7;
      }
      while ( v8 );
      if ( !v8 )
      {
        v3 -= 8;
        v4 -= 8;
        v7 = 8 * (v7 + 1);
      }
    }
    v9 = v7 + Length == 0;
    v10 = v7 + Length;
    if ( v10 )
    {
      v11 = v10;
      do
      {
        if ( !v11 )
          break;
        v9 = *v3++ == *v4++;
        --v11;
      }
      while ( v9 );
      if ( !v9 )
LABEL_19:
        --v4;
    }
    return v4 - (_BYTE *)Source2;
  }
}
