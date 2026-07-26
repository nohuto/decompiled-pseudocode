/*
 * XREFs of NdisMCoIndicateStatus @ 0x1C00F94F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C00267A0 (WPP_SF_.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     ndisCoIndicateStatusInternal @ 0x1C00F97E0 (ndisCoIndicateStatusInternal.c)
 */

void __stdcall NdisMCoIndicateStatus(
        NDIS_HANDLE MiniportAdapterHandle,
        NDIS_HANDLE NdisVcHandle,
        NDIS_STATUS GeneralStatus,
        PVOID StatusBuffer,
        ULONG StatusBufferSize)
{
  _QWORD v8[14]; // [rsp+20h] [rbp-A8h] BYREF

  if ( (unsigned __int8)byte_1C00895DA >= 4u )
    WPP_SF_(0x38u, &WPP_3d0b798491933f9ef0d7aa79c6629068_Traceguids);
  memset(v8, 0, sizeof(v8));
  LODWORD(v8[7]) = StatusBufferSize;
  LODWORD(v8[0]) = 7340440;
  v8[1] = MiniportAdapterHandle;
  HIDWORD(v8[2]) = GeneralStatus;
  v8[6] = StatusBuffer;
  ndisCoIndicateStatusInternal((int)MiniportAdapterHandle);
  if ( (unsigned __int8)byte_1C00895DA >= 4u )
    WPP_SF_(0x39u, &WPP_3d0b798491933f9ef0d7aa79c6629068_Traceguids);
}
