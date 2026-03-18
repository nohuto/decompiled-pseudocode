/*
 * XREFs of ViThunkReplaceAllSharedExports @ 0x1407452F0
 * Callers:
 *     ViThunkApplyThunksCurrentSession @ 0x140744F94 (ViThunkApplyThunksCurrentSession.c)
 * Callees:
 *     RtlNumberOfClearBits @ 0x1400EF684 (RtlNumberOfClearBits.c)
 *     ViThunkReplaceSharedExports @ 0x14074559C (ViThunkReplaceSharedExports.c)
 */

__int64 __fastcall ViThunkReplaceAllSharedExports(_QWORD *a1, int a2)
{
  ULONG v4; // eax
  __int64 result; // rax
  ULONG v6; // eax
  ULONG v7; // eax
  ULONG v8; // eax

  v4 = RtlNumberOfClearBits(&VfPoolThunksBitMapHeader);
  result = ViThunkReplaceSharedExports(a1[3], v4);
  if ( !KernelVerifier )
  {
    v6 = RtlNumberOfClearBits(&VfRegularThunksBitMapHeader);
    result = ViThunkReplaceSharedExports(a1[2], v6);
    if ( !a2 )
    {
      v7 = RtlNumberOfClearBits(&VfOrderDependentThunksBitMapHeader);
      ViThunkReplaceSharedExports(a1[4], v7);
      v8 = RtlNumberOfClearBits(&VfXdvThunksBitMapHeader);
      return ViThunkReplaceSharedExports(a1[5], v8);
    }
  }
  return result;
}
