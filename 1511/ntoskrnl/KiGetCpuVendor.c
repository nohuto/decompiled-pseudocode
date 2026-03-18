/*
 * XREFs of KiGetCpuVendor @ 0x1403A8AA8
 * Callers:
 *     HvlpProcessIommu @ 0x1401B3E24 (HvlpProcessIommu.c)
 *     KiSetFeatureBits @ 0x1403A7FB8 (KiSetFeatureBits.c)
 *     KiIsNXSupported @ 0x1403A8B5C (KiIsNXSupported.c)
 *     KiInitializeNxSupportDiscard @ 0x14075A4A0 (KiInitializeNxSupportDiscard.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     strncmp @ 0x140143860 (strncmp.c)
 */

__int64 KiGetCpuVendor()
{
  struct _KPRCB *CurrentPrcb; // r8
  char Str1[8]; // [rsp+24h] [rbp-24h] BYREF
  int v8; // [rsp+2Ch] [rbp-1Ch]

  CurrentPrcb = KeGetCurrentPrcb();
  _RAX = 0LL;
  __asm { cpuid }
  CurrentPrcb->VendorString[0] = 0;
  *(_QWORD *)Str1 = __PAIR64__(_RDX, _RBX);
  v8 = _RCX;
  *(_QWORD *)CurrentPrcb->VendorString = __PAIR64__(_RDX, _RBX);
  *(_DWORD *)&CurrentPrcb->VendorString[8] = v8;
  CurrentPrcb->VendorString[12] = 0;
  if ( !strncmp(Str1, "AuthenticAMD", 0xCuLL) )
    return 1LL;
  if ( !strncmp(Str1, "GenuineIntel", 0xCuLL) )
    return 2LL;
  return strncmp(Str1, "CentaurHauls", 0xCuLL) == 0 ? 3 : 0;
}
