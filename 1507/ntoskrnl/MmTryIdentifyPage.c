/*
 * XREFs of MmTryIdentifyPage @ 0x1402164B4
 * Callers:
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x1403FF9B0 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 * Callees:
 *     MiIdentifyPfn @ 0x1400C4A30 (MiIdentifyPfn.c)
 */

__int64 __fastcall MmTryIdentifyPage(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // edi
  __int64 v3; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 v5; // rcx

  *a2 = 0LL;
  v2 = 1;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v3 = 48 * a1 - 0x58000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
  {
    v2 = 0;
  }
  else
  {
    if ( (*(_BYTE *)(v3 + 35) & 0x40) != 0
      || (MiFlags & 0x80000) != 0
      && ((*(_QWORD *)(v3 + 40) >> 54) & 7) == 3
      && (*(_QWORD *)(v3 + 40) & 0x200000000000000LL) == 0
      && ((v5 = *(_QWORD *)(v3 + 8)) == 0
       || v5 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
       && v5 >= 0xFFFFF68000000000uLL) )
    {
      v2 = 0;
    }
    else
    {
      MiIdentifyPfn(v3, a2);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  __writecr8(CurrentIrql);
  return v2;
}
