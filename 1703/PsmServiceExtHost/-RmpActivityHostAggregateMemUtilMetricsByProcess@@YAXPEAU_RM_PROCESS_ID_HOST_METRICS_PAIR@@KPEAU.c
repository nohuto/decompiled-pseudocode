/*
 * XREFs of ?RmpActivityHostAggregateMemUtilMetricsByProcess@@YAXPEAU_RM_PROCESS_ID_HOST_METRICS_PAIR@@KPEAU_MEMUTIL_PROCESS_METRICS@@G@Z @ 0x180003580
 * Callers:
 *     ?RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z @ 0x18000326C (-RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z.c)
 * Callees:
 *     ?RmpCopyMemUtilHostMetrics@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@0@Z @ 0x1800037D0 (-RmpCopyMemUtilHostMetrics@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@0@Z.c)
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 */

void __fastcall RmpActivityHostAggregateMemUtilMetricsByProcess(
        struct _RM_PROCESS_ID_HOST_METRICS_PAIR *a1,
        unsigned int a2,
        struct _MEMUTIL_PROCESS_METRICS *a3,
        __int16 a4)
{
  __int64 v4; // rbx
  const GUID *v8; // r9
  __int64 v9; // rsi
  const struct _TlgProvider_t *v10; // rcx
  __int16 v11; // bx
  char *v12; // rdi
  const GUID *v13; // r8
  const struct _TlgProvider_t *v14; // rcx
  int v15; // [rsp+40h] [rbp-C8h] BYREF
  int v16; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v17; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B8h]
  const struct _TlgProvider_t *v19; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v20[16]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+78h] [rbp-90h]
  __int64 v22; // [rsp+80h] [rbp-88h]
  __int64 v23; // [rsp+88h] [rbp-80h]
  __int16 v24; // [rsp+A6h] [rbp-62h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A8h] [rbp-60h] BYREF
  const struct _TlgProvider_t **v26; // [rsp+C8h] [rbp-40h]
  __int64 v27; // [rsp+D0h] [rbp-38h]
  int *v28; // [rsp+D8h] [rbp-30h]
  __int64 v29; // [rsp+E0h] [rbp-28h]
  int *v30; // [rsp+E8h] [rbp-20h]
  __int64 v31; // [rsp+F0h] [rbp-18h]
  __int64 *v32; // [rsp+F8h] [rbp-10h]
  __int64 v33; // [rsp+100h] [rbp-8h]
  char *v34; // [rsp+108h] [rbp+0h]
  __int64 v35; // [rsp+110h] [rbp+8h]
  char *v36; // [rsp+118h] [rbp+10h]
  __int64 v37; // [rsp+120h] [rbp+18h]
  char *v38; // [rsp+128h] [rbp+20h]
  __int64 v39; // [rsp+130h] [rbp+28h]

  v4 = a2;
  memset_0(v20, 0, 0x40uLL);
  LOWORD(v8) = 0;
  v9 = 0LL;
  v10 = (const struct _TlgProvider_t *)((2 * (a4 & 4)) | 1u);
  if ( (a4 & 8) == 0 )
    v10 = (const struct _TlgProvider_t *)(2 * (a4 & 4u));
  if ( (_DWORD)v4 )
  {
    v18 = v4;
    v11 = v24;
    v12 = (char *)a3 + 4;
    do
    {
      if ( *(_QWORD *)a1 != v9 )
      {
        if ( v9 )
          RmpCopyMemUtilHostMetrics((struct _RM_ACTIVITY_HOST_METRICS *)v9, (struct _RM_ACTIVITY_HOST_METRICS *)v20);
        memset_0(v20, 0, 0x40uLL);
        v9 = *(_QWORD *)a1;
        v11 = a4;
        LOWORD(v8) = 0;
        v24 = a4;
      }
      if ( (unsigned int)dword_18004D030 > 5 && TlgKeywordOn(v10, 1uLL) )
      {
        v14 = *(const struct _TlgProvider_t **)(*(_QWORD *)(v9 + 48) + 24LL);
        v26 = &v19;
        v15 = *((_DWORD *)v12 - 1);
        v28 = &v15;
        v30 = &v16;
        LODWORD(v17) = *(_DWORD *)v12;
        v32 = &v17;
        v34 = v12 + 12;
        v36 = v12 + 20;
        v38 = v12 + 44;
        v19 = v14;
        v27 = 8LL;
        v29 = 4LL;
        v16 = (int)v13;
        v31 = 4LL;
        v33 = 4LL;
        v35 = 8LL;
        v37 = 8LL;
        v39 = 8LL;
        TlgWrite(v14, &unk_180041895, v13, v8, 9u, &pData);
        LOWORD(v8) = 0;
      }
      if ( (a4 & 4) != 0 )
      {
        if ( (*v12 & 8) != 0 )
        {
          v21 += *(_QWORD *)(v12 + 20);
        }
        else
        {
          v11 &= ~4u;
          v24 = v11;
        }
      }
      if ( (a4 & 8) != 0 )
      {
        if ( (*v12 & 1) != 0 )
        {
          v22 += *(_QWORD *)(v12 + 12);
        }
        else
        {
          v11 &= ~8u;
          v24 = v11;
        }
      }
      if ( (a4 & 0x20) != (_WORD)v8 )
      {
        if ( (*v12 & 0x40) != 0 )
        {
          v23 += *(_QWORD *)(v12 + 44);
        }
        else
        {
          v11 &= ~0x20u;
          v24 = v11;
        }
      }
      a1 = (struct _RM_PROCESS_ID_HOST_METRICS_PAIR *)((char *)a1 + 16);
      v12 += 64;
      --v18;
    }
    while ( v18 );
  }
  RmpCopyMemUtilHostMetrics((struct _RM_ACTIVITY_HOST_METRICS *)v9, (struct _RM_ACTIVITY_HOST_METRICS *)v20);
}
