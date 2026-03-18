/*
 * XREFs of Isoch_Stage_EstimateRequiredSegments @ 0x1C0003A38
 * Callers:
 *     Isoch_PrepareStage @ 0x1C000C4C4 (Isoch_PrepareStage.c)
 * Callees:
 *     WPP_RECORDER_SF_DDqDDD @ 0x1C002CC14 (WPP_RECORDER_SF_DDqDDD.c)
 */

__int64 __fastcall Isoch_Stage_EstimateRequiredSegments(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbp
  unsigned int v5; // r8d
  __int64 v6; // rax
  unsigned int v7; // ebx
  unsigned int v8; // ecx
  int v9; // r11d
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  __int64 v12; // rax

  v2 = *(_QWORD *)(a1 + 56);
  v3 = *(_QWORD *)(a1 + 40);
  v5 = (((unsigned __int64)*(unsigned int *)(v2 + 152) + 8190) >> 12) + 1;
  if ( (*(_QWORD *)(v3 + 232) & 0x800000000000LL) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 48);
    if ( *(_DWORD *)(v6 + 20) == 1 )
    {
      if ( *(_DWORD *)(v6 + 40) )
        v5 = (((unsigned __int64)*(unsigned int *)(v2 + 152) + 8190) >> 12) + 2;
    }
  }
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 64) + 40LL) < *(_DWORD *)(a2 + 52) )
    v5 += 2;
  v7 = *(_DWORD *)(a1 + 188);
  v8 = v7 - *(_DWORD *)(a1 + 184);
  *(_DWORD *)(a1 + 384) = v5;
  v9 = *(_DWORD *)(a2 + 44) - *(_DWORD *)(a2 + 40) + 1;
  v10 = v8 - v8 % v5;
  if ( v5 * v9 > v10 )
    v11 = (v5 * v9 + v7 - v7 % v5 - v10 - 1) / (v7 - v7 % v5);
  else
    v11 = 0;
  if ( (*(_QWORD *)(v3 + 232) & 0x800000000000LL) != 0 )
  {
    v12 = *(_QWORD *)(a1 + 48);
    if ( *(_DWORD *)(v12 + 20) == 1 )
    {
      if ( *(_DWORD *)(v12 + 40) )
        ++v11;
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_DDqDDD(*(_QWORD *)(v2 + 80), *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL), v5, a1);
  return v11;
}
