/*
 * XREFs of HvlIumEtwEnableCallback @ 0x1405F6CA8
 * Callers:
 *     <none>
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1400EB69C (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

void __fastcall HvlIumEtwEnableCallback(
        __int128 *SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        PVOID CallbackContext)
{
  unsigned __int8 v7[8]; // [rsp+20h] [rbp-88h] BYREF
  __int128 v8; // [rsp+28h] [rbp-80h]
  __int64 v9; // [rsp+38h] [rbp-70h]
  __int64 v10; // [rsp+40h] [rbp-68h]
  ULONGLONG v11; // [rsp+48h] [rbp-60h]
  ULONGLONG v12; // [rsp+50h] [rbp-58h]
  PVOID v13; // [rsp+58h] [rbp-50h]

  v8 = *SourceId;
  v9 = ControlCode;
  v10 = Level;
  v12 = MatchAllKeyword;
  v11 = MatchAnyKeyword;
  v13 = CallbackContext;
  HvlpEnterIumSecureMode(1u, 211, 0, v7);
}
