/*
 * XREFs of LdrRelocateImage @ 0x1800735D8
 * Callers:
 *     LdrpProtectAndRelocateImage @ 0x1800733E4 (LdrpProtectAndRelocateImage.c)
 * Callees:
 *     RtlImageNtHeader @ 0x180016830 (RtlImageNtHeader.c)
 *     RtlImageDirectoryEntryToData @ 0x180016860 (RtlImageDirectoryEntryToData.c)
 *     LdrProcessRelocationBlockLongLong @ 0x1800736B0 (LdrProcessRelocationBlockLongLong.c)
 */

__int64 __fastcall LdrRelocateImage(unsigned __int64 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rax
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // r14
  _DWORD *v7; // rax
  int v8; // esi
  int v9; // r8d
  int v11; // [rsp+68h] [rbp+20h] BYREF

  v1 = 0;
  v11 = 0;
  v3 = RtlImageNtHeader(a1);
  v4 = v3;
  if ( !v3 )
    return (unsigned int)-1073741701;
  v5 = *(unsigned __int16 *)(v3 + 24);
  if ( v5 == 267 )
  {
    v6 = *(unsigned int *)(v4 + 52);
  }
  else
  {
    if ( v5 != 523 )
      return (unsigned int)-1073741701;
    v6 = *(_QWORD *)(v4 + 48);
  }
  v7 = (_DWORD *)RtlImageDirectoryEntryToData(a1, 1, 5u, &v11);
  if ( !v7 )
    return (*(_BYTE *)(v4 + 22) & 1) != 0 ? 0xC0000018 : 0;
  v8 = v11;
  if ( !v11 )
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
      return v1;
  }
  return (unsigned int)-1073741701;
}
