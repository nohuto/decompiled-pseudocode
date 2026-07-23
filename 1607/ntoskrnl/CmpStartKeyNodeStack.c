/*
 * XREFs of CmpStartKeyNodeStack @ 0x14060C020
 * Callers:
 *     CmpKeyEnumStackStartFromKeyNodeStack @ 0x14060A814 (CmpKeyEnumStackStartFromKeyNodeStack.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x14060C0B4 (CmpStartKeyNodeStackFromKcbStack.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x1400B0B88 (CmpAllocateTransientPoolWithTag.c)
 *     CmpKeyNodeStackEntryInitialize @ 0x140581D00 (CmpKeyNodeStackEntryInitialize.c)
 */

__int64 __fastcall CmpStartKeyNodeStack(__int64 a1, __int16 a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rsi
  PVOID TransientPoolWithTag; // rax
  __int64 v7; // r15

  v2 = 0;
  if ( a2 < 2 )
  {
LABEL_7:
    *(_WORD *)a1 = a2;
    return v2;
  }
  LOWORD(v5) = a2 - 1;
  TransientPoolWithTag = CmpAllocateTransientPoolWithTag(a1, 32LL * (__int16)(a2 - 1), 0x39364D43u);
  *(_QWORD *)(a1 + 72) = TransientPoolWithTag;
  if ( TransientPoolWithTag )
  {
    if ( (__int16)v5 > 0 )
    {
      v7 = 0LL;
      v5 = (unsigned __int16)v5;
      do
      {
        CmpKeyNodeStackEntryInitialize((_DWORD *)(v7 + *(_QWORD *)(a1 + 72)));
        v7 += 32LL;
        --v5;
      }
      while ( v5 );
    }
    goto LABEL_7;
  }
  return (unsigned int)-1073741670;
}
