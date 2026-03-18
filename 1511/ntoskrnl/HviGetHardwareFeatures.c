/*
 * XREFs of HviGetHardwareFeatures @ 0x140217CE4
 * Callers:
 *     HvlSvmGetSystemCapabilities @ 0x1401B1B28 (HvlSvmGetSystemCapabilities.c)
 *     HviIsIommuInUse @ 0x140217E24 (HviIsIommuInUse.c)
 *     HvlQueryDetailInfo @ 0x1405F6610 (HvlQueryDetailInfo.c)
 *     HvlQueryDmaProtectionInfo @ 0x1405F6724 (HvlQueryDmaProtectionInfo.c)
 *     EtwpTraceSystemInitialization @ 0x140755A0C (EtwpTraceSystemInitialization.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     HviGetHypervisorVendorAndMaxFunction @ 0x140217D48 (HviGetHypervisorVendorAndMaxFunction.c)
 */

__int64 __fastcall HviGetHardwareFeatures(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  unsigned int v10[4]; // [rsp+20h] [rbp-28h] BYREF

  HviGetHypervisorVendorAndMaxFunction(v10, a2, a3, a4);
  _RAX = 1073741830LL;
  if ( v10[0] < 0x40000006 )
  {
    result = 0LL;
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  else
  {
    __asm { cpuid }
    *(_DWORD *)a1 = result;
    *(_DWORD *)(a1 + 4) = _RBX;
    *(_DWORD *)(a1 + 8) = _RCX;
    *(_DWORD *)(a1 + 12) = _RDX;
  }
  return result;
}
