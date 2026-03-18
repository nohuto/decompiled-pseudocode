/*
 * XREFs of Bulk_Stage_EstimateRequiredSegments @ 0x1C002BC60
 * Callers:
 *     Bulk_PrepareStage @ 0x1C002A83C (Bulk_PrepareStage.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDDD @ 0x1C0020C3C (WPP_RECORDER_SF_DDDDD.c)
 *     WPP_RECORDER_SF_DDDDDDD @ 0x1C002D69C (WPP_RECORDER_SF_DDDDDDD.c)
 */

__int64 __fastcall Bulk_Stage_EstimateRequiredSegments(_DWORD *a1, int *a2)
{
  __int64 v4; // rbx
  int v5; // edi
  unsigned int v6; // edi
  PDEVICE_OBJECT v7; // r8
  unsigned int v8; // ecx
  unsigned int v9; // r10d
  unsigned int v10; // eax
  __int64 v11; // rax
  __int64 result; // rax

  v4 = *(_QWORD *)(*(_QWORD *)a1 + 40LL);
  if ( (*(_QWORD *)(*(_QWORD *)(v4 + 40) + 232LL) & 8) != 0 )
  {
    v5 = 1;
  }
  else
  {
    v6 = *(_DWORD *)(v4 + 188)
       - *(_DWORD *)(v4 + 184)
       - (unsigned int)(*(_DWORD *)(v4 + 188) - *(_DWORD *)(v4 + 184)) % a1[20];
    v7 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_DDDDDDD(
        *(_QWORD *)(*(_QWORD *)(v4 + 56) + 80LL),
        *(unsigned __int8 *)(*(_QWORD *)(v4 + 48) + 135LL),
        (_DWORD)WPP_GLOBAL_Control,
        *(_DWORD *)(v4 + 188));
      v7 = WPP_GLOBAL_Control;
    }
    v8 = a1[21];
    if ( v8 > v6 )
    {
      v9 = *(_DWORD *)(v4 + 188) - *(_DWORD *)(v4 + 188) % a1[20];
      v10 = (v8 - v6 + v9 - 1) / v9;
      v5 = v10;
      if ( LOWORD(v7->DeviceType) )
        WPP_RECORDER_SF_DDDDD(
          *(_QWORD *)(*(_QWORD *)(v4 + 56) + 80LL),
          5u,
          *(unsigned __int8 *)(*(_QWORD *)(v4 + 48) + 135LL),
          0x20u,
          (__int64)&WPP_3b622249e4c15df141300e65bf8740b4_Traceguids,
          *(unsigned __int8 *)(*(_QWORD *)(v4 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(v4 + 56) + 144LL),
          *(_DWORD *)(v4 + 64),
          *(_DWORD *)(v4 + 188) - *(_DWORD *)(v4 + 188) % a1[20],
          v10);
    }
    else
    {
      v5 = 0;
    }
  }
  v11 = *(_QWORD *)(v4 + 40);
  *a2 = v5;
  result = *(_QWORD *)(v11 + 232);
  if ( (result & 0x2000000000000LL) != 0 )
  {
    result = *(_QWORD *)(v4 + 48);
    if ( *(_DWORD *)(result + 20) == 3 )
    {
      result = *(_QWORD *)(v4 + 56);
      if ( *(_DWORD *)(result + 120) == 6 )
      {
        result = (unsigned int)(v5 + 1);
        *a2 = result;
      }
    }
  }
  return result;
}
