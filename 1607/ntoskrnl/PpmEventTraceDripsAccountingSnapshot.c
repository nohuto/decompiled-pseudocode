/*
 * XREFs of PpmEventTraceDripsAccountingSnapshot @ 0x140673EFC
 * Callers:
 *     PpmSnapDripsAccountingSnapshot @ 0x140200F94 (PpmSnapDripsAccountingSnapshot.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void __fastcall PpmEventTraceDripsAccountingSnapshot(__int64 a1, __int64 a2)
{
  REGHANDLE v3; // rbx
  int v4; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-38h] BYREF
  int *v6; // [rsp+48h] [rbp-28h]
  int v7; // [rsp+50h] [rbp-20h]
  int v8; // [rsp+54h] [rbp-1Ch]
  __int64 v9; // [rsp+58h] [rbp-18h]
  int v10; // [rsp+60h] [rbp-10h]
  int v11; // [rsp+64h] [rbp-Ch]

  v4 = 26;
  if ( PpmEtwRegistered )
  {
    v3 = PpmEtwHandle;
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_DRIPS_ACCOUNTING_SNAPSHOT) )
    {
      UserData.Reserved = 0;
      v8 = 0;
      v11 = 0;
      UserData.Ptr = (ULONGLONG)&PopWdiCurrentScenarioInstanceId;
      UserData.Size = 1;
      v6 = &v4;
      v7 = 4;
      v9 = a2;
      v10 = 208;
      EtwWrite(v3, &PPM_ETW_DRIPS_ACCOUNTING_SNAPSHOT, 0LL, 3u, &UserData);
    }
  }
}
