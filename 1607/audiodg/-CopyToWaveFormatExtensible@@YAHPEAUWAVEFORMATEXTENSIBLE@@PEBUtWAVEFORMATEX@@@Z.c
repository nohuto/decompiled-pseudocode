/*
 * XREFs of ?CopyToWaveFormatExtensible@@YAHPEAUWAVEFORMATEXTENSIBLE@@PEBUtWAVEFORMATEX@@@Z @ 0x140011CA0
 * Callers:
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14000E110 (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x140011B60 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CopyToWaveFormatExtensible(struct WAVEFORMATEXTENSIBLE *a1, const struct tWAVEFORMATEX *a2)
{
  DWORD v3; // eax
  __int64 v4; // rax
  __int64 v5; // r8

  if ( !a1 || !a2 )
    return 0LL;
  if ( a2->wFormatTag == 0xFFFE )
  {
    if ( a2->cbSize == 22 )
      goto LABEL_5;
    v4 = *(_QWORD *)((char *)&a2[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
    if ( !v4 )
      v4 = *(_QWORD *)&a2[1].wBitsPerSample - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
    if ( !v4 )
      goto LABEL_5;
    v5 = *(_QWORD *)((char *)&a2[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
    if ( !v5 )
      v5 = *(_QWORD *)&a2[1].wBitsPerSample - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
    if ( !v5 )
    {
LABEL_5:
      *(_OWORD *)&a1->Format.wFormatTag = *(_OWORD *)&a2->wFormatTag;
      *(_OWORD *)&a1->Format.cbSize = *(_OWORD *)&a2->cbSize;
      *(_QWORD *)a1->SubFormat.Data4 = *(_QWORD *)&a2[1].wBitsPerSample;
      a1->Format.cbSize = 22;
      return 1LL;
    }
    return 0LL;
  }
  if ( a2->cbSize && ((a2->wFormatTag - 1) & 0xFFFD) != 0
    || (unsigned __int16)(a2->nChannels - 1) > 1u
    || ((a2->wBitsPerSample - 8) & 0xFFE7) != 0 )
  {
    return 0LL;
  }
  *(_OWORD *)&a1->Format.wFormatTag = *(_OWORD *)&a2->wFormatTag;
  a1->Format.wFormatTag = -2;
  a1->Format.cbSize = 22;
  a1->Samples.wValidBitsPerSample = a2->wBitsPerSample;
  a1->SubFormat = GUID_00000000_0000_0010_8000_00aa00389b71;
  a1->SubFormat.Data1 = a2->wFormatTag;
  if ( a2->nChannels == 1 )
    v3 = 4;
  else
    v3 = 3;
  a1->dwChannelMask = v3;
  return 1LL;
}
