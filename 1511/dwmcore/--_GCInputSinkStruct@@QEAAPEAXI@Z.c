/*
 * XREFs of ??_GCInputSinkStruct@@QEAAPEAXI@Z @ 0x1800A887C
 * Callers:
 *     ?UpdateInputSink@CInteraction@@QEAAJPEAX@Z @ 0x1800A79C4 (-UpdateInputSink@CInteraction@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?CleanupEndpoints@CInputSinkStruct@@AEAAXXZ @ 0x1800A8748 (-CleanupEndpoints@CInputSinkStruct@@AEAAXXZ.c)
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
