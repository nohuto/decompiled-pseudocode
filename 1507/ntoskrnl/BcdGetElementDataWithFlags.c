/*
 * XREFs of BcdGetElementDataWithFlags @ 0x14056FEE4
 * Callers:
 *     PopBcdEstablishResumeObject @ 0x14056E4D8 (PopBcdEstablishResumeObject.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x14056F2D4 (PopBcdSetDefaultResumeObjectElements.c)
 *     PopBcdReadElement @ 0x14056F618 (PopBcdReadElement.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x1406D6CC0 (SepSecureBootUpdateBcdDataForRule.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x14070D788 (BiGetDefaultBootEntryIdentifier.c)
 *     BcdGetElementData @ 0x14070D9C0 (BcdGetElementData.c)
 *     BiGetElement @ 0x14070DAC4 (BiGetElement.c)
 *     BiUpdateBcdObject @ 0x140710D60 (BiUpdateBcdObject.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14014FE60 (BiIsOfflineHandle.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     _ultow_s @ 0x1401769F8 (_ultow_s.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     BiGetRegistryValue @ 0x14056F9C4 (BiGetRegistryValue.c)
 *     BiCloseKey @ 0x14056FD14 (BiCloseKey.c)
 *     BiOpenKey @ 0x140570094 (BiOpenKey.c)
 *     BiReleaseBcdSyncMutant @ 0x140570200 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140570224 (BiAcquireBcdSyncMutant.c)
 *     BiConvertElementFormatToValueType @ 0x140570348 (BiConvertElementFormatToValueType.c)
 *     BiConvertRegistryDataToElement @ 0x140570730 (BiConvertRegistryDataToElement.c)
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
