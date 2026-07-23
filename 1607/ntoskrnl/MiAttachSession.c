/*
 * XREFs of MiAttachSession @ 0x1400A37AC
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x1400CBB40 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     KeFlushTb @ 0x14001D96C (KeFlushTb.c)
 *     MiCompareTbFlushTimeStamp @ 0x1400A3824 (MiCompareTbFlushTimeStamp.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 */

__int64 __fastcall MiAttachSession(unsigned __int64 a1)
{
  __int64 v1; // rdx
  _QWORD *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 result; // rax

  KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] = a1;
  v1 = *(_QWORD *)(a1 + 7808);
  v2 = (_QWORD *)(8 * (((unsigned __int64)qword_140326958 >> 39) & 0x1FF) - 0x90482413000LL);
  *v2 = v1;
  if ( (unsigned int)MiPteInShadowRange(v2, v1) )
    MiWritePteShadow(v4, v3);
  result = MiCompareTbFlushTimeStamp((unsigned int)dword_140326920, 0xFFFFFFFFLL);
  if ( (_BYTE)result )
    return KeFlushTb(1u, 0);
  return result;
}
