/*
 * XREFs of ValidatePctPtcSymmetry @ 0x1C00158E0
 * Callers:
 *     ValidatePerfDomainSymmetry @ 0x1C00150EC (ValidatePerfDomainSymmetry.c)
 * Callees:
 *     ValidateRegisterSymmetry @ 0x1C001593C (ValidateRegisterSymmetry.c)
 */

__int64 __fastcall ValidatePctPtcSymmetry(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // r9

  v6 = -1073741823;
  if ( (unsigned __int8)ValidateRegisterSymmetry(a2, a4, a3, a4)
    && (unsigned __int8)ValidateRegisterSymmetry(a2 + 12, a4 + 12, v7, v8) )
  {
    return 0;
  }
  return v6;
}
