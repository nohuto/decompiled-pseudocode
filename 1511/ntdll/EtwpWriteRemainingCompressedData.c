/*
 * XREFs of EtwpWriteRemainingCompressedData @ 0x1800F4ECC
 * Callers:
 *     EtwpFinalizeLogFileHeader @ 0x18005C2B0 (EtwpFinalizeLogFileHeader.c)
 * Callees:
 *     NtWriteFile @ 0x1800A51C0 (NtWriteFile.c)
 */

__int64 __fastcall EtwpWriteRemainingCompressedData(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  _QWORD *v7; // rsi
  NTSTATUS v8; // edx
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  *a2 = 0;
  *a3 = 0;
  if ( !*(_DWORD *)(a1 + 460) )
    return 0LL;
  v7 = (_QWORD *)(a1 + 368);
  v8 = NtWriteFile(
         *(HANDLE *)(a1 + 144),
         0LL,
         0LL,
         0LL,
         &IoStatusBlock,
         *(PVOID *)(a1 + 448),
         *(_DWORD *)(a1 + 208),
         (PLARGE_INTEGER)(a1 + 368),
         0LL);
  if ( v8 >= 0 )
  {
    *v7 += *(unsigned int *)(a1 + 460);
    *a2 = *(_DWORD *)(a1 + 464);
  }
  else
  {
    *a3 = *(_DWORD *)(a1 + 464);
  }
  return (unsigned int)v8;
}
