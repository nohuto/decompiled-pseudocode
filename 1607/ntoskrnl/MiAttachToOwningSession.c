/*
 * XREFs of MiAttachToOwningSession @ 0x14010C45C
 * Callers:
 *     MiStealPage @ 0x140107E84 (MiStealPage.c)
 *     MiCapturePfnVm @ 0x1401F7D38 (MiCapturePfnVm.c)
 * Callees:
 *     MiLockPageInline @ 0x140022E70 (MiLockPageInline.c)
 *     KxReleaseQueuedSpinLock @ 0x140069570 (KxReleaseQueuedSpinLock.c)
 *     MmAttachSession @ 0x14007651C (MmAttachSession.c)
 *     MiSelectSessionAttachProcess @ 0x140076748 (MiSelectSessionAttachProcess.c)
 *     MiGetTopLevelPfn @ 0x14010A970 (MiGetTopLevelPfn.c)
 *     MiTryToAcquireExpansionLockAtDpc @ 0x14010B044 (MiTryToAcquireExpansionLockAtDpc.c)
 */

_QWORD *__fastcall MiAttachToOwningSession(__int64 a1, unsigned __int8 a2)
{
  __int64 TopLevelPfn; // rax
  __int64 v5; // rdi
  _QWORD *v6; // rdi
  volatile signed __int64 *v8[5]; // [rsp+20h] [rbp-28h] BYREF

  TopLevelPfn = MiGetTopLevelPfn(a1, 0LL);
  if ( (*(_QWORD *)(TopLevelPfn + 24) & 0x4000000000000000LL) != 0 )
  {
    if ( TopLevelPfn != a1 )
      _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    v5 = *(_QWORD *)TopLevelPfn;
    if ( TopLevelPfn != a1 )
      _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( MiTryToAcquireExpansionLockAtDpc((__int64)v8) )
    {
      v6 = MiSelectSessionAttachProcess(v5);
      if ( a2 == 17 )
      {
        KxReleaseQueuedSpinLock(v8);
        return v6;
      }
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      KxReleaseQueuedSpinLock(v8);
      __writecr8(a2);
      if ( v6 && (int)MmAttachSession((ULONG_PTR)v6) >= 0 )
        return v6;
      MiLockPageInline(a1);
    }
  }
  return 0LL;
}
