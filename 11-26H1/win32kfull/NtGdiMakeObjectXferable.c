/*
 * XREFs of NtGdiMakeObjectXferable @ 0x1401974A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$GrepReleaseLockValidate@$0BE@@@YAXXZ @ 0x1400C69D0 (--$GrepReleaseLockValidate@$0BE@@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$0BE@@@YAXXZ @ 0x1400C6AC0 (--$GrepAcquireLockValidate@$0BE@@@YAXXZ.c)
 *     ?bBeginXfer@XFERDCOBJ@@SA_NPEAUHDC__@@K@Z @ 0x140197540 (-bBeginXfer@XFERDCOBJ@@SA_NPEAUHDC__@@K@Z.c)
 */

__int64 __fastcall NtGdiMakeObjectXferable(Gre::Base *a1, unsigned int a2)
{
  HSEMAPHORE v4; // rbx
  BOOL v5; // edi

  if ( ((unsigned int)a1 & 0x800000) != 0 )
    return 1LL;
  v4 = (HSEMAPHORE)(*(_QWORD *)Gre::Base::Globals(a1) + 1512LL);
  GreAcquireSemaphoreInternal(v4);
  GrepAcquireLockValidate<20>();
  v5 = XFERDCOBJ::bBeginXfer((HDC)a1, a2);
  if ( v4 )
  {
    EtwTraceGreLockReleaseSemaphore(L"Hmgr", v4);
    GrepReleaseLockValidate<20>();
    GreReleaseSemaphoreExclusiveInternal(v4);
  }
  return v5;
}
