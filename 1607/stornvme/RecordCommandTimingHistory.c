/*
 * XREFs of RecordCommandTimingHistory @ 0x1C000EAEC
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1C0001F70 (NVMeCompletionDpcRoutine.c)
 * Callees:
 *     GetSrbDataBuffer @ 0x1C0001F4C (GetSrbDataBuffer.c)
 *     GetSrbExtension @ 0x1C0004794 (GetSrbExtension.c)
 *     CalculateTimeDurationIn100ns @ 0x1C000C7F0 (CalculateTimeDurationIn100ns.c)
 */

_UNKNOWN **__fastcall RecordCommandTimingHistory(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  _UNKNOWN **result; // rax
  unsigned int v5; // r11d
  _QWORD *v7; // rbx
  __int64 v8; // r10
  __int64 v9; // r11
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  int v12; // eax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  int v15; // eax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  int v18; // eax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  int v21; // eax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  int v24; // eax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  int v27; // eax
  unsigned __int64 v28; // rcx
  __int64 v29; // r10
  __int64 v30; // r11
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF
  _DWORD *v32; // [rsp+30h] [rbp+8h] BYREF

  result = &retaddr;
  v32 = 0LL;
  v5 = *(_DWORD *)(a1 + 3248);
  if ( v5 )
  {
    if ( *(_QWORD *)(a1 + 3256) )
    {
      *(_DWORD *)(a1 + 3252) = *(_DWORD *)(a1 + 3252) + 1 < v5 ? *(_DWORD *)(a1 + 3252) + 1 : 0;
      result = (_UNKNOWN **)GetSrbExtension(a2);
      v7 = result;
      if ( result[520] )
      {
        GetSrbDataBuffer(a2, &v32);
        *(_DWORD *)(v8 + 8 * v9) = *v32;
        v10 = v7[521];
        v11 = v7[520];
        if ( v10 < v11 )
        {
          *(_DWORD *)(v8 + 8 * v9 + 4) = 195935983;
        }
        else
        {
          v12 = CalculateTimeDurationIn100ns(v10 - v11, a3);
          *(_DWORD *)(v8 + 8 * v9 + 4) = v12;
        }
        v13 = v7[522];
        if ( v13 )
        {
          v14 = v7[521];
          if ( v13 < v14 )
            v15 = v14 - v13 > 0x100 ? 0xBADBEEF : 0;
          else
            v15 = CalculateTimeDurationIn100ns(v13 - v14, a3);
          *(_DWORD *)(v8 + 8 * v9 + 8) = v15;
          v16 = v7[522];
          v17 = v7[520];
          if ( v16 < v17 )
          {
            *(_DWORD *)(v8 + 8 * v9 + 12) = 195935983;
          }
          else
          {
            v18 = CalculateTimeDurationIn100ns(v16 - v17, a3);
            *(_DWORD *)(v8 + 8 * v9 + 12) = v18;
          }
          v19 = v7[523];
          v20 = v7[522];
          if ( v19 < v20 )
          {
            v21 = v20 - v19 > 0x100 ? 0xBADBEEF : 0;
LABEL_24:
            *(_DWORD *)(v8 + 8 * v9 + 16) = v21;
            goto LABEL_26;
          }
        }
        else
        {
          v22 = v7[523];
          v23 = v7[521];
          if ( v22 < v23 )
          {
            *(_DWORD *)(v8 + 8 * v9 + 8) = 195935983;
          }
          else
          {
            v24 = CalculateTimeDurationIn100ns(v22 - v23, a3);
            *(_DWORD *)(v8 + 8 * v9 + 8) = v24;
          }
          v25 = v7[523];
          v26 = v7[520];
          if ( v25 < v26 )
          {
            *(_DWORD *)(v8 + 8 * v9 + 12) = 195935983;
          }
          else
          {
            v27 = CalculateTimeDurationIn100ns(v25 - v26, a3);
            *(_DWORD *)(v8 + 8 * v9 + 12) = v27;
          }
          v19 = v7[523];
          v20 = v7[521];
          if ( v19 < v20 )
          {
            *(_DWORD *)(v8 + 8 * v9 + 16) = 195935983;
LABEL_26:
            v28 = v7[524];
            result = (_UNKNOWN **)v7[523];
            if ( v28 < (unsigned __int64)result )
            {
              *(_DWORD *)(v8 + 8 * v9 + 20) = 195935983;
            }
            else
            {
              result = (_UNKNOWN **)CalculateTimeDurationIn100ns(v28 - (_QWORD)result, a3);
              *(_DWORD *)(v29 + 8 * v30 + 20) = (_DWORD)result;
            }
            return result;
          }
        }
        v21 = CalculateTimeDurationIn100ns(v19 - v20, a3);
        goto LABEL_24;
      }
    }
  }
  return result;
}
