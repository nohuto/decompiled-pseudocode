/*
 * XREFs of ?GetSittingStandingOnly_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@_N@Z @ 0x18008F73C
 * Callers:
 *     ?GetSittingStandingOnly@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEA_N@Z @ 0x180089780 (-GetSittingStandingOnly@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEA_N@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x180091C50 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

void __fastcall HolographicDriverClientTrace::GetSittingStandingOnly_(
        HolographicDriverClientTrace *this,
        const void *a2,
        const struct _GUID *a3,
        char a4)
{
  __int64 v5; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-19h] BYREF
  const void **v7; // [rsp+58h] [rbp+7h]
  __int64 v8; // [rsp+60h] [rbp+Fh]
  const struct _GUID *v9; // [rsp+68h] [rbp+17h]
  __int64 v10; // [rsp+70h] [rbp+1Fh]
  char *v11; // [rsp+78h] [rbp+27h]
  __int64 v12; // [rsp+80h] [rbp+2Fh]
  const void *v13; // [rsp+C0h] [rbp+6Fh] BYREF
  char v14; // [rsp+D0h] [rbp+7Fh] BYREF

  v14 = a4;
  v13 = a2;
  v5 = *((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
  if ( *(_DWORD *)v5 > 4u && (*(_BYTE *)(v5 + 16) & 2) != 0 && (*(_QWORD *)(v5 + 24) & 2LL) == *(_QWORD *)(v5 + 24) )
  {
    v8 = 8LL;
    v7 = &v13;
    v11 = &v14;
    v9 = a3;
    v10 = 16LL;
    v12 = 1LL;
    TlgWrite((TraceLoggingHProvider)v5, &unk_1800BB331, 0LL, 0LL, 5u, &pData);
  }
}
