/*
 * XREFs of DestroyKF @ 0x1C01342F0
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C00E67CC (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     DestroyKL @ 0x1C0134260 (DestroyKL.c)
 * Callees:
 *     RemoveKeyboardLayoutFile @ 0x1C0134324 (RemoveKeyboardLayoutFile.c)
 */

__int64 __fastcall DestroyKF(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8

  result = HMMarkObjectDestroy(a1);
  if ( (_DWORD)result )
  {
    RemoveKeyboardLayoutFile(a1);
    Win32FreePool(*(_QWORD *)(a1 + 24), v3, v4);
    return HMFreeObject(a1);
  }
  return result;
}
