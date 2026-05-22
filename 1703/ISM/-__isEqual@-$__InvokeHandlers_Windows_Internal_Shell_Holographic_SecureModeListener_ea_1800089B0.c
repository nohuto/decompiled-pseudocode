/*
 * XREFs of ?__isEqual@?$__InvokeHandlers_Windows_Internal_Shell_Holographic_SecureModeListener_SecureModeChangedEvent@VMPC3DStateHelper@@@SecureModeListener@Holographic@Shell@Internal@Windows@@UEAAHPEAX0@Z @ 0x1800089B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall Windows::Internal::Shell::Holographic::SecureModeListener::__InvokeHandlers_Windows_Internal_Shell_Holographic_SecureModeListener_SecureModeChangedEvent<MPC3DStateHelper>::__isEqual(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  return a2 == *(_QWORD *)(a1 + 16) && a3 == *(_QWORD *)(a1 + 24);
}
