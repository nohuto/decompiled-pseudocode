/*
 * XREFs of Isoch_FindTrbMatch @ 0x1C0027E14
 * Callers:
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C00286C0 (Isoch_ProcessTransferEventWithED0.c)
 * Callees:
 *     StageQueue_ForwardScanGetNextStage @ 0x1C0002AF8 (StageQueue_ForwardScanGetNextStage.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0004D90 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_DDqq @ 0x1C000DCB0 (WPP_RECORDER_SF_DDqq.c)
 *     TR_DoesSegmentContainDequeuePointer @ 0x1C00251C0 (TR_DoesSegmentContainDequeuePointer.c)
 *     Isoch_CalculateBytesTransferred @ 0x1C002764C (Isoch_CalculateBytesTransferred.c)
 */

char __fastcall Isoch_FindTrbMatch(__int64 a1, signed __int64 *a2, __int64 *a3, _DWORD *a4, _DWORD *a5)
{
  signed __int64 v5; // rdx
  char v7; // bl
  int v8; // ebp
  int v9; // r13d
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v13; // r11
  int v14; // edx
  _QWORD *v15; // r12
  _QWORD *v16; // r14
  signed __int64 v17; // r9
  __int64 v18; // r8
  __int64 NextStage; // rax
  __int64 *v20; // r11
  signed __int64 v21; // [rsp+A0h] [rbp+8h]
  int v22; // [rsp+A8h] [rbp+10h]

  v22 = (int)a2;
  v5 = *a2;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v21 = v5;
  v10 = 0LL;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 24LL) + 16LL * *(unsigned int *)(a1 + 184);
  if ( v5 )
  {
    if ( v5 == v11 )
    {
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        4u,
        0xDu,
        0x24u,
        (__int64)&WPP_c87b452ab34c376f0ccab5d524638647_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
      v9 = *(_DWORD *)(a1 + 328);
    }
    else
    {
      v13 = *(_QWORD *)(a1 + 336);
LABEL_17:
      if ( a1 + 336 == v13 )
        goto LABEL_3;
      *(_BYTE *)(v13 + 117) = *(_BYTE *)(v13 + 116);
      *(_BYTE *)(v13 + 118) = *(_BYTE *)(v13 + 114);
      while ( 1 )
      {
        NextStage = StageQueue_ForwardScanGetNextStage((unsigned __int8 *)(v13 + 112));
        v10 = NextStage;
        if ( !NextStage )
        {
          v13 = *v20;
          goto LABEL_17;
        }
        v14 = *(_DWORD *)(NextStage + 88);
        v15 = (_QWORD *)(NextStage + 24);
        v16 = *(_QWORD **)(NextStage + 24);
        if ( (_QWORD *)(NextStage + 24) != v16 )
          break;
LABEL_13:
        if ( TR_DoesSegmentContainDequeuePointer(*(_QWORD *)(v10 + 96), v14, *(_DWORD *)(v10 + 104), v21) )
          goto LABEL_19;
        ++v9;
      }
      v17 = v21;
      while ( !TR_DoesSegmentContainDequeuePointer((__int64)v16, v14, 0xFFFFFFFF, v17) )
      {
        v16 = (_QWORD *)*v16;
        v14 = 0;
        if ( v15 == v16 )
          goto LABEL_13;
      }
LABEL_19:
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_DDqq(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          5u,
          v18,
          0x25u,
          (__int64)&WPP_c87b452ab34c376f0ccab5d524638647_Traceguids,
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          *(_QWORD *)(v13 + 24),
          v10);
      v8 = Isoch_CalculateBytesTransferred(a1, v10, v22);
    }
    v7 = 1;
    *a3 = v10;
    *a4 = v9;
    *a5 = v8;
    return v7;
  }
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
    2u,
    0xDu,
    0x23u,
    (__int64)&WPP_c87b452ab34c376f0ccab5d524638647_Traceguids,
    *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
LABEL_3:
  *a3 = 0LL;
  *a5 = 0;
  *a4 = 0;
  return v7;
}
