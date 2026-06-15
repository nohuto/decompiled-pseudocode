/*
 * XREFs of ??_E?$CGenericApplicationManagerWorkItem@U_PlayToStreamStateChangedContext@@@@UEAAPEAXI@Z @ 0x180019B10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall CGenericApplicationManagerWorkItem<_PlayToStreamStateChangedContext>::`vector deleting destructor'(
        _QWORD *lpMem,
        char a2)
{
  CApplicationManager *v4; // rdi
  HANDLE ProcessHeap; // rax

  *lpMem = &CGenericApplicationManagerWorkItem<_PlayToStreamStateChangedContext>::`vftable';
  v4 = g_ApplicationManager;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)g_ApplicationManager + 2, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(CApplicationManager *))(*(_QWORD *)v4 + 16LL))(v4);
    (*(void (__fastcall **)(CApplicationManager *, __int64))(*(_QWORD *)v4 + 8LL))(v4, 1LL);
  }
  *lpMem = &WORKER_THREAD_EVENT::`vftable';
  if ( (a2 & 1) != 0 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
  }
  return lpMem;
}
