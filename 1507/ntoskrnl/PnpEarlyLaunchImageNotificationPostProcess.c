/*
 * XREFs of PnpEarlyLaunchImageNotificationPostProcess @ 0x1407DF684
 * Callers:
 *     <none>
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 */

void __fastcall PnpEarlyLaunchImageNotificationPostProcess(__int64 a1, __int64 a2, int *a3, int *a4, __int64 a5)
{
  REGHANDLE v5; // rsi
  int v8; // r8d
  __int64 v9; // rdx
  __int16 v10; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-40h] BYREF
  __int64 v12; // [rsp+48h] [rbp-30h]
  int v13; // [rsp+50h] [rbp-28h]
  int v14; // [rsp+54h] [rbp-24h]

  v5 = PnpEtwHandle;
  if ( PnpEtwHandle && EtwEventEnabled(PnpEtwHandle, &KMPnPEvt_EarlyLaunch_LoadNotification_Stop) )
  {
    v8 = *(unsigned __int16 *)(a5 + 8);
    UserData.Reserved = 0;
    v14 = 0;
    v10 = (unsigned __int16)v8 >> 1;
    UserData.Ptr = (ULONGLONG)&v10;
    v12 = *(_QWORD *)(a5 + 16);
    v13 = v8;
    UserData.Size = 2;
    EtwWrite(v5, &KMPnPEvt_EarlyLaunch_LoadNotification_Stop, 0LL, 2u, &UserData);
  }
  v9 = *a3;
  if ( *((_DWORD *)PnpClassificationRank + v9) > *((_DWORD *)PnpClassificationRank + *a4) )
    *a4 = v9;
  RtlFreeAnsiString((PUNICODE_STRING)(a3 + 2));
  RtlFreeAnsiString((PUNICODE_STRING)(a3 + 14));
  RtlFreeAnsiString((PUNICODE_STRING)(a3 + 10));
}
