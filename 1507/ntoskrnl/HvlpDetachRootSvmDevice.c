/*
 * XREFs of HvlpDetachRootSvmDevice @ 0x1401EBB7C
 * Callers:
 *     HvlSvmAttachPasidSpace @ 0x1401EAA9C (HvlSvmAttachPasidSpace.c)
 *     HvlSvmDetachPasidSpace @ 0x1401EAE1C (HvlSvmDetachPasidSpace.c)
 * Callees:
 *     HvlpExtendedFastHypercall @ 0x14017ECA0 (HvlpExtendedFastHypercall.c)
 */

__int64 __fastcall HvlpDetachRootSvmDevice(int a1)
{
  unsigned __int16 v1; // ax
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]
  int v5; // [rsp+2Ch] [rbp-Ch]

  v5 = 1;
  v3 = -1LL;
  v4 = a1;
  v1 = HvlpExtendedFastHypercall(65667LL, &v3, 16LL);
  switch ( v1 )
  {
    case 0u:
      return 0LL;
    case 0xBu:
    case 0x1Du:
      return 3221225626LL;
    case 0x59u:
      return 3473497LL;
  }
  return v1 | 0xC0350000;
}
