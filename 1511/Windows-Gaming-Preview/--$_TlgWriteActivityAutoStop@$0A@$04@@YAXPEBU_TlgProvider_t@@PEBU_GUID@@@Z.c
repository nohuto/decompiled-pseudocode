/*
 * XREFs of ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x180024478
 * Callers:
 *     ??1?$ActivityBase@$0A@$0A@$04@wil@@QEAA@XZ @ 0x180021550 (--1-$ActivityBase@$0A@$0A@$04@wil@@QEAA@XZ.c)
 *     ?Destroy@?$ActivityBase@$0A@$0A@$04@wil@@IEAAXXZ @ 0x180023D60 (-Destroy@-$ActivityBase@$0A@$0A@$04@wil@@IEAAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x1800010DC (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025A00 (__security_check_cookie.c)
 */

TLG_STATUS __fastcall _TlgWriteActivityAutoStop<0,5>(const struct _TlgProvider_t *a1, const GUID *a2)
{
  TLG_STATUS result; // eax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  if ( *(_DWORD *)a1 > 5u )
    return TlgWrite(a1, &unk_180030951, a2, 0LL, 2u, &pData);
  return result;
}
