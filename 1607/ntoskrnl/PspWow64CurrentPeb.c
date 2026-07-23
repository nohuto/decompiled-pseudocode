/*
 * XREFs of PspWow64CurrentPeb @ 0x1400F7E14
 * Callers:
 *     PspWow64SetupUserProcessAddressSpace @ 0x1400F5128 (PspWow64SetupUserProcessAddressSpace.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PspWow64CurrentPeb(unsigned __int64 *a1)
{
  unsigned __int64 *v2; // rax
  unsigned __int64 v4; // rcx

  v2 = (unsigned __int64 *)KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
  if ( v2 )
  {
    *a1 = *v2;
  }
  else
  {
    v4 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1] + 4016);
    if ( (v4 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v4 + 1120 > 0x7FFFFFFF0000LL || v4 + 1120 < v4 )
      MEMORY[0x7FFFFFFF0000] = 0;
    *a1 = v4;
  }
  return 0LL;
}
