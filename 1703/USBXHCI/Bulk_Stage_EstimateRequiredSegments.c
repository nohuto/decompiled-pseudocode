/*
 * XREFs of Bulk_Stage_EstimateRequiredSegments @ 0x1C00024B0
 * Callers:
 *     Bulk_PrepareStage @ 0x1C000BE40 (Bulk_PrepareStage.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDDD @ 0x1C0025780 (WPP_RECORDER_SF_DDDDD.c)
 *     WPP_RECORDER_SF_DDDDDDD @ 0x1C002BF20 (WPP_RECORDER_SF_DDDDDDD.c)
 */

__int64 __fastcall Bulk_Stage_EstimateRequiredSegments(_DWORD *a1, int *a2)
{
  __int64 v4; // rsi
  int v5; // r9d
  unsigned int v6; // ebx
  PDEVICE_OBJECT v7; // r11
  unsigned int v8; // ecx
  unsigned int v9; // r10d
  unsigned int v10; // eax
  int v11; // ebx
  __int64 v12; // rcx
  int v13; // edx
  __int64 v14; // rax
  __int64 result; // rax

  v4 = *(_QWORD *)(*(_QWORD *)a1 + 40LL);
  if ( (*(_QWORD *)(*(_QWORD *)(v4 + 40) + 232LL) & 8) != 0 )
  {
    v11 = 1;
  }
  else
  {
    v5 = *(_DWORD *)(v4 + 184);
    v6 = *(_DWORD *)(v4 + 188) - v5 - (unsigned int)(*(_DWORD *)(v4 + 188) - v5) % a1[20];
    v7 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_DDDDDDD(
        *(_QWORD *)(*(_QWORD *)(v4 + 56) + 80LL),
        *(unsigned __int8 *)(*(_QWORD *)(v4 + 48) + 135LL),
        *(_DWORD *)(v4 + 188),
        v5);
      v7 = WPP_GLOBAL_Control;
    }
    v8 = a1[21];
    if ( v8 <= v6 )
    {
      v11 = 0;
    }
    else
    {
      v9 = *(_DWORD *)(v4 + 188) - *(_DWORD *)(v4 + 188) % a1[20];
      v10 = (v8 - v6 + v9 - 1) / v9;
      v11 = v10;
      if ( LOWORD(v7->DeviceType) )
      {
        v12 = *(_QWORD *)(v4 + 56);
        v13 = *(_DWORD *)(v12 + 144);
        LOBYTE(v13) = 5;
        WPP_RECORDER_SF_DDDDD(
          *(_QWORD *)(v12 + 80),
          v13,
          *(unsigned __int8 *)(*(_QWORD *)(v4 + 48) + 135LL),
          32,
          (__int64)&WPP_d7490787d28e3e661d2cad56214ea32b_Traceguids,
          *(_BYTE *)(*(_QWORD *)(v4 + 48) + 135LL),
          *(_DWORD *)(v12 + 144),
          *(_DWORD *)(v4 + 64),
          v9,
          v10);
      }
    }
  }
  v14 = *(_QWORD *)(v4 + 40);
  *a2 = v11;
  result = *(_QWORD *)(v14 + 232);
  if ( (result & 0x2000000000000LL) != 0 )
  {
    result = *(_QWORD *)(v4 + 48);
    if ( *(_DWORD *)(result + 20) == 3 )
    {
      result = *(_QWORD *)(v4 + 56);
      if ( *(_DWORD *)(result + 120) == 6 )
      {
        result = (unsigned int)(v11 + 1);
        *a2 = result;
      }
    }
  }
  return result;
}
