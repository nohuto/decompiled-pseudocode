/*
 * XREFs of sub_14066A098 @ 0x14066A098
 * Callers:
 *     ExpTimeRefreshWork @ 0x1403A6F68 (ExpTimeRefreshWork.c)
 *     ExQueryFastCacheDevLicense @ 0x1404B8DC0 (ExQueryFastCacheDevLicense.c)
 *     sub_140517000 @ 0x140517000 (sub_140517000.c)
 *     sub_14076255C @ 0x14076255C (sub_14076255C.c)
 *     sub_140785A2C @ 0x140785A2C (sub_140785A2C.c)
 * Callees:
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     EtwRegister @ 0x1404CC744 (EtwRegister.c)
 *     EtwUnregister @ 0x1404D02C4 (EtwUnregister.c)
 */

int __fastcall sub_14066A098(int a1)
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
    UserData[1].Ptr = (ULONGLONG)qword_1406A1F70;
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
