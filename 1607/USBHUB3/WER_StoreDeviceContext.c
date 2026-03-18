/*
 * XREFs of WER_StoreDeviceContext @ 0x1C0030848
 * Callers:
 *     WER_CreateReport @ 0x1C0030B20 (WER_CreateReport.c)
 * Callees:
 *     TelemetryData_InsertTriageDataBlock @ 0x1C00316D8 (TelemetryData_InsertTriageDataBlock.c)
 */

__int64 __fastcall WER_StoreDeviceContext(__int64 a1, __int64 a2)
{
  int inserted; // r8d
  __int64 v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rsi
  __int64 v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  unsigned __int8 *v24; // rdx
  unsigned __int8 *v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rdx

  inserted = TelemetryData_InsertTriageDataBlock(a1, a2, 2656LL);
  if ( inserted >= 0 )
  {
    v5 = *(_QWORD *)(a2 + 48);
    if ( v5 )
    {
      inserted = TelemetryData_InsertTriageDataBlock(a1, v5, *(unsigned __int16 *)(v5 + 34) + 39LL);
      if ( inserted < 0 )
        return (unsigned int)inserted;
      v6 = (_QWORD *)(*(_QWORD *)(a2 + 48) + 16LL);
      v7 = *v6 - 8LL;
      while ( 1 )
      {
        v8 = (_QWORD *)(v7 + 8);
        if ( v6 == (_QWORD *)(v7 + 8) )
          break;
        inserted = TelemetryData_InsertTriageDataBlock(a1, v7, (unsigned int)((*(_DWORD *)(v7 + 24) << 6) + 40));
        if ( inserted < 0 )
          return (unsigned int)inserted;
        v7 = *v8 - 8LL;
        v6 = (_QWORD *)(*(_QWORD *)(a2 + 48) + 16LL);
      }
    }
    v9 = *(_QWORD *)(a2 + 56);
    if ( v9 )
    {
      inserted = TelemetryData_InsertTriageDataBlock(a1, v9, *(unsigned __int16 *)(v9 + 34) + 39LL);
      if ( inserted < 0 )
        return (unsigned int)inserted;
      v10 = (_QWORD *)(*(_QWORD *)(a2 + 56) + 16LL);
      v11 = *v10 - 8LL;
      while ( 1 )
      {
        v12 = (_QWORD *)(v11 + 8);
        if ( v10 == (_QWORD *)(v11 + 8) )
          break;
        inserted = TelemetryData_InsertTriageDataBlock(a1, v11, (unsigned int)((*(_DWORD *)(v11 + 24) << 6) + 40));
        if ( inserted < 0 )
          return (unsigned int)inserted;
        v11 = *v12 - 8LL;
        v10 = (_QWORD *)(*(_QWORD *)(a2 + 56) + 16LL);
      }
    }
    v13 = *(_QWORD *)(a2 + 72);
    if ( !v13
      || (inserted = TelemetryData_InsertTriageDataBlock(
                       a1,
                       v13,
                       ((unsigned __int64)*(unsigned int *)(v13 + 24) << 6) + 40),
          inserted >= 0) )
    {
      v14 = *(_QWORD *)(a2 + 80);
      if ( !v14
        || (inserted = TelemetryData_InsertTriageDataBlock(
                         a1,
                         v14,
                         ((unsigned __int64)*(unsigned int *)(v14 + 24) << 6) + 40),
            inserted >= 0) )
      {
        v15 = *(_QWORD *)(a2 + 104);
        if ( !v15
          || (v16 = *(_DWORD *)(a2 + 112)) == 0
          || (inserted = TelemetryData_InsertTriageDataBlock(a1, v15, (unsigned int)(8 * v16)), inserted >= 0) )
        {
          v17 = *(_QWORD *)(a2 + 120);
          if ( !v17
            || (v18 = *(_DWORD *)(a2 + 128)) == 0
            || (inserted = TelemetryData_InsertTriageDataBlock(a1, v17, (unsigned int)(8 * v18)), inserted >= 0) )
          {
            v19 = *(_QWORD *)(a2 + 136);
            if ( !v19
              || (v20 = *(_DWORD *)(a2 + 144)) == 0
              || (inserted = TelemetryData_InsertTriageDataBlock(a1, v19, (unsigned int)(8 * v20)), inserted >= 0) )
            {
              v21 = *(_QWORD *)(a2 + 248);
              if ( !v21
                || (inserted = TelemetryData_InsertTriageDataBlock(a1, v21, *(unsigned __int16 *)(v21 + 2)),
                    inserted >= 0) )
              {
                v22 = *(_QWORD *)(a2 + 408);
                if ( !v22
                  || (inserted = TelemetryData_InsertTriageDataBlock(a1, v22, *(unsigned __int16 *)(v22 + 2)),
                      inserted >= 0) )
                {
                  v23 = *(_QWORD *)(a2 + 2000);
                  if ( !v23
                    || (inserted = TelemetryData_InsertTriageDataBlock(a1, v23, *(unsigned __int16 *)(v23 + 2)),
                        inserted >= 0) )
                  {
                    v24 = *(unsigned __int8 **)(a2 + 2008);
                    if ( !v24 || (inserted = TelemetryData_InsertTriageDataBlock(a1, v24, *v24), inserted >= 0) )
                    {
                      v25 = *(unsigned __int8 **)(a2 + 2016);
                      if ( !v25 || (inserted = TelemetryData_InsertTriageDataBlock(a1, v25, *v25), inserted >= 0) )
                      {
                        v26 = *(_QWORD *)(a2 + 2040);
                        if ( !v26
                          || (inserted = TelemetryData_InsertTriageDataBlock(a1, v26, *(unsigned __int16 *)(v26 + 2)),
                              inserted >= 0) )
                        {
                          v27 = *(_QWORD *)(a2 + 16);
                          if ( v27 )
                            return (unsigned int)TelemetryData_InsertTriageDataBlock(a1, v27, 400LL);
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
  return (unsigned int)inserted;
}
