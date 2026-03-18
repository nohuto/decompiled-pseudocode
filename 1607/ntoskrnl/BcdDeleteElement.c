/*
 * XREFs of BcdDeleteElement @ 0x14053D21C
 * Callers:
 *     PopBcdClearPendingResume @ 0x14053C630 (PopBcdClearPendingResume.c)
 *     BcdSetElementDataWithFlags @ 0x14053DADC (BcdSetElementDataWithFlags.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x1406943FC (SepSecureBootUpdateBcdDataForRule.c)
 *     BiHandleFirmwareDefaultEntry @ 0x1406D5398 (BiHandleFirmwareDefaultEntry.c)
 *     BiUpdateBcdObject @ 0x1406D5A18 (BiUpdateBcdObject.c)
 * Callees:
 *     BiSetFirmwareModifiedFromObject @ 0x140125E3C (BiSetFirmwareModifiedFromObject.c)
 *     BiIsFirmwareApplication @ 0x14012E024 (BiIsFirmwareApplication.c)
 *     BiIsOfflineHandle @ 0x14012E08C (BiIsOfflineHandle.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     _ultow_s @ 0x140151D08 (_ultow_s.c)
 *     BiDeleteKey @ 0x140532A4C (BiDeleteKey.c)
 *     BiOpenKey @ 0x14053DE4C (BiOpenKey.c)
 *     BiCloseKey @ 0x14053DFCC (BiCloseKey.c)
 *     BiReleaseBcdSyncMutant @ 0x14053E1A4 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x14053E1C8 (BiAcquireBcdSyncMutant.c)
 */

__int64 __fastcall BcdDeleteElement(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  char v5; // r14
  __int64 result; // rax
  __int64 v7; // rcx
  int v8; // ebx
  int v9; // eax
  void *v10; // rdi
  HANDLE Handle; // [rsp+20h] [rbp-68h] BYREF
  void *v12; // [rsp+28h] [rbp-60h] BYREF
  wchar_t DstBuf[24]; // [rsp+30h] [rbp-58h] BYREF

  LOBYTE(v4) = BiIsOfflineHandle(a1);
  v5 = v4;
  result = BiAcquireBcdSyncMutant(v4);
  if ( (int)result >= 0 )
  {
    Handle = 0LL;
    v12 = 0LL;
    v8 = BiOpenKey(a1, L"Elements", 131097LL, &Handle);
    if ( v8 >= 0 )
    {
      if ( ultow_s(a2, DstBuf, 0x16uLL, 16) )
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
    if ( v8 >= 0 && BiIsFirmwareApplication(a1) )
      BiSetFirmwareModifiedFromObject(a1);
    LOBYTE(v7) = v5;
    BiReleaseBcdSyncMutant(v7);
    return (unsigned int)v8;
  }
  return result;
}
