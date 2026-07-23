/*
 * XREFs of XSaveSHelper @ 0x140167CE0
 * Callers:
 *     KeSaveExtendedAndSupervisorState @ 0x140083B40 (KeSaveExtendedAndSupervisorState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XSaveSHelper(__int64 _RCX, __int64 a2)
{
  __int64 result; // rax

  result = a2;
  __asm { xsaves  byte ptr [rcx] }
  return result;
}
