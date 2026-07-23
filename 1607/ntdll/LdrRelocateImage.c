/*
 * XREFs of LdrRelocateImage @ 0x180084E1C
 * Callers:
 *     LdrpProtectAndRelocateImage @ 0x180084C30 (LdrpProtectAndRelocateImage.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180031AF0 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeaderEx @ 0x1800348A0 (RtlImageNtHeaderEx.c)
 *     LdrProcessRelocationBlockLongLong @ 0x180084EF8 (LdrProcessRelocationBlockLongLong.c)
 */

NTSTATUS __cdecl LdrRelocateImage(
        PVOID NewBase,
        PSTR LoaderName,
        NTSTATUS Success,
        NTSTATUS Conflict,
        NTSTATUS Invalid)
{
  NTSTATUS v5; // ebx
  PIMAGE_NT_HEADERS v7; // rdi
  int v8; // eax
  unsigned __int64 v9; // rbp
  _DWORD *v10; // rax
  ULONG v11; // esi
  int v12; // r8d
  PSTR v14; // [rsp+68h] [rbp+10h] BYREF
  ULONG Size; // [rsp+78h] [rbp+20h] BYREF

  v14 = LoaderName;
  v5 = 0;
  Size = 0;
  if ( RtlImageNtHeaderEx(1u, NewBase, 0LL, (PIMAGE_NT_HEADERS *)&v14) < 0 )
    return -1073741701;
  v7 = (PIMAGE_NT_HEADERS)v14;
  v8 = *((unsigned __int16 *)v14 + 12);
  if ( v8 == 267 )
  {
    v9 = *((unsigned int *)v14 + 13);
  }
  else
  {
    if ( v8 != 523 )
      return -1073741701;
    v9 = *((_QWORD *)v14 + 6);
  }
  v10 = RtlImageDirectoryEntryToData(NewBase, 1u, 5u, &Size);
  if ( !v10 )
    return (v7->FileHeader.Characteristics & 1) != 0 ? 0xC0000018 : 0;
  v11 = Size;
  if ( !Size )
    return (v7->FileHeader.Characteristics & 1) != 0 ? 0xC0000018 : 0;
  while ( 1 )
  {
    v12 = v10[1];
    v11 -= v12;
    v10 = (_DWORD *)LdrProcessRelocationBlockLongLong(
                      v7->FileHeader.Machine,
                      (int)NewBase + *v10,
                      (unsigned int)(v12 - 8) >> 1,
                      (int)v10 + 8,
                      (__int64)NewBase - v9);
    if ( !v10 )
      break;
    if ( !v11 )
      return v5;
  }
  return -1073741701;
}
