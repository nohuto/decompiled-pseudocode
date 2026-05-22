/*
 * XREFs of ??$_TlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x180091AE0
 * Callers:
 *     ??1?$ActivityData@VHolographicDriverClientTrace@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180091B4C (--1-$ActivityData@VHolographicDriverClientTrace@@U_TlgReflectorTag_Param0IsProviderType@@@-$Acti.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

int __fastcall _TlgWriteActivityAutoStop<70368744177664,5>(const struct _TlgProvider_t *a1, const GUID *a2)
{
  __int64 v2; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  if ( *(_DWORD *)a1 > 5u && (*((_QWORD *)a1 + 2) & 0x400000000000LL) != 0 )
  {
    v2 = *((_QWORD *)a1 + 3) & 0x400000000000LL;
    if ( v2 == *((_QWORD *)a1 + 3) )
      LODWORD(v2) = TlgWrite(a1, &unk_1800BA961, a2, 0LL, 2u, &pData);
  }
  return v2;
}
