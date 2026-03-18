/*
 * XREFs of BcdDeleteElement @ 0x14056F1C8
 * Callers:
 *     PopBcdClearPendingResume @ 0x14056E3CC (PopBcdClearPendingResume.c)
 *     BcdSetElementDataWithFlags @ 0x14056FB78 (BcdSetElementDataWithFlags.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x1406D6CC0 (SepSecureBootUpdateBcdDataForRule.c)
 *     BiHandleFirmwareDefaultEntry @ 0x1407106EC (BiHandleFirmwareDefaultEntry.c)
 *     BiUpdateBcdObject @ 0x140710D60 (BiUpdateBcdObject.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14014FE60 (BiIsOfflineHandle.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     _ultow_s @ 0x1401769F8 (_ultow_s.c)
 *     BiDeleteKey @ 0x140569810 (BiDeleteKey.c)
 *     BiCloseKey @ 0x14056FD14 (BiCloseKey.c)
 *     BiOpenKey @ 0x140570094 (BiOpenKey.c)
 *     BiReleaseBcdSyncMutant @ 0x140570200 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140570224 (BiAcquireBcdSyncMutant.c)
 */

__int64 __fastcall BcdDeleteElement(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  char v5; // bp
  __int64 result; // rax
  __int64 v7; // rcx
  int v8; // edi
  int v9; // eax
  HANDLE v10; // rbx
  HANDLE Handle; // [rsp+20h] [rbp-68h] BYREF
  HANDLE v12; // [rsp+28h] [rbp-60h] BYREF
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
    return (unsigned int)v8;
  }
  return result;
}
