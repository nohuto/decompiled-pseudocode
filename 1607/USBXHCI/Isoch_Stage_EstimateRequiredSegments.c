/*
 * XREFs of Isoch_Stage_EstimateRequiredSegments @ 0x1C0001350
 * Callers:
 *     Isoch_PrepareStage @ 0x1C000B4B0 (Isoch_PrepareStage.c)
 * Callees:
 *     WPP_RECORDER_SF_DDqDDD @ 0x1C002D164 (WPP_RECORDER_SF_DDqDDD.c)
 */

__int64 __fastcall Isoch_Stage_EstimateRequiredSegments(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbp
  unsigned int v5; // r8d
  unsigned int v6; // ebx
  unsigned int v7; // ecx
  int v8; // r11d
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  __int64 v12; // rax
  __int64 v13; // rax

  v2 = *(_QWORD *)(a1 + 56);
  v3 = *(_QWORD *)(a1 + 40);
  v5 = (((unsigned __int64)*(unsigned int *)(v2 + 152) + 8190) >> 12) + 1;
  if ( (*(_QWORD *)(v3 + 232) & 0x800000000000LL) != 0 )
  {
    v12 = *(_QWORD *)(a1 + 48);
    if ( *(_DWORD *)(v12 + 20) == 1 )
    {
      if ( *(_DWORD *)(v12 + 40) )
        v5 = (((unsigned __int64)*(unsigned int *)(v2 + 152) + 8190) >> 12) + 2;
    }
  }
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 64) + 40LL) < *(_DWORD *)(a2 + 52) )
    v5 += 2;
  v6 = *(_DWORD *)(a1 + 188);
  v7 = v6 - *(_DWORD *)(a1 + 184);
  *(_DWORD *)(a1 + 384) = v5;
  v8 = *(_DWORD *)(a2 + 44) - *(_DWORD *)(a2 + 40) + 1;
  v9 = v7 - v7 % v5;
  if ( v5 * v8 <= v9 )
    v10 = 0;
  else
    v10 = (v5 * v8 + v6 - v6 % v5 - v9 - 1) / (v6 - v6 % v5);
  if ( (*(_QWORD *)(v3 + 232) & 0x800000000000LL) != 0 )
  {
    v13 = *(_QWORD *)(a1 + 48);
    if ( *(_DWORD *)(v13 + 20) == 1 )
    {
      if ( *(_DWORD *)(v13 + 40) )
        ++v10;
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_DDqDDD(*(_QWORD *)(v2 + 80), *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL), v5, a1);
  return v10;
}
