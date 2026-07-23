/*
 * XREFs of KiGetCpuVendor @ 0x1403D622C
 * Callers:
 *     HvlpProcessIommu @ 0x1401BF828 (HvlpProcessIommu.c)
 *     KiSetFeatureBits @ 0x1403D57C8 (KiSetFeatureBits.c)
 *     KiIsNXSupported @ 0x1403D6320 (KiIsNXSupported.c)
 *     KiGetProcessorSignature @ 0x1403DE294 (KiGetProcessorSignature.c)
 *     KiInitializeNxSupportDiscard @ 0x1407A11F4 (KiInitializeNxSupportDiscard.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     strncmp @ 0x14014D3F0 (strncmp.c)
 */

__int64 KiGetCpuVendor()
{
  struct _KPRCB *CurrentPrcb; // r8
  unsigned int v2; // edi
  char Str1[8]; // [rsp+24h] [rbp-24h] BYREF
  int v9; // [rsp+2Ch] [rbp-1Ch]

  CurrentPrcb = KeGetCurrentPrcb();
  _RAX = 0LL;
  v2 = 0;
  __asm { cpuid }
  CurrentPrcb->VendorString[0] = 0;
  *(_QWORD *)Str1 = __PAIR64__(_RDX, _RBX);
  v9 = _RCX;
  *(_QWORD *)CurrentPrcb->VendorString = __PAIR64__(_RDX, _RBX);
  *(_DWORD *)&CurrentPrcb->VendorString[8] = v9;
  CurrentPrcb->VendorString[12] = 0;
  if ( !strncmp(Str1, "AuthenticAMD", 0xCuLL) )
    return 1LL;
  if ( !strncmp(Str1, "GenuineIntel", 0xCuLL) )
    return 2LL;
  if ( !strncmp(Str1, "CentaurHauls", 0xCuLL) )
    return 3LL;
  LOBYTE(v2) = strncmp(Str1, "HygonGenuine", 0xCuLL) == 0;
  return v2;
}
