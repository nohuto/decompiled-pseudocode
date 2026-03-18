/*
 * XREFs of MiMoveWorkingFreeToTail @ 0x1400E8DE8
 * Callers:
 *     MiConvertToLinkedWsles @ 0x1400B5930 (MiConvertToLinkedWsles.c)
 * Callees:
 *     MiMoveValidWsle @ 0x1400B8B14 (MiMoveValidWsle.c)
 *     MiPopFreeWsle @ 0x1400B97C8 (MiPopFreeWsle.c)
 *     MiReleaseWsle @ 0x1400BAAFC (MiReleaseWsle.c)
 */

void __fastcall MiMoveWorkingFreeToTail(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  __int64 v4; // r14
  unsigned __int64 v5; // rbp
  ULONG_PTR v6; // rax
  _BYTE *v7; // rcx
  unsigned __int64 i; // rbx

  v2 = *(_QWORD *)(BugCheckParameter2 + 184);
  v3 = *(_QWORD *)(BugCheckParameter2 + 120);
  v4 = *(_QWORD *)(v2 + 496);
  if ( (*(_BYTE *)(BugCheckParameter2 + 216) & 7) != 0 )
    ++v3;
  v5 = *(_QWORD *)(v2 + 32);
  while ( *(_QWORD *)v2 != 0xFFFFFFFFFLL )
  {
    v6 = MiPopFreeWsle(BugCheckParameter2);
    if ( v6 < v3 )
    {
      if ( v5 >= v3 )
      {
        v7 = (_BYTE *)(v4 + v5 * *(unsigned int *)(v2 + 64));
        do
        {
          if ( (*v7 & 1) != 0 )
            break;
          --v5;
          v7 -= *(unsigned int *)(v2 + 64);
        }
        while ( v5 >= v3 );
      }
      MiMoveValidWsle(BugCheckParameter2, v5, v6);
    }
    else
    {
      *(_QWORD *)(v6 * *(unsigned int *)(v2 + 64) + *(_QWORD *)(v2 + 496)) = 0LL;
    }
  }
  for ( i = *(_QWORD *)(v2 + 32); i >= v3; --i )
    MiReleaseWsle(i, (_QWORD *)BugCheckParameter2, 0LL, 0);
}
