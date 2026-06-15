/*
 * XREFs of ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x14000DF50
 * Callers:
 *     ?ValidateStreamDescriptor@@YAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@@Z @ 0x1400015C8 (-ValidateStreamDescriptor@@YAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@@Z.c)
 *     ?ValidateDevicePipeDescriptor@@YAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x140016B88 (-ValidateDevicePipeDescriptor@@YAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 *     ?IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z @ 0x140039104 (-IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateWaveFormatEx(const struct tWAVEFORMATEX *a1)
{
  unsigned int v1; // r8d
  WORD nChannels; // dx
  DWORD nSamplesPerSec; // r9d
  DWORD nAvgBytesPerSec; // r11d
  WORD nBlockAlign; // bx
  WORD cbSize; // r10
  __int64 v7; // r10
  __int64 v8; // rax
  WORD wBitsPerSample; // r10
  WORD wFormatTag; // ax
  __int64 v12; // r10

  v1 = 0;
  if ( !a1 )
    return (unsigned int)-2147467261;
  nChannels = a1->nChannels;
  if ( !nChannels )
    return (unsigned int)-2147024809;
  nSamplesPerSec = a1->nSamplesPerSec;
  if ( !nSamplesPerSec )
    return (unsigned int)-2147024809;
  nAvgBytesPerSec = a1->nAvgBytesPerSec;
  if ( !nAvgBytesPerSec )
    return (unsigned int)-2147024809;
  nBlockAlign = a1->nBlockAlign;
  if ( !nBlockAlign )
    return (unsigned int)-2147024809;
  cbSize = a1->cbSize;
  if ( cbSize > 0x400u )
    return (unsigned int)-2147024809;
  if ( ((a1->wFormatTag - 1) & 0xFFFD) != 0 )
  {
    if ( a1->wFormatTag != 0xFFFE )
      return v1;
    if ( cbSize < 0x16u )
      return (unsigned int)-2147024809;
    v7 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2);
    if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) )
      v7 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&a1[1].wBitsPerSample;
    if ( !v7 )
      goto LABEL_13;
    v12 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2);
    if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) )
      v12 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&a1[1].wBitsPerSample;
    if ( !v12 )
    {
LABEL_13:
      v8 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2);
      if ( !v8 )
        v8 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&a1[1].wBitsPerSample;
      wBitsPerSample = a1->wBitsPerSample;
      if ( v8 )
      {
        if ( ((wBitsPerSample - 32) & 0xFFDF) != 0 )
          return (unsigned int)-2147024809;
      }
      else if ( ((wBitsPerSample - 8) & 0xFFE7) != 0 )
      {
        return (unsigned int)-2147024809;
      }
      wFormatTag = a1[1].wFormatTag;
      if ( wFormatTag
        && wBitsPerSample >= wFormatTag
        && nAvgBytesPerSec == (nSamplesPerSec * nChannels * wBitsPerSample) >> 3
        && nBlockAlign == nChannels * wBitsPerSample / 8 )
      {
        return v1;
      }
      return (unsigned int)-2147024809;
    }
  }
  else if ( cbSize
         || (a1->wBitsPerSample & 0x80000007) != 0
         || nChannels > 2u
         || nAvgBytesPerSec != (nSamplesPerSec * a1->wBitsPerSample * nChannels) >> 3 )
  {
    return (unsigned int)-2147024809;
  }
  return v1;
}
