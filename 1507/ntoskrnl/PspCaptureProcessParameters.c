/*
 * XREFs of PspCaptureProcessParameters @ 0x140508F30
 * Callers:
 *     NtCreateUserProcess @ 0x140509350 (NtCreateUserProcess.c)
 * Callees:
 *     PspCaptureUserProcessParameters @ 0x140507D64 (PspCaptureUserProcessParameters.c)
 */

__int64 __fastcall PspCaptureProcessParameters(char a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  char v5; // al

  if ( a1 )
  {
    result = PspCaptureUserProcessParameters((_QWORD *)(a3 + 200), a2, (*(_BYTE *)(a3 + 8) & 8) != 0);
    if ( (int)result < 0 )
      return result;
    v5 = *(_BYTE *)(a3 + 8);
    if ( (v5 & 8) != 0 )
      *(_BYTE *)(a3 + 9) &= 0xF9u;
    *(_BYTE *)(a3 + 8) = v5 | 4;
  }
  else
  {
    *(_BYTE *)(a3 + 8) &= ~4u;
    *(_QWORD *)(a3 + 200) = a2;
  }
  return 0LL;
}
