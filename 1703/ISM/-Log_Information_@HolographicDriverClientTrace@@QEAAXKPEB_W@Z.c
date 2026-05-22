/*
 * XREFs of ?Log_Information_@HolographicDriverClientTrace@@QEAAXKPEB_W@Z @ 0x180093900
 * Callers:
 *     ?DeviceHandleCallback@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@CAKPEAUHCMNOTIFICATION__@@PEAXW4_CM_NOTIFY_ACTION@@PEAU_CM_NOTIFY_EVENT_DATA@@K@Z @ 0x180093470 (-DeviceHandleCallback@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@CAKPEAUHCMNOT.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x180091C50 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

void __fastcall HolographicDriverClientTrace::Log_Information_(
        HolographicDriverClientTrace *this,
        int a2,
        const wchar_t *a3)
{
  __int64 v4; // rcx
  const wchar_t *v5; // rdx
  __int64 v6; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-68h] BYREF
  int *v8; // [rsp+50h] [rbp-48h]
  __int64 v9; // [rsp+58h] [rbp-40h]
  const wchar_t *v10; // [rsp+60h] [rbp-38h]
  int v11; // [rsp+68h] [rbp-30h]
  int v12; // [rsp+6Ch] [rbp-2Ch]
  int v13; // [rsp+A8h] [rbp+10h] BYREF

  v13 = a2;
  v4 = *((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
  if ( *(_DWORD *)v4 > 4u && (*(_BYTE *)(v4 + 16) & 2) != 0 && (*(_QWORD *)(v4 + 24) & 2LL) == *(_QWORD *)(v4 + 24) )
  {
    v9 = 4LL;
    v8 = &v13;
    v5 = (const wchar_t *)&unk_1800AE6CC;
    LODWORD(v6) = 0;
    if ( a3 )
    {
      v5 = a3;
      v6 = -1LL;
      do
        ++v6;
      while ( a3[v6] );
    }
    v10 = v5;
    v11 = 2 * v6 + 2;
    v12 = 0;
    TlgWrite((TraceLoggingHProvider)v4, &unk_1800BB5F9, 0LL, 0LL, 4u, &pData);
  }
}
