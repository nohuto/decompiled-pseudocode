/*
 * XREFs of Isoch_Stage_Find @ 0x1C000D360
 * Callers:
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C000C090 (Isoch_ProcessTransferEventWithED1.c)
 * Callees:
 *     StageQueue_ForwardScanGetNextStage @ 0x1C0002AF8 (StageQueue_ForwardScanGetNextStage.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C0024A24 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_DDDDD @ 0x1C0025780 (WPP_RECORDER_SF_DDDDD.c)
 *     WPP_RECORDER_SF_DDq @ 0x1C0026F80 (WPP_RECORDER_SF_DDq.c)
 *     WPP_RECORDER_SF_DDqDD @ 0x1C00271A0 (WPP_RECORDER_SF_DDqDD.c)
 */

__int64 __fastcall Isoch_Stage_Find(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  __int64 *v4; // r14
  __int64 *v5; // rdi
  __int64 v9; // rbx
  int v10; // edx
  int v12; // edx
  __int64 NextStage; // rax
  int v14; // edx
  int v15; // edx
  PDEVICE_OBJECT v16; // rdx

  v3 = *(unsigned __int16 *)(a3 + 2);
  v4 = (__int64 *)(a1 + 336);
  v5 = *(__int64 **)(a1 + 336);
  v9 = 0LL;
  if ( (__int64 *)(a1 + 336) == v5 )
  {
LABEL_2:
    v10 = *(_WORD *)(a2 + 14) & 0x1F;
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_DDDD(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      v10,
      13,
      19,
      (__int64)&WPP_c87b452ab34c376f0ccab5d524638647_Traceguids,
      *(_BYTE *)(a2 + 15),
      *(_WORD *)(a2 + 14) & 0x1F,
      BYTE4(*(_QWORD *)a3),
      v3);
  }
  else
  {
    v16 = WPP_GLOBAL_Control;
    while ( 1 )
    {
      if ( LOWORD(v16->DeviceType) )
      {
        v15 = *(unsigned __int8 *)(a2 + 15);
        LOBYTE(v15) = 5;
        WPP_RECORDER_SF_DDq(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v15,
          *(_WORD *)(a2 + 14) & 0x1F,
          18,
          (__int64)&WPP_c87b452ab34c376f0ccab5d524638647_Traceguids,
          *(_BYTE *)(a2 + 15),
          *(_WORD *)(a2 + 14) & 0x1F,
          v5[3]);
        v16 = WPP_GLOBAL_Control;
      }
      if ( *(_DWORD *)(v5[4] + 128) == HIDWORD(*(_QWORD *)a3) )
        break;
      v5 = (__int64 *)*v5;
      if ( v4 == v5 )
        goto LABEL_2;
    }
    if ( LOWORD(v16->DeviceType) )
    {
      v12 = *(unsigned __int8 *)(a2 + 15);
      LOBYTE(v12) = 5;
      WPP_RECORDER_SF_DDDDD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v12,
        HIDWORD(*(_QWORD *)a3),
        20,
        (__int64)&WPP_c87b452ab34c376f0ccab5d524638647_Traceguids,
        *(_BYTE *)(a2 + 15),
        *(_BYTE *)(a2 + 14) & 0x1F,
        *(_DWORD *)(v5[4] + 128),
        BYTE4(*(_QWORD *)a3),
        v3);
    }
    *((_BYTE *)v5 + 117) = *((_BYTE *)v5 + 116);
    *((_BYTE *)v5 + 118) = *((_BYTE *)v5 + 114);
    do
    {
      NextStage = StageQueue_ForwardScanGetNextStage((unsigned __int8 *)v5 + 112);
      v9 = NextStage;
      if ( !NextStage )
      {
        WPP_RECORDER_SF_DDqDD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          *(unsigned __int8 *)(a2 + 15),
          *(_WORD *)(a2 + 14) & 0x1F,
          22,
          (__int64)&WPP_c87b452ab34c376f0ccab5d524638647_Traceguids,
          *(_BYTE *)(a2 + 15),
          *(_WORD *)(a2 + 14) & 0x1F,
          v5[3],
          BYTE4(*(_QWORD *)a3),
          v3);
        return 0LL;
      }
    }
    while ( v3 > *(_DWORD *)(NextStage + 44) );
    if ( !v3 || v3 > *(_DWORD *)(NextStage + 48) - 1 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v14) = 5;
        WPP_RECORDER_SF_DDDD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v14,
          13,
          21,
          (__int64)&WPP_c87b452ab34c376f0ccab5d524638647_Traceguids,
          *(_BYTE *)(a2 + 15),
          *(_BYTE *)(a2 + 14) & 0x1F,
          *(_DWORD *)(NextStage + 48),
          v3 + 1);
      }
      *((_DWORD *)v5 + 21) = v3 + 1;
      *(_DWORD *)(v9 + 48) = v3 + 1;
    }
  }
  return v9;
}
