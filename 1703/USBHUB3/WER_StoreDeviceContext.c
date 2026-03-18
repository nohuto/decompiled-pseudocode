/*
 * XREFs of WER_StoreDeviceContext @ 0x1C0033638
 * Callers:
 *     WER_CreateReport @ 0x1C0033910 (WER_CreateReport.c)
 * Callees:
 *     TelemetryData_InsertTriageDataBlock @ 0x1C00344F0 (TelemetryData_InsertTriageDataBlock.c)
 */

__int64 __fastcall WER_StoreDeviceContext(__int64 a1, __int64 a2)
{
  int inserted; // r8d
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  unsigned __int8 *v22; // rdx
  unsigned __int8 *v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx

  inserted = TelemetryData_InsertTriageDataBlock(a1, a2, 2656LL);
  if ( inserted >= 0 )
  {
    v5 = *(_QWORD *)(a2 + 48);
    if ( !v5 )
      goto LABEL_7;
    inserted = TelemetryData_InsertTriageDataBlock(a1, v5, *(unsigned __int16 *)(v5 + 34) + 39LL);
    if ( inserted < 0 )
      return (unsigned int)inserted;
    v6 = *(_QWORD *)(a2 + 48);
    v7 = *(_QWORD *)(v6 + 16) - 8LL;
    if ( v6 == *(_QWORD *)(v6 + 16) - 16LL )
    {
LABEL_7:
      v8 = *(_QWORD *)(a2 + 56);
      if ( !v8 )
        goto LABEL_12;
      inserted = TelemetryData_InsertTriageDataBlock(a1, v8, *(unsigned __int16 *)(v8 + 34) + 39LL);
      if ( inserted < 0 )
        return (unsigned int)inserted;
      v9 = *(_QWORD *)(a2 + 56);
      v10 = *(_QWORD *)(v9 + 16) - 8LL;
      if ( v9 == *(_QWORD *)(v9 + 16) - 16LL )
      {
LABEL_12:
        v11 = *(_QWORD *)(a2 + 72);
        if ( !v11
          || (inserted = TelemetryData_InsertTriageDataBlock(
                           a1,
                           v11,
                           ((unsigned __int64)*(unsigned int *)(v11 + 24) << 6) + 40),
              inserted >= 0) )
        {
          v12 = *(_QWORD *)(a2 + 80);
          if ( !v12
            || (inserted = TelemetryData_InsertTriageDataBlock(
                             a1,
                             v12,
                             ((unsigned __int64)*(unsigned int *)(v12 + 24) << 6) + 40),
                inserted >= 0) )
          {
            v13 = *(_QWORD *)(a2 + 104);
            if ( !v13
              || (v14 = *(_DWORD *)(a2 + 112)) == 0
              || (inserted = TelemetryData_InsertTriageDataBlock(a1, v13, (unsigned int)(8 * v14)), inserted >= 0) )
            {
              v15 = *(_QWORD *)(a2 + 120);
              if ( !v15
                || (v16 = *(_DWORD *)(a2 + 128)) == 0
                || (inserted = TelemetryData_InsertTriageDataBlock(a1, v15, (unsigned int)(8 * v16)), inserted >= 0) )
              {
                v17 = *(_QWORD *)(a2 + 136);
                if ( !v17
                  || (v18 = *(_DWORD *)(a2 + 144)) == 0
                  || (inserted = TelemetryData_InsertTriageDataBlock(a1, v17, (unsigned int)(8 * v18)), inserted >= 0) )
                {
                  v19 = *(_QWORD *)(a2 + 248);
                  if ( !v19
                    || (inserted = TelemetryData_InsertTriageDataBlock(a1, v19, *(unsigned __int16 *)(v19 + 2)),
                        inserted >= 0) )
                  {
                    v20 = *(_QWORD *)(a2 + 408);
                    if ( !v20
                      || (inserted = TelemetryData_InsertTriageDataBlock(a1, v20, *(unsigned __int16 *)(v20 + 2)),
                          inserted >= 0) )
                    {
                      v21 = *(_QWORD *)(a2 + 2000);
                      if ( !v21
                        || (inserted = TelemetryData_InsertTriageDataBlock(a1, v21, *(unsigned __int16 *)(v21 + 2)),
                            inserted >= 0) )
                      {
                        v22 = *(unsigned __int8 **)(a2 + 2008);
                        if ( !v22 || (inserted = TelemetryData_InsertTriageDataBlock(a1, v22, *v22), inserted >= 0) )
                        {
                          v23 = *(unsigned __int8 **)(a2 + 2016);
                          if ( !v23 || (inserted = TelemetryData_InsertTriageDataBlock(a1, v23, *v23), inserted >= 0) )
                          {
                            v24 = *(_QWORD *)(a2 + 2040);
                            if ( !v24
                              || (inserted = TelemetryData_InsertTriageDataBlock(
                                               a1,
                                               v24,
                                               *(unsigned __int16 *)(v24 + 2)),
                                  inserted >= 0) )
                            {
                              v25 = *(_QWORD *)(a2 + 16);
                              if ( v25 )
                                return (unsigned int)TelemetryData_InsertTriageDataBlock(a1, v25, 448LL);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        while ( 1 )
        {
          inserted = TelemetryData_InsertTriageDataBlock(a1, v10, (unsigned int)((*(_DWORD *)(v10 + 24) << 6) + 40));
          if ( inserted < 0 )
            break;
          v10 = *(_QWORD *)(v10 + 8) - 8LL;
          if ( *(_QWORD *)(a2 + 56) == v10 - 8 )
            goto LABEL_12;
        }
      }
    }
    else
    {
      while ( 1 )
      {
        inserted = TelemetryData_InsertTriageDataBlock(a1, v7, (unsigned int)((*(_DWORD *)(v7 + 24) << 6) + 40));
        if ( inserted < 0 )
          break;
        v7 = *(_QWORD *)(v7 + 8) - 8LL;
        if ( *(_QWORD *)(a2 + 48) == v7 - 8 )
          goto LABEL_7;
      }
    }
  }
  return (unsigned int)inserted;
}
