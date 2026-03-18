/*
 * XREFs of TraceLoggingUserIsActive @ 0x140226770
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x140226838 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

void __fastcall TraceLoggingUserIsActive(int a1, __int64 a2)
{
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  int v7; // [rsp+50h] [rbp-28h] BYREF
  __int64 v8; // [rsp+58h] [rbp-20h] BYREF
  __int64 v9[3]; // [rsp+60h] [rbp-18h] BYREF
  int CurrentWin32kSessionId; // [rsp+90h] [rbp+18h] BYREF
  int v11; // [rsp+98h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1403AAA30 > 5
    && (qword_1403AAA40 & 0x200000000000LL) != 0
    && (qword_1403AAA48 & 0x200000000000LL) == qword_1403AAA48 )
  {
    CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(0x200000000000LL);
    v11 = 12;
    v7 = a1;
    v8 = a2;
    v9[0] = 50331648LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v4,
      (unsigned int)&unk_1403774C9,
      v5,
      v6,
      (__int64)v9,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v11,
      (__int64)&CurrentWin32kSessionId);
  }
}
