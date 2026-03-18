/*
 * XREFs of MmCheckMdlPages @ 0x1406B5D44
 * Callers:
 *     ViMmMapLockedPagesSanityChecks @ 0x1406D06A4 (ViMmMapLockedPagesSanityChecks.c)
 * Callees:
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     VerifierBugCheckIfAppropriate @ 0x1406C028C (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall MmCheckMdlPages(__int64 a1)
{
  unsigned __int64 *v1; // rbx
  __int16 v2; // bp
  unsigned __int64 v3; // rsi
  int v4; // edi
  unsigned __int64 v5; // r14
  __int64 result; // rax
  ULONG_PTR v7; // r9

  v1 = (unsigned __int64 *)(a1 + 48);
  v2 = *(_WORD *)(a1 + 10) & 0x800;
  v3 = (((*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 44)) & 0xFFF) + (unsigned __int64)*(unsigned int *)(a1 + 40) + 4095) >> 12;
  v4 = a1;
  v5 = a1 + 48 + 8 * v3;
  do
  {
    result = MI_IS_PFN(*v1);
    if ( v2 )
    {
      if ( (_DWORD)result != 1 )
        goto LABEL_8;
    }
    else if ( !(_DWORD)result )
    {
      VerifierBugCheckIfAppropriate(196, 137, v4, (int)v1, v7);
    }
    result = *v1;
    if ( !*(_WORD *)(48 * *v1 - 0x58000000000LL + 32) )
      result = VerifierBugCheckIfAppropriate(196, 133, v4, v3, (__int64)(48 * *v1) / 48);
LABEL_8:
    ++v1;
  }
  while ( (unsigned __int64)v1 < v5 );
  return result;
}
