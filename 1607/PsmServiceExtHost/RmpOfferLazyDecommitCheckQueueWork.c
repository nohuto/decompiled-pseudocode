/*
 * XREFs of RmpOfferLazyDecommitCheckQueueWork @ 0x1800346F4
 * Callers:
 *     ?RmpMemoryMonitorCheckQueueDecommitRepurposedMemory@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18003270C (-RmpMemoryMonitorCheckQueueDecommitRepurposedMemory@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     RmpObjectAddRef @ 0x180006058 (RmpObjectAddRef.c)
 *     RmpPolicyPopulateActivityHostMetrics @ 0x180007510 (RmpPolicyPopulateActivityHostMetrics.c)
 *     RmpSystemMemoryMetricsQuery @ 0x180015250 (RmpSystemMemoryMetricsQuery.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 */

__int64 __fastcall RmpOfferLazyDecommitCheckQueueWork(__int64 a1)
{
  unsigned int v2; // edi
  int v3; // r14d
  unsigned int v4; // esi
  unsigned __int64 v5; // r12
  const struct _TlgProvider_t *v6; // rcx
  _QWORD *v7; // rbp
  __int64 v8; // rdx
  _QWORD *v9; // rax
  const struct _TlgProvider_t *v10; // rcx
  const GUID *v11; // r8
  const GUID *v12; // r9
  __int64 v14; // [rsp+30h] [rbp-B8h] BYREF
  unsigned __int64 v15[10]; // [rsp+40h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-58h] BYREF

  if ( (*(_BYTE *)(a1 + 256) & 1) != 0 )
  {
    return (unsigned int)-1073740682;
  }
  else
  {
    RtlQueryUnbiasedInterruptTime(&v14);
    if ( v14 - *(_QWORD *)(a1 + 264) > 10000 * (unsigned __int64)*(unsigned int *)(a1 + 272) )
    {
      if ( (*(_BYTE *)(a1 + 3340) & 2) != 0 )
      {
        return (unsigned int)-1073741058;
      }
      else
      {
        v2 = 0;
        RmpPolicyPopulateActivityHostMetrics(a1, 0, a1 + 1784, 0x40u, 0LL, 0LL);
        RmpSystemMemoryMetricsQuery(v15);
        v3 = 0;
        v4 = 0;
        v5 = v15[0] * *(unsigned int *)(a1 + 280) / 0x64 / RmpPageSize;
        if ( !*(_DWORD *)(a1 + 1820) )
          return (unsigned int)-1073740704;
        do
        {
          v6 = (const struct _TlgProvider_t *)(*(_QWORD *)(a1 + 1784) + ((unsigned __int64)v4 << 6));
          if ( *((_QWORD *)v6 + 5) >= (unsigned __int64)*(unsigned int *)(a1 + 276) )
          {
            v7 = (_QWORD *)*((_QWORD *)v6 + 6);
            if ( v15[7] - v7[98] >= v5 )
            {
              ++v3;
              RmpObjectAddRef(*((_QWORD *)v6 + 6));
              v6 = (const struct _TlgProvider_t *)(a1 + 240);
              v8 = *(_QWORD *)(a1 + 240);
              v9 = v7 + 107;
              if ( *(_QWORD *)(v8 + 8) != a1 + 240 )
                __fastfail(3u);
              *v9 = v8;
              v7[108] = v6;
              *(_QWORD *)(v8 + 8) = v9;
              *(_QWORD *)v6 = v9;
            }
          }
          ++v4;
        }
        while ( v4 < *(_DWORD *)(a1 + 1820) );
        if ( v3 )
        {
          if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v6, 9uLL) )
            TlgWrite(v10, &unk_1800421A7, v11, v12, 2u, &pData);
          TpPostWork(*(_QWORD *)(a1 + 232));
          *(_DWORD *)(a1 + 256) |= 1u;
        }
        else
        {
          return (unsigned int)-1073740704;
        }
      }
    }
    else
    {
      return (unsigned int)-1073741199;
    }
  }
  return v2;
}
