/*
 * XREFs of BapdpRecordIumStatus @ 0x1407A9B94
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x1407A92C0 (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     BapdRegisterEtwProvider @ 0x140132850 (BapdRegisterEtwProvider.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     EtwUnregister @ 0x140548DF0 (EtwUnregister.c)
 */

int BapdpRecordIumStatus()
{
  int result; // eax
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rax
  REGHANDLE RegHandle; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-38h] BYREF
  __int64 v6; // [rsp+48h] [rbp-28h]
  int v7; // [rsp+50h] [rbp-20h]
  int v8; // [rsp+54h] [rbp-1Ch]
  __int64 v9; // [rsp+58h] [rbp-18h]
  int v10; // [rsp+60h] [rbp-10h]
  int v11; // [rsp+64h] [rbp-Ch]

  result = BapdRegisterEtwProvider((const GUID *)&BOOTENV_ETW_PROVIDER, 1, &RegHandle);
  if ( result >= 0 )
  {
    v1 = *(_QWORD *)(KeLoaderBlock_0 + 240);
    UserData.Reserved = 0;
    UserData.Ptr = v1 + 2512;
    UserData.Size = 4;
    v2 = *(_QWORD *)(KeLoaderBlock_0 + 240);
    v8 = 0;
    v6 = v2 + 2504;
    v7 = 4;
    v3 = *(_QWORD *)(KeLoaderBlock_0 + 240);
    v11 = 0;
    v9 = v3 + 2508;
    v10 = 4;
    result = EtwWrite(RegHandle, &BOOT_ENVIRONMENT_VSM_POLICY_ENABLEMENT, 0LL, 3u, &UserData);
  }
  if ( RegHandle )
    return EtwUnregister(RegHandle);
  return result;
}
