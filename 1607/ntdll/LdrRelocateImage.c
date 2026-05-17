/*
 * XREFs of LdrRelocateImage @ 0x180084E2C
 * Callers:
 *     LdrpProtectAndRelocateImage @ 0x180084C40 (LdrpProtectAndRelocateImage.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180031B00 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeaderEx @ 0x1800348B0 (RtlImageNtHeaderEx.c)
 *     LdrProcessRelocationBlockLongLong @ 0x180084F08 (LdrProcessRelocationBlockLongLong.c)
 */

__int64 __fastcall LdrRelocateImage(unsigned __int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rbp
  _DWORD *v7; // rax
  int v8; // esi
  int v9; // r8d
  __int64 v11; // [rsp+68h] [rbp+10h] BYREF
  int v12; // [rsp+78h] [rbp+20h] BYREF

  v11 = a2;
  v2 = 0;
  v12 = 0;
  if ( (int)RtlImageNtHeaderEx(1, a1, 0LL, &v11) < 0 )
    return (unsigned int)-1073741701;
  v4 = v11;
  v5 = *(unsigned __int16 *)(v11 + 24);
  if ( v5 == 267 )
  {
    v6 = *(unsigned int *)(v11 + 52);
  }
  else
  {
    if ( v5 != 523 )
      return (unsigned int)-1073741701;
    v6 = *(_QWORD *)(v11 + 48);
  }
  v7 = (_DWORD *)RtlImageDirectoryEntryToData(a1, 1, 5u, &v12);
  if ( !v7 )
    return (*(_BYTE *)(v4 + 22) & 1) != 0 ? 0xC0000018 : 0;
  v8 = v12;
  if ( !v12 )
    return (*(_BYTE *)(v4 + 22) & 1) != 0 ? 0xC0000018 : 0;
  while ( 1 )
  {
    v9 = v7[1];
    v8 -= v9;
    v7 = (_DWORD *)LdrProcessRelocationBlockLongLong(
                     *(unsigned __int16 *)(v4 + 4),
                     (int)a1 + *v7,
                     (unsigned int)(v9 - 8) >> 1,
                     (int)v7 + 8,
                     a1 - v6);
    if ( !v7 )
      break;
    if ( !v8 )
      return v2;
  }
  return (unsigned int)-1073741701;
}
