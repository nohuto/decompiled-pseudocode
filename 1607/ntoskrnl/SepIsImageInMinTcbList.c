/*
 * XREFs of SepIsImageInMinTcbList @ 0x14045CC9C
 * Callers:
 *     SepIsMinTCB @ 0x14045BB18 (SepIsMinTCB.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
 *     SeCompareSigningLevels @ 0x14045C0B0 (SeCompareSigningLevels.c)
 *     RtlQueryImageFileKeyOption @ 0x140472194 (RtlQueryImageFileKeyOption.c)
 *     RtlpOpenImageFileOptionsKey @ 0x1404B6BF4 (RtlpOpenImageFileOptionsKey.c)
 */

__int64 __fastcall SepIsImageInMinTcbList(
        __int64 a1,
        unsigned int a2,
        const UNICODE_STRING *a3,
        char a4,
        unsigned __int8 a5,
        _BYTE *a6,
        _BYTE *a7,
        unsigned __int8 *a8)
{
  unsigned int v8; // edi
  unsigned int v13; // ebx
  int v14; // r15d
  _DWORD *i; // rsi
  __int64 v17; // rcx
  unsigned __int8 v18; // bl
  _BYTE *v19; // rsi
  unsigned __int64 v20; // rcx
  char v21; // al
  __int64 v22; // rdx
  unsigned __int8 *v23; // rsi
  int ImageFileKeyOption; // eax
  int v25; // ecx
  HANDLE Handle[2]; // [rsp+30h] [rbp-38h] BYREF
  char v27; // [rsp+78h] [rbp+10h]

  v8 = 0;
  v13 = 0;
  if ( !a2 )
    return (unsigned int)-1073741275;
  v14 = dword_1402FD030;
  for ( i = (_DWORD *)(a1 + 20);
        !RtlEqualUnicodeString(a3, (PCUNICODE_STRING)(a1 + 24LL * v13), 1u) || *i && *i != v14;
        i += 6 )
  {
    if ( ++v13 >= a2 )
      return (unsigned int)-1073741275;
  }
  v17 = 3LL * v13;
  v18 = *(_BYTE *)(a1 + 24LL * v13 + 18);
  if ( !v18 )
  {
    if ( !a5 )
    {
      v19 = a6;
      *a6 = *(_BYTE *)(a1 + 8 * v17 + 16);
      v21 = *(_BYTE *)(a1 + 8 * v17 + 17);
      goto LABEL_10;
    }
    v18 = a5;
  }
  v19 = a6;
  v20 = (unsigned __int64)v18 >> 4;
  *a6 = *((_BYTE *)SeProtectedMapping + 2 * v20);
  v21 = *((_BYTE *)SeProtectedMapping + 2 * v20 + 1);
LABEL_10:
  *a7 = v21;
  if ( !(unsigned int)SeCompareSigningLevels() )
    *v19 = SeILSigningPolicy;
  if ( !(unsigned int)SeCompareSigningLevels() )
    *a7 = SeILSigningPolicy;
  if ( (v18 & 7) != 1 && ((a4 & 1) != 0 || (v18 & 7) == 2) )
  {
    if ( (*a7 & 0xFu) < 4 )
      *a7 = *v19;
    v23 = a8;
    *a8 = v18 & 0xF2 | *a8 & 8 | 2;
  }
  else
  {
    v23 = a8;
    *a8 = v18;
  }
  if ( !*v23 && !*a7 && (int)RtlpOpenImageFileOptionsKey(a3, v22, Handle) >= 0 )
  {
    ImageFileKeyOption = RtlQueryImageFileKeyOption(Handle[0], 4, 0LL);
    if ( ImageFileKeyOption >= 0 )
    {
      v25 = v27 & 0xF;
      if ( (unsigned int)(v25 - 2) <= 0xD )
      {
        *a7 = v25;
        *v23 = 8;
      }
    }
    ZwClose(Handle[0]);
  }
  return v8;
}
