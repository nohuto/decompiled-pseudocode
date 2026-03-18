/*
 * XREFs of ?PostEvent@DFlipFailedEventData@DwmCoreAsimov@@UEAAXPEBU_TlgProvider_t@@@Z @ 0x180162FD0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
 */

void __fastcall DwmCoreAsimov::DFlipFailedEventData::PostEvent(
        DwmCoreAsimov::DFlipFailedEventData *this,
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
    TlgWrite(a2, &unk_1801C51FC, (LPCGUID)a2, a4, 3u, &pData);
  }
}
