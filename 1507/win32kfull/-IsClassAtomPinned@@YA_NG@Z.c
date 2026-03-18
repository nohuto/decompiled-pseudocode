/*
 * XREFs of ?IsClassAtomPinned@@YA_NG@Z @ 0x1C00D916C
 * Callers:
 *     ?ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z @ 0x1C00D8F78 (-ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z.c)
 *     DestroyClass @ 0x1C00D8FFC (DestroyClass.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsClassAtomPinned(unsigned __int16 a1)
{
  return a1 >= gatomFirstPinned && a1 <= gatomLastPinned;
}
