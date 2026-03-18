/*
 * XREFs of Bulk_FindStage @ 0x1C002ADC4
 * Callers:
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C000BA50 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_ProcessStreamOnEndpointStopOrHalt @ 0x1C002B0B8 (Bulk_ProcessStreamOnEndpointStopOrHalt.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C002B258 (Bulk_ProcessTransferEventWithED0.c)
 * Callees:
 *     StageQueue_ForwardScanGetNextStage @ 0x1C0002AF8 (StageQueue_ForwardScanGetNextStage.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0008D60 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDqq @ 0x1C000CB5C (WPP_RECORDER_SF_DDDqq.c)
 *     TR_DoesSegmentContainDequeuePointer @ 0x1C00251C0 (TR_DoesSegmentContainDequeuePointer.c)
 */

char __fastcall Bulk_FindStage(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  char v5; // bl
  __int64 v6; // rdi
  __int64 v7; // rcx
  int v9; // eax
  __int64 *i; // r14
  int v11; // edx
  _QWORD *v12; // r13
  _QWORD *v13; // r15
  int v14; // r8d
  signed __int64 v15; // r11
  __int64 NextStage; // rax
  __int64 v17; // [rsp+20h] [rbp-68h]
  int v18; // [rsp+90h] [rbp+8h]

  v5 = 0;
  v6 = 0LL;
  v18 = 0;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 24LL) + 16LL * *(unsigned int *)(a1 + 184);
  if ( !a2 )
  {
    WPP_RECORDER_SF_DDD(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      4u,
      0xDu,
      0x2Fu,
      (__int64)&WPP_d7490787d28e3e661d2cad56214ea32b_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
      *(_DWORD *)(a1 + 64));
LABEL_3:
    *a3 = 0LL;
    *a4 = 0;
    return v5;
  }
  if ( a2 != v7 )
  {
    for ( i = *(__int64 **)(a1 + 320); (__int64 *)(a1 + 320) != i; i = (__int64 *)*i )
    {
      *((_BYTE *)i + 117) = *((_BYTE *)i + 116);
      *((_BYTE *)i + 118) = *((_BYTE *)i + 114);
      while ( 2 )
      {
        NextStage = StageQueue_ForwardScanGetNextStage((unsigned __int8 *)i + 112);
        v6 = NextStage;
        if ( NextStage )
        {
          v11 = *(_DWORD *)(NextStage + 104);
          v12 = (_QWORD *)(NextStage + 24);
          v13 = *(_QWORD **)(NextStage + 24);
          while ( v12 != v13 )
          {
            if ( TR_DoesSegmentContainDequeuePointer((__int64)v13, v11, 0xFFFFFFFF, v15) )
              goto LABEL_19;
            v13 = (_QWORD *)*v13;
            v11 = 0;
          }
          if ( !TR_DoesSegmentContainDequeuePointer(*(_QWORD *)(v6 + 112), v11, *(_DWORD *)(v6 + 120), v15) )
          {
            ++v18;
            continue;
          }
LABEL_19:
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_DDDqq(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), 5u, v14, 0x31u, v17);
          v9 = v18;
          goto LABEL_22;
        }
        break;
      }
    }
    goto LABEL_3;
  }
  WPP_RECORDER_SF_DDD(
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
    4u,
    0xDu,
    0x30u,
    (__int64)&WPP_d7490787d28e3e661d2cad56214ea32b_Traceguids,
    *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
    *(_DWORD *)(a1 + 64));
  v9 = *(_DWORD *)(a1 + 300);
LABEL_22:
  v5 = 1;
  *a3 = v6;
  *a4 = v9;
  return v5;
}
