/*
 * XREFs of ?CopyToWaveFormatExtensible@@YAHPEAUWAVEFORMATEXTENSIBLE@@PEBUtWAVEFORMATEX@@@Z @ 0x18008BAC4
 * Callers:
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x18008B80C (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CopyToWaveFormatExtensible(struct WAVEFORMATEXTENSIBLE *a1, const struct tWAVEFORMATEX *a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( a1 && a2 )
  {
    if ( a2->wFormatTag == 0xFFFE )
    {
      if ( a2->cbSize == 22
        || *(_QWORD *)((char *)&a2[1].nSamplesPerSec + 2) == *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1
        && *(_QWORD *)&a2[1].wBitsPerSample == *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4
        || *(_QWORD *)((char *)&a2[1].nSamplesPerSec + 2) == *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1
        && *(_QWORD *)&a2[1].wBitsPerSample == *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 )
      {
        v2 = 1;
        *(_OWORD *)&a1->Format.wFormatTag = *(_OWORD *)&a2->wFormatTag;
        *(_OWORD *)&a1->Format.cbSize = *(_OWORD *)&a2->cbSize;
        *(_QWORD *)a1->SubFormat.Data4 = *(_QWORD *)&a2[1].wBitsPerSample;
        a1->Format.cbSize = 22;
      }
    }
    else if ( (!a2->cbSize || ((a2->wFormatTag - 1) & 0xFFFD) == 0)
           && (unsigned __int16)(a2->nChannels - 1) <= 1u
           && ((a2->wBitsPerSample - 8) & 0xFFE7) == 0 )
    {
      v2 = 1;
      *(_OWORD *)&a1->Format.wFormatTag = *(_OWORD *)&a2->wFormatTag;
      a1->Format.wFormatTag = -2;
      a1->Format.cbSize = 22;
      a1->Samples.wValidBitsPerSample = a2->wBitsPerSample;
      a1->SubFormat = GUID_00000000_0000_0010_8000_00aa00389b71;
      a1->SubFormat.Data1 = a2->wFormatTag;
      a1->dwChannelMask = 4 - (a2->nChannels != 1);
    }
  }
  return v2;
}
