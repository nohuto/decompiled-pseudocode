/*
 * XREFs of HvlSvmDeletePrQueue @ 0x1401BE1C4
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpExtendedFastHypercall @ 0x1401685A0 (HvcallpExtendedFastHypercall.c)
 */

__int64 __fastcall HvlSvmDeletePrQueue(unsigned int a1)
{
  unsigned __int16 v1; // ax
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v1 = HvcallpExtendedFastHypercall(65704LL, v3, 8LL);
  return HvlpHvToNtStatus(v1);
}
