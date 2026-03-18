/*
 * XREFs of Bulk_FindStage @ 0x1C002E26C
 * Callers:
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C000ABB0 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_ProcessStreamOnEndpointStopOrHalt @ 0x1C002E550 (Bulk_ProcessStreamOnEndpointStopOrHalt.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C002E6F4 (Bulk_ProcessTransferEventWithED0.c)
 * Callees:
 *     StageQueue_ForwardScanGetNextStage @ 0x1C0002978 (StageQueue_ForwardScanGetNextStage.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0008558 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDqq @ 0x1C000BE08 (WPP_RECORDER_SF_DDDqq.c)
 *     TR_DoesSegmentContainDequeuePointer @ 0x1C0028BC8 (TR_DoesSegmentContainDequeuePointer.c)
 */

char __fastcall Bulk_FindStage(__int64 a1, signed __int64 a2, __int64 *a3, _DWORD *a4)
{
  char v5; // bl
  __int64 v7; // rdi
  __int64 v8; // rcx
  int v10; // eax
  unsigned __int8 *i; // r11
  int v12; // edx
  _QWORD *v13; // r13
  _QWORD *v14; // r14
  int v15; // r8d
  __int64 NextStage; // rax
  unsigned __int8 **v17; // r11
  __int64 v18; // [rsp+20h] [rbp-68h]
  int v19; // [rsp+90h] [rbp+8h]

  v5 = 0;
  v7 = 0LL;
  v19 = 0;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 24LL) + 16LL * *(unsigned int *)(a1 + 184);
  if ( !a2 )
  {
    WPP_RECORDER_SF_DDD(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      4u,
      0xDu,
      0x2Fu,
      (__int64)&WPP_67ca0b9ba6d331f4aeeb1b749b99e189_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
      *(_DWORD *)(a1 + 64));
LABEL_3:
    *a3 = 0LL;
    *a4 = 0;
    return v5;
  }
  if ( a2 != v8 )
  {
    for ( i = *(unsigned __int8 **)(a1 + 320); (unsigned __int8 *)(a1 + 320) != i; i = *v17 )
    {
      i[117] = i[116];
      i[118] = i[114];
      while ( 2 )
      {
        NextStage = StageQueue_ForwardScanGetNextStage(i + 112);
        v7 = NextStage;
        if ( NextStage )
        {
          v12 = *(_DWORD *)(NextStage + 104);
          v13 = (_QWORD *)(NextStage + 24);
          v14 = *(_QWORD **)(NextStage + 24);
          while ( v13 != v14 )
          {
            if ( TR_DoesSegmentContainDequeuePointer((__int64)v14, v12, 0xFFFFFFFF, a2) )
              goto LABEL_19;
            v14 = (_QWORD *)*v14;
            v12 = 0;
          }
          if ( !TR_DoesSegmentContainDequeuePointer(*(_QWORD *)(v7 + 112), v12, *(_DWORD *)(v7 + 120), a2) )
          {
            ++v19;
            continue;
          }
LABEL_19:
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_DDDqq(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), 5u, v15, 0x31u, v18);
          v10 = v19;
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
    (__int64)&WPP_67ca0b9ba6d331f4aeeb1b749b99e189_Traceguids,
    *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
    *(_DWORD *)(a1 + 64));
  v10 = *(_DWORD *)(a1 + 300);
LABEL_22:
  v5 = 1;
  *a3 = v7;
  *a4 = v10;
  return v5;
}
