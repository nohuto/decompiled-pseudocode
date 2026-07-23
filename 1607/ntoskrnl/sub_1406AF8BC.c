/*
 * XREFs of sub_1406AF8BC @ 0x1406AF8BC
 * Callers:
 *     ExpTimeRefreshWork @ 0x1403C9110 (ExpTimeRefreshWork.c)
 *     ExQueryFastCacheDevLicense @ 0x1404CA608 (ExQueryFastCacheDevLicense.c)
 *     sub_1406AE02C @ 0x1406AE02C (sub_1406AE02C.c)
 *     ExpInitFastCache @ 0x1407B5348 (ExpInitFastCache.c)
 *     sub_1407D22C0 @ 0x1407D22C0 (sub_1407D22C0.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     EtwUnregister @ 0x140548DF0 (EtwUnregister.c)
 *     EtwRegister @ 0x14054A484 (EtwRegister.c)
 */

int __fastcall sub_1406AF8BC(int a1)
{
  int result; // eax
  int v2; // [rsp+30h] [rbp-9h] BYREF
  int v3; // [rsp+34h] [rbp-5h] BYREF
  ULONGLONG RegHandle; // [rsp+38h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[4]; // [rsp+40h] [rbp+7h] BYREF
  int v6; // [rsp+A0h] [rbp+67h] BYREF

  v6 = a1;
  memset(UserData, 0, sizeof(UserData));
  v2 = 6;
  v3 = 1;
  result = EtwRegister(&LicensingSqmProvider, 0LL, 0LL, &RegHandle);
  if ( result >= 0 )
  {
    UserData[0].Ptr = (ULONGLONG)&v2;
    *(_QWORD *)&UserData[1].Size = 16LL;
    *(_QWORD *)&UserData[0].Size = 4LL;
    UserData[1].Ptr = (ULONGLONG)qword_1406EA110;
    *(_QWORD *)&UserData[2].Size = 4LL;
    UserData[2].Ptr = (ULONGLONG)&v6;
    UserData[3].Ptr = (ULONGLONG)&v3;
    *(_QWORD *)&UserData[3].Size = 4LL;
    EtwWrite(RegHandle, &LICENSING_SQM_INCREMENT_DWORD, 0LL, 4u, UserData);
    return EtwUnregister(RegHandle);
  }
  return result;
}
