/*
 * XREFs of VfThunkApplyMandatoryThunks @ 0x14070F47C
 * Callers:
 *     VfSuspectDriversLoadCallback @ 0x140716114 (VfSuspectDriversLoadCallback.c)
 * Callees:
 *     MmIsSessionAddress @ 0x140013C40 (MmIsSessionAddress.c)
 *     MmDetachSession @ 0x1400764B8 (MmDetachSession.c)
 *     MmAttachSession @ 0x14007651C (MmAttachSession.c)
 *     MmGetNextSession @ 0x140086620 (MmGetNextSession.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     MmIsDriverLoadedCurrentSession @ 0x1404990DC (MmIsDriverLoadedCurrentSession.c)
 *     MmQuitNextSession @ 0x1404F149C (MmQuitNextSession.c)
 *     ViThunkApplyMandatoryThunksCurrentSession @ 0x14070F700 (ViThunkApplyMandatoryThunksCurrentSession.c)
 */

__int64 __fastcall VfThunkApplyMandatoryThunks(__int64 a1, unsigned int a2)
{
  unsigned int v4; // edi
  void *i; // rcx
  ULONG_PTR NextSession; // rax
  void *v7; // rbx
  _BYTE v9[48]; // [rsp+20h] [rbp-48h] BYREF

  if ( !a2 || !MmIsSessionAddress(*(_QWORD *)(a1 + 48)) )
    return ViThunkApplyMandatoryThunksCurrentSession(a1, a2);
  v4 = 1;
  for ( i = 0LL; ; i = v7 )
  {
    NextSession = MmGetNextSession(i);
    v7 = (void *)NextSession;
    if ( !NextSession )
      break;
    if ( (int)MmAttachSession(NextSession) >= 0 )
    {
      v4 = 1;
      if ( MmIsDriverLoadedCurrentSession(*(_QWORD *)(a1 + 48)) )
        v4 = ViThunkApplyMandatoryThunksCurrentSession(a1, a2);
      MmDetachSession((__int64)v7, (__int64)v9);
      if ( !v4 )
      {
        MmQuitNextSession(v7);
        return v4;
      }
    }
  }
  return v4;
}
