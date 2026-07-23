/*
 * XREFs of LdrVerifyMappedImageMatchesChecksum @ 0x1800EB398
 * Callers:
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008BE50 (LdrVerifyImageMatchesChecksumEx.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x1800348A0 (RtlImageNtHeaderEx.c)
 *     ChkSum @ 0x1800EB368 (ChkSum.c)
 */

BOOLEAN __cdecl LdrVerifyMappedImageMatchesChecksum(PVOID BaseAddress, SIZE_T NumberOfBytes, ULONG FileLength)
{
  ULONG CheckSum; // edi
  unsigned __int16 v8; // ax
  unsigned __int16 *v9; // r10
  int v10; // r11d
  unsigned __int16 v11; // ax
  unsigned __int16 v12; // r10
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+58h] [rbp+20h] BYREF

  if ( RtlImageNtHeaderEx(0, BaseAddress, NumberOfBytes, &OutHeaders) < 0 )
  {
    v12 = 0;
    CheckSum = FileLength;
  }
  else
  {
    CheckSum = OutHeaders->OptionalHeader.CheckSum;
    if ( !CheckSum )
      return 1;
    v8 = ChkSum(
           0,
           (unsigned __int16 *)BaseAddress,
           (unsigned __int64)((char *)OutHeaders - (_BYTE *)BaseAddress + 88) >> 1);
    v11 = ChkSum(v8, v9, v10);
    v12 = v11;
    if ( (NumberOfBytes & 1) != 0 )
      v12 = v11
          + (unsigned __int8)*((char *)BaseAddress + NumberOfBytes - 1)
          + ((v11 + (unsigned int)(unsigned __int8)*((char *)BaseAddress + NumberOfBytes - 1)) >> 16);
  }
  return FileLength + v12 == CheckSum;
}
