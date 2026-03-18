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

__int64 __fastcall BcdGetElementDataWithFlags(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  __int64 v7; // rcx
  char v8; // r13
  __int64 result; // rax
  __int64 v10; // rcx
  int v11; // ebx
  int v12; // eax
  int RegistryValue; // eax
  PVOID v14; // rsi
  HANDLE v15; // [rsp+40h] [rbp-31h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-29h] BYREF
  unsigned int v17; // [rsp+50h] [rbp-21h]
  unsigned int v18; // [rsp+54h] [rbp-1Dh] BYREF
  PVOID P; // [rsp+58h] [rbp-19h] BYREF
  __int64 v20; // [rsp+60h] [rbp-11h]
  wchar_t DstBuf[24]; // [rsp+68h] [rbp-9h] BYREF

  v20 = a4;
  v17 = a2;
  if ( !a5 || !a4 && *a5 )
    return 3221225485LL;
  LOBYTE(v7) = BiIsOfflineHandle(a1);
  v8 = v7;
  result = BiAcquireBcdSyncMutant(v7);
  if ( (int)result >= 0 )
  {
    v15 = 0LL;
    Handle = 0LL;
    P = 0LL;
    v11 = BiOpenKey(a1, L"Elements", 131097LL, &v15);
    if ( v11 >= 0 )
    {
      if ( ultow_s(a2, DstBuf, 0x16uLL, 16) )
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
          v12 = BiConvertElementFormatToValueType(HIBYTE(a2) & 0xF);
          RegistryValue = BiGetRegistryValue(Handle, L"Element", 0LL, v12, &P, &v18);
          v14 = P;
          v11 = RegistryValue;
          if ( RegistryValue >= 0 )
            v11 = BiConvertRegistryDataToElement(a1, P, v18, v17, 0, v20, a5);
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
    return (unsigned int)v11;
  }
  return result;
}
