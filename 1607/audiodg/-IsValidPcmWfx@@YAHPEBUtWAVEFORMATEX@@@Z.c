/*
 * XREFs of ?IsValidPcmWfx@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x140016A60
 * Callers:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z @ 0x14000C850 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsValidPcmWfx(const struct tWAVEFORMATEX *a1)
{
  unsigned int v2; // r9d
  int nBlockAlign; // edx
  DWORD v4; // ecx

  v2 = 0;
  if ( a1->nChannels )
  {
    if ( ((a1->wBitsPerSample - 8) & 0xFFE7) == 0 )
    {
      nBlockAlign = a1->nBlockAlign;
      if ( nBlockAlign == a1->nChannels * (a1->wBitsPerSample >> 3) )
      {
        v2 = 1;
        v4 = nBlockAlign * a1->nSamplesPerSec;
        if ( a1->nAvgBytesPerSec > v4 / 0x14 + v4 || a1->nAvgBytesPerSec < v4 - v4 / 0x14 )
          return 0;
      }
    }
  }
  return v2;
}
