/*
 * XREFs of LdrRelocateImage @ 0x1405977B4
 * Callers:
 *     MiUseLargeDriverPage @ 0x140573B54 (MiUseLargeDriverPage.c)
 *     MiReloadBootLoadedDrivers @ 0x1407CC4D4 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140010684 (RtlImageNtHeader.c)
 *     RtlImageDirectoryEntryToData @ 0x14002B16C (RtlImageDirectoryEntryToData.c)
 *     LdrProcessRelocationBlockLongLong @ 0x140597884 (LdrProcessRelocationBlockLongLong.c)
 */

ULONG __stdcall LdrRelocateImage(PVOID NewBase, PCCH LoaderName, ULONG Success, ULONG Conflict, ULONG Invalid)
{
  ULONG v5; // ebx
  PIMAGE_NT_HEADERS v7; // rax
  PIMAGE_NT_HEADERS v8; // rdi
  int Magic; // eax
  _DWORD *v10; // rax
  ULONG v11; // esi
  int v12; // r8d
  ULONG Size; // [rsp+68h] [rbp+20h] BYREF

  v5 = 0;
  Size = 0;
  v7 = RtlImageNtHeader(NewBase);
  v8 = v7;
  if ( v7 )
  {
    Magic = v7->OptionalHeader.Magic;
    if ( Magic == 267 || Magic == 523 )
    {
      v10 = RtlImageDirectoryEntryToData(NewBase, 1u, 5u, &Size);
      if ( !v10 )
        return (v8->FileHeader.Characteristics & 1) != 0 ? 0xC0000018 : 0;
      v11 = Size;
      if ( !Size )
        return (v8->FileHeader.Characteristics & 1) != 0 ? 0xC0000018 : 0;
      while ( 1 )
      {
        v12 = v10[1];
        v11 -= v12;
        v10 = LdrProcessRelocationBlockLongLong(
                v8->FileHeader.Machine,
                (int)NewBase + *v10,
                (PUSHORT)((unsigned int)(v12 - 8) >> 1),
                (LONGLONG)(v10 + 2));
        if ( !v10 )
          break;
        if ( !v11 )
          return v5;
      }
    }
  }
  return -1073741701;
}
