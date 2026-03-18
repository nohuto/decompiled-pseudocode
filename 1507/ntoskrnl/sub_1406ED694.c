/*
 * XREFs of sub_1406ED694 @ 0x1406ED694
 * Callers:
 *     ExpTimeRefreshWork @ 0x1403F7188 (ExpTimeRefreshWork.c)
 *     ExQueryFastCacheDevLicense @ 0x1405594C8 (ExQueryFastCacheDevLicense.c)
 *     sub_1405874F8 @ 0x1405874F8 (sub_1405874F8.c)
 *     sub_1407DA854 @ 0x1407DA854 (sub_1407DA854.c)
 *     sub_1407DB064 @ 0x1407DB064 (sub_1407DB064.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     EtwRegister @ 0x14054C680 (EtwRegister.c)
 *     EtwUnregister @ 0x140558318 (EtwUnregister.c)
 */

int __fastcall sub_1406ED694(int a1)
{
  int result; // eax
  int v2; // [rsp+30h] [rbp-9h] BYREF
  int v3; // [rsp+34h] [rbp-5h] BYREF
  ULONGLONG RegHandle; // [rsp+38h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[4]; // [rsp+40h] [rbp+7h] BYREF
  int v6; // [rsp+A0h] [rbp+67h] BYREF

  v6 = a1;
  memset(UserData, 0, sizeof(UserData));
  v3 = 6;
  v2 = 1;
  result = EtwRegister(&LicensingSqmProvider, 0LL, 0LL, &RegHandle);
  if ( result >= 0 )
  {
    UserData[0].Ptr = (ULONGLONG)&v3;
    UserData[1].Ptr = (ULONGLONG)qword_140722198;
    UserData[2].Ptr = (ULONGLONG)&v6;
    UserData[3].Ptr = (ULONGLONG)&v2;
    *(_QWORD *)&UserData[0].Size = 4LL;
    *(_QWORD *)&UserData[1].Size = 16LL;
    *(_QWORD *)&UserData[2].Size = 4LL;
    *(_QWORD *)&UserData[3].Size = 4LL;
    EtwWrite(RegHandle, &LICENSING_SQM_INCREMENT_DWORD, 0LL, 4u, UserData);
    return EtwUnregister(RegHandle);
  }
  return result;
}
