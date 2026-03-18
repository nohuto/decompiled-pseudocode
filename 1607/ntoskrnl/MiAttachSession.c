/*
 * XREFs of MiAttachSession @ 0x1400A5234
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x1400CDCA0 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     KeFlushTb @ 0x14001DDEC (KeFlushTb.c)
 *     MiCompareTbFlushTimeStamp @ 0x1400A52AC (MiCompareTbFlushTimeStamp.c)
 *     MiPteInShadowRange @ 0x1401EF3B8 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF658 (MiWritePteShadow.c)
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
  v2 = (_QWORD *)(8 * (((unsigned __int64)qword_140326918 >> 39) & 0x1FF) - 0x90482413000LL);
  *v2 = v1;
  if ( (unsigned int)MiPteInShadowRange(v2, v1) )
    MiWritePteShadow(v4, v3);
  result = MiCompareTbFlushTimeStamp((unsigned int)dword_1403268E0, 0xFFFFFFFFLL);
  if ( (_BYTE)result )
    return KeFlushTb(1u, 0);
  return result;
}
