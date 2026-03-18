/*
 * XREFs of ?PostEvent@UsageEventData@DwmCoreAsimov@@UEAAXPEBU_TlgProvider_t@@@Z @ 0x180016F10
 * Callers:
 *     ??1CDwmEventManager_Private@DwmCoreAsimov@@QEAA@XZ @ 0x1801391B8 (--1CDwmEventManager_Private@DwmCoreAsimov@@QEAA@XZ.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180016F98 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x18001D460 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

void __fastcall DwmCoreAsimov::UsageEventData::PostEvent(LPCWSTR *this, const struct _TlgProvider_t *a2)
{
  __int64 v2; // r11
  LPCGUID v3; // r8
  LPCGUID v4; // r9
  TraceLoggingHProvider v5; // r10
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-48h] BYREF
  __int64 v8; // [rsp+60h] [rbp-38h]
  int v9; // [rsp+68h] [rbp-30h]
  int v10; // [rsp+6Ch] [rbp-2Ch]
  __int64 v11; // [rsp+70h] [rbp-28h]
  int v12; // [rsp+78h] [rbp-20h]
  int v13; // [rsp+7Ch] [rbp-1Ch]

  if ( *(_DWORD *)a2 > 5u
    && (*((_QWORD *)a2 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)a2 + 3) & 0x400000000000LL) == *((_QWORD *)a2 + 3) )
  {
    TlgCreateWsz(&pDesc, this[2]);
    v10 = 0;
    v13 = 0;
    v11 = v2 + 32;
    v8 = v2 + 24;
    v9 = 8;
    v12 = 8;
    TlgWrite(v5, &unk_18017E0FF, v3, v4, 5u, &pData);
  }
}
