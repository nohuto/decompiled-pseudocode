/*
 * XREFs of ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x18007D77C
 * Callers:
 *     ??1ActivityData@?$ActivityBase@$00$0A@$04@wil@@QEAA@XZ @ 0x180010330 (--1ActivityData@-$ActivityBase@$00$0A@$04@wil@@QEAA@XZ.c)
 * Callees:
 *     _TlgWrite @ 0x18003E74C (_TlgWrite.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 */

TLG_STATUS __fastcall _TlgWriteActivityAutoStop<0,5>(const struct _TlgProvider_t *a1, const GUID *a2)
{
  TLG_STATUS result; // eax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  if ( *(_DWORD *)a1 > 5u )
    return TlgWrite(a1, &unk_1800A9E77, a2, 0LL, 2u, &pData);
  return result;
}
