/*
 * XREFs of ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x18008ECDC
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180025240 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpo.c)
 *     ?CreateStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180029B60 (-CreateStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRI.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@PEAI333@Z @ 0x180066460 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?RevertToSaDevicesWithDefaultSettings@CAudioResourceManager@@IEAAXPEBG@Z @ 0x180092768 (-RevertToSaDevicesWithDefaultSettings@CAudioResourceManager@@IEAAXPEBG@Z.c)
 *     ??$ForEachCandidateFormatForMode@V_lambda_ee82c780731b3ceedd1db5bd5f3d58d6_@@@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@U_GUID@@V_lambda_ee82c780731b3ceedd1db5bd5f3d58d6_@@@Z @ 0x1800A708C (--$ForEachCandidateFormatForMode@V_lambda_ee82c780731b3ceedd1db5bd5f3d58d6_@@@CEndpointCharacter.c)
 * Callees:
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800449EE (memcmp_0.c)
 *     ?CopyToWaveFormatExtensible@@YAHPEAUWAVEFORMATEXTENSIBLE@@PEBUtWAVEFORMATEX@@@Z @ 0x18008EF94 (-CopyToWaveFormatExtensible@@YAHPEAUWAVEFORMATEXTENSIBLE@@PEBUtWAVEFORMATEX@@@Z.c)
 */

__int64 __fastcall CompareWaveFormat(const struct tWAVEFORMATEX *a1, const struct tWAVEFORMATEX *a2)
{
  unsigned int v2; // ebx
  WORD nChannels; // r8
  DWORD nSamplesPerSec; // edx
  WORD wBitsPerSample; // r9
  DWORD v7; // ecx
  WORD wFormatTag; // r10
  __int64 v9; // rax
  struct WAVEFORMATEXTENSIBLE Buf1; // [rsp+20h] [rbp-60h] BYREF
  struct WAVEFORMATEXTENSIBLE Buf2; // [rsp+48h] [rbp-38h] BYREF

  v2 = 0;
  if ( a1 )
  {
    if ( a2
      && (unsigned int)CopyToWaveFormatExtensible(&Buf1, a1)
      && (unsigned int)CopyToWaveFormatExtensible(&Buf2, a2) )
    {
      if ( Buf1.Format.nChannels )
      {
        nChannels = Buf2.Format.nChannels;
      }
      else
      {
        nChannels = 0;
        Buf2.Format.nChannels = 0;
        Buf2.Format.nAvgBytesPerSec = 0;
        Buf2.Format.nBlockAlign = 0;
      }
      if ( Buf1.Format.nSamplesPerSec )
      {
        nSamplesPerSec = Buf2.Format.nSamplesPerSec;
      }
      else
      {
        nSamplesPerSec = 0;
        *(_QWORD *)&Buf2.Format.nSamplesPerSec = 0LL;
      }
      if ( Buf1.Format.wBitsPerSample )
      {
        wBitsPerSample = Buf2.Format.wBitsPerSample;
      }
      else
      {
        wBitsPerSample = 0;
        *(_DWORD *)&Buf2.Format.nBlockAlign = 0;
      }
      v7 = Buf1.dwChannelMask != 0 ? Buf2.dwChannelMask : 0;
      Buf2.dwChannelMask = v7;
      if ( Buf1.Format.wFormatTag )
      {
        wFormatTag = Buf2.Format.wFormatTag;
      }
      else
      {
        wFormatTag = 0;
        Buf2.Format.wFormatTag = 0;
      }
      if ( !nChannels )
      {
        Buf1.Format.nChannels = 0;
        Buf1.Format.nAvgBytesPerSec = 0;
        Buf1.Format.nBlockAlign = 0;
      }
      if ( !nSamplesPerSec )
        *(_QWORD *)&Buf1.Format.nSamplesPerSec = 0LL;
      if ( !wBitsPerSample )
        *(_DWORD *)&Buf1.Format.nBlockAlign = 0;
      Buf1.dwChannelMask &= -(v7 != 0);
      if ( !wFormatTag )
        Buf1.Format.wFormatTag = 0;
      v9 = *(_QWORD *)&Buf1.SubFormat.Data1 - *(_QWORD *)&Buf2.SubFormat.Data1;
      if ( *(_QWORD *)&Buf1.SubFormat.Data1 == *(_QWORD *)&Buf2.SubFormat.Data1 )
        v9 = *(_QWORD *)Buf1.SubFormat.Data4 - *(_QWORD *)Buf2.SubFormat.Data4;
      if ( !v9 && Buf2.Format.cbSize == Buf1.Format.cbSize && !memcmp_0(&Buf1, &Buf2, 0x28uLL) )
        return 1;
    }
  }
  else
  {
    return a2 == 0LL;
  }
  return v2;
}
