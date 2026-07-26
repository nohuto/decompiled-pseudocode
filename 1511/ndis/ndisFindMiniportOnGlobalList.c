/*
 * XREFs of ndisFindMiniportOnGlobalList @ 0x1C00EE670
 * Callers:
 *     NdisIMInitializeDeviceInstanceEx @ 0x1C00C72C0 (NdisIMInitializeDeviceInstanceEx.c)
 * Callees:
 *     memcmp @ 0x1C0026B00 (memcmp.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     ndisReferencePackage @ 0x1C00950DC (ndisReferencePackage.c)
 *     ndisDereferencePackage @ 0x1C009512C (ndisDereferencePackage.c)
 */

wchar_t *__fastcall ndisFindMiniportOnGlobalList(PCUNICODE_STRING SourceString)
{
  wchar_t *result; // rax
  wchar_t *v3; // rsi
  KIRQL v4; // al
  struct _NDIS_MINIPORT_BLOCK *v5; // rbx
  KIRQL v6; // bp
  unsigned __int16 Length; // di
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_q(0x5Du, &WPP_6d2291d8c38fd3ff1a6681445a412419_Traceguids, (__int64)SourceString);
  DestinationString.Length = SourceString->Length;
  DestinationString.MaximumLength = DestinationString.Length + 2;
  result = (wchar_t *)ExAllocatePoolWithTag(
                        NonPagedPoolNx,
                        (unsigned __int16)(DestinationString.Length + 2),
                        0x7473444Eu);
  DestinationString.Buffer = result;
  v3 = result;
  if ( result )
  {
    RtlUpcaseUnicodeString(&DestinationString, SourceString, 0);
    ndisReferencePackage((__int64)&ndisPkgs);
    v4 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
    v5 = ndisMiniportList;
    v6 = v4;
    if ( ndisMiniportList )
    {
      Length = DestinationString.Length;
      do
      {
        if ( Length == v5->MiniportName.Length && !memcmp(DestinationString.Buffer, v5->MiniportName.Buffer, Length) )
          break;
        v5 = v5->NextGlobalMiniport;
      }
      while ( v5 );
    }
    KeReleaseSpinLock(&ndisMiniportListLock, v6);
    ndisDereferencePackage((__int64)&ndisPkgs);
    ExFreePoolWithTag(v3, 0);
    if ( (unsigned __int8)byte_1C0083714 >= 4u )
      WPP_SF_q(0x5Eu, &WPP_6d2291d8c38fd3ff1a6681445a412419_Traceguids, (__int64)v5);
    return (wchar_t *)v5;
  }
  return result;
}
