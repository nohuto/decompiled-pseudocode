/*
 * XREFs of MiInitMachineDependent @ 0x14078EF74
 * Callers:
 *     MiInitNucleus @ 0x1407D06B4 (MiInitNucleus.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 MiInitMachineDependent()
{
  unsigned __int64 v0; // rax
  _KPROCESS *Process; // rdx
  __int16 v2; // cx
  unsigned __int64 i; // rcx
  unsigned __int64 v4; // rax
  unsigned __int64 result; // rax
  bool v6; // cf

  if ( (KeFeatureBits & 0x200000) != 0 )
  {
    MiFlags |= 0x100u;
  }
  else if ( (KeFeatureBits & 0x1000000) != 0 )
  {
    MiFlags |= 0x200u;
  }
  v0 = MI_READ_PTE_LOCK_FREE(0xFFFFF6FB7DBEDF68uLL);
  Process = KeGetCurrentThread()->ApcState.Process;
  v2 = __readcr3();
  Process->DirectoryTableBase = (((v0 >> 12) & 0xFFFFFFFFFLL) << 12) | v2 & 0xFFF;
  for ( i = 0LL; i < 0x40; ++i )
  {
    v4 = i & 7;
    if ( v4 != 1 )
    {
      v6 = v4 == 4;
      result = v4 - 4;
      if ( !v6 && result != 1 )
        continue;
    }
    result = 0x8000000000000000uLL;
    MmProtectToPteMask[i] |= 0x8000000000000000uLL;
  }
  return result;
}
