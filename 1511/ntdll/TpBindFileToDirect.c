/*
 * XREFs of TpBindFileToDirect @ 0x1800779E4
 * Callers:
 *     TpAllocIoCompletion @ 0x1800777F0 (TpAllocIoCompletion.c)
 *     RtlpTpIoLookup @ 0x18008DBE0 (RtlpTpIoLookup.c)
 *     RtlpTpIoAlloc @ 0x18008DD2C (RtlpTpIoAlloc.c)
 * Callees:
 *     TpAdjustBindingCount @ 0x18000CFA0 (TpAdjustBindingCount.c)
 *     ZwSetInformationFile @ 0x1800A55A0 (ZwSetInformationFile.c)
 *     TppRaiseInvalidParameter @ 0x1800F5658 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __fastcall TpBindFileToDirect(void *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  NTSTATUS result; // eax
  _QWORD v6[2]; // [rsp+30h] [rbp-28h] BYREF
  _IO_STATUS_BLOCK v7; // [rsp+40h] [rbp-18h] BYREF

  if ( a1 && a2 && a3 && !NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    v4 = *(_QWORD *)(a3 + 64);
    v6[1] = a2;
    v6[0] = v4;
    result = ZwSetInformationFile(a1, &v7, v6, 0x10u, FileCompletionInformation);
    if ( result >= 0 )
    {
      TpAdjustBindingCount(a3, 1u);
      return 0;
    }
  }
  else
  {
    TppRaiseInvalidParameter(a1);
    return -1073741811;
  }
  return result;
}
