/*
 * XREFs of ?PostEvent@HighErrorRateEventData@DwmCoreAsimov@@UEAAXPEBU_TlgProvider_t@@@Z @ 0x180123F90
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1800636A0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

void __fastcall DwmCoreAsimov::HighErrorRateEventData::PostEvent(
        DwmCoreAsimov::HighErrorRateEventData *this,
        const struct _TlgProvider_t *a2,
        __int64 a3,
        const GUID *a4)
{
  EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-58h] BYREF
  char *v5; // [rsp+50h] [rbp-38h]
  int v6; // [rsp+58h] [rbp-30h]
  int v7; // [rsp+5Ch] [rbp-2Ch]
  char *v8; // [rsp+60h] [rbp-28h]
  int v9; // [rsp+68h] [rbp-20h]
  int v10; // [rsp+6Ch] [rbp-1Ch]

  if ( *(_DWORD *)a2 > 5u
    && (*((_QWORD *)a2 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)a2 + 3) & 0x400000000000LL) == *((_QWORD *)a2 + 3) )
  {
    v5 = (char *)this + 24;
    v7 = 0;
    v6 = 8;
    v8 = (char *)this + 32;
    v10 = 0;
    v9 = 8;
    TlgWrite(a2, &unk_18016EF58, (LPCGUID)a2, a4, 4u, &v4);
  }
}
