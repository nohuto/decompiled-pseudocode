/*
 * XREFs of ?ClearAllTelemetry@CTelemetryTracking@@AEAAXXZ @ 0x18011894C
 * Callers:
 *     ??1CPartitionVerticalBlankScheduler@@QEAA@XZ @ 0x180113D18 (--1CPartitionVerticalBlankScheduler@@QEAA@XZ.c)
 * Callees:
 *     ??_GCTelemetryTrackingInfo@CTelemetryTracking@@QEAAPEAXI@Z @ 0x1801188F8 (--_GCTelemetryTrackingInfo@CTelemetryTracking@@QEAAPEAXI@Z.c)
 */

void __fastcall CTelemetryTracking::ClearAllTelemetry(CTelemetryTracking *this)
{
  _QWORD **v2; // rcx
  CTelemetryTracking::CTelemetryTrackingInfo *v3; // rbx
  _BYTE *i; // rbx
  CTelemetryTracking::CTelemetryTrackingInfo *v5; // r10
  __int64 v6; // rcx
  _BYTE *j; // rbx
  CTelemetryTracking::CTelemetryTrackingInfo *v8; // rdx
  __int64 v9; // [rsp+90h] [rbp+20h]
  __int64 v10; // [rsp+90h] [rbp+20h]

  v2 = (_QWORD **)*((_QWORD *)this + 65);
  if ( !v2 || (v3 = (CTelemetryTracking::CTelemetryTrackingInfo *)*v2, ((unsigned __int8)*v2 & 1) != 0) )
  {
    for ( i = v2 + 1; ; i += 8 )
    {
      if ( (unsigned __int64)i >= *((_QWORD *)this + 65) + 8 * ((unsigned __int64)*((unsigned int *)this + 129) >> 5) )
      {
        v3 = 0LL;
        goto LABEL_25;
      }
      if ( (*i & 1) == 0 )
        break;
    }
    v3 = *(CTelemetryTracking::CTelemetryTrackingInfo **)i;
  }
LABEL_25:
  while ( v3 )
  {
    v5 = v3;
    v9 = *((_QWORD *)v3 + 1) & (-1LL << (*((_DWORD *)this + 129) & 0x1F));
    v6 = *((_QWORD *)this + 65)
       + 8LL
       * ((37
         * (BYTE6(v9)
          + 37
          * (BYTE5(v9)
           + 37
           * (BYTE4(v9) + 37 * (BYTE3(v9) + 37 * (BYTE2(v9) + 37 * (BYTE1(v9) + 37 * ((unsigned __int8)v9 + 11623883)))))))
         + HIBYTE(v9)) & (unsigned int)((*((_DWORD *)this + 129) >> 5) - 1));
    if ( (*(_QWORD *)v3 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v6 = *((_QWORD *)this + 65)
         + 8LL
         * ((37
           * (BYTE6(v9)
            + 37
            * (BYTE5(v9)
             + 37
             * (BYTE4(v9)
              + 37 * (BYTE3(v9) + 37 * (BYTE2(v9) + 37 * (BYTE1(v9) + 37 * ((unsigned __int8)v9 + 11623883)))))))
           + HIBYTE(v9)) & (unsigned int)((*((_DWORD *)this + 129) >> 5) - 1));
    v3 = *(CTelemetryTracking::CTelemetryTrackingInfo **)v3;
    if ( ((unsigned __int8)v3 & 1) != 0 )
    {
      for ( j = (_BYTE *)(v6 + 8); ; j += 8 )
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
    v10 = *((_QWORD *)v5 + 1) & (-1LL << (*((_DWORD *)this + 129) & 0x1F));
    v8 = (CTelemetryTracking::CTelemetryTrackingInfo *)(*((_QWORD *)this + 65)
                                                      + 8LL
                                                      * ((37
                                                        * (BYTE6(v10)
                                                         + 37
                                                         * (BYTE5(v10)
                                                          + 37
                                                          * (BYTE4(v10)
                                                           + 37
                                                           * (BYTE3(v10)
                                                            + 37
                                                            * (BYTE2(v10)
                                                             + 37
                                                             * (BYTE1(v10) + 37 * ((unsigned __int8)v10 + 11623883)))))))
                                                        + HIBYTE(v10)) & (unsigned int)((*((_DWORD *)this + 129) >> 5)
                                                                                      - 1)));
    if ( (*(_QWORD *)v5 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v8 = (CTelemetryTracking::CTelemetryTrackingInfo *)(*((_QWORD *)this + 65)
                                                        + 8LL
                                                        * ((37
                                                          * (BYTE6(v10)
                                                           + 37
                                                           * (BYTE5(v10)
                                                            + 37
                                                            * (BYTE4(v10)
                                                             + 37
                                                             * (BYTE3(v10)
                                                              + 37
                                                              * (BYTE2(v10)
                                                               + 37
                                                               * (BYTE1(v10) + 37 * ((unsigned __int8)v10 + 11623883)))))))
                                                          + HIBYTE(v10)) & (unsigned int)((*((_DWORD *)this + 129) >> 5)
                                                                                        - 1)));
    while ( (*(_QWORD *)v8 & 1) == 0 )
    {
      if ( *(CTelemetryTracking::CTelemetryTrackingInfo **)v8 == v5 )
      {
        *(_QWORD *)v8 = *(_QWORD *)v5;
        --*((_DWORD *)this + 128);
        *(_QWORD *)v5 |= 0x8000000000000002uLL;
        break;
      }
      v8 = *(CTelemetryTracking::CTelemetryTrackingInfo **)v8;
    }
    CTelemetryTracking::CTelemetryTrackingInfo::`scalar deleting destructor'(v5);
  }
}
