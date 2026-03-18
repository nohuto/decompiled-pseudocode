/*
 * XREFs of ?SendTelemetry@CTelemetryTracking@@AEAAXXZ @ 0x180119060
 * Callers:
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x180045FB0 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180117900 (_TlgCreateWsz.c)
 *     ??_GCTelemetryTrackingInfo@CTelemetryTracking@@QEAAPEAXI@Z @ 0x1801188F8 (--_GCTelemetryTrackingInfo@CTelemetryTracking@@QEAAPEAXI@Z.c)
 */

void __fastcall CTelemetryTracking::SendTelemetry(CTelemetryTracking *this)
{
  _QWORD *v1; // rdx
  CTelemetryTracking::CTelemetryTrackingInfo *v3; // rbx
  _BYTE *i; // rbx
  CTelemetryTracking::CTelemetryTrackingInfo *v5; // rdi
  _BYTE *j; // rbx
  char v7; // al
  const WCHAR *v8; // rdx
  const WCHAR *v9; // rdx
  LPCGUID v10; // r8
  LPCGUID v11; // r9
  CTelemetryTracking::CTelemetryTrackingInfo *v12; // rdx
  __int64 v13; // [rsp+38h] [rbp-D0h]
  __int64 v14; // [rsp+38h] [rbp-D0h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A8h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD *v18; // [rsp+C8h] [rbp-40h]
  __int64 v19; // [rsp+D0h] [rbp-38h]
  char *v20; // [rsp+D8h] [rbp-30h]
  __int64 v21; // [rsp+E0h] [rbp-28h]
  _QWORD *v22; // [rsp+E8h] [rbp-20h]
  __int64 v23; // [rsp+F0h] [rbp-18h]
  char *v24; // [rsp+F8h] [rbp-10h]
  __int64 v25; // [rsp+100h] [rbp-8h]
  _QWORD *v26; // [rsp+108h] [rbp+0h]
  __int64 v27; // [rsp+110h] [rbp+8h]
  char *v28; // [rsp+118h] [rbp+10h]
  __int64 v29; // [rsp+120h] [rbp+18h]

  v1 = (_QWORD *)*((_QWORD *)this + 65);
  if ( !v1 || (v3 = (CTelemetryTracking::CTelemetryTrackingInfo *)*v1, (*v1 & 1) != 0) )
  {
    for ( i = v1 + 1; ; i += 8 )
    {
      if ( (unsigned __int64)i >= *((_QWORD *)this + 65) + 8 * ((unsigned __int64)*((unsigned int *)this + 129) >> 5) )
      {
        v3 = 0LL;
        goto LABEL_8;
      }
      if ( (*i & 1) == 0 )
        break;
    }
    v3 = *(CTelemetryTracking::CTelemetryTrackingInfo **)i;
  }
LABEL_8:
  while ( v3 )
  {
    v5 = v3;
    v13 = *((_QWORD *)v3 + 1) & (-1LL << (*((_DWORD *)this + 129) & 0x1F));
    v3 = *(CTelemetryTracking::CTelemetryTrackingInfo **)v3;
    if ( ((unsigned __int8)v3 & 1) != 0 )
    {
      for ( j = (_BYTE *)(*((_QWORD *)this + 65)
                        + 8LL
                        * ((37
                          * (BYTE6(v13)
                           + 37
                           * (BYTE5(v13)
                            + 37
                            * (BYTE4(v13)
                             + 37
                             * (BYTE3(v13)
                              + 37 * (BYTE2(v13) + 37 * (BYTE1(v13) + 37 * ((unsigned __int8)v13 + 11623883)))))))
                          + HIBYTE(v13)) & (unsigned int)((*((_DWORD *)this + 129) >> 5) - 1))
                        + 8); ; j += 8 )
      {
        if ( (unsigned __int64)j >= *((_QWORD *)this + 65) + 8 * ((unsigned __int64)*((unsigned int *)this + 129) >> 5) )
        {
          v3 = 0LL;
          goto LABEL_17;
        }
        if ( (*j & 1) == 0 )
          break;
      }
      v3 = *(CTelemetryTracking::CTelemetryTrackingInfo **)j;
    }
LABEL_17:
    if ( hProvider > 5u )
    {
      if ( (qword_1801EA750 & 0x400000000000LL) == 0
        || (v7 = 1, (qword_1801EA758 & 0x400000000000LL) != qword_1801EA758) )
      {
        v7 = 0;
      }
      if ( v7 )
      {
        v8 = (const WCHAR *)&unk_1801ADA80;
        if ( *((_QWORD *)v5 + 2) )
          v8 = (const WCHAR *)*((_QWORD *)v5 + 2);
        TlgCreateWsz(&pDesc, v8);
        v9 = (const WCHAR *)&unk_1801ADA80;
        if ( *((_QWORD *)v5 + 3) )
          v9 = (const WCHAR *)*((_QWORD *)v5 + 3);
        TlgCreateWsz(&v17, v9);
        v19 = 4LL;
        v20 = (char *)v5 + 44;
        v18 = (_QWORD *)((char *)v5 + 40);
        v22 = (_QWORD *)((char *)v5 + 48);
        v24 = (char *)v5 + 52;
        v26 = (_QWORD *)((char *)v5 + 56);
        v28 = (char *)v5 + 60;
        v21 = 4LL;
        v23 = 4LL;
        v25 = 4LL;
        v27 = 4LL;
        v29 = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801C3913, v10, v11, 0xAu, &pData);
      }
    }
    v14 = *((_QWORD *)v5 + 1) & (-1LL << (*((_DWORD *)this + 129) & 0x1F));
    v12 = (CTelemetryTracking::CTelemetryTrackingInfo *)(*((_QWORD *)this + 65)
                                                       + 8LL
                                                       * ((37
                                                         * (BYTE6(v14)
                                                          + 37
                                                          * (BYTE5(v14)
                                                           + 37
                                                           * (BYTE4(v14)
                                                            + 37
                                                            * (BYTE3(v14)
                                                             + 37
                                                             * (BYTE2(v14)
                                                              + 37
                                                              * (BYTE1(v14) + 37 * ((unsigned __int8)v14 + 11623883)))))))
                                                         + HIBYTE(v14)) & (unsigned int)((*((_DWORD *)this + 129) >> 5)
                                                                                       - 1)));
    if ( (*(_QWORD *)v5 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v12 = (CTelemetryTracking::CTelemetryTrackingInfo *)(*((_QWORD *)this + 65)
                                                         + 8LL
                                                         * ((37
                                                           * (BYTE6(v14)
                                                            + 37
                                                            * (BYTE5(v14)
                                                             + 37
                                                             * (BYTE4(v14)
                                                              + 37
                                                              * (BYTE3(v14)
                                                               + 37
                                                               * (BYTE2(v14)
                                                                + 37
                                                                * (BYTE1(v14) + 37 * ((unsigned __int8)v14 + 11623883)))))))
                                                           + HIBYTE(v14)) & (unsigned int)((*((_DWORD *)this + 129) >> 5)
                                                                                         - 1)));
    while ( (*(_QWORD *)v12 & 1) == 0 )
    {
      if ( *(CTelemetryTracking::CTelemetryTrackingInfo **)v12 == v5 )
      {
        *(_QWORD *)v12 = *(_QWORD *)v5;
        --*((_DWORD *)this + 128);
        *(_QWORD *)v5 |= 0x8000000000000002uLL;
        break;
      }
      v12 = *(CTelemetryTracking::CTelemetryTrackingInfo **)v12;
    }
    CTelemetryTracking::CTelemetryTrackingInfo::`scalar deleting destructor'(v5);
  }
}
