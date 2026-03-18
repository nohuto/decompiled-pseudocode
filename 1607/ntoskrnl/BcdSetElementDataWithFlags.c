/*
 * XREFs of BcdSetElementDataWithFlags @ 0x14053DADC
 * Callers:
 *     PopBcdSetPendingResume @ 0x1405349E4 (PopBcdSetPendingResume.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x14053CF94 (PopBcdSetDefaultResumeObjectElements.c)
 *     PopBcdSetupResumeObject @ 0x14053F0D0 (PopBcdSetupResumeObject.c)
 *     PopBcdRegenerateResumeObject @ 0x1406757D0 (PopBcdRegenerateResumeObject.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x1406943FC (SepSecureBootUpdateBcdDataForRule.c)
 *     BcdSetElementData @ 0x1406D2720 (BcdSetElementData.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x1406D33E0 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x1406D3604 (BiBindEfiBootManager.c)
 *     BiUpdateBcdObject @ 0x1406D5A18 (BiUpdateBcdObject.c)
 * Callees:
 *     BiSetFirmwareModifiedFromObject @ 0x140125E3C (BiSetFirmwareModifiedFromObject.c)
 *     BiIsFirmwareApplication @ 0x14012E024 (BiIsFirmwareApplication.c)
 *     BiIsOfflineHandle @ 0x14012E08C (BiIsOfflineHandle.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     _ultow_s @ 0x140151D08 (_ultow_s.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     BiDeleteKey @ 0x140532A4C (BiDeleteKey.c)
 *     BcdDeleteElement @ 0x14053D21C (BcdDeleteElement.c)
 *     BiCreateKey @ 0x14053D6A0 (BiCreateKey.c)
 *     BiOpenKey @ 0x14053DE4C (BiOpenKey.c)
 *     BiCloseKey @ 0x14053DFCC (BiCloseKey.c)
 *     BiReleaseBcdSyncMutant @ 0x14053E1A4 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x14053E1C8 (BiAcquireBcdSyncMutant.c)
 *     BiSetRegistryValue @ 0x14053E21C (BiSetRegistryValue.c)
 *     BiConvertElementFormatToValueType @ 0x14053E2FC (BiConvertElementFormatToValueType.c)
 *     BiConvertElementToRegistryData @ 0x14053E324 (BiConvertElementToRegistryData.c)
 */

__int64 __fastcall BcdSetElementDataWithFlags(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v7; // rcx
  char v8; // r13
  __int64 result; // rax
  __int64 v10; // rcx
  int v11; // ebx
  int v12; // eax
  HANDLE v13; // rsi
  int v14; // eax
  PVOID v15; // r15
  bool v16; // [rsp+30h] [rbp-41h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-39h] BYREF
  HANDLE v18; // [rsp+40h] [rbp-31h] BYREF
  PVOID P; // [rsp+48h] [rbp-29h]
  __int64 v20; // [rsp+50h] [rbp-21h]
  wchar_t DstBuf[24]; // [rsp+58h] [rbp-19h] BYREF

  v20 = a4;
  if ( !a4 && a5 )
    return 3221225485LL;
  v18 = 0LL;
  Handle = 0LL;
  P = 0LL;
  v16 = 0;
  if ( a5 )
  {
    LOBYTE(v7) = BiIsOfflineHandle(a1);
    v8 = v7;
    result = BiAcquireBcdSyncMutant(v7);
    if ( (int)result >= 0 )
    {
      v11 = BiOpenKey(a1, L"Elements", 131101LL, &v18);
      if ( v11 >= 0 )
      {
        if ( ultow_s(a2, DstBuf, 0x16uLL, 16) )
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
          v14 = BiConvertElementToRegistryData(a2, v20, a5);
          v15 = P;
          v11 = v14;
          if ( v14 >= 0 )
          {
            BiConvertElementFormatToValueType(HIBYTE(a2) & 0xF);
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
      if ( v11 >= 0 && BiIsFirmwareApplication(a1) )
        BiSetFirmwareModifiedFromObject(a1);
      LOBYTE(v10) = v8;
      BiReleaseBcdSyncMutant(v10);
      return (unsigned int)v11;
    }
  }
  else
  {
    BcdDeleteElement(a1, a2);
    return 0LL;
  }
  return result;
}
