/*
 * XREFs of Isoch_ProcessTransferEventWithED0 @ 0x1C002BE48
 * Callers:
 *     Isoch_EP_TransferEventHandler @ 0x1C000ABA0 (Isoch_EP_TransferEventHandler.c)
 * Callees:
 *     Isoch_Transfer_CompleteStaleStages @ 0x1C0002760 (Isoch_Transfer_CompleteStaleStages.c)
 *     Isoch_CompleteStaleTransfers @ 0x1C00027D0 (Isoch_CompleteStaleTransfers.c)
 *     Isoch_Stage_CompleteTD @ 0x1C000C230 (Isoch_Stage_CompleteTD.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C001E910 (Controller_HwVerifierBreakIfEnabled.c)
 *     Isoch_FindTrbMatch @ 0x1C002B5F0 (Isoch_FindTrbMatch.c)
 *     Isoch_ProcessTransferRingEmptyEvent @ 0x1C002C124 (Isoch_ProcessTransferRingEmptyEvent.c)
 *     WPP_RECORDER_SF_DDL @ 0x1C002CE14 (WPP_RECORDER_SF_DDL.c)
 *     WPP_RECORDER_SF_DDLDDx @ 0x1C002CF04 (WPP_RECORDER_SF_DDLDDx.c)
 *     WPP_RECORDER_SF_DDLx @ 0x1C002D058 (WPP_RECORDER_SF_DDLx.c)
 *     ESM_AddEvent @ 0x1C0039978 (ESM_AddEvent.c)
 */

char __fastcall Isoch_ProcessTransferEventWithED0(__int64 a1, __int64 a2)
{
  char v4; // bp
  int v5; // edx
  int v6; // edx
  int v7; // r9d
  unsigned int v8; // r8d
  KIRQL v9; // dl
  KSPIN_LOCK *v10; // rcx
  KIRQL v11; // dl
  __int64 v12; // r10
  _DWORD *v13; // r14
  _BYTE *v14; // rbx
  __int64 v15; // rcx
  __int64 v17[7]; // [rsp+60h] [rbp-38h] BYREF
  char v18; // [rsp+A0h] [rbp+8h] BYREF
  int v19; // [rsp+A8h] [rbp+10h] BYREF
  int v20; // [rsp+B0h] [rbp+18h] BYREF
  int v21; // [rsp+B8h] [rbp+20h] BYREF

  v4 = 0;
  v5 = *(unsigned __int8 *)(a1 + 15);
  LOBYTE(v5) = 4;
  WPP_RECORDER_SF_DDLDDx(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL), v5, *(unsigned __int8 *)(a1 + 11), 40);
  v8 = *(unsigned __int8 *)(a1 + 11);
  if ( v8 >= 0xE )
  {
    if ( v8 <= 0xF )
    {
      Isoch_ProcessTransferRingEmptyEvent(a2, a1);
      return v4;
    }
    if ( v8 == 20 )
    {
      WPP_RECORDER_SF_DDLx(
        *(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL),
        *(unsigned __int8 *)(*(_QWORD *)(a2 + 48) + 135LL),
        20,
        v7);
      ((void (__fastcall *)(void *, _QWORD))qword_1C00447B0)(
        WPP_MAIN_CB.Dpc.SystemArgument2,
        *(_QWORD *)(*(_QWORD *)(a2 + 56) + 24LL));
      if ( !*(_QWORD *)a1 )
        return v4;
    }
    else if ( v8 == 23 )
    {
      ++*(_DWORD *)(a2 + 256);
      if ( !*(_QWORD *)a1 )
      {
        LOBYTE(v6) = 4;
        WPP_RECORDER_SF_DDL(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL), v6, *(unsigned __int8 *)(a1 + 11), 41);
        return v4;
      }
    }
  }
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 88));
  *(_BYTE *)(a2 + 96) = v9;
  if ( (*(_DWORD *)(a2 + 280) & 0x40) == 0 )
  {
    Isoch_FindTrbMatch(a2, (signed __int64 *)a1, v17, &v21, &v19);
    v10 = (KSPIN_LOCK *)(a2 + 88);
    v11 = *(_BYTE *)(a2 + 96);
    if ( (unsigned int)*(unsigned __int8 *)(a1 + 11) - 26 > 2 )
    {
      KeReleaseSpinLock(v10, v11);
      v13 = (_DWORD *)v17[0];
      if ( !v17[0] )
        return v4;
      v14 = *(_BYTE **)v17[0];
      Isoch_CompleteStaleTransfers(a2, *(__int64 ****)v17[0]);
      Isoch_Transfer_CompleteStaleStages(v15, v14, (__int64)v13);
      Isoch_Stage_CompleteTD(v13, *(unsigned __int8 *)(a1 + 11), v19, 0, &v18, &v20);
    }
    else
    {
      *(_DWORD *)(a2 + 280) |= 0x40u;
      KeReleaseSpinLock(v10, v11);
      if ( v17[0] )
        Isoch_Stage_CompleteTD((_DWORD *)v17[0], *(unsigned __int8 *)(a1 + 11), v19, 0, &v18, &v20);
      v12 = *(_QWORD *)(a2 + 56);
      _m_prefetchw((const void *)(v12 + 32));
      if ( (_InterlockedOr((volatile signed __int32 *)(v12 + 32), 0x10u) & 0x10) != 0 )
      {
        Controller_HwVerifierBreakIfEnabled(
          *(_QWORD **)v12,
          *(_QWORD *)(v12 + 8),
          *(_QWORD *)(v12 + 24),
          0x2000000LL,
          "Received duplicate Stopped Transfer Events",
          0LL,
          0LL);
      }
      else
      {
        _m_prefetchw((const void *)(v12 + 32));
        if ( (_InterlockedXor((volatile signed __int32 *)(v12 + 32), 8u) & 8) != 0 )
          ESM_AddEvent((PVOID)(v12 + 272));
      }
    }
    return 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 88), v9);
  return v4;
}
