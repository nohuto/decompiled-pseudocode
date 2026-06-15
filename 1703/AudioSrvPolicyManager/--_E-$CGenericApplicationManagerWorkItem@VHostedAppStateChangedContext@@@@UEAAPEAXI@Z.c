/*
 * XREFs of ??_E?$CGenericApplicationManagerWorkItem@VHostedAppStateChangedContext@@@@UEAAPEAXI@Z @ 0x180015C10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800210D4 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall CGenericApplicationManagerWorkItem<HostedAppStateChangedContext>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  CApplicationManager *v4; // rdi

  *a1 = &CGenericApplicationManagerWorkItem<ApplicationStateChangedContext>::`vftable';
  v4 = g_ApplicationManager;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)g_ApplicationManager + 2, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(CApplicationManager *))(*(_QWORD *)v4 + 16LL))(v4);
    (*(void (__fastcall **)(CApplicationManager *, __int64))(*(_QWORD *)v4 + 8LL))(v4, 1LL);
  }
  *a1 = &WORKER_THREAD_EVENT::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x18uLL);
  return a1;
}
