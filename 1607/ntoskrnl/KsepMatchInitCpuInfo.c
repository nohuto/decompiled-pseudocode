/*
 * XREFs of KsepMatchInitCpuInfo @ 0x1407B7994
 * Callers:
 *     KsepMatchInitMachineInfo @ 0x1407B76CC (KsepMatchInitMachineInfo.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     KsepStringAnsiToUnicode @ 0x140579544 (KsepStringAnsiToUnicode.c)
 */

NTSTATUS KsepMatchInitCpuInfo()
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v1; // r9
  char *VendorString; // r8
  NTSTATUS result; // eax

  memset(&qword_140341430, 0, 0x38uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v1 = -1LL;
  VendorString = (char *)CurrentPrcb->VendorString;
  do
    ++v1;
  while ( VendorString[v1] );
  result = KsepStringAnsiToUnicode(word_1403411A0, 0x20Au, VendorString, v1);
  if ( result >= 0 )
  {
    dword_140341454 = CurrentPrcb->CpuType;
    dword_140341450 = CurrentPrcb->CpuModel;
    qword_140341430 = (__int64)word_1403411A0;
  }
  return result;
}
