/*
 * XREFs of MmCheckMapIoSpace @ 0x140701CD4
 * Callers:
 *     VerifierMmMapIoSpace @ 0x14071BEBC (VerifierMmMapIoSpace.c)
 * Callees:
 *     MiIsPfn @ 0x14000F720 (MiIsPfn.c)
 *     VerifierBugCheckIfAppropriate @ 0x14070C318 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall MmCheckMapIoSpace(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rsi
  int v4; // ebp
  __int64 v5; // rbx
  __int64 result; // rax
  int v7; // r10d

  v2 = a1 >> 12;
  v3 = ((a1 & 0xFFF) + a2 + 4095) >> 12;
  v4 = a2;
  v5 = 48 * (a1 >> 12);
  do
  {
    result = MiIsPfn(v2);
    if ( (_DWORD)result == 1 )
    {
      result = 0xFFFFFA8000000020uLL;
      if ( !*(_WORD *)(v5 - 0x57FFFFFFFE0LL) )
        result = VerifierBugCheckIfAppropriate(196, 131, v7, v4, v5 / 48);
    }
    v5 += 48LL;
    ++v2;
    --v3;
  }
  while ( v3 );
  return result;
}
