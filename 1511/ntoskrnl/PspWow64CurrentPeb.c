/*
 * XREFs of PspWow64CurrentPeb @ 0x14009B250
 * Callers:
 *     PspWow64SetupUserProcessAddressSpace @ 0x14009B4B0 (PspWow64SetupUserProcessAddressSpace.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PspWow64CurrentPeb(unsigned __int64 *a1)
{
  unsigned __int64 *v1; // rax
  unsigned __int64 v3; // rax

  v1 = (unsigned __int64 *)KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
  if ( v1 )
  {
    *a1 = *v1;
  }
  else
  {
    v3 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1] + 4016);
    if ( (v3 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v3 + 1120 > MmUserProbeAddress || v3 + 1120 < v3 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a1 = v3;
  }
  return 0LL;
}
