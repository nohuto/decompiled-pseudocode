/*
 * XREFs of BcdDeleteElement @ 0x14053D75C
 * Callers:
 *     PopBcdClearPendingResume @ 0x14053CB70 (PopBcdClearPendingResume.c)
 *     BcdSetElementDataWithFlags @ 0x14053E01C (BcdSetElementDataWithFlags.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x1406944E0 (SepSecureBootUpdateBcdDataForRule.c)
 *     BiHandleFirmwareDefaultEntry @ 0x1406D54D0 (BiHandleFirmwareDefaultEntry.c)
 *     BiUpdateBcdObject @ 0x1406D5B50 (BiUpdateBcdObject.c)
 * Callees:
 *     BiSetFirmwareModifiedFromObject @ 0x1401263AC (BiSetFirmwareModifiedFromObject.c)
 *     BiIsFirmwareApplication @ 0x14012E594 (BiIsFirmwareApplication.c)
 *     BiIsOfflineHandle @ 0x14012E5FC (BiIsOfflineHandle.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     _ultow_s @ 0x1401522C8 (_ultow_s.c)
 *     BiDeleteKey @ 0x140532F8C (BiDeleteKey.c)
 *     BiOpenKey @ 0x14053E38C (BiOpenKey.c)
 *     BiCloseKey @ 0x14053E50C (BiCloseKey.c)
 *     BiReleaseBcdSyncMutant @ 0x14053E6E4 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x14053E708 (BiAcquireBcdSyncMutant.c)
 */

NTSTATUS __cdecl BcdDeleteElement(HANDLE BcdObjectHandle, ULONG BcdElement)
{
  __int64 v4; // rcx
  char v5; // r14
  NTSTATUS result; // eax
  __int64 v7; // rcx
  NTSTATUS v8; // ebx
  int v9; // eax
  void *v10; // rdi
  HANDLE Handle; // [rsp+20h] [rbp-68h] BYREF
  void *v12; // [rsp+28h] [rbp-60h] BYREF
  wchar_t DstBuf[24]; // [rsp+30h] [rbp-58h] BYREF

  LOBYTE(v4) = BiIsOfflineHandle((char)BcdObjectHandle);
  v5 = v4;
  result = BiAcquireBcdSyncMutant(v4);
  if ( result >= 0 )
  {
    Handle = 0LL;
    v12 = 0LL;
    v8 = BiOpenKey(BcdObjectHandle, L"Elements", 131097LL, &Handle);
    if ( v8 >= 0 )
    {
      if ( ultow_s(BcdElement, DstBuf, 0x16uLL, 16) )
      {
        v8 = -1073741823;
      }
      else
      {
        v9 = BiOpenKey(Handle, DstBuf, 0x10000LL, &v12);
        v10 = v12;
        if ( v9 < 0 )
        {
          v8 = -1073741275;
        }
        else
        {
          v8 = BiDeleteKey((__int64)v12);
          if ( v8 >= 0 )
            v10 = 0LL;
        }
        if ( v10 )
          BiCloseKey(v10);
      }
    }
    if ( Handle )
      BiCloseKey(Handle);
    if ( v8 >= 0 && BiIsFirmwareApplication((__int64)BcdObjectHandle) )
      BiSetFirmwareModifiedFromObject((__int64)BcdObjectHandle);
    LOBYTE(v7) = v5;
    BiReleaseBcdSyncMutant(v7);
    return v8;
  }
  return result;
}
