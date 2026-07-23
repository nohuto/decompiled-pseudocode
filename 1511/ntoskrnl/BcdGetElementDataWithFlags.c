/*
 * XREFs of BcdGetElementDataWithFlags @ 0x1404FD444
 * Callers:
 *     PopBcdEstablishResumeObject @ 0x1404FBEB0 (PopBcdEstablishResumeObject.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x1404FC834 (PopBcdSetDefaultResumeObjectElements.c)
 *     PopBcdReadElement @ 0x1404FCB78 (PopBcdReadElement.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x140654E48 (SepSecureBootUpdateBcdDataForRule.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x14068DC70 (BiGetDefaultBootEntryIdentifier.c)
 *     BcdGetElementData @ 0x14068DEA8 (BcdGetElementData.c)
 *     BiGetElement @ 0x14068DFAC (BiGetElement.c)
 *     BiUpdateBcdObject @ 0x140691248 (BiUpdateBcdObject.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14011BBD4 (BiIsOfflineHandle.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     _ultow_s @ 0x140148978 (_ultow_s.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     BiGetRegistryValue @ 0x1404FCF24 (BiGetRegistryValue.c)
 *     BiCloseKey @ 0x1404FD274 (BiCloseKey.c)
 *     BiOpenKey @ 0x1404FD5F4 (BiOpenKey.c)
 *     BiReleaseBcdSyncMutant @ 0x1404FD760 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x1404FD784 (BiAcquireBcdSyncMutant.c)
 *     BiConvertElementFormatToValueType @ 0x1404FD8A8 (BiConvertElementFormatToValueType.c)
 *     BiConvertRegistryDataToElement @ 0x1404FDAE8 (BiConvertRegistryDataToElement.c)
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
  HANDLE v15; // [rsp+40h] [rbp-31h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-29h] BYREF
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
    v15 = 0LL;
    Handle = 0LL;
    *(_QWORD *)&Size[1] = 0LL;
    v11 = BiOpenKey(BcdObjectHandle, L"Elements", 131097LL, &v15);
    if ( v11 >= 0 )
    {
      if ( ultow_s(BcdElement, DstBuf, 0x16uLL, 16) )
      {
        v11 = -1073741823;
      }
      else
      {
        if ( (int)BiOpenKey(v15, DstBuf, 131097LL, &Handle) < 0 )
        {
          v11 = -1073741275;
        }
        else
        {
          v12 = BiConvertElementFormatToValueType(HIBYTE(BcdElement) & 0xF);
          RegistryValue = BiGetRegistryValue(Handle, L"Element", 0LL, v12, &Size[1], Size);
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
            ExFreePoolWithTag(v14, 0);
        }
        if ( Handle )
          BiCloseKey(Handle);
      }
    }
    if ( v15 )
      BiCloseKey(v15);
    LOBYTE(v10) = v8;
    BiReleaseBcdSyncMutant(v10);
    return v11;
  }
  return result;
}
