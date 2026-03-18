/*
 * XREFs of ??_GCInputSinkStruct@@QEAAPEAXI@Z @ 0x18005ADD0
 * Callers:
 *     ?UpdateInputSink@CInteraction@@QEAAJPEAX@Z @ 0x18005A1C4 (-UpdateInputSink@CInteraction@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?CleanupEndpoints@CInputSinkStruct@@AEAAXXZ @ 0x18005ACA8 (-CleanupEndpoints@CInputSinkStruct@@AEAAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
