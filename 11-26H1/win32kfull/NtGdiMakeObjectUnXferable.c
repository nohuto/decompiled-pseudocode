/*
 * XREFs of NtGdiMakeObjectUnXferable @ 0x1401975E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$GrepReleaseLockValidate@$0BE@@@YAXXZ @ 0x1400C69D0 (--$GrepReleaseLockValidate@$0BE@@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$0BE@@@YAXXZ @ 0x1400C6AC0 (--$GrepAcquireLockValidate@$0BE@@@YAXXZ.c)
 *     ?bEndXfer@XFERDCOBJ@@SA_NPEAUHDC__@@@Z @ 0x140197674 (-bEndXfer@XFERDCOBJ@@SA_NPEAUHDC__@@@Z.c)
 */

__int64 __fastcall NtGdiMakeObjectUnXferable(Gre::Base *a1)
{
  HSEMAPHORE v2; // rbx
  BOOL v3; // edi

  if ( ((unsigned int)a1 & 0x800000) != 0 )
    return 1LL;
  v2 = (HSEMAPHORE)(*(_QWORD *)Gre::Base::Globals(a1) + 1512LL);
  GreAcquireSemaphoreInternal(v2);
  GrepAcquireLockValidate<20>();
  v3 = XFERDCOBJ::bEndXfer((HDC)a1);
  if ( v2 )
  {
    EtwTraceGreLockReleaseSemaphore(L"Hmgr", v2);
    GrepReleaseLockValidate<20>();
    GreReleaseSemaphoreExclusiveInternal(v2);
  }
  return v3;
}
