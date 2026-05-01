/*
 * XREFs of RmpEnforcementEmptySignalAbort @ 0x18003AEFC
 * Callers:
 *     RmpActivityHostCheckQueueWork @ 0x18003B7DC (RmpActivityHostCheckQueueWork.c)
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 */

char __fastcall RmpEnforcementEmptySignalAbort(__int64 a1)
{
  char result; // al
  const struct _TlgProvider_t *v3; // rcx
  const struct _TlgProvider_t *v4; // rcx
  const GUID *v5; // r8
  const GUID *v6; // r9
  __int64 v7; // rax
  __int64 v8; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v10; // [rsp+58h] [rbp-20h]
  int v11; // [rsp+60h] [rbp-18h]
  int v12; // [rsp+64h] [rbp-14h]

  result = NtSetEvent(*(HANDLE *)(a1 + 800), 0LL);
  if ( (unsigned int)dword_1800690A0 > 4 )
  {
    result = TlgKeywordOn(v3, 1uLL);
    if ( result )
    {
      v7 = *(_QWORD *)(a1 + 24);
      v12 = 0;
      v8 = v7;
      v10 = &v8;
      v11 = 8;
      return TlgWrite(v4, &unk_18005AF0E, v5, v6, 3u, &pData);
    }
  }
  return result;
}
