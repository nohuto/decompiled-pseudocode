/*
 * XREFs of LdrRelocateImage @ 0x1405545D4
 * Callers:
 *     MiUseLargeDriverPage @ 0x1404CFA5C (MiUseLargeDriverPage.c)
 *     MiReloadBootLoadedDrivers @ 0x1407A57F0 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x140013DE0 (RtlImageNtHeaderEx.c)
 *     RtlImageDirectoryEntryToData @ 0x14007BB6C (RtlImageDirectoryEntryToData.c)
 *     LdrProcessRelocationBlockLongLong @ 0x1405546A8 (LdrProcessRelocationBlockLongLong.c)
 */

ULONG __stdcall LdrRelocateImage(PVOID NewBase, PCCH LoaderName, ULONG Success, ULONG Conflict, ULONG Invalid)
{
  ULONG v5; // ebx
  PIMAGE_NT_HEADERS v7; // rdi
  int v8; // eax
  _DWORD *v9; // rax
  ULONG v10; // esi
  int v11; // r8d
  PCCH v13; // [rsp+68h] [rbp+10h] BYREF
  ULONG Size; // [rsp+78h] [rbp+20h] BYREF

  v13 = LoaderName;
  v5 = 0;
  Size = 0;
  if ( RtlImageNtHeaderEx(1u, NewBase, 0LL, (PIMAGE_NT_HEADERS *)&v13) >= 0 )
  {
    v7 = (PIMAGE_NT_HEADERS)v13;
    v8 = *((unsigned __int16 *)v13 + 12);
    if ( v8 == 267 || v8 == 523 )
    {
      v9 = RtlImageDirectoryEntryToData(NewBase, 1u, 5u, &Size);
      if ( !v9 )
        return (v7->FileHeader.Characteristics & 1) != 0 ? 0xC0000018 : 0;
      v10 = Size;
      if ( !Size )
        return (v7->FileHeader.Characteristics & 1) != 0 ? 0xC0000018 : 0;
      while ( 1 )
      {
        v11 = v9[1];
        v10 -= v11;
        v9 = LdrProcessRelocationBlockLongLong(
               v7->FileHeader.Machine,
               (int)NewBase + *v9,
               (PUSHORT)((unsigned int)(v11 - 8) >> 1),
               (LONGLONG)(v9 + 2));
        if ( !v9 )
          break;
        if ( !v10 )
          return v5;
      }
    }
  }
  return -1073741701;
}
