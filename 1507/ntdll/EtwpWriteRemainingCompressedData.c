/*
 * XREFs of EtwpWriteRemainingCompressedData @ 0x1800F54D0
 * Callers:
 *     EtwpFinalizeLogFileHeader @ 0x180009C70 (EtwpFinalizeLogFileHeader.c)
 * Callees:
 *     NtWriteFile @ 0x180093980 (NtWriteFile.c)
 */

__int64 __fastcall EtwpWriteRemainingCompressedData(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  _QWORD *v7; // rsi
  int v8; // edx

  *a2 = 0;
  *a3 = 0;
  if ( !*(_DWORD *)(a1 + 460) )
    return 0LL;
  v7 = (_QWORD *)(a1 + 368);
  v8 = NtWriteFile();
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
