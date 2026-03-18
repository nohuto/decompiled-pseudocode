/*
 * XREFs of BcdGetElementDataWithFlags @ 0x14053DC9C
 * Callers:
 *     PopBcdEstablishResumeObject @ 0x14053C72C (PopBcdEstablishResumeObject.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x14053CF94 (PopBcdSetDefaultResumeObjectElements.c)
 *     PopBcdReadElement @ 0x14053D498 (PopBcdReadElement.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x1406943FC (SepSecureBootUpdateBcdDataForRule.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x1406D24D0 (BiGetDefaultBootEntryIdentifier.c)
 *     BcdGetElementData @ 0x1406D2708 (BcdGetElementData.c)
 *     BiGetElement @ 0x1406D280C (BiGetElement.c)
 *     BiUpdateBcdObject @ 0x1406D5A18 (BiUpdateBcdObject.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14012E08C (BiIsOfflineHandle.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     _ultow_s @ 0x140151D08 (_ultow_s.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     BiGetRegistryValue @ 0x14053D91C (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x14053DE4C (BiOpenKey.c)
 *     BiCloseKey @ 0x14053DFCC (BiCloseKey.c)
 *     BiReleaseBcdSyncMutant @ 0x14053E1A4 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x14053E1C8 (BiAcquireBcdSyncMutant.c)
 *     BiConvertElementFormatToValueType @ 0x14053E2FC (BiConvertElementFormatToValueType.c)
 *     BiConvertRegistryDataToElement @ 0x14053E530 (BiConvertRegistryDataToElement.c)
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
  HANDLE Handle; // [rsp+40h] [rbp-31h] BYREF
  HANDLE v16; // [rsp+48h] [rbp-29h] BYREF
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
    v16 = 0LL;
    Handle = 0LL;
    P = 0LL;
    v11 = BiOpenKey(a1, L"Elements", 131097LL, &v16);
    if ( v11 >= 0 )
    {
      if ( ultow_s(a2, DstBuf, 0x16uLL, 16) )
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
          v12 = BiConvertElementFormatToValueType(HIBYTE(a2) & 0xF);
          RegistryValue = BiGetRegistryValue((__int64)Handle, L"Element", 0LL, v12, &P, &v18);
          v14 = P;
          v11 = RegistryValue;
          if ( RegistryValue >= 0 )
            v11 = BiConvertRegistryDataToElement(a1, P, v18, v17, 0, v20, a5);
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
    return (unsigned int)v11;
  }
  return result;
}
