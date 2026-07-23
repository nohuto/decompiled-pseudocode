/*
 * XREFs of MiDeleteFileOnlyPfns @ 0x14065ABC4
 * Callers:
 *     MiExtendSection @ 0x140504D14 (MiExtendSection.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiReverseSwizzleInvalidPte @ 0x1401F2760 (MiReverseSwizzleInvalidPte.c)
 *     MiRemovePhysicalMemory @ 0x1406582A4 (MiRemovePhysicalMemory.c)
 */

void __fastcall MiDeleteFileOnlyPfns(__int64 *a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rdi
  unsigned int v5; // r14d
  __int64 v9; // rax
  __int64 v10; // r9
  unsigned __int64 v11; // rbp

  v3 = 0LL;
  v4 = 0LL;
  v5 = 0;
  if ( !a3 )
    goto LABEL_11;
  do
  {
    v9 = MI_READ_PTE_LOCK_FREE(a2);
    if ( (v9 & 0x800) == 0 )
      break;
    v11 = (MiReverseSwizzleInvalidPte(v9) >> 12) & 0xFFFFFFFFFLL;
    if ( !v3 )
      goto LABEL_7;
    if ( v3 + v10 != v11 )
    {
      MiRemovePhysicalMemory(v10, v3, 18);
      v4 += v3;
LABEL_7:
      v10 = v11;
      v3 = 1LL;
      goto LABEL_8;
    }
    ++v3;
LABEL_8:
    a2 += 8LL;
    ++v5;
  }
  while ( v5 < a3 );
  if ( v3 )
  {
    MiRemovePhysicalMemory(v10, v3, 18);
    v4 += v3;
  }
LABEL_11:
  MiDereferenceControlAreaPfnList(*a1, (__int64)a1, v4, 0);
}
