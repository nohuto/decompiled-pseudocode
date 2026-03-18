/*
 * XREFs of ?IsClassAtomPinned@@YA_NG@Z @ 0x1C011E19C
 * Callers:
 *     ?ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z @ 0x1C011AC80 (-ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z.c)
 *     DestroyClass @ 0x1C011E02C (DestroyClass.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsClassAtomPinned(unsigned __int16 a1)
{
  return a1 >= gatomFirstPinned && a1 <= gatomLastPinned;
}
