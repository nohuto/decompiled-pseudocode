/*
 * XREFs of BcdSetElementDataWithFlags @ 0x14056FB78
 * Callers:
 *     PopBcdSetPendingResume @ 0x140569D2C (PopBcdSetPendingResume.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x14056F2D4 (PopBcdSetDefaultResumeObjectElements.c)
 *     PopBcdSetupResumeObject @ 0x14057143C (PopBcdSetupResumeObject.c)
 *     PopBcdRegenerateResumeObject @ 0x1406BD5E4 (PopBcdRegenerateResumeObject.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x1406D6CC0 (SepSecureBootUpdateBcdDataForRule.c)
 *     BcdSetElementData @ 0x14070D9D8 (BcdSetElementData.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x14070E78C (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x14070E9A4 (BiBindEfiBootManager.c)
 *     BiUpdateBcdObject @ 0x140710D60 (BiUpdateBcdObject.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14014FE60 (BiIsOfflineHandle.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     _ultow_s @ 0x1401769F8 (_ultow_s.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     BiDeleteKey @ 0x140569810 (BiDeleteKey.c)
 *     BcdDeleteElement @ 0x14056F1C8 (BcdDeleteElement.c)
 *     BiCreateKey @ 0x14056F820 (BiCreateKey.c)
 *     BiCloseKey @ 0x14056FD14 (BiCloseKey.c)
 *     BiOpenKey @ 0x140570094 (BiOpenKey.c)
 *     BiReleaseBcdSyncMutant @ 0x140570200 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140570224 (BiAcquireBcdSyncMutant.c)
 *     BiSetRegistryValue @ 0x140570278 (BiSetRegistryValue.c)
 *     BiConvertElementFormatToValueType @ 0x140570348 (BiConvertElementFormatToValueType.c)
 *     BiConvertElementToRegistryData @ 0x140570370 (BiConvertElementToRegistryData.c)
 */

NTSTATUS __cdecl BcdSetElementDataWithFlags(
        HANDLE BcdObjectHandle,
        ULONG BcdElement,
        BCD_FLAGS BcdFlags,
        PVOID Buffer,
        ULONG BufferSize)
{
  __int64 v8; // rcx
  char v9; // r12
  NTSTATUS result; // eax
  __int64 v11; // rcx
  NTSTATUS v12; // ebx
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

  if ( !Buffer && BufferSize )
    return -1073741811;
  v19 = 0LL;
  Handle = 0LL;
  P = 0LL;
  v18 = 0;
  if ( BufferSize )
  {
    LOBYTE(v8) = BiIsOfflineHandle((char)BcdObjectHandle);
    v9 = v8;
    result = BiAcquireBcdSyncMutant(v8);
    if ( result >= 0 )
    {
      v12 = BiOpenKey(BcdObjectHandle, L"Elements", 131101LL, &v19);
      if ( v12 >= 0 )
      {
        if ( ultow_s(BcdElement, DstBuf, 0x16uLL, 16) )
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
          v15 = BiConvertElementToRegistryData(BcdElement, Buffer, BufferSize);
          v16 = P;
          v12 = v15;
          if ( v15 >= 0 )
          {
            v17 = BiConvertElementFormatToValueType(HIBYTE(BcdElement) & 0xF);
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
      return v12;
    }
  }
  else
  {
    BcdDeleteElement(BcdObjectHandle, BcdElement);
    return 0;
  }
  return result;
}
