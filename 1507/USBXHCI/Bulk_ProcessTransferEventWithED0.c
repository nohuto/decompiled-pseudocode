/*
 * XREFs of Bulk_ProcessTransferEventWithED0 @ 0x1C002ABC0
 * Callers:
 *     Bulk_EP_TransferEventHandler @ 0x1C002A0F0 (Bulk_EP_TransferEventHandler.c)
 * Callees:
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0014F6C (Controller_HwVerifierBreakIfEnabled.c)
 *     Endpoint_HaltedCompletionCode @ 0x1C00186B4 (Endpoint_HaltedCompletionCode.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C001F854 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_DDDDD @ 0x1C0020C3C (WPP_RECORDER_SF_DDDDD.c)
 *     Bulk_FindStage @ 0x1C002A158 (Bulk_FindStage.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1C002B2D0 (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 *     Bulk_ProcessTransferEventWithStoppedCompletion @ 0x1C002B46C (Bulk_ProcessTransferEventWithStoppedCompletion.c)
 *     Bulk_Stage_CalculateBytesTransferred @ 0x1C002BB3C (Bulk_Stage_CalculateBytesTransferred.c)
 *     Bulk_ValidateED0TrbPointerOnMismatch @ 0x1C002CF44 (Bulk_ValidateED0TrbPointerOnMismatch.c)
 *     WPP_RECORDER_SF_dddqLddx @ 0x1C002E560 (WPP_RECORDER_SF_dddqLddx.c)
 *     ESM_AddEvent @ 0x1C00383C8 (ESM_AddEvent.c)
 */

char __fastcall Bulk_ProcessTransferEventWithED0(__int64 a1, __int64 a2)
{
  char v4; // di
  __int64 v5; // rcx
  __int64 v7; // rbp
  unsigned int v8; // r15d
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  KIRQL v12; // dl
  __int64 v13; // r10
  __int64 v14; // [rsp+28h] [rbp-70h]
  int v15; // [rsp+28h] [rbp-70h]
  __int64 v16; // [rsp+30h] [rbp-68h]
  int v17; // [rsp+30h] [rbp-68h]
  __int64 v18; // [rsp+38h] [rbp-60h]
  int v19; // [rsp+38h] [rbp-60h]
  __int64 v20; // [rsp+40h] [rbp-58h]
  int v21; // [rsp+48h] [rbp-50h]
  int v22; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+10h] BYREF

  v4 = 0;
  HIDWORD(v20) = HIDWORD(a1);
  WPP_RECORDER_SF_dddqLddx(
    *(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL),
    *(unsigned __int8 *)(a1 + 11),
    *(unsigned __int8 *)(a1 + 15),
    *(_DWORD *)(a1 + 8) & 0xFFFFFF);
  if ( (unsigned int)*(unsigned __int8 *)(a1 + 11) - 26 > 2 || (*(_DWORD *)(*(_QWORD *)(a2 + 56) + 32LL) & 0x40) == 0 )
  {
    *(_BYTE *)(a2 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 88));
    if ( !Bulk_FindStage(a2, *(_QWORD *)a1, &v23, &v22) )
    {
      if ( !*(_DWORD *)(a2 + 64) )
        Bulk_ValidateED0TrbPointerOnMismatch(a2, a1);
      goto LABEL_7;
    }
    v7 = v23;
    if ( v23 )
    {
      v8 = Bulk_Stage_CalculateBytesTransferred(v5, v23, a1);
      if ( v8 <= *(_DWORD *)(v7 + 40) )
      {
LABEL_13:
        if ( Endpoint_HaltedCompletionCode(*(unsigned __int8 *)(a1 + 11)) )
        {
          KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 88), *(_BYTE *)(a2 + 96));
          if ( v7 )
            Bulk_ProcessTransferEventWithHaltedCompletion(a2, v7, *(unsigned __int8 *)(a1 + 11), v8);
          return 1;
        }
        if ( (unsigned int)(v10 - 26) <= 2 )
        {
          Bulk_ProcessTransferEventWithStoppedCompletion(a2, v7, v10, v8, v22);
          v11 = *(_QWORD *)(a2 + 56);
          LODWORD(v20) = *(_DWORD *)(a2 + 304);
          LODWORD(v18) = *(_DWORD *)(a2 + 64);
          LODWORD(v16) = *(_DWORD *)(v11 + 144);
          LODWORD(v14) = *(unsigned __int8 *)(*(_QWORD *)(a2 + 48) + 135LL);
          WPP_RECORDER_SF_DDDD(
            *(_QWORD *)(v11 + 80),
            4u,
            0xDu,
            0x34u,
            (__int64)&WPP_3b622249e4c15df141300e65bf8740b4_Traceguids,
            v14,
            v16,
            v18,
            v20);
          v12 = *(_BYTE *)(a2 + 96);
          *(_DWORD *)(a2 + 276) |= 8u;
          KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 88), v12);
          v13 = *(_QWORD *)(a2 + 56);
          _m_prefetchw((const void *)(v13 + 32));
          if ( (_InterlockedOr((volatile signed __int32 *)(v13 + 32), 0x10u) & 0x10) != 0 )
          {
            Controller_HwVerifierBreakIfEnabled(
              *(_QWORD **)v13,
              *(_QWORD *)(v13 + 8),
              *(_QWORD *)(v13 + 24),
              0x2000000LL,
              "Received duplicate Stopped Transfer Events",
              0LL,
              0LL);
          }
          else
          {
            _m_prefetchw((const void *)(v13 + 32));
            if ( (_InterlockedXor((volatile signed __int32 *)(v13 + 32), 8u) & 8) != 0 )
              ESM_AddEvent((PVOID)(v13 + 272));
          }
          return 1;
        }
LABEL_7:
        KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 88), *(_BYTE *)(a2 + 96));
        return v4;
      }
      v9 = *(_QWORD *)(a2 + 56);
      v21 = *(_DWORD *)(v7 + 40);
      LODWORD(v20) = v8;
      v19 = *(_DWORD *)(a2 + 64);
      v17 = *(_DWORD *)(v9 + 144);
      v15 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 48) + 135LL);
      WPP_RECORDER_SF_DDDDD(
        *(_QWORD *)(v9 + 80),
        3u,
        *(unsigned __int8 *)(*(_QWORD *)(a2 + 48) + 135LL),
        0x33u,
        (__int64)&WPP_3b622249e4c15df141300e65bf8740b4_Traceguids,
        v15,
        v17,
        v19,
        v20,
        v21);
    }
    v8 = 0;
    goto LABEL_13;
  }
  return 1;
}
