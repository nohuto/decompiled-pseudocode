/*
 * XREFs of HviGetHypervisorVersion @ 0x140217DA4
 * Callers:
 *     HvlpHvIdentityInfoCallback @ 0x1401AE5E4 (HvlpHvIdentityInfoCallback.c)
 *     HvlPhase0Initialize @ 0x140530D90 (HvlPhase0Initialize.c)
 *     HvlQueryDetailInfo @ 0x1405F6610 (HvlQueryDetailInfo.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x1401370B8 (HviIsHypervisorMicrosoftCompatible.c)
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
