/*
 * XREFs of PnpEarlyLaunchImageNotificationPreProcess @ 0x1407DF548
 * Callers:
 *     <none>
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlDuplicateUnicodeString @ 0x1404FEFE8 (RtlDuplicateUnicodeString.c)
 */

char __fastcall PnpEarlyLaunchImageNotificationPreProcess(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char result; // al
  REGHANDLE v7; // rbx
  int v8; // r8d
  __int16 v9; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF
  __int64 v11; // [rsp+48h] [rbp-20h]
  int v12; // [rsp+50h] [rbp-18h]
  int v13; // [rsp+54h] [rbp-14h]

  *(_OWORD *)a3 = *(_OWORD *)a5;
  *(_OWORD *)(a3 + 16) = *(_OWORD *)(a5 + 16);
  *(_OWORD *)(a3 + 32) = *(_OWORD *)(a5 + 32);
  *(_OWORD *)(a3 + 48) = *(_OWORD *)(a5 + 48);
  *(_OWORD *)(a3 + 64) = *(_OWORD *)(a5 + 64);
  *(_OWORD *)(a3 + 80) = *(_OWORD *)(a5 + 80);
  *(_QWORD *)(a3 + 96) = *(_QWORD *)(a5 + 96);
  RtlDuplicateUnicodeString(0, (PCUNICODE_STRING)(a5 + 8), (PUNICODE_STRING)(a3 + 8));
  RtlDuplicateUnicodeString(0, (PCUNICODE_STRING)(a5 + 24), (PUNICODE_STRING)(a3 + 24));
  RtlDuplicateUnicodeString(0, (PCUNICODE_STRING)(a5 + 56), (PUNICODE_STRING)(a3 + 56));
  result = RtlDuplicateUnicodeString(0, (PCUNICODE_STRING)(a5 + 40), (PUNICODE_STRING)(a3 + 40));
  v7 = PnpEtwHandle;
  if ( PnpEtwHandle )
  {
    result = EtwEventEnabled(PnpEtwHandle, &KMPnPEvt_EarlyLaunch_LoadNotification_Start);
    if ( result )
    {
      v8 = *(unsigned __int16 *)(a3 + 8);
      UserData.Reserved = 0;
      v13 = 0;
      v9 = (unsigned __int16)v8 >> 1;
      UserData.Ptr = (ULONGLONG)&v9;
      v11 = *(_QWORD *)(a3 + 16);
      v12 = v8;
      UserData.Size = 2;
      return EtwWrite(v7, &KMPnPEvt_EarlyLaunch_LoadNotification_Start, 0LL, 2u, &UserData);
    }
  }
  return result;
}
