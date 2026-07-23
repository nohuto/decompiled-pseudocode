/*
 * XREFs of BcdSetElementDataWithFlags @ 0x14053E01C
 * Callers:
 *     PopBcdSetPendingResume @ 0x140534F24 (PopBcdSetPendingResume.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x14053D4D4 (PopBcdSetDefaultResumeObjectElements.c)
 *     PopBcdSetupResumeObject @ 0x14053F610 (PopBcdSetupResumeObject.c)
 *     PopBcdRegenerateResumeObject @ 0x1406758B4 (PopBcdRegenerateResumeObject.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x1406944E0 (SepSecureBootUpdateBcdDataForRule.c)
 *     BcdSetElementData @ 0x1406D2858 (BcdSetElementData.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x1406D3518 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x1406D373C (BiBindEfiBootManager.c)
 *     BiUpdateBcdObject @ 0x1406D5B50 (BiUpdateBcdObject.c)
 * Callees:
 *     BiSetFirmwareModifiedFromObject @ 0x1401263AC (BiSetFirmwareModifiedFromObject.c)
 *     BiIsFirmwareApplication @ 0x14012E594 (BiIsFirmwareApplication.c)
 *     BiIsOfflineHandle @ 0x14012E5FC (BiIsOfflineHandle.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     _ultow_s @ 0x1401522C8 (_ultow_s.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     BiDeleteKey @ 0x140532F8C (BiDeleteKey.c)
 *     BcdDeleteElement @ 0x14053D75C (BcdDeleteElement.c)
 *     BiCreateKey @ 0x14053DBE0 (BiCreateKey.c)
 *     BiOpenKey @ 0x14053E38C (BiOpenKey.c)
 *     BiCloseKey @ 0x14053E50C (BiCloseKey.c)
 *     BiReleaseBcdSyncMutant @ 0x14053E6E4 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x14053E708 (BiAcquireBcdSyncMutant.c)
 *     BiSetRegistryValue @ 0x14053E75C (BiSetRegistryValue.c)
 *     BiConvertElementFormatToValueType @ 0x14053E83C (BiConvertElementFormatToValueType.c)
 *     BiConvertElementToRegistryData @ 0x14053E864 (BiConvertElementToRegistryData.c)
 */

NTSTATUS __cdecl BcdSetElementDataWithFlags(
        HANDLE BcdObjectHandle,
        ULONG BcdElement,
        BCD_FLAGS BcdFlags,
        PVOID Buffer,
        ULONG BufferSize)
{
  __int64 v7; // rcx
  char v8; // r13
  NTSTATUS result; // eax
  __int64 v10; // rcx
  NTSTATUS v11; // ebx
  int v12; // eax
  HANDLE v13; // rsi
  int v14; // eax
  PVOID v15; // r15
  bool v16; // [rsp+30h] [rbp-41h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-39h] BYREF
  HANDLE v18; // [rsp+40h] [rbp-31h] BYREF
  PVOID P; // [rsp+48h] [rbp-29h]
  PVOID v20; // [rsp+50h] [rbp-21h]
  wchar_t DstBuf[24]; // [rsp+58h] [rbp-19h] BYREF

  v20 = Buffer;
  if ( !Buffer && BufferSize )
    return -1073741811;
  v18 = 0LL;
  Handle = 0LL;
  P = 0LL;
  v16 = 0;
  if ( BufferSize )
  {
    LOBYTE(v7) = BiIsOfflineHandle((char)BcdObjectHandle);
    v8 = v7;
    result = BiAcquireBcdSyncMutant(v7);
    if ( result >= 0 )
    {
      v11 = BiOpenKey(BcdObjectHandle, L"Elements", 131101LL, &v18);
      if ( v11 >= 0 )
      {
        if ( ultow_s(BcdElement, DstBuf, 0x16uLL, 16) )
        {
          v11 = -1073741823;
        }
        else
        {
          v12 = BiCreateKey(v18, DstBuf, 0x10002u, 1u, &Handle, &v16);
          v13 = Handle;
          v11 = v12;
          if ( v12 < 0 )
            goto LABEL_25;
          v14 = BiConvertElementToRegistryData(BcdElement, v20, BufferSize);
          v15 = P;
          v11 = v14;
          if ( v14 >= 0 )
          {
            BiConvertElementFormatToValueType(HIBYTE(BcdElement) & 0xF);
            v11 = BiSetRegistryValue(v13, L"Element", 0LL);
          }
          if ( v15 )
            ExFreePoolWithTag(v15, 0x4B444342u);
          if ( v11 < 0 )
          {
LABEL_25:
            if ( v16 )
            {
              BiDeleteKey((__int64)v13);
              v13 = 0LL;
            }
          }
          if ( v13 )
            BiCloseKey(v13);
        }
      }
      if ( v18 )
        BiCloseKey(v18);
      if ( v11 >= 0 && BiIsFirmwareApplication((__int64)BcdObjectHandle) )
        BiSetFirmwareModifiedFromObject((__int64)BcdObjectHandle);
      LOBYTE(v10) = v8;
      BiReleaseBcdSyncMutant(v10);
      return v11;
    }
  }
  else
  {
    BcdDeleteElement(BcdObjectHandle, BcdElement);
    return 0;
  }
  return result;
}
