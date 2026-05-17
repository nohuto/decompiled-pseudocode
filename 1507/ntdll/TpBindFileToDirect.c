/*
 * XREFs of TpBindFileToDirect @ 0x18007D710
 * Callers:
 *     TpAllocIoCompletion @ 0x18007B070 (TpAllocIoCompletion.c)
 *     RtlpTpIoLookup @ 0x18007E680 (RtlpTpIoLookup.c)
 *     RtlpTpIoAlloc @ 0x18007E7CC (RtlpTpIoAlloc.c)
 * Callees:
 *     TpAdjustBindingCount @ 0x18003DB58 (TpAdjustBindingCount.c)
 *     ZwSetInformationFile @ 0x180093B70 (ZwSetInformationFile.c)
 *     TppRaiseInvalidParameter @ 0x1800F5C58 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpBindFileToDirect(__int64 a1, __int64 a2, _PEB_LDR_DATA *Ldr)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 result; // rax
  _QWORD v6[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h] BYREF

  v3 = (__int64)Ldr;
  if ( a1 && a2 && Ldr && (Ldr = NtCurrentPeb()->Ldr, !Ldr->ShutdownInProgress) )
  {
    v4 = *(_QWORD *)(v3 + 64);
    v6[1] = a2;
    v6[0] = v4;
    result = ZwSetInformationFile(a1, &v7, v6, 16LL, 30);
    if ( (int)result >= 0 )
    {
      TpAdjustBindingCount(v3, 1u);
      return 0LL;
    }
  }
  else
  {
    TppRaiseInvalidParameter(a1, a2, Ldr);
    return 3221225485LL;
  }
  return result;
}
