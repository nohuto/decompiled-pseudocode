/*
 * XREFs of HviGetHypervisorVendorAndMaxFunction @ 0x140231F40
 * Callers:
 *     HvlpHvIdentityInfoCallback @ 0x1401BAD80 (HvlpHvIdentityInfoCallback.c)
 *     HvlSvmGetSystemCapabilities @ 0x1401BE474 (HvlSvmGetSystemCapabilities.c)
 *     HviGetHardwareFeatures @ 0x140231EDC (HviGetHardwareFeatures.c)
 *     HvlQueryDetailInfo @ 0x1406201C0 (HvlQueryDetailInfo.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x14013123C (HviIsAnyHypervisorPresent.c)
 */

char __fastcall HviGetHypervisorVendorAndMaxFunction(_DWORD *a1)
{
  LOBYTE(_RAX) = HviIsAnyHypervisorPresent();
  if ( (_BYTE)_RAX )
  {
    _RAX = 0x40000000LL;
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
