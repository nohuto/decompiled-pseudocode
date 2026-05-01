/*
 * XREFs of RmpActivityHostAggregateMemUtilMetricsByProcess @ 0x180018EEC
 * Callers:
 *     RmpSystemQueryMemUtilMetricsForHosts @ 0x18001938C (RmpSystemQueryMemUtilMetricsForHosts.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     RmpCopyMemUtilHostMetrics @ 0x18001912C (RmpCopyMemUtilHostMetrics.c)
 *     RmpGetMemUtilFlagsFromHostMetricFlags @ 0x180019368 (RmpGetMemUtilFlagsFromHostMetricFlags.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 */

__int64 __fastcall RmpActivityHostAggregateMemUtilMetricsByProcess(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int16 a4)
{
  __int64 v4; // rbx
  unsigned int v6; // r15d
  unsigned int MemUtilFlagsFromHostMetricFlags; // eax
  const struct _TlgProvider_t *v9; // rcx
  const GUID *v10; // r9
  __int64 v11; // r8
  __int64 v12; // rsi
  __int16 v13; // bx
  __int64 v14; // rdi
  const GUID *v15; // r8
  const struct _TlgProvider_t *v16; // rcx
  unsigned int v18; // [rsp+3Ch] [rbp-CCh]
  int v19; // [rsp+40h] [rbp-C8h] BYREF
  int v20; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v21; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B8h]
  const struct _TlgProvider_t *v23; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v24[16]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+78h] [rbp-90h]
  __int64 v26; // [rsp+80h] [rbp-88h]
  __int64 v27; // [rsp+88h] [rbp-80h]
  __int16 v28; // [rsp+A6h] [rbp-62h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A8h] [rbp-60h] BYREF
  const struct _TlgProvider_t **v30; // [rsp+C8h] [rbp-40h]
  __int64 v31; // [rsp+D0h] [rbp-38h]
  int *v32; // [rsp+D8h] [rbp-30h]
  __int64 v33; // [rsp+E0h] [rbp-28h]
  int *v34; // [rsp+E8h] [rbp-20h]
  __int64 v35; // [rsp+F0h] [rbp-18h]
  __int64 *v36; // [rsp+F8h] [rbp-10h]
  __int64 v37; // [rsp+100h] [rbp-8h]
  __int64 v38; // [rsp+108h] [rbp+0h]
  __int64 v39; // [rsp+110h] [rbp+8h]
  __int64 v40; // [rsp+118h] [rbp+10h]
  __int64 v41; // [rsp+120h] [rbp+18h]
  __int64 v42; // [rsp+128h] [rbp+20h]
  __int64 v43; // [rsp+130h] [rbp+28h]

  v4 = a2;
  v6 = a4;
  memset_0(v24, 0, 0x40uLL);
  MemUtilFlagsFromHostMetricFlags = RmpGetMemUtilFlagsFromHostMetricFlags(v6);
  LOWORD(v10) = 0;
  v18 = MemUtilFlagsFromHostMetricFlags;
  v11 = MemUtilFlagsFromHostMetricFlags;
  v12 = 0LL;
  if ( (_DWORD)v4 )
  {
    v22 = v4;
    v13 = v28;
    v14 = a3 + 4;
    do
    {
      if ( *a1 != v12 )
      {
        if ( v12 )
          RmpCopyMemUtilHostMetrics(v12, v24, v11);
        memset_0(v24, 0, 0x40uLL);
        v12 = *a1;
        v13 = v6;
        LOWORD(v10) = 0;
        v28 = v6;
      }
      if ( (unsigned int)dword_18004C030 > 5 && TlgKeywordOn(v9, 1uLL) )
      {
        v16 = *(const struct _TlgProvider_t **)(*(_QWORD *)(v12 + 48) + 24LL);
        v30 = &v23;
        v19 = *(_DWORD *)(v14 - 4);
        v32 = &v19;
        v34 = &v20;
        LODWORD(v21) = *(_DWORD *)v14;
        v36 = &v21;
        v38 = v14 + 12;
        v40 = v14 + 20;
        v42 = v14 + 44;
        v23 = v16;
        v31 = 8LL;
        v33 = 4LL;
        v20 = (int)v15;
        v35 = 4LL;
        v37 = 4LL;
        v39 = 8LL;
        v41 = 8LL;
        v43 = 8LL;
        TlgWrite(v16, &unk_180040E3B, v15, v10, 9u, &pData);
        LOWORD(v10) = 0;
      }
      if ( (v6 & 4) != 0 )
      {
        if ( (*(_BYTE *)v14 & 8) != 0 )
        {
          v25 += *(_QWORD *)(v14 + 20);
        }
        else
        {
          v13 &= ~4u;
          v28 = v13;
        }
      }
      if ( (v6 & 8) != 0 )
      {
        if ( (*(_BYTE *)v14 & 1) != 0 )
        {
          v26 += *(_QWORD *)(v14 + 12);
        }
        else
        {
          v13 &= ~8u;
          v28 = v13;
        }
      }
      if ( (v6 & 0x20) != (_WORD)v10 )
      {
        if ( (*(_BYTE *)v14 & 0x40) != 0 )
        {
          v27 += *(_QWORD *)(v14 + 44);
        }
        else
        {
          v13 &= ~0x20u;
          v28 = v13;
        }
      }
      v11 = v18;
      a1 += 2;
      v14 += 64LL;
      --v22;
    }
    while ( v22 );
  }
  return RmpCopyMemUtilHostMetrics(v12, v24, v11);
}
