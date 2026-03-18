/*
 * XREFs of Isoch_Stage_Find @ 0x1C0026E00
 * Callers:
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0025BD4 (Isoch_ProcessTransferEventWithED1.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDD @ 0x1C001F854 (WPP_RECORDER_SF_DDDD.c)
 *     StageQueue_ForwardScanGetNextStage @ 0x1C001FE54 (StageQueue_ForwardScanGetNextStage.c)
 *     WPP_RECORDER_SF_DDDDD @ 0x1C0020C3C (WPP_RECORDER_SF_DDDDD.c)
 *     WPP_RECORDER_SF_DDq @ 0x1C0023920 (WPP_RECORDER_SF_DDq.c)
 *     WPP_RECORDER_SF_DDqDD @ 0x1C0023A1C (WPP_RECORDER_SF_DDqDD.c)
 */

__int64 __fastcall Isoch_Stage_Find(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  __int64 *v4; // r14
  __int64 *v5; // rdi
  __int64 v9; // rbx
  PDEVICE_OBJECT v10; // rdx
  __int64 NextStage; // rax
  __int64 v13; // [rsp+28h] [rbp-50h]
  __int64 v14; // [rsp+30h] [rbp-48h]
  __int64 v15; // [rsp+38h] [rbp-40h]
  __int64 v16; // [rsp+40h] [rbp-38h]
  __int64 v17; // [rsp+48h] [rbp-30h]

  v3 = *(unsigned __int16 *)(a3 + 2);
  v4 = (__int64 *)(a1 + 336);
  v5 = *(__int64 **)(a1 + 336);
  v9 = 0LL;
  if ( (__int64 *)(a1 + 336) == v5 )
  {
LABEL_7:
    LODWORD(v15) = HIDWORD(*(_QWORD *)a3);
    LODWORD(v14) = *(_WORD *)(a2 + 14) & 0x1F;
    LODWORD(v13) = *(unsigned __int8 *)(a2 + 15);
    WPP_RECORDER_SF_DDDD(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      4u,
      0xDu,
      0x13u,
      (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids,
      v13,
      v14,
      v15,
      v3);
  }
  else
  {
    v10 = WPP_GLOBAL_Control;
    while ( 1 )
    {
      if ( LOWORD(v10->DeviceType) )
      {
        LODWORD(v14) = *(_WORD *)(a2 + 14) & 0x1F;
        LODWORD(v13) = *(unsigned __int8 *)(a2 + 15);
        WPP_RECORDER_SF_DDq(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          5u,
          (unsigned int)v14,
          0x12u,
          (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids,
          v13,
          v14,
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
      LODWORD(v15) = *(_DWORD *)(v5[4] + 128);
      LODWORD(v14) = *(_WORD *)(a2 + 14) & 0x1F;
      LODWORD(v13) = *(unsigned __int8 *)(a2 + 15);
      WPP_RECORDER_SF_DDDDD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        5u,
        HIDWORD(*(_QWORD *)a3),
        0x14u,
        (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids,
        v13,
        v14,
        v15,
        HIDWORD(*(_QWORD *)a3),
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
        LODWORD(v17) = v3;
        LODWORD(v16) = HIDWORD(*(_QWORD *)a3);
        LODWORD(v14) = *(_WORD *)(a2 + 14) & 0x1F;
        LODWORD(v13) = *(unsigned __int8 *)(a2 + 15);
        WPP_RECORDER_SF_DDqDD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          *(unsigned __int8 *)(a2 + 15),
          (unsigned int)v14,
          0x16u,
          (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids,
          v13,
          v14,
          v5[3],
          v16,
          v17);
        return 0LL;
      }
    }
    while ( v3 > *(_DWORD *)(NextStage + 44) );
    if ( !v3 || v3 > *(_DWORD *)(NextStage + 48) - 1 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LODWORD(v16) = v3 + 1;
        LODWORD(v15) = *(_DWORD *)(NextStage + 48);
        LODWORD(v14) = *(_WORD *)(a2 + 14) & 0x1F;
        LODWORD(v13) = *(unsigned __int8 *)(a2 + 15);
        WPP_RECORDER_SF_DDDD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          5u,
          0xDu,
          0x15u,
          (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids,
          v13,
          v14,
          v15,
          v16);
      }
      *((_DWORD *)v5 + 21) = v3 + 1;
      *(_DWORD *)(v9 + 48) = v3 + 1;
    }
  }
  return v9;
}
