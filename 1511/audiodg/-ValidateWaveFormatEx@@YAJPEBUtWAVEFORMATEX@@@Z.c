/*
 * XREFs of ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x140011F68
 * Callers:
 *     ?ValidateStreamDescriptor@@YAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@@Z @ 0x140013FC0 (-ValidateStreamDescriptor@@YAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@@Z.c)
 *     ?ValidateDevicePipeDescriptor@@YAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x140014018 (-ValidateDevicePipeDescriptor@@YAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 *     ?IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z @ 0x14003A2E0 (-IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateWaveFormatEx(const struct tWAVEFORMATEX *a1)
{
  unsigned int v1; // r8d
  WORD nChannels; // r9
  DWORD nSamplesPerSec; // ebx
  DWORD nAvgBytesPerSec; // edi
  WORD nBlockAlign; // r11
  __int64 v6; // rdx
  __int64 v7; // rax
  WORD wBitsPerSample; // dx
  __int16 v9; // si
  unsigned __int16 v10; // ax
  bool v11; // zf
  __int64 v13; // rdx

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
  if ( !nBlockAlign || a1->cbSize > 0x400u )
    return (unsigned int)-2147024809;
  if ( ((a1->wFormatTag - 1) & 0xFFFD) == 0 )
  {
    if ( a1->cbSize || a1->wBitsPerSample % 8 || nChannels > 2u )
      return (unsigned int)-2147024809;
    v11 = nAvgBytesPerSec == (nSamplesPerSec * a1->wBitsPerSample * nChannels) >> 3;
    goto LABEL_22;
  }
  if ( a1->wFormatTag != 0xFFFE )
    return v1;
  if ( a1->cbSize < 0x16u )
    return (unsigned int)-2147024809;
  v6 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2);
  if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) )
    v6 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&a1[1].wBitsPerSample;
  if ( !v6 )
    goto LABEL_13;
  v13 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2);
  if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) )
    v13 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&a1[1].wBitsPerSample;
  if ( !v13 )
  {
LABEL_13:
    v7 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2);
    if ( !v7 )
      v7 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&a1[1].wBitsPerSample;
    wBitsPerSample = a1->wBitsPerSample;
    if ( v7 )
    {
      v10 = wBitsPerSample - 32;
      v9 = -33;
    }
    else
    {
      v9 = -25;
      v10 = wBitsPerSample - 8;
    }
    if ( (v10 & (unsigned __int16)v9) != 0
      || !a1[1].wFormatTag
      || wBitsPerSample < a1[1].wFormatTag
      || nAvgBytesPerSec != (nSamplesPerSec * nChannels * wBitsPerSample) >> 3 )
    {
      return (unsigned int)-2147024809;
    }
    v11 = nBlockAlign == nChannels * wBitsPerSample / 8;
LABEL_22:
    if ( v11 )
      return v1;
    return (unsigned int)-2147024809;
  }
  return v1;
}
