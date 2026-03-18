/*
 * XREFs of ?ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z @ 0x1C00D8F78
 * Callers:
 *     InternalRegisterClassEx @ 0x1C005CF60 (InternalRegisterClassEx.c)
 * Callees:
 *     ?IsClassAtomPinned@@YA_NG@Z @ 0x1C00D916C (-IsClassAtomPinned@@YA_NG@Z.c)
 *     ?IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z @ 0x1C00D918C (-IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z.c)
 */

__int64 __fastcall ValidateClassAtomForRegisterClass(struct tagPROCESSINFO *a1, unsigned __int16 a2)
{
  unsigned __int16 v2; // dx
  struct tagPROCESSINFO *v3; // r9
  unsigned __int16 v4; // r8

  if ( IsClassAtomPinned(a2) || v2 < 0xC000u || IsClassAtomRegistered(v3, v2) )
    return v2;
  return v4;
}
