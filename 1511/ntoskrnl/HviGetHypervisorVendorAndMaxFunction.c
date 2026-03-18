/*
 * XREFs of HviGetHypervisorVendorAndMaxFunction @ 0x140217D48
 * Callers:
 *     HvlpHvIdentityInfoCallback @ 0x1401AE5E4 (HvlpHvIdentityInfoCallback.c)
 *     HvlSvmGetSystemCapabilities @ 0x1401B1B28 (HvlSvmGetSystemCapabilities.c)
 *     HviGetHardwareFeatures @ 0x140217CE4 (HviGetHardwareFeatures.c)
 *     HvlQueryDetailInfo @ 0x1405F6610 (HvlQueryDetailInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall HviGetHypervisorVendorAndMaxFunction(__int64 a1)
{
  __int64 result; // rax

  _RAX = 1LL;
  __asm { cpuid }
  if ( (int)_RCX >= 0 )
  {
    result = 0LL;
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  else
  {
    _RAX = 0x40000000LL;
    __asm { cpuid }
    *(_DWORD *)a1 = result;
    *(_DWORD *)(a1 + 4) = _RBX;
    *(_DWORD *)(a1 + 8) = _RCX;
    *(_DWORD *)(a1 + 12) = _RDX;
  }
  return result;
}
