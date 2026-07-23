/*
 * XREFs of HviGetHypervisorVendorAndMaxFunction @ 0x140231D6C
 * Callers:
 *     HvlpHvIdentityInfoCallback @ 0x1401BAC64 (HvlpHvIdentityInfoCallback.c)
 *     HvlSvmGetSystemCapabilities @ 0x1401BE358 (HvlSvmGetSystemCapabilities.c)
 *     HviGetHardwareFeatures @ 0x140231D08 (HviGetHardwareFeatures.c)
 *     HvlQueryDetailInfo @ 0x140620274 (HvlQueryDetailInfo.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1401317AC (HviIsAnyHypervisorPresent.c)
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
