/*
 * XREFs of ?PostEvent@CompositionErrorEventData@DwmCoreAsimov@@UEAAXPEBU_TlgProvider_t@@@Z @ 0x1800B6590
 * Callers:
 *     <none>
 * Callees:
 *     _TlgCreateWsz @ 0x180016F98 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x18001D460 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

void __fastcall DwmCoreAsimov::CompositionErrorEventData::PostEvent(LPCWSTR *this, const struct _TlgProvider_t *a2)
{
  const WCHAR *v3; // rdx
  LPCGUID v4; // r8
  LPCGUID v5; // r9
  TraceLoggingHProvider v6; // r11
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-48h] BYREF
  char *v9; // [rsp+60h] [rbp-38h]
  int v10; // [rsp+68h] [rbp-30h]
  int v11; // [rsp+6Ch] [rbp-2Ch]
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+70h] [rbp-28h] BYREF

  if ( *(_DWORD *)a2 > 5u
    && (*((_QWORD *)a2 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)a2 + 3) & 0x400000000000LL) == *((_QWORD *)a2 + 3) )
  {
    TlgCreateWsz(&pDesc, this[2]);
    v11 = 0;
    v3 = this[3];
    v9 = (char *)(this + 4);
    v10 = 4;
    TlgCreateWsz(&v12, v3);
    TlgWrite(v6, &unk_18017E0C5, v4, v5, 5u, &pData);
  }
}
