/*
 * XREFs of KsepMatchInitCpuInfo @ 0x1407E1F64
 * Callers:
 *     KsepMatchInitMachineInfo @ 0x1407E1C9C (KsepMatchInitMachineInfo.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     KsepStringAnsiToUnicode @ 0x1405BBAFC (KsepStringAnsiToUnicode.c)
 */

NTSTATUS KsepMatchInitCpuInfo()
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v1; // r9
  char *VendorString; // r8
  NTSTATUS result; // eax

  memset(&qword_14036BB38, 0, 0x38uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v1 = -1LL;
  VendorString = (char *)CurrentPrcb->VendorString;
  do
    ++v1;
  while ( VendorString[v1] );
  result = KsepStringAnsiToUnicode(word_14036BB90, 0x20Au, VendorString, v1);
  if ( result >= 0 )
  {
    dword_14036BB5C = CurrentPrcb->CpuType;
    dword_14036BB58 = CurrentPrcb->CpuModel;
    qword_14036BB38 = (__int64)word_14036BB90;
  }
  return result;
}
