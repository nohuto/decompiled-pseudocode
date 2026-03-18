/*
 * XREFs of Isoch_Stage_Find @ 0x1C000D420
 * Callers:
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C000C1D4 (Isoch_ProcessTransferEventWithED1.c)
 * Callees:
 *     StageQueue_ForwardScanGetNextStage @ 0x1C00017A0 (StageQueue_ForwardScanGetNextStage.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C0027E34 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_DDDDD @ 0x1C0028AEC (WPP_RECORDER_SF_DDDDD.c)
 *     WPP_RECORDER_SF_DDq @ 0x1C002A330 (WPP_RECORDER_SF_DDq.c)
 *     WPP_RECORDER_SF_DDqDD @ 0x1C002A42C (WPP_RECORDER_SF_DDqDD.c)
 */

__int64 __fastcall Isoch_Stage_Find(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  __int64 *v4; // r14
  __int64 *v5; // rdi
  __int64 v9; // rbx
  PDEVICE_OBJECT v10; // rdx
  int v11; // edx
  int v12; // edx
  int v14; // edx
  __int64 NextStage; // rax
  int v16; // edx

  v3 = *(unsigned __int16 *)(a3 + 2);
  v4 = (__int64 *)(a1 + 336);
  v5 = *(__int64 **)(a1 + 336);
  v9 = 0LL;
  if ( (__int64 *)(a1 + 336) == v5 )
  {
LABEL_7:
    v12 = *(_WORD *)(a2 + 14) & 0x1F;
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_DDDD(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      v12,
      13,
      19,
      (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids,
      *(_BYTE *)(a2 + 15),
      *(_WORD *)(a2 + 14) & 0x1F,
      BYTE4(*(_QWORD *)a3),
      v3);
  }
  else
  {
    v10 = WPP_GLOBAL_Control;
    while ( 1 )
    {
      if ( LOWORD(v10->DeviceType) )
      {
        v11 = *(unsigned __int8 *)(a2 + 15);
        LOBYTE(v11) = 5;
        WPP_RECORDER_SF_DDq(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v11,
          *(_WORD *)(a2 + 14) & 0x1F,
          18,
          (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids,
          *(_BYTE *)(a2 + 15),
          *(_WORD *)(a2 + 14) & 0x1F,
          v5[3]);
        v10 = WPP_GLOBAL_Control;
      }
      if ( *(_DWORD *)(v5[4] + 128) == HIDWORD(*(_QWORD *)a3) )
        break;
      v5 = (__int64 *)*v5;
      if ( v4 == v5 )
        goto LABEL_7;
    }
    if ( LOWORD(v10->DeviceType) )
    {
      v14 = *(unsigned __int8 *)(a2 + 15);
      LOBYTE(v14) = 5;
      WPP_RECORDER_SF_DDDDD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v14,
        HIDWORD(*(_QWORD *)a3),
        20,
        (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids,
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
          (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids,
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
        LOBYTE(v16) = 5;
        WPP_RECORDER_SF_DDDD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v16,
          13,
          21,
          (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids,
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
