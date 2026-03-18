/*
 * XREFs of BcdSetElementDataWithFlags @ 0x1404FD0D8
 * Callers:
 *     PopBcdSetPendingResume @ 0x1404F57FC (PopBcdSetPendingResume.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x1404FC834 (PopBcdSetDefaultResumeObjectElements.c)
 *     PopBcdSetupResumeObject @ 0x1404FE7F4 (PopBcdSetupResumeObject.c)
 *     PopBcdRegenerateResumeObject @ 0x14063D040 (PopBcdRegenerateResumeObject.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x140654E48 (SepSecureBootUpdateBcdDataForRule.c)
 *     BcdSetElementData @ 0x14068DEC0 (BcdSetElementData.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x14068EC74 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x14068EE8C (BiBindEfiBootManager.c)
 *     BiUpdateBcdObject @ 0x140691248 (BiUpdateBcdObject.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14011BBD4 (BiIsOfflineHandle.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     _ultow_s @ 0x140148978 (_ultow_s.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     BiDeleteKey @ 0x1404F5314 (BiDeleteKey.c)
 *     BcdDeleteElement @ 0x1404FC728 (BcdDeleteElement.c)
 *     BiCreateKey @ 0x1404FCD80 (BiCreateKey.c)
 *     BiCloseKey @ 0x1404FD274 (BiCloseKey.c)
 *     BiOpenKey @ 0x1404FD5F4 (BiOpenKey.c)
 *     BiReleaseBcdSyncMutant @ 0x1404FD760 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x1404FD784 (BiAcquireBcdSyncMutant.c)
 *     BiSetRegistryValue @ 0x1404FD7D8 (BiSetRegistryValue.c)
 *     BiConvertElementFormatToValueType @ 0x1404FD8A8 (BiConvertElementFormatToValueType.c)
 *     BiConvertElementToRegistryData @ 0x1404FD8D0 (BiConvertElementToRegistryData.c)
 */

__int64 __fastcall BcdSetElementDataWithFlags(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v8; // rcx
  char v9; // r12
  __int64 result; // rax
  __int64 v11; // rcx
  int v12; // ebx
  int v13; // eax
  HANDLE v14; // rdi
  int v15; // eax
  PVOID v16; // r14
  unsigned int v17; // eax
  bool v18; // [rsp+30h] [rbp-41h] BYREF
  HANDLE v19; // [rsp+38h] [rbp-39h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-31h] BYREF
  PVOID P; // [rsp+48h] [rbp-29h]
  wchar_t DstBuf[24]; // [rsp+50h] [rbp-21h] BYREF

  if ( !a4 && a5 )
    return 3221225485LL;
  v19 = 0LL;
  Handle = 0LL;
  P = 0LL;
  v18 = 0;
  if ( a5 )
  {
    LOBYTE(v8) = BiIsOfflineHandle(a1);
    v9 = v8;
    result = BiAcquireBcdSyncMutant(v8);
    if ( (int)result >= 0 )
    {
      v12 = BiOpenKey(a1, L"Elements", 131101LL, &v19);
      if ( v12 >= 0 )
      {
        if ( ultow_s(a2, DstBuf, 0x16uLL, 16) )
        {
          v12 = -1073741823;
        }
        else
        {
          v13 = BiCreateKey(v19, DstBuf, 0x10002u, 1u, &Handle, &v18);
          v14 = Handle;
          v12 = v13;
          if ( v13 < 0 )
            goto LABEL_22;
          v15 = BiConvertElementToRegistryData(a2, a4, a5);
          v16 = P;
          v12 = v15;
          if ( v15 >= 0 )
          {
            v17 = BiConvertElementFormatToValueType(HIBYTE(a2) & 0xF);
            v12 = BiSetRegistryValue(v14, L"Element", 0LL, v17, v16, (_DWORD)Handle);
          }
          if ( v16 )
            ExFreePoolWithTag(v16, 0);
          if ( v12 < 0 )
          {
LABEL_22:
            if ( v18 )
            {
              BiDeleteKey(v14);
              v14 = 0LL;
            }
          }
          if ( v14 )
            BiCloseKey(v14);
        }
      }
      if ( v19 )
        BiCloseKey(v19);
      LOBYTE(v11) = v9;
      BiReleaseBcdSyncMutant(v11);
      return (unsigned int)v12;
    }
  }
  else
  {
    BcdDeleteElement(a1, a2);
    return 0LL;
  }
  return result;
}
