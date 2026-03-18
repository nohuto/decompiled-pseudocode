/*
 * XREFs of XRestoreSHelper @ 0x14018BE00
 * Callers:
 *     KeRestoreExtendedAndSupervisorState @ 0x1401265C8 (KeRestoreExtendedAndSupervisorState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XRestoreSHelper(__int64 _RCX, __int64 a2)
{
  __int64 result; // rax

  result = a2;
  __asm { xrstors byte ptr [rcx] }
  return result;
}
