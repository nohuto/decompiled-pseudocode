/*
 * XREFs of ?IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z @ 0x14003A2E0
 * Callers:
 *     ?Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K00I@Z @ 0x140039F40 (-Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K00I@Z.c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x140011F68 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ?IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x140017AF4 (-IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 *     ?IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x14003A3E0 (-IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 */

char __fastcall CCrossProcessBaseEndpoint::IsValidControlData(CCrossProcessBaseEndpoint *this, struct ControlData *a2)
{
  char v2; // di
  unsigned int v5; // eax

  v2 = 0;
  if ( *((_DWORD *)a2 + 44) == 1162888004
    && (int)ValidateWaveFormatEx((const struct tWAVEFORMATEX *)((char *)a2 + 332)) >= 0
    && *((_DWORD *)a2 + 45) == *((unsigned __int16 *)a2 + 174) + 172LL )
  {
    v5 = *((_DWORD *)a2 + 81);
    if ( *((_DWORD *)a2 + 80) < v5
      && v5 <= *((_DWORD *)a2 + 82)
      && CCrossProcessBaseEndpoint::IsValidFlags(this, *((_DWORD *)a2 + 39))
      && (!*(_DWORD *)(*((_QWORD *)this + 9) + 132LL)
       || CCrossProcessBaseEndpoint::IsValidQueueIndex(this, *(_DWORD *)a2)
       && CCrossProcessBaseEndpoint::IsValidQueueIndex(this, *((_DWORD *)a2 + 1))) )
    {
      return 1;
    }
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x28u,
      (__int64)&WPP_69a2f442a7c70e07fee70227292c43c2_Traceguids,
      -2147467259);
  }
  return v2;
}
