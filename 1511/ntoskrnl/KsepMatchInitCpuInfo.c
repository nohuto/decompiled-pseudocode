/*
 * XREFs of KsepMatchInitCpuInfo @ 0x14076CD84
 * Callers:
 *     KsepMatchInitMachineInfo @ 0x14076CABC (KsepMatchInitMachineInfo.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     KsepStringAnsiToUnicode @ 0x140544F54 (KsepStringAnsiToUnicode.c)
 */

NTSTATUS KsepMatchInitCpuInfo()
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v1; // r9
  char *VendorString; // r8
  NTSTATUS result; // eax

  memset(&qword_14031B838, 0, 0x38uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v1 = -1LL;
  VendorString = (char *)CurrentPrcb->VendorString;
  do
    ++v1;
  while ( VendorString[v1] );
  result = KsepStringAnsiToUnicode(word_14031B890, 0x20Au, VendorString, v1);
  if ( result >= 0 )
  {
    dword_14031B85C = CurrentPrcb->CpuType;
    dword_14031B858 = CurrentPrcb->CpuModel;
    qword_14031B838 = (__int64)word_14031B890;
  }
  return result;
}
