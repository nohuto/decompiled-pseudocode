/*
 * XREFs of RtlpImageDirectoryEntryToDataEx @ 0x14007BB14
 * Callers:
 *     RtlImageDirectoryEntryToData @ 0x14007BAEC (RtlImageDirectoryEntryToData.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x140014260 (RtlImageNtHeaderEx.c)
 *     RtlpImageDirectoryEntryToData64 @ 0x14007BBEC (RtlpImageDirectoryEntryToData64.c)
 *     RtlpImageDirectoryEntryToData32 @ 0x1400FA42C (RtlpImageDirectoryEntryToData32.c)
 */

NTSTATUS __fastcall RtlpImageDirectoryEntryToDataEx(
        unsigned __int64 BaseAddress,
        char a2,
        unsigned __int16 a3,
        int a4,
        _QWORD *a5)
{
  __int64 v5; // rsi
  PVOID v6; // rbx
  char v9; // di
  NTSTATUS result; // eax
  unsigned __int16 Magic; // ax
  int v12; // edx
  int v13; // edx
  PIMAGE_NT_HEADERS NtHeader; // [rsp+50h] [rbp+8h] BYREF

  v5 = (__int64)a5;
  v6 = (PVOID)BaseAddress;
  NtHeader = 0LL;
  v9 = a2;
  *a5 = 0LL;
  if ( (BaseAddress & 3) != 0 )
  {
    v9 = a2;
    if ( (BaseAddress & 1) != 0 )
      v9 = 0;
    v6 = (PVOID)(BaseAddress & 0xFFFFFFFFFFFFFFFCuLL);
  }
  result = RtlImageNtHeaderEx(1u, v6, 0LL, &NtHeader);
  if ( NtHeader )
  {
    Magic = NtHeader->OptionalHeader.Magic;
    v12 = 267;
    if ( Magic == 267 )
    {
      LOBYTE(v12) = v9;
      return RtlpImageDirectoryEntryToData32((_DWORD)v6, v12, a3, a4, (__int64)NtHeader, v5);
    }
    else
    {
      v13 = 523;
      if ( Magic == 523 )
      {
        LOBYTE(v13) = v9;
        return RtlpImageDirectoryEntryToData64((_DWORD)v6, v13, a3, a4, (__int64)NtHeader, v5);
      }
      else
      {
        return -1073741811;
      }
    }
  }
  return result;
}
