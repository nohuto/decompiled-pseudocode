/*
 * XREFs of Control_ProcessTransferEventWithED0 @ 0x1C0021760
 * Callers:
 *     Control_EP_TransferEventHandler @ 0x1C0021330 (Control_EP_TransferEventHandler.c)
 * Callees:
 *     memmove @ 0x1C0007C40 (memmove.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0014F6C (Controller_HwVerifierBreakIfEnabled.c)
 *     Endpoint_HaltedCompletionCode @ 0x1C00186B4 (Endpoint_HaltedCompletionCode.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C001F854 (WPP_RECORDER_SF_DDDD.c)
 *     Control_ProcessTransferEventPointer @ 0x1C00215D0 (Control_ProcessTransferEventPointer.c)
 *     Control_ValidateED0TrbPointerOnMismatch @ 0x1C0022E74 (Control_ValidateED0TrbPointerOnMismatch.c)
 *     WPP_RECORDER_SF_DDqLDDx @ 0x1C0023C84 (WPP_RECORDER_SF_DDqLDDx.c)
 *     ESM_AddEvent @ 0x1C00383C8 (ESM_AddEvent.c)
 */

char __fastcall Control_ProcessTransferEventWithED0(__int64 a1, __int64 a2)
{
  char v2; // di
  KIRQL v5; // al
  __int64 v6; // rbx
  KIRQL v7; // dl
  size_t v8; // r8
  __int64 v9; // rax
  int v10; // edx
  __int64 v11; // r10
  const char *v12; // rax
  KIRQL v13; // dl
  __int64 v15; // [rsp+38h] [rbp-40h]
  int v16; // [rsp+48h] [rbp-30h]
  int v17; // [rsp+50h] [rbp-28h]
  __int64 v18; // [rsp+58h] [rbp-20h]
  unsigned int v19; // [rsp+80h] [rbp+8h] BYREF
  int v20; // [rsp+88h] [rbp+10h] BYREF

  v2 = 0;
  v20 = 0;
  v19 = 0;
  v18 = *(_QWORD *)a1;
  v17 = (*(_DWORD *)(a1 + 12) >> 2) & 1;
  v16 = *(_DWORD *)(a1 + 8) & 0xFFFFFF;
  HIDWORD(v15) = HIDWORD(a1);
  WPP_RECORDER_SF_DDqLDDx(
    *(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL),
    *(unsigned __int8 *)(a1 + 15),
    *(unsigned __int8 *)(a1 + 11),
    17);
  if ( (unsigned int)*(unsigned __int8 *)(a1 + 11) - 26 <= 2 && (*(_DWORD *)(*(_QWORD *)(a2 + 56) + 32LL) & 0x40) != 0 )
    return 1;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 88));
  v6 = *(_QWORD *)(a2 + 296);
  *(_BYTE *)(a2 + 96) = v5;
  if ( !v6 )
  {
    v7 = v5;
LABEL_29:
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 88), v7);
    return v2;
  }
  if ( !Control_ProcessTransferEventPointer(a2, v6, (__int64 *)a1, &v20, (int *)&v19) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 88), *(_BYTE *)(a2 + 96));
    Control_ValidateED0TrbPointerOnMismatch(a2, a1);
    return v2;
  }
  v8 = v19;
  if ( v19 > *(_DWORD *)(v6 + 88) )
  {
    LODWORD(v15) = v19;
    WPP_RECORDER_SF_DDDD(
      *(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL),
      3u,
      0xDu,
      0x12u,
      (__int64)&WPP_ee7759932d876114f80ff23edcd4b288_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(a2 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a2 + 56) + 144LL),
      v15,
      *(_DWORD *)(v6 + 88),
      v16,
      v17,
      v18);
    v8 = 0LL;
    v19 = 0;
  }
  if ( (_DWORD)v8 )
  {
    v9 = *(_QWORD *)(v6 + 32);
    *(_DWORD *)(v6 + 92) = v8;
    if ( (*(_DWORD *)(v9 + 32) & 1) != 0 && *(_DWORD *)(v6 + 48) == 2 )
      memmove(*(void **)(v6 + 64), *(const void **)(*(_QWORD *)(v6 + 72) + 16LL), v8);
  }
  if ( !Endpoint_HaltedCompletionCode(*(unsigned __int8 *)(a1 + 11)) )
  {
    if ( (unsigned int)(v10 - 26) > 2 )
    {
      v7 = *(_BYTE *)(a2 + 96);
      goto LABEL_29;
    }
    if ( *(_DWORD *)(v6 + 92) == *(_DWORD *)(v6 + 88) )
    {
      *(_DWORD *)(v6 + 108) = 1;
    }
    else if ( (_BYTE)v10 == 28 )
    {
      *(_DWORD *)(v6 + 108) = 28;
    }
    ++*(_DWORD *)(v6 + 116);
    v13 = *(_BYTE *)(a2 + 96);
    *(_DWORD *)(a2 + 308) = v20 - *(_DWORD *)(v6 + 116) + 1;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 88), v13);
    v11 = *(_QWORD *)(a2 + 56);
    _m_prefetchw((const void *)(v11 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v11 + 32), 0x10u) & 0x10) != 0 )
    {
      v12 = "Received duplicate Stopped Transfer Events";
      goto LABEL_25;
    }
    _m_prefetchw((const void *)(v11 + 32));
    if ( (_InterlockedXor((volatile signed __int32 *)(v11 + 32), 8u) & 8) == 0 )
      return 1;
LABEL_27:
    ESM_AddEvent((PVOID)(v11 + 272));
    return 1;
  }
  *(_DWORD *)(v6 + 108) = v10;
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 88), *(_BYTE *)(a2 + 96));
  v11 = *(_QWORD *)(a2 + 56);
  _m_prefetchw((const void *)(v11 + 32));
  if ( (_InterlockedOr((volatile signed __int32 *)(v11 + 32), 0x20u) & 0x20) == 0 )
    goto LABEL_27;
  v12 = "Received duplicate Transfer Event TRB with Halted Completion Code";
LABEL_25:
  Controller_HwVerifierBreakIfEnabled(
    *(_QWORD **)v11,
    *(_QWORD *)(v11 + 8),
    *(_QWORD *)(v11 + 24),
    0x2000000LL,
    v12,
    0LL,
    0LL);
  return 1;
}
