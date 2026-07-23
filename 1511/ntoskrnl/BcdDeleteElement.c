/*
 * XREFs of BcdDeleteElement @ 0x1404FC728
 * Callers:
 *     PopBcdClearPendingResume @ 0x1404FBDA4 (PopBcdClearPendingResume.c)
 *     BcdSetElementDataWithFlags @ 0x1404FD0D8 (BcdSetElementDataWithFlags.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x140654E48 (SepSecureBootUpdateBcdDataForRule.c)
 *     BiHandleFirmwareDefaultEntry @ 0x140690BD4 (BiHandleFirmwareDefaultEntry.c)
 *     BiUpdateBcdObject @ 0x140691248 (BiUpdateBcdObject.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14011BBD4 (BiIsOfflineHandle.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     _ultow_s @ 0x140148978 (_ultow_s.c)
 *     BiDeleteKey @ 0x1404F5314 (BiDeleteKey.c)
 *     BiCloseKey @ 0x1404FD274 (BiCloseKey.c)
 *     BiOpenKey @ 0x1404FD5F4 (BiOpenKey.c)
 *     BiReleaseBcdSyncMutant @ 0x1404FD760 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x1404FD784 (BiAcquireBcdSyncMutant.c)
 */

NTSTATUS __cdecl BcdDeleteElement(HANDLE BcdObjectHandle, ULONG BcdElement)
{
  __int64 v4; // rcx
  char v5; // bp
  NTSTATUS result; // eax
  __int64 v7; // rcx
  NTSTATUS v8; // edi
  int v9; // eax
  HANDLE v10; // rbx
  HANDLE Handle; // [rsp+20h] [rbp-68h] BYREF
  HANDLE v12; // [rsp+28h] [rbp-60h] BYREF
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
        if ( v9 >= 0 )
        {
          v8 = BiDeleteKey(v12);
          if ( v8 >= 0 )
            v10 = 0LL;
        }
        else
        {
          v8 = -1073741275;
        }
        if ( v10 )
          BiCloseKey(v10);
      }
    }
    if ( Handle )
      BiCloseKey(Handle);
    LOBYTE(v7) = v5;
    BiReleaseBcdSyncMutant(v7);
    return v8;
  }
  return result;
}
