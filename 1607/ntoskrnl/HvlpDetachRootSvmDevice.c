/*
 * XREFs of HvlpDetachRootSvmDevice @ 0x1401BE850
 * Callers:
 *     HvlSvmAttachPasidSpace @ 0x1401BDF34 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmDetachPasidSpace @ 0x1401BE204 (HvlSvmDetachPasidSpace.c)
 * Callees:
 *     HvcallpExtendedFastHypercall @ 0x1401685A0 (HvcallpExtendedFastHypercall.c)
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
  v1 = HvcallpExtendedFastHypercall(65667LL, &v3, 16LL);
  return HvlpHvToNtStatus(v1);
}
