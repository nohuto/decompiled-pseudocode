/*
 * XREFs of Controller_InitiateBootRecovery @ 0x1C00150D8
 * Callers:
 *     Controller_ReportFatalError @ 0x1C001595C (Controller_ReportFatalError.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     Controller_InternalReset @ 0x1C0015420 (Controller_InternalReset.c)
 */

void __fastcall Controller_InitiateBootRecovery(_QWORD *a1, char a2)
{
  ULONG_PTR v2; // rax

  if ( (a2 & 0x1C) != 0 )
  {
    v2 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, _QWORD))(WdfFunctions_01015 + 264))(
           WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
           *a1);
    KeBugCheckEx(0x144u, 2uLL, v2, 3uLL, 0LL);
  }
  if ( (a2 & 1) != 0 )
  {
    _InterlockedIncrement(&dword_1C0041908);
    Controller_InternalReset();
    _InterlockedDecrement(&dword_1C0041908);
  }
  else if ( (a2 & 2) != 0 )
  {
    ((void (__fastcall *)(__int64, _QWORD))qword_1C0041510)(UcxGlobals, a1[1]);
  }
}
