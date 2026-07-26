/*
 * XREFs of ndisHandleOrphanDevice @ 0x1C00EBD7C
 * Callers:
 *     ndisHandleUModePnPOp @ 0x1C00936F0 (ndisHandleUModePnPOp.c)
 * Callees:
 *     memcmp @ 0x1C0026B00 (memcmp.c)
 *     WPP_SF_ @ 0x1C003EBD4 (WPP_SF_.c)
 *     ?NdisTraceLoggingDeprecationCandidate@@YAXW4NdisTLDeprecationCandidate@@@Z @ 0x1C006D8CC (-NdisTraceLoggingDeprecationCandidate@@YAXW4NdisTLDeprecationCandidate@@@Z.c)
 */

__int64 __fastcall ndisHandleOrphanDevice(PCUNICODE_STRING SourceString)
{
  char v2; // r14
  KIRQL v4; // al
  struct _NDIS_M_DRIVER_BLOCK *v5; // rsi
  KIRQL v6; // r15
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rdi
  unsigned __int16 Length; // bx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  NdisTraceLoggingDeprecationCandidate((const struct _TlgProvider_t *)4);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_(0x24u, &WPP_6772f755ba2ecdacbfb9b612c2ccccf9_Traceguids);
  DestinationString.Length = SourceString->Length;
  DestinationString.MaximumLength = DestinationString.Length + 2;
  DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(
                                          NonPagedPoolNx,
                                          (unsigned __int16)(DestinationString.Length + 2),
                                          0x7473444Eu);
  if ( !DestinationString.Buffer )
    return 3221225626LL;
  RtlUpcaseUnicodeString(&DestinationString, SourceString, 0);
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v5 = ndisMiniDriverList;
  v6 = v4;
  while ( v5 && !v2 )
  {
    KeAcquireSpinLockAtDpcLevel(&v5->Ref.SpinLock);
    MiniportQueue = v5->MiniportQueue;
    if ( MiniportQueue )
    {
      Length = DestinationString.Length;
      while ( Length != MiniportQueue->MiniportName.Length
           || memcmp(DestinationString.Buffer, MiniportQueue->MiniportName.Buffer, Length) )
      {
        MiniportQueue = MiniportQueue->NextMiniport;
        if ( !MiniportQueue )
          goto LABEL_14;
      }
      v2 = 1;
      KeAcquireSpinLockAtDpcLevel(&MiniportQueue->Lock);
      MiniportQueue->PnPFlags |= 0x2000000u;
      MiniportQueue->MiniportThread = 0LL;
      MiniportQueue->LockDbg = 0;
      KeReleaseSpinLockFromDpcLevel(&MiniportQueue->Lock);
    }
LABEL_14:
    KeReleaseSpinLockFromDpcLevel(&v5->Ref.SpinLock);
    v5 = v5->NextDriver;
  }
  KeReleaseSpinLock(&ndisMiniDriverListLock, v6);
  ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_(0x25u, &WPP_6772f755ba2ecdacbfb9b612c2ccccf9_Traceguids);
  return 0LL;
}
