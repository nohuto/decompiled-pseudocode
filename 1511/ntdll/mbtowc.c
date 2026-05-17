/*
 * XREFs of mbtowc @ 0x18009F638
 * Callers:
 *     _woutput_l @ 0x18009C660 (_woutput_l.c)
 *     ReadString @ 0x18009E894 (ReadString.c)
 * Callees:
 *     RtlAnsiCharToUnicodeChar @ 0x180014C20 (RtlAnsiCharToUnicodeChar.c)
 */

int __cdecl mbtowc(wchar_t *DstCh, const char *SrcCh, size_t SrcSizeInBytes)
{
  int result; // eax
  int v4; // ebx
  const char *v5; // [rsp+38h] [rbp+10h] BYREF

  result = 0;
  v4 = (int)SrcCh;
  if ( SrcCh && SrcSizeInBytes )
  {
    if ( *SrcCh )
    {
      v5 = SrcCh;
      *DstCh = RtlAnsiCharToUnicodeChar((unsigned __int8 **)&v5);
      return (_DWORD)v5 - v4;
    }
    else if ( DstCh )
    {
      *DstCh = 0;
    }
  }
  return result;
}
