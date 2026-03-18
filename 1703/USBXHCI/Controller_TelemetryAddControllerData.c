/*
 * XREFs of Controller_TelemetryAddControllerData @ 0x1C0053A10
 * Callers:
 *     Controller_TelemetryReport @ 0x1C001BAB4 (Controller_TelemetryReport.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00105E0 (__security_check_cookie.c)
 *     TelemetryData_InsertTriageDataBlock @ 0x1C0038524 (TelemetryData_InsertTriageDataBlock.c)
 */

__int64 __fastcall Controller_TelemetryAddControllerData(_QWORD *a1, __int64 *a2)
{
  __int64 result; // rax
  const void *v5; // rdx
  const void *v6; // rdx
  const void *v7; // rdx
  const void *v8; // rdx
  const void *v9; // rdx
  const void *v10; // rdx
  const void *v11; // rdx
  const void *v12; // rdx
  unsigned int v13; // [rsp+30h] [rbp-38h] BYREF
  const void *v14; // [rsp+38h] [rbp-30h] BYREF
  _BYTE v15[16]; // [rsp+40h] [rbp-28h] BYREF

  if ( !a1 || (result = TelemetryData_InsertTriageDataBlock(a2, a1, 0x1A8u), (int)result >= 0) )
  {
    result = imp_WppRecorderLogDumpLiveData(WPP_GLOBAL_Control, a1[8], &v14, &v13, v15);
    if ( (int)result >= 0 )
    {
      if ( !v14 || (result = TelemetryData_InsertTriageDataBlock(a2, v14, v13), (int)result >= 0) )
      {
        v5 = (const void *)a1[10];
        if ( !v5 || (result = TelemetryData_InsertTriageDataBlock(a2, v5, 0x78u), (int)result >= 0) )
        {
          v6 = (const void *)a1[11];
          if ( !v6 || (result = TelemetryData_InsertTriageDataBlock(a2, v6, 0x108u), (int)result >= 0) )
          {
            v7 = (const void *)a1[12];
            if ( !v7 || (result = TelemetryData_InsertTriageDataBlock(a2, v7, 0x40u), (int)result >= 0) )
            {
              v8 = (const void *)a1[13];
              if ( !v8 || (result = TelemetryData_InsertTriageDataBlock(a2, v8, 0x40u), (int)result >= 0) )
              {
                result = a1[13];
                if ( !result
                  || (v9 = *(const void **)(result + 32)) == 0LL
                  || (result = TelemetryData_InsertTriageDataBlock(a2, v9, 8 * *(_DWORD *)(result + 16) + 8),
                      (int)result >= 0) )
                {
                  v10 = (const void *)a1[14];
                  if ( !v10 || (result = TelemetryData_InsertTriageDataBlock(a2, v10, 0x98u), (int)result >= 0) )
                  {
                    v11 = (const void *)a1[15];
                    if ( !v11 || (result = TelemetryData_InsertTriageDataBlock(a2, v11, 0x40u), (int)result >= 0) )
                    {
                      v12 = (const void *)a1[16];
                      if ( v12 )
                        return TelemetryData_InsertTriageDataBlock(a2, v12, 0x18u);
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
  return result;
}
