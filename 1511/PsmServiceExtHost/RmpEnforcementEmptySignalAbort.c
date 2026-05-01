/*
 * XREFs of RmpEnforcementEmptySignalAbort @ 0x1800402D8
 * Callers:
 *     RmpActivityHostCheckQueueWork @ 0x18000ADC0 (RmpActivityHostCheckQueueWork.c)
 * Callees:
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
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

  result = NtSetEvent(*(HANDLE *)(a1 + 808), 0LL);
  if ( (unsigned int)dword_180071060 > 4 )
  {
    result = TlgKeywordOn(v3, 1uLL);
    if ( result )
    {
      v7 = *(_QWORD *)(a1 + 24);
      v12 = 0;
      v8 = v7;
      v10 = &v8;
      v11 = 8;
      return TlgWrite(v4, &unk_1800627B5, v5, v6, 3u, &pData);
    }
  }
  return result;
}
