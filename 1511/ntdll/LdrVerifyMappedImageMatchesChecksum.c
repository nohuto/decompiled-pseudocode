/*
 * XREFs of LdrVerifyMappedImageMatchesChecksum @ 0x1800E20C8
 * Callers:
 *     LdrVerifyImageMatchesChecksumEx @ 0x180087A00 (LdrVerifyImageMatchesChecksumEx.c)
 * Callees:
 *     RtlImageNtHeader @ 0x180032600 (RtlImageNtHeader.c)
 *     ChkSum @ 0x1800E2098 (ChkSum.c)
 */

BOOLEAN __cdecl LdrVerifyMappedImageMatchesChecksum(PVOID BaseAddress, SIZE_T NumberOfBytes, ULONG FileLength)
{
  PIMAGE_NT_HEADERS v6; // rax
  ULONG CheckSum; // edi
  unsigned __int16 v9; // ax
  unsigned __int16 *v10; // r10
  int v11; // r11d
  unsigned __int16 v12; // ax
  unsigned __int16 v13; // r10

  v6 = RtlImageNtHeader(BaseAddress);
  if ( v6 )
  {
    CheckSum = v6->OptionalHeader.CheckSum;
    if ( !CheckSum )
      return 1;
    v9 = ChkSum(0, (unsigned __int16 *)BaseAddress, (unsigned __int64)((char *)v6 - (_BYTE *)BaseAddress + 88) >> 1);
    v12 = ChkSum(v9, v10, v11);
    v13 = v12;
    if ( (NumberOfBytes & 1) != 0 )
      v13 = v12
          + (unsigned __int8)*((char *)BaseAddress + NumberOfBytes - 1)
          + ((v12 + (unsigned int)(unsigned __int8)*((char *)BaseAddress + NumberOfBytes - 1)) >> 16);
  }
  else
  {
    v13 = 0;
    CheckSum = FileLength;
  }
  return FileLength + v13 == CheckSum;
}
