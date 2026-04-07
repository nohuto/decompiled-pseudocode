/*
 * XREFs of ??$_TlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x18006D914
 * Callers:
 *     ??1ActivityData@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAA@XZ @ 0x18006DAF0 (--1ActivityData@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAA@XZ.c)
 * Callees:
 *     _TlgWrite @ 0x180004560 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 */

int __fastcall _TlgWriteActivityAutoStop<35184372088832,5>(const struct _TlgProvider_t *a1, const GUID *a2)
{
  __int64 v2; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  if ( *(_DWORD *)a1 > 5u && (*((_QWORD *)a1 + 2) & 0x200000000000LL) != 0 )
  {
    v2 = *((_QWORD *)a1 + 3) & 0x200000000000LL;
    if ( v2 == *((_QWORD *)a1 + 3) )
      LODWORD(v2) = TlgWrite(a1, &unk_1800A73E8, a2, 0LL, 2u, &pData);
  }
  return v2;
}
