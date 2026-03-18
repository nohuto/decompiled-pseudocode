/*
 * XREFs of MiDereferenceTebVad @ 0x1401273DC
 * Callers:
 *     MiRemoveVadCharges @ 0x1404B9120 (MiRemoveVadCharges.c)
 * Callees:
 *     MiUnlockPagedAddress @ 0x1400056EC (MiUnlockPagedAddress.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiDeleteTransitionPte @ 0x140082E6C (MiDeleteTransitionPte.c)
 *     MiReleasePageFileSpace @ 0x1400E31B4 (MiReleasePageFileSpace.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiDecrementTebProtos @ 0x140232F20 (MiDecrementTebProtos.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferenceTebVad(__int64 a1)
{
  char *v1; // rdi
  unsigned int v2; // ebx
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // r15
  __int16 *v5; // r12
  unsigned int v6; // ebp
  __int64 v7; // rcx
  unsigned __int64 *v8; // r14
  unsigned __int64 PteShadow; // rax
  __int64 v10; // rax

  v1 = *(char **)(a1 + 80);
  v2 = 0;
  if ( v1 )
  {
    v3 = (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32))
       - (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32))
       + 1;
    v4 = 8 * v3;
    if ( (unsigned int)MiDecrementTebProtos(&v1[8 * v3]) )
    {
      v5 = MiPartitionIdToPointer(WORD2(KeGetCurrentThread()->ApcState.Process[1].SecurePid));
      v6 = 0;
      if ( v3 )
      {
        v7 = 0LL;
        do
        {
          v8 = (unsigned __int64 *)&v1[8 * v7];
          if ( (unsigned int)MiDeleteTransitionPte(v8, 0) == 1 )
          {
            PteShadow = *v8;
            if ( (unsigned __int64)(v8 + 0x12090482600LL) <= 0x7F8 )
              PteShadow = MiReadPteShadow(v8, *v8);
            MiReleasePageFileSpace((struct _KEVENT *)v5, PteShadow, 1);
          }
          v7 = ++v6;
        }
        while ( v6 < v3 );
      }
      if ( v4 )
      {
        v10 = 0LL;
        do
        {
          MiUnlockPagedAddress((unsigned __int64)&v1[v10]);
          v2 += 4096;
          v10 = v2;
        }
        while ( v2 < v4 );
      }
      ExFreePoolWithTag(v1, 0);
    }
  }
}
