/*
 * XREFs of CmpDestroyVirtualStack @ 0x140658334
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x140658F4C (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     CmpDelayDerefKeyControlBlock @ 0x1404CC960 (CmpDelayDerefKeyControlBlock.c)
 */

void __fastcall CmpDestroyVirtualStack(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // r14d
  unsigned int v6; // esi
  unsigned int **v7; // rbx
  unsigned int i; // edi
  unsigned int *v10; // rcx

  if ( (_DWORD)a2 )
  {
    v5 = a2 - 1;
    v6 = a2;
    v7 = (unsigned int **)(a1 + 32);
    for ( i = 0; i < v6; ++i )
    {
      if ( *(v7 - 2) )
      {
        (*(void (__fastcall **)(__int64, unsigned __int64))(a3 + 16))(a3, ((unsigned __int64)i << 6) + a1 + 24);
        *(v7 - 2) = 0LL;
      }
      if ( *v7 )
        CmpDelayDerefKeyControlBlock(*v7, a2, a3, a4);
      if ( i == v5 )
      {
        v10 = v7[2];
        if ( v10 )
          CmpDelayDerefKeyControlBlock(v10, a2, a3, a4);
      }
      v7 += 8;
    }
  }
}
