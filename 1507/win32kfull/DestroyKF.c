/*
 * XREFs of DestroyKF @ 0x1C0131F90
 * Callers:
 *     DestroyKL @ 0x1C0131F00 (DestroyKL.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0139D2C (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 * Callees:
 *     RemoveKeyboardLayoutFile @ 0x1C0131FC4 (RemoveKeyboardLayoutFile.c)
 */

__int64 __fastcall DestroyKF(__int64 a1)
{
  __int64 result; // rax

  result = HMMarkObjectDestroy(a1);
  if ( (_DWORD)result )
  {
    RemoveKeyboardLayoutFile(a1);
    Win32FreePool(*(_QWORD *)(a1 + 24));
    return HMFreeObject(a1);
  }
  return result;
}
