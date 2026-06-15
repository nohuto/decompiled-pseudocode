/*
 * XREFs of ?IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z @ 0x14003A260
 * Callers:
 *     ?Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K00I@Z @ 0x140039EC0 (-Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K00I@Z.c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x14000A440 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ?IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x14003A360 (-IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 *     ?IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x14003A424 (-IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 */

char __fastcall CCrossProcessBaseEndpoint::IsValidControlData(CCrossProcessBaseEndpoint *this, struct ControlData *a2)
{
  char v2; // di
  unsigned int v5; // eax

  v2 = 0;
  if ( *((_DWORD *)a2 + 42) == 1162888004
    && (int)ValidateWaveFormatEx((const struct tWAVEFORMATEX *)a2 + 18) >= 0
    && *((_DWORD *)a2 + 43) == *((unsigned __int16 *)a2 + 170) + 172LL )
  {
    v5 = *((_DWORD *)a2 + 79);
    if ( *((_DWORD *)a2 + 78) < v5
      && v5 <= *((_DWORD *)a2 + 80)
      && CCrossProcessBaseEndpoint::IsValidFlags(this, *((_DWORD *)a2 + 39))
      && (!*(_DWORD *)(*((_QWORD *)this + 9) + 132LL)
       || CCrossProcessBaseEndpoint::IsValidQueueIndex(this, *(_DWORD *)a2)
       && CCrossProcessBaseEndpoint::IsValidQueueIndex(this, *((_DWORD *)a2 + 1))) )
    {
      return 1;
    }
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x80000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0x28u,
      (__int64)&WPP_69a2f442a7c70e07fee70227292c43c2_Traceguids,
      -2147467259);
  }
  return v2;
}
