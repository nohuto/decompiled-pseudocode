/*
 * XREFs of MmCheckMdlPages @ 0x140701BC4
 * Callers:
 *     ViMmMapLockedPagesSanityChecks @ 0x14071C834 (ViMmMapLockedPagesSanityChecks.c)
 * Callees:
 *     MiIsPfn @ 0x14000F720 (MiIsPfn.c)
 *     VerifierBugCheckIfAppropriate @ 0x14070C318 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall MmCheckMdlPages(__int64 a1)
{
  unsigned __int64 *v1; // rbx
  unsigned __int64 v2; // rsi
  __int16 v3; // bp
  int v4; // edi
  unsigned __int64 v5; // r14
  __int64 result; // rax
  ULONG_PTR v7; // r9

  v1 = (unsigned __int64 *)(a1 + 48);
  v2 = (((*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 44)) & 0xFFF) + (unsigned __int64)*(unsigned int *)(a1 + 40) + 4095) >> 12;
  v3 = *(_WORD *)(a1 + 10) & 0x800;
  v4 = a1;
  v5 = a1 + 48 + 8 * v2;
  do
  {
    result = MiIsPfn(*v1);
    if ( v3 )
    {
      if ( (_DWORD)result != 1 )
        goto LABEL_8;
    }
    else if ( !(_DWORD)result )
    {
      VerifierBugCheckIfAppropriate(196, 137, v4, (int)v1, v7);
    }
    result = 0xFFFFFA8000000000uLL;
    if ( !*(_WORD *)(48 * *v1 - 0x58000000000LL + 32) )
      result = VerifierBugCheckIfAppropriate(196, 133, v4, v2, (__int64)(48 * *v1) / 48);
LABEL_8:
    ++v1;
  }
  while ( (unsigned __int64)v1 < v5 );
  return result;
}
