/*
 * XREFs of RawInputManagerObjectCreateKernelHandle @ 0x1C007D610
 * Callers:
 *     RIMIDECreatePseudoHIDDevice @ 0x1C00C64DC (RIMIDECreatePseudoHIDDevice.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C00C66E8 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RawInputManagerObjectCreateKernelHandle(
        _DWORD *Object,
        ACCESS_MASK DesiredAccess,
        char a3,
        KPROCESSOR_MODE AccessMode,
        PHANDLE Handle)
{
  ULONG v6; // edx

  v6 = 512;
  *Handle = (void *)-1LL;
  if ( Object[1] != 1 )
    return -1073741788;
  if ( a3 )
    v6 = 514;
  return ObOpenObjectByPointer(Object, v6, 0LL, DesiredAccess, ExRawInputManagerObjectType, AccessMode, Handle);
}
