/*
 * XREFs of BcdGetElementDataWithFlags @ 0x14053E1DC
 * Callers:
 *     PopBcdEstablishResumeObject @ 0x14053CC6C (PopBcdEstablishResumeObject.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x14053D4D4 (PopBcdSetDefaultResumeObjectElements.c)
 *     PopBcdReadElement @ 0x14053D9D8 (PopBcdReadElement.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x1406944E0 (SepSecureBootUpdateBcdDataForRule.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x1406D2608 (BiGetDefaultBootEntryIdentifier.c)
 *     BcdGetElementData @ 0x1406D2840 (BcdGetElementData.c)
 *     BiGetElement @ 0x1406D2944 (BiGetElement.c)
 *     BiUpdateBcdObject @ 0x1406D5B50 (BiUpdateBcdObject.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14012E5FC (BiIsOfflineHandle.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     _ultow_s @ 0x1401522C8 (_ultow_s.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     BiGetRegistryValue @ 0x14053DE5C (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x14053E38C (BiOpenKey.c)
 *     BiCloseKey @ 0x14053E50C (BiCloseKey.c)
 *     BiReleaseBcdSyncMutant @ 0x14053E6E4 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x14053E708 (BiAcquireBcdSyncMutant.c)
 *     BiConvertElementFormatToValueType @ 0x14053E83C (BiConvertElementFormatToValueType.c)
 *     BiConvertRegistryDataToElement @ 0x14053EA70 (BiConvertRegistryDataToElement.c)
 */

NTSTATUS __cdecl BcdGetElementDataWithFlags(
        HANDLE BcdObjectHandle,
        ULONG BcdElement,
        BCD_FLAGS BcdFlags,
        PVOID Buffer,
        PULONG BufferSize)
{
  __int64 v7; // rcx
  char v8; // r13
  NTSTATUS result; // eax
  __int64 v10; // rcx
  NTSTATUS v11; // ebx
  int v12; // eax
  int RegistryValue; // eax
  void *v14; // rsi
  HANDLE Handle; // [rsp+40h] [rbp-31h] BYREF
  HANDLE v16; // [rsp+48h] [rbp-29h] BYREF
  ULONG v17; // [rsp+50h] [rbp-21h]
  _DWORD Size[3]; // [rsp+54h] [rbp-1Dh] BYREF
  GUID *Guid; // [rsp+60h] [rbp-11h]
  wchar_t DstBuf[24]; // [rsp+68h] [rbp-9h] BYREF

  Guid = (GUID *)Buffer;
  v17 = BcdElement;
  if ( !BufferSize || !Buffer && *BufferSize )
    return -1073741811;
  LOBYTE(v7) = BiIsOfflineHandle((char)BcdObjectHandle);
  v8 = v7;
  result = BiAcquireBcdSyncMutant(v7);
  if ( result >= 0 )
  {
    v16 = 0LL;
    Handle = 0LL;
    *(_QWORD *)&Size[1] = 0LL;
    v11 = BiOpenKey(BcdObjectHandle, L"Elements", 131097LL, &v16);
    if ( v11 >= 0 )
    {
      if ( ultow_s(BcdElement, DstBuf, 0x16uLL, 16) )
      {
        v11 = -1073741823;
      }
      else
      {
        if ( (int)BiOpenKey(v16, DstBuf, 131097LL, &Handle) < 0 )
        {
          v11 = -1073741275;
        }
        else
        {
          v12 = BiConvertElementFormatToValueType(HIBYTE(BcdElement) & 0xF);
          RegistryValue = BiGetRegistryValue((__int64)Handle, L"Element", 0LL, v12, &Size[1], Size);
          v14 = *(void **)&Size[1];
          v11 = RegistryValue;
          if ( RegistryValue >= 0 )
            v11 = BiConvertRegistryDataToElement(
                    BcdObjectHandle,
                    *(PCWSTR *)&Size[1],
                    Size[0],
                    0,
                    Guid,
                    (__int64)BufferSize);
          if ( v14 )
            ExFreePoolWithTag(v14, 0x4B444342u);
        }
        if ( Handle )
          BiCloseKey(Handle);
      }
    }
    if ( v16 )
      BiCloseKey(v16);
    LOBYTE(v10) = v8;
    BiReleaseBcdSyncMutant(v10);
    return v11;
  }
  return result;
}
