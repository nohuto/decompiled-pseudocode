/*
 * XREFs of ?PostEvent@OveralyFailedEventData@DwmCoreAsimov@@UEAAXPEBU_TlgProvider_t@@@Z @ 0x1801395E0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18001D460 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

void __fastcall DwmCoreAsimov::OveralyFailedEventData::PostEvent(
        DwmCoreAsimov::OveralyFailedEventData *this,
        const struct _TlgProvider_t *a2,
        __int64 a3,
        const GUID *a4)
{
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  char *v5; // [rsp+50h] [rbp-28h]
  int v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+5Ch] [rbp-1Ch]

  if ( *(_DWORD *)a2 > 5u
    && (*((_QWORD *)a2 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)a2 + 3) & 0x400000000000LL) == *((_QWORD *)a2 + 3) )
  {
    v7 = 0;
    v5 = (char *)this + 16;
    v6 = 4;
    TlgWrite(a2, &unk_18017E07C, (LPCGUID)a2, a4, 3u, &pData);
  }
}
