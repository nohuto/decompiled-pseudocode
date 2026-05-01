/*
 * XREFs of RmpActivityHostAggregateMemUtilMetricsByProcess @ 0x18001D1AC
 * Callers:
 *     RmpSystemQueryMemUtilMetricsForHosts @ 0x18001C8E8 (RmpSystemQueryMemUtilMetricsForHosts.c)
 * Callees:
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     RmpCopyMemUtilHostMetrics @ 0x18001D3E8 (RmpCopyMemUtilHostMetrics.c)
 *     RmpGetMemUtilFlagsFromHostMetricFlags @ 0x18001D810 (RmpGetMemUtilFlagsFromHostMetricFlags.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 */

__int64 __fastcall RmpActivityHostAggregateMemUtilMetricsByProcess(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int16 a4)
{
  __int64 v4; // rbx
  unsigned int v6; // r15d
  __int64 v8; // rdx
  unsigned int MemUtilFlagsFromHostMetricFlags; // eax
  const struct _TlgProvider_t *v10; // rcx
  const GUID *v11; // r8
  __int16 v12; // r10
  __int64 v13; // r9
  __int64 v14; // rsi
  __int16 v15; // bx
  int *v16; // rdi
  const GUID *v17; // r9
  const struct _TlgProvider_t *v18; // rcx
  unsigned int v20; // [rsp+3Ch] [rbp-CCh]
  int v21; // [rsp+40h] [rbp-C8h] BYREF
  int v22; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v23; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B8h]
  _BYTE v25[16]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+68h] [rbp-A0h]
  __int64 v27; // [rsp+70h] [rbp-98h]
  __int64 v28; // [rsp+78h] [rbp-90h]
  __int16 v29; // [rsp+8Eh] [rbp-7Ah]
  const struct _TlgProvider_t *v30; // [rsp+90h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp-70h] BYREF
  const struct _TlgProvider_t **v32; // [rsp+B8h] [rbp-50h]
  __int64 v33; // [rsp+C0h] [rbp-48h]
  __int64 *v34; // [rsp+C8h] [rbp-40h]
  __int64 v35; // [rsp+D0h] [rbp-38h]
  int *v36; // [rsp+D8h] [rbp-30h]
  __int64 v37; // [rsp+E0h] [rbp-28h]
  int *v38; // [rsp+E8h] [rbp-20h]
  __int64 v39; // [rsp+F0h] [rbp-18h]
  int *v40; // [rsp+F8h] [rbp-10h]
  __int64 v41; // [rsp+100h] [rbp-8h]
  int *v42; // [rsp+108h] [rbp+0h]
  __int64 v43; // [rsp+110h] [rbp+8h]
  int *v44; // [rsp+118h] [rbp+10h]
  __int64 v45; // [rsp+120h] [rbp+18h]

  v4 = a2;
  v6 = a4;
  memset_0(v25, 0, 0x38uLL);
  MemUtilFlagsFromHostMetricFlags = RmpGetMemUtilFlagsFromHostMetricFlags(v6, v8);
  v12 = 0;
  v20 = MemUtilFlagsFromHostMetricFlags;
  v13 = MemUtilFlagsFromHostMetricFlags;
  v14 = 0LL;
  if ( (_DWORD)v4 )
  {
    v24 = v4;
    v15 = v29;
    v16 = (int *)(a3 + 4);
    do
    {
      if ( *a1 != v14 )
      {
        if ( v14 )
          RmpCopyMemUtilHostMetrics(v14, v25, v11, v13);
        memset_0(v25, 0, 0x38uLL);
        v14 = *a1;
        v15 = v6;
        v12 = 0;
        v29 = v6;
      }
      if ( (unsigned int)dword_180071060 > 5 && TlgKeywordOn(v10, 1uLL) )
      {
        v18 = *(const struct _TlgProvider_t **)(*(_QWORD *)(v14 + 40) + 24LL);
        v32 = &v30;
        LODWORD(v23) = *(v16 - 1);
        v34 = &v23;
        v36 = &v22;
        v21 = *v16;
        v38 = &v21;
        v40 = v16 + 3;
        v42 = v16 + 5;
        v44 = v16 + 11;
        v30 = v18;
        v33 = 8LL;
        v35 = 4LL;
        v22 = (int)v17;
        v37 = 4LL;
        v39 = 4LL;
        v41 = 8LL;
        v43 = 8LL;
        v45 = 8LL;
        TlgWrite(v18, &unk_180062F48, v11, v17, 9u, &pData);
        v12 = 0;
      }
      if ( (v6 & 2) != 0 )
      {
        if ( (*(_BYTE *)v16 & 8) != 0 )
        {
          v26 += *(_QWORD *)(v16 + 5);
        }
        else
        {
          v15 &= ~2u;
          v29 = v15;
        }
      }
      if ( (v6 & 4) != 0 )
      {
        if ( (*(_BYTE *)v16 & 1) != 0 )
        {
          v27 += *(_QWORD *)(v16 + 3);
        }
        else
        {
          v15 &= ~4u;
          v29 = v15;
        }
      }
      if ( (v6 & 0x10) != v12 )
      {
        if ( (*(_BYTE *)v16 & 0x40) != 0 )
        {
          v28 += *(_QWORD *)(v16 + 11);
        }
        else
        {
          v15 &= ~0x10u;
          v29 = v15;
        }
      }
      v13 = v20;
      a1 += 2;
      v16 += 16;
      --v24;
    }
    while ( v24 );
  }
  return RmpCopyMemUtilHostMetrics(v14, v25, v11, v13);
}
