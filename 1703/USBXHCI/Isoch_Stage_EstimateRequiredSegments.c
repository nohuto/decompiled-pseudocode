/*
 * XREFs of Isoch_Stage_EstimateRequiredSegments @ 0x1C0001370
 * Callers:
 *     Isoch_PrepareStage @ 0x1C000C2C0 (Isoch_PrepareStage.c)
 * Callees:
 *     WPP_RECORDER_SF_DDqDDD @ 0x1C0029BA0 (WPP_RECORDER_SF_DDqDDD.c)
 */

__int64 __fastcall Isoch_Stage_EstimateRequiredSegments(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  char v5; // r8
  __int64 v6; // rsi
  int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // ecx
  unsigned int v10; // r11d
  unsigned int v11; // ebx
  unsigned int v12; // r14d
  unsigned int v13; // ebx
  unsigned int v14; // eax
  unsigned int v15; // ebx
  __int64 v17; // rax
  bool v18; // zf
  char v19; // al
  __int64 v20; // rcx

  v2 = *(_QWORD *)(a1 + 56);
  v5 = 1;
  v6 = *(_QWORD *)(a1 + 40);
  v7 = (((unsigned __int64)*(unsigned int *)(v2 + 152) + 8190) >> 12) + 1;
  if ( (*(_QWORD *)(v6 + 232) & 0x800000000000LL) == 0
    || (v17 = *(_QWORD *)(a1 + 48), *(_DWORD *)(v17 + 20) != 1)
    || (v18 = *(_DWORD *)(v17 + 40) == 0, v19 = 1, v18) )
  {
    v19 = 0;
  }
  if ( !v19 )
    v7 = ((unsigned __int64)*(unsigned int *)(v2 + 152) + 8190) >> 12;
  v8 = v7 + 1;
  v9 = *(_DWORD *)(a1 + 188);
  v10 = v8 + 2;
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 64) + 40LL) >= *(_DWORD *)(a2 + 52) )
    v10 = v8;
  v11 = *(_DWORD *)(a1 + 188) - *(_DWORD *)(a1 + 184);
  *(_DWORD *)(a1 + 384) = v10;
  v12 = (*(_DWORD *)(a2 + 44) - *(_DWORD *)(a2 + 40) + 1) * v10;
  v13 = v11 - v11 % v10;
  if ( v12 <= v13 )
    v14 = 0;
  else
    v14 = (v12 + v9 - v9 % v10 - v13 - 1) / (v9 - v9 % v10);
  if ( (*(_QWORD *)(v6 + 232) & 0x800000000000LL) == 0
    || (v20 = *(_QWORD *)(a1 + 48), *(_DWORD *)(v20 + 20) != 1)
    || !*(_DWORD *)(v20 + 40) )
  {
    v5 = 0;
  }
  v15 = v14 + 1;
  if ( !v5 )
    v15 = v14;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_DDqDDD(
      *(_QWORD *)(v2 + 80),
      *(_DWORD *)(v2 + 144),
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      a1);
  return v15;
}
