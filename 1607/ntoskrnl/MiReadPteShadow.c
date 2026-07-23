/*
 * XREFs of MiReadPteShadow @ 0x1401EF20C
 * Callers:
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 * Callees:
 *     MiPteHasShadow @ 0x1401EF1B8 (MiPteHasShadow.c)
 */

__int64 __fastcall MiReadPteShadow(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // r8
  __int64 v4; // rax
  __int64 v6; // rax

  if ( (unsigned int)MiPteHasShadow() && (v2 & 1) != 0 && ((v2 & 0x20) == 0 || (v2 & 0x42) == 0) )
  {
    v4 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].Affinity.Count;
    if ( !v4 )
      return a2;
    v2 = a2;
    v6 = *(_QWORD *)(v4 + 8 * ((v3 >> 3) & 0x1FF));
    if ( (v6 & 0x20) != 0 )
      v2 = a2 | 0x20;
    if ( (v6 & 0x42) != 0 )
      return v2 | 0x42;
  }
  return v2;
}
