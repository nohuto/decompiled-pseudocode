/*
 * XREFs of RtlpImageDirectoryEntryToDataEx @ 0x140035E70
 * Callers:
 *     RtlImageDirectoryEntryToData @ 0x140035E48 (RtlImageDirectoryEntryToData.c)
 * Callees:
 *     RtlpImageDirectoryEntryToData64 @ 0x140035DAC (RtlpImageDirectoryEntryToData64.c)
 *     RtlImageNtHeaderEx @ 0x140037D00 (RtlImageNtHeaderEx.c)
 *     RtlpImageDirectoryEntryToData32 @ 0x1400DD7AC (RtlpImageDirectoryEntryToData32.c)
 */

NTSTATUS __fastcall RtlpImageDirectoryEntryToDataEx(
        unsigned __int64 BaseOfImage,
        char a2,
        unsigned __int16 a3,
        unsigned int *a4,
        _QWORD *a5)
{
  _QWORD *v5; // rsi
  PVOID v6; // rbx
  char v9; // di
  NTSTATUS result; // eax
  unsigned __int16 Magic; // ax
  PIMAGE_NT_HEADERS NtHeader; // [rsp+50h] [rbp+8h] BYREF

  v5 = a5;
  v6 = (PVOID)BaseOfImage;
  NtHeader = 0LL;
  v9 = a2;
  *a5 = 0LL;
  if ( (BaseOfImage & 3) != 0 )
  {
    v9 = a2;
    if ( (BaseOfImage & 1) != 0 )
      v9 = 0;
    v6 = (PVOID)(BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL);
  }
  result = RtlImageNtHeaderEx(1u, v6, 0LL, &NtHeader);
  if ( NtHeader )
  {
    Magic = NtHeader->OptionalHeader.Magic;
    if ( Magic == 267 )
    {
      return RtlpImageDirectoryEntryToData32(v6, NtHeader, (__int64)v5);
    }
    else if ( Magic == 523 )
    {
      return RtlpImageDirectoryEntryToData64((char *)v6, v9, a3, a4, NtHeader, v5);
    }
    else
    {
      return -1073741811;
    }
  }
  return result;
}
