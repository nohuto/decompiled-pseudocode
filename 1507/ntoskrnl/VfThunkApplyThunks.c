/*
 * XREFs of VfThunkApplyThunks @ 0x140744D5C
 * Callers:
 *     VfSuspectDriversLoadCallback @ 0x14074A174 (VfSuspectDriversLoadCallback.c)
 * Callees:
 *     MmIsSessionAddress @ 0x14004ED20 (MmIsSessionAddress.c)
 *     MmGetNextSession @ 0x1400FD460 (MmGetNextSession.c)
 *     MmDetachSession @ 0x1400FD53C (MmDetachSession.c)
 *     MmAttachSession @ 0x1400FD5A0 (MmAttachSession.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MmQuitNextSession @ 0x14051C278 (MmQuitNextSession.c)
 *     MmIsDriverLoadedCurrentSession @ 0x14051C764 (MmIsDriverLoadedCurrentSession.c)
 *     ViThunkApplyThunksCurrentSession @ 0x140744F94 (ViThunkApplyThunksCurrentSession.c)
 */

__int64 __fastcall VfThunkApplyThunks(__int64 a1, unsigned int a2)
{
  unsigned int v4; // edi
  _KPROCESS *i; // rcx
  _KPROCESS *NextSession; // rax
  _KPROCESS *v7; // rbx
  _BYTE v9[48]; // [rsp+20h] [rbp-48h] BYREF

  if ( !a2 || !MmIsSessionAddress(*(_QWORD *)(a1 + 48)) )
    return ViThunkApplyThunksCurrentSession(a1, a2);
  v4 = 1;
  for ( i = 0LL; ; i = v7 )
  {
    NextSession = (_KPROCESS *)MmGetNextSession(i);
    v7 = NextSession;
    if ( !NextSession )
      break;
    if ( (int)MmAttachSession(NextSession, (__int64)v9) >= 0 )
    {
      v4 = 1;
      if ( MmIsDriverLoadedCurrentSession(*(_QWORD *)(a1 + 48)) )
        v4 = ViThunkApplyThunksCurrentSession(a1, a2);
      MmDetachSession((__int64)v7, (struct _KTHREAD *)v9);
      if ( !v4 )
      {
        MmQuitNextSession(v7);
        return v4;
      }
    }
  }
  return v4;
}
