/*
 * XREFs of ?TelemetryFirstValidPose_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@0@Z @ 0x18008FEE4
 * Callers:
 *     _lambda_f8380620b3870a98be7ea388687506c5_::operator() @ 0x18008AD1C (_lambda_f8380620b3870a98be7ea388687506c5_--operator().c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x180091C50 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

void __fastcall HolographicDriverClientTrace::TelemetryFirstValidPose_(
        HolographicDriverClientTrace *this,
        const struct _GUID *a2,
        const struct SPATIAL_NODE_ID *a3,
        const struct _GUID *a4)
{
  const struct _TlgProvider_t *v7; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-78h] BYREF
  const struct _GUID *v9; // [rsp+50h] [rbp-58h]
  __int64 v10; // [rsp+58h] [rbp-50h]
  const struct SPATIAL_NODE_ID *v11; // [rsp+60h] [rbp-48h]
  __int64 v12; // [rsp+68h] [rbp-40h]
  const struct _GUID *v13; // [rsp+70h] [rbp-38h]
  __int64 v14; // [rsp+78h] [rbp-30h]

  v7 = (const struct _TlgProvider_t *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
  if ( *(_DWORD *)v7 > 4u
    && (*((_QWORD *)v7 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v7 + 3) & 0x400000000000LL) == *((_QWORD *)v7 + 3) )
  {
    v9 = a2;
    v10 = 16LL;
    v11 = a3;
    v12 = 16LL;
    v13 = a4;
    v14 = 16LL;
    TlgWrite(v7, &unk_1800BA306, 0LL, 0LL, 5u, &pData);
  }
}
