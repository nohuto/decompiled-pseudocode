/*
 * XREFs of Isoch_FindTrbMatch @ 0x1C002B5F0
 * Callers:
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C002BE48 (Isoch_ProcessTransferEventWithED0.c)
 * Callees:
 *     StageQueue_ForwardScanGetNextStage @ 0x1C0002978 (StageQueue_ForwardScanGetNextStage.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0004A10 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_DDqq @ 0x1C000CF64 (WPP_RECORDER_SF_DDqq.c)
 *     TR_DoesSegmentContainDequeuePointer @ 0x1C0028BC8 (TR_DoesSegmentContainDequeuePointer.c)
 *     Isoch_CalculateBytesTransferred @ 0x1C002AEE0 (Isoch_CalculateBytesTransferred.c)
 */

char __fastcall Isoch_FindTrbMatch(__int64 a1, signed __int64 *a2, __int64 *a3, _DWORD *a4, _DWORD *a5)
{
  char v6; // bl
  int v7; // ebp
  int v8; // r13d
  __int64 v9; // rdi
  __int64 v10; // rcx
  unsigned __int8 *i; // r11
  __int64 NextStage; // rax
  signed __int64 v14; // r10
  unsigned __int8 **v15; // r11
  int v16; // edx
  _QWORD *v17; // r12
  _QWORD *v18; // r14
  __int64 v19; // r8
  __int64 v20; // r11
  signed __int64 v21; // [rsp+A0h] [rbp+8h]
  int v22; // [rsp+A8h] [rbp+10h]

  v22 = (int)a2;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v21 = *a2;
  v9 = 0LL;
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 24LL) + 16LL * *(unsigned int *)(a1 + 184);
  if ( !*a2 )
  {
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      2u,
      0xDu,
      0x23u,
      (__int64)&WPP_77eceb089022340440c9e177d02eadfb_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
LABEL_3:
    *a3 = 0LL;
    *a5 = 0;
    *a4 = 0;
    return v6;
  }
  if ( *a2 != v10 )
  {
    for ( i = *(unsigned __int8 **)(a1 + 336); (unsigned __int8 *)(a1 + 336) != i; i = *v15 )
    {
      i[117] = i[116];
      i[118] = i[114];
      NextStage = StageQueue_ForwardScanGetNextStage(i + 112);
      while ( 2 )
      {
        v9 = NextStage;
        if ( NextStage )
        {
          v16 = *(_DWORD *)(NextStage + 88);
          v17 = (_QWORD *)(NextStage + 24);
          v18 = *(_QWORD **)(NextStage + 24);
          while ( v17 != v18 )
          {
            if ( TR_DoesSegmentContainDequeuePointer((__int64)v18, v16, 0xFFFFFFFF, v14) )
              goto LABEL_19;
            v18 = (_QWORD *)*v18;
            v16 = 0;
            v14 = v21;
          }
          if ( !TR_DoesSegmentContainDequeuePointer(*(_QWORD *)(v9 + 96), v16, *(_DWORD *)(v9 + 104), v14) )
          {
            ++v8;
            NextStage = StageQueue_ForwardScanGetNextStage((unsigned __int8 *)(v20 + 112));
            v14 = v21;
            continue;
          }
LABEL_19:
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_DDqq(
              *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
              5u,
              v19,
              0x25u,
              (__int64)&WPP_77eceb089022340440c9e177d02eadfb_Traceguids,
              *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
              *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
              *(_QWORD *)(v20 + 24),
              v9);
          v7 = Isoch_CalculateBytesTransferred(a1, v9, v22);
          goto LABEL_22;
        }
        break;
      }
    }
    goto LABEL_3;
  }
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
    4u,
    0xDu,
    0x24u,
    (__int64)&WPP_77eceb089022340440c9e177d02eadfb_Traceguids,
    *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
  v8 = *(_DWORD *)(a1 + 328);
LABEL_22:
  v6 = 1;
  *a3 = v9;
  *a4 = v8;
  *a5 = v7;
  return v6;
}
