/*
 * XREFs of StorpTelemetrySendUnitSmartAttributes @ 0x1C00415F8
 * Callers:
 *     StorpDeviceHealthWorkItemRoutine @ 0x1C003CBE0 (StorpDeviceHealthWorkItemRoutine.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     memset @ 0x1C001AD80 (memset.c)
 *     StorpTelemetryLogUnitSmartAttributesCriticalData @ 0x1C003F548 (StorpTelemetryLogUnitSmartAttributesCriticalData.c)
 *     StorpTelemetryLogUnitSmartAttributesMeasures @ 0x1C003F948 (StorpTelemetryLogUnitSmartAttributesMeasures.c)
 *     StorpTelemetrySmartCommand @ 0x1C0041C30 (StorpTelemetrySmartCommand.c)
 *     Template_qcccjqtqb @ 0x1C00425D8 (Template_qcccjqtqb.c)
 */

void __fastcall StorpTelemetrySendUnitSmartAttributes(__int64 a1)
{
  char *PoolWithTag; // rax
  __int64 v3; // rdx
  char *v4; // rsi
  __int64 v5; // rdx
  unsigned __int16 *v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  __int64 v23; // rcx
  int v24; // edx
  _QWORD v25[20]; // [rsp+68h] [rbp-A0h] BYREF

  memset(v25, 0, sizeof(v25));
  if ( KeGetCurrentIrql() )
    return;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x22CuLL, 0x65546152u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    return;
  HIDWORD(v25[6]) = -1;
  LOWORD(v25[6]) = -1;
  LOWORD(v25[7]) = -1;
  LOBYTE(v3) = -38;
  BYTE2(v25[7]) = -1;
  memset(&v25[8], 255, 96);
  if ( (int)StorpTelemetrySmartCommand(a1, v3, PoolWithTag) < 0
    || *(_DWORD *)v4 != 28
    || *((_DWORD *)v4 + 6) < 0x10u
    || *((_DWORD *)v4 + 7) < 8u )
  {
    goto LABEL_61;
  }
  *(_BYTE *)(a1 + 1705) = v4[47] == -12 && v4[48] == 44;
  LOBYTE(v5) = -48;
  if ( (int)StorpTelemetrySmartCommand(a1, v5, v4) < 0 )
    goto LABEL_61;
  if ( *(_DWORD *)v4 != 28 )
    goto LABEL_61;
  if ( *((_DWORD *)v4 + 6) < 0x10u )
    goto LABEL_61;
  v25[4] = v4 + 28;
  v25[5] = v4 + 44;
  if ( *((_DWORD *)v4 + 7) < 0x200u )
    goto LABEL_61;
  v6 = (unsigned __int16 *)(v4 + 55);
  v7 = 30LL;
  do
  {
    v8 = *((unsigned __int8 *)v6 - 9);
    if ( v8 > 0xC1 )
    {
      v16 = v8 - 194;
      if ( v16 )
      {
        v17 = v16 - 2;
        if ( v17 )
        {
          v18 = v17 - 1;
          if ( v18 )
          {
            v19 = v18 - 1;
            if ( v19 )
            {
              v20 = v19 - 3;
              if ( v20 )
              {
                v21 = v20 - 24;
                if ( !v21 )
                {
LABEL_44:
                  LOWORD(v25[7]) = *(v6 - 2);
                  goto LABEL_50;
                }
                v22 = v21 - 5;
                if ( v22 )
                {
                  if ( v22 == 3 )
                    v25[19] = *((unsigned __int8 *)v6 - 4) | ((*((unsigned __int8 *)v6 - 3) | ((*((unsigned __int8 *)v6
                                                                                                - 2) | ((*((unsigned __int8 *)v6 - 1) | ((unsigned __int64)*v6 << 8)) << 8)) << 8)) << 8);
                }
                else
                {
                  v25[18] = *((unsigned __int8 *)v6 - 4) | ((*((unsigned __int8 *)v6 - 3) | ((*((unsigned __int8 *)v6 - 2) | ((*((unsigned __int8 *)v6 - 1) | ((unsigned __int64)*v6 << 8)) << 8)) << 8)) << 8);
                }
              }
              else
              {
                v25[17] = *((unsigned __int8 *)v6 - 4) | ((*((unsigned __int8 *)v6 - 3) | ((*((unsigned __int8 *)v6 - 2) | ((*((unsigned __int8 *)v6 - 1) | ((unsigned __int64)*v6 << 8)) << 8)) << 8)) << 8);
              }
            }
            else
            {
              v25[16] = *((unsigned __int8 *)v6 - 4) | ((*((unsigned __int8 *)v6 - 3) | ((*((unsigned __int8 *)v6 - 2) | ((*((unsigned __int8 *)v6 - 1) | ((unsigned __int64)*v6 << 8)) << 8)) << 8)) << 8);
            }
          }
          else
          {
            v25[15] = *((unsigned __int8 *)v6 - 4) | ((*((unsigned __int8 *)v6 - 3) | ((*((unsigned __int8 *)v6 - 2) | ((*((unsigned __int8 *)v6 - 1) | ((unsigned __int64)*v6 << 8)) << 8)) << 8)) << 8);
          }
        }
        else
        {
          v25[14] = *((unsigned __int8 *)v6 - 4) | ((*((unsigned __int8 *)v6 - 3) | ((*((unsigned __int8 *)v6 - 2) | ((*((unsigned __int8 *)v6 - 1) | ((unsigned __int64)*v6 << 8)) << 8)) << 8)) << 8);
        }
      }
      else
      {
        BYTE2(v25[7]) = *((_BYTE *)v6 - 4);
      }
    }
    else
    {
      if ( v8 == 193 )
        goto LABEL_44;
      v9 = v8 - 4;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 4;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              v13 = v12 - 173;
              if ( v13 )
              {
                v14 = v13 - 1;
                if ( v14 )
                {
                  v15 = v14 - 3;
                  if ( v15 )
                  {
                    if ( v15 == 1 )
                      v25[13] = *((unsigned __int8 *)v6 - 4) | ((*((unsigned __int8 *)v6 - 3) | ((*((unsigned __int8 *)v6
                                                                                                  - 2) | ((*((unsigned __int8 *)v6 - 1) | ((unsigned __int64)*v6 << 8)) << 8)) << 8)) << 8);
                  }
                  else
                  {
                    v25[12] = *((unsigned __int8 *)v6 - 4) | ((*((unsigned __int8 *)v6 - 3) | ((*((unsigned __int8 *)v6
                                                                                                - 2) | ((*((unsigned __int8 *)v6 - 1) | ((unsigned __int64)*v6 << 8)) << 8)) << 8)) << 8);
                  }
                }
                else
                {
                  v25[11] = *((unsigned __int8 *)v6 - 4) | ((*((unsigned __int8 *)v6 - 3) | ((*((unsigned __int8 *)v6 - 2) | ((*((unsigned __int8 *)v6 - 1) | ((unsigned __int64)*v6 << 8)) << 8)) << 8)) << 8);
                }
              }
              else
              {
                v25[10] = *((unsigned __int8 *)v6 - 4) | ((*((unsigned __int8 *)v6 - 3) | ((*((unsigned __int8 *)v6 - 2) | ((*((unsigned __int8 *)v6 - 1) | ((unsigned __int64)*v6 << 8)) << 8)) << 8)) << 8);
              }
            }
            else
            {
              v25[9] = *((unsigned __int8 *)v6 - 4) | ((*((unsigned __int8 *)v6 - 3) | ((*((unsigned __int8 *)v6 - 2) | ((*((unsigned __int8 *)v6 - 1) | ((unsigned __int64)*v6 << 8)) << 8)) << 8)) << 8);
            }
          }
          else
          {
            HIDWORD(v25[6]) = *((_DWORD *)v6 - 1);
          }
        }
        else
        {
          v25[8] = *((unsigned __int8 *)v6 - 4) | ((*((unsigned __int8 *)v6 - 3) | ((*((unsigned __int8 *)v6 - 2) | ((*((unsigned __int8 *)v6 - 1) | ((unsigned __int64)*v6 << 8)) << 8)) << 8)) << 8);
        }
      }
      else
      {
        LOWORD(v25[6]) = *(v6 - 2);
      }
    }
LABEL_50:
    v6 += 6;
    --v7;
  }
  while ( v7 );
  v23 = *(_QWORD *)(a1 + 96);
  if ( v23 )
  {
    v25[0] = *(_QWORD *)(v23 + 8);
    *(_OWORD *)((char *)&v25[1] + 1) = *(_OWORD *)(v23 + 16);
  }
  if ( *(unsigned __int8 *)(a1 + 1704) < (unsigned int)g_StorpTraceLoggingCriticalEventMaximum
    && (*(_BYTE *)(a1 + 1705) || *(_BYTE *)(a1 + 1706) || (*(_BYTE *)(a1 + 154) & 2) != 0) )
  {
    StorpTelemetryLogUnitSmartAttributesCriticalData(a1);
  }
  else
  {
    StorpTelemetryLogUnitSmartAttributesMeasures((const struct _TlgProvider_t *)a1);
  }
  if ( (Microsoft_Windows_StorPortEnableBits & 0x100000000LL) != 0 )
    Template_qcccjqtqb(
      *(unsigned __int16 *)v25[5],
      v24,
      a1 + 1688,
      *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
      *(_BYTE *)(a1 + 88),
      *(_BYTE *)(a1 + 89),
      *(_BYTE *)(a1 + 90),
      a1 + 1688,
      *(_WORD *)v25[5],
      *(_BYTE *)(a1 + 1705));
LABEL_61:
  ExFreePoolWithTag(v4, 0x65546152u);
}
