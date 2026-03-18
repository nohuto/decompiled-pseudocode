/*
 * XREFs of MiDetachSession @ 0x1400A7C2C
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x1400CDCA0 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1401EF3B8 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF658 (MiWritePteShadow.c)
 */

__int64 __fastcall MiDetachSession(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rcx
  __int64 v3; // rcx
  unsigned __int64 v4; // r9
  __int64 result; // rax
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = (_QWORD *)(8 * (((unsigned __int64)qword_140326918 >> 39) & 0x1FF) - 0x90482413000LL);
  *v2 = 0LL;
  if ( (unsigned int)MiPteInShadowRange(v2, a2) )
    MiWritePteShadow(v3, (unsigned int)v4);
  KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] = v4;
  _InterlockedOr(v6, v4);
  result = (unsigned int)KiTbFlushTimeStamp;
  dword_1403268E0 = KiTbFlushTimeStamp;
  return result;
}
