/*
 * XREFs of ??_GCInputSinkStruct@@QEAAPEAXI@Z @ 0x1800A69C4
 * Callers:
 *     ?UpdateInputSink@CInteraction@@QEAAJPEAX@Z @ 0x1800A47D4 (-UpdateInputSink@CInteraction@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?CleanupEndpoints@CInputSinkStruct@@AEAAXXZ @ 0x1800A6890 (-CleanupEndpoints@CInputSinkStruct@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

HANDLE *__fastcall CInputSinkStruct::`scalar deleting destructor'(HANDLE *this)
{
  if ( this[2] )
  {
    CInputSinkStruct::CleanupEndpoints((CInputSinkStruct *)this);
    CloseHandle(this[2]);
  }
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, HANDLE *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
