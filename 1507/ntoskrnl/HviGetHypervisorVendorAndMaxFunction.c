/*
 * XREFs of HviGetHypervisorVendorAndMaxFunction @ 0x140268454
 * Callers:
 *     HvlpHvIdentityInfoCallback @ 0x1401E56BC (HvlpHvIdentityInfoCallback.c)
 *     HvlSvmGetSystemCapabilities @ 0x1401EB3A0 (HvlSvmGetSystemCapabilities.c)
 *     HviGetHardwareFeatures @ 0x1402683F0 (HviGetHardwareFeatures.c)
 *     HvlQueryDetailInfo @ 0x1406703D4 (HvlQueryDetailInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
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
