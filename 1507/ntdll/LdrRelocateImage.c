/*
 * XREFs of LdrRelocateImage @ 0x1800735D8
 * Callers:
 *     LdrpProtectAndRelocateImage @ 0x1800733E4 (LdrpProtectAndRelocateImage.c)
 * Callees:
 *     RtlImageNtHeader @ 0x180016830 (RtlImageNtHeader.c)
 *     RtlImageDirectoryEntryToData @ 0x180016860 (RtlImageDirectoryEntryToData.c)
 *     LdrProcessRelocationBlockLongLong @ 0x1800736B0 (LdrProcessRelocationBlockLongLong.c)
 */

NTSTATUS __cdecl LdrRelocateImage(
        PVOID NewBase,
        PSTR LoaderName,
        NTSTATUS Success,
        NTSTATUS Conflict,
        NTSTATUS Invalid)
{
  NTSTATUS v5; // ebx
  PIMAGE_NT_HEADERS v7; // rax
  PIMAGE_NT_HEADERS v8; // rdi
  int Magic; // eax
  unsigned __int64 ImageBase_high; // r14
  _DWORD *v11; // rax
  ULONG v12; // esi
  int v13; // r8d
  ULONG Size; // [rsp+68h] [rbp+20h] BYREF

  v5 = 0;
  Size = 0;
  v7 = RtlImageNtHeader(NewBase);
  v8 = v7;
  if ( !v7 )
    return -1073741701;
  Magic = v7->OptionalHeader.Magic;
  if ( Magic == 267 )
  {
    ImageBase_high = HIDWORD(v8->OptionalHeader.ImageBase);
  }
  else
  {
    if ( Magic != 523 )
      return -1073741701;
    ImageBase_high = v8->OptionalHeader.ImageBase;
  }
  v11 = RtlImageDirectoryEntryToData(NewBase, 1u, 5u, &Size);
  if ( !v11 )
    return (v8->FileHeader.Characteristics & 1) != 0 ? 0xC0000018 : 0;
  v12 = Size;
  if ( !Size )
    return (v8->FileHeader.Characteristics & 1) != 0 ? 0xC0000018 : 0;
  while ( 1 )
  {
    v13 = v11[1];
    v12 -= v13;
    v11 = (_DWORD *)LdrProcessRelocationBlockLongLong(
                      v8->FileHeader.Machine,
                      (int)NewBase + *v11,
                      (unsigned int)(v13 - 8) >> 1,
                      (int)v11 + 8,
                      (__int64)NewBase - ImageBase_high);
    if ( !v11 )
      break;
    if ( !v12 )
      return v5;
  }
  return -1073741701;
}
