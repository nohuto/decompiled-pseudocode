/*
 * XREFs of RmpClientTraceWnfMessageDropped @ 0x18000E164
 * Callers:
 *     RmpClientWnfSubscriptionWorker @ 0x18000E880 (RmpClientWnfSubscriptionWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x180008770 (__security_check_cookie.c)
 *     _TlgWrite @ 0x18000E210 (_TlgWrite.c)
 */

TLG_STATUS __fastcall RmpClientTraceWnfMessageDropped(int a1, int a2, const GUID *a3)
{
  TLG_STATUS result; // eax
  UINT32 v4; // [rsp+20h] [rbp-78h]
  int v5; // [rsp+30h] [rbp-68h] BYREF
  int v6; // [rsp+34h] [rbp-64h] BYREF
  EVENT_DATA_DESCRIPTOR v7; // [rsp+40h] [rbp-58h] BYREF
  int *v8; // [rsp+60h] [rbp-38h]
  int v9; // [rsp+68h] [rbp-30h]
  int v10; // [rsp+6Ch] [rbp-2Ch]
  int *v11; // [rsp+70h] [rbp-28h]
  int v12; // [rsp+78h] [rbp-20h]
  int v13; // [rsp+7Ch] [rbp-1Ch]

  if ( (unsigned int)dword_180022030 > 5 && (qword_180022040 & 0x200000000000LL) != 0 )
  {
    result = 0;
    if ( (qword_180022048 & 0x200000000000LL) == qword_180022048 )
    {
      v6 = a1;
      v8 = &v6;
      v10 = 0;
      v9 = 4;
      v11 = &v5;
      v13 = 0;
      v12 = 4;
      v5 = a2;
      return TlgWrite((TraceLoggingHProvider)4, &unk_18001CD19, a3, (LPCGUID)0x200000000000LL, v4, &v7);
    }
  }
  return result;
}
