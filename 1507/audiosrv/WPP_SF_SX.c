/*
 * XREFs of WPP_SF_SX @ 0x180089B1C
 * Callers:
 *     ?CheckAndSynchronizeWaveRTPeriodicity@CPolicyConfig@@SAJPEAUIAudioDeviceEndpoint@@PEAUIMMDevice@@PEBUtWAVEFORMATEX@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x180034CE0 (-CheckAndSynchronizeWaveRTPeriodicity@CPolicyConfig@@SAJPEAUIAudioDeviceEndpoint@@PEAUIMMDevice@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_SX(__int64 a1, unsigned __int16 a2, __int64 a3, const wchar_t *a4)
{
  __int64 v4; // rax
  const wchar_t *v5; // rax

  if ( a4 && *a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
  }
  if ( a4 )
  {
    v5 = L"<NULL>";
    if ( *a4 )
      v5 = a4;
  }
  else
  {
    v5 = L"NULL";
  }
  return EtwTraceMessage(a1, 43LL, &WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids, a2, v5);
}
