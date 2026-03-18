/*
 * XREFs of HviGetHypervisorVersion @ 0x140231F80
 * Callers:
 *     HvlpHvIdentityInfoCallback @ 0x1401BAD80 (HvlpHvIdentityInfoCallback.c)
 *     KiIsHyperVCr3RspErrataPresent @ 0x1401D8E8C (KiIsHyperVCr3RspErrataPresent.c)
 *     HvlPhase0Initialize @ 0x14057D5D4 (HvlPhase0Initialize.c)
 *     HvlQueryDetailInfo @ 0x1406201C0 (HvlQueryDetailInfo.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x14014AF54 (HviIsHypervisorMicrosoftCompatible.c)
 */

char __fastcall HviGetHypervisorVersion(_DWORD *a1)
{
  LOBYTE(_RAX) = HviIsHypervisorMicrosoftCompatible();
  if ( (_BYTE)_RAX )
  {
    _RAX = 1073741826LL;
    __asm { cpuid }
    *a1 = _RAX;
    a1[1] = _RBX;
    a1[2] = _RCX;
    a1[3] = _RDX;
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *((_QWORD *)a1 + 1) = 0LL;
  }
  return _RAX;
}
