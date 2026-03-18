/*
 * XREFs of ?IsClassAtomPinned@@YA_NG@Z @ 0x1C008FCD0
 * Callers:
 *     ?ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z @ 0x1C008FAE4 (-ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z.c)
 *     DestroyClass @ 0x1C008FB6C (DestroyClass.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsClassAtomPinned(unsigned __int16 a1)
{
  return a1 >= gatomFirstPinned && a1 <= gatomLastPinned;
}
