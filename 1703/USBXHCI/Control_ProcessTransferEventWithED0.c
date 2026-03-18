/*
 * XREFs of Control_ProcessTransferEventWithED0 @ 0x1C00260EC
 * Callers:
 *     TR_TransferEventHandler @ 0x1C0001A20 (TR_TransferEventHandler.c)
 *     Control_EP_TransferEventHandler @ 0x1C0025DC0 (Control_EP_TransferEventHandler.c)
 * Callees:
 *     Endpoint_HaltedCompletionCode @ 0x1C0001908 (Endpoint_HaltedCompletionCode.c)
 *     WPP_RECORDER_SF_DDqLDDx @ 0x1C000E3D0 (WPP_RECORDER_SF_DDqLDDx.c)
 *     memmove @ 0x1C0010B40 (memmove.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C001ACD8 (Controller_HwVerifierBreakIfEnabled.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C0024A24 (WPP_RECORDER_SF_DDDD.c)
 *     Control_ProcessTransferEventPointer @ 0x1C0025F58 (Control_ProcessTransferEventPointer.c)
 *     Control_ValidateED0TrbPointerOnMismatch @ 0x1C00266B8 (Control_ValidateED0TrbPointerOnMismatch.c)
 *     ESM_AddEvent @ 0x1C0036A00 (ESM_AddEvent.c)
 */

char __fastcall Control_ProcessTransferEventWithED0(__int64 a1, __int64 a2)
{
  char v2; // di
  KIRQL v5; // al
  __int64 v6; // rbx
  KIRQL v7; // dl
  size_t v8; // r8
  __int64 v9; // rax
  __int64 v10; // r10
  const char *v11; // rax
  int v12; // ecx
  KIRQL v13; // dl
  int v15; // [rsp+20h] [rbp-58h]
  __int64 v16; // [rsp+38h] [rbp-40h]
  unsigned int v17; // [rsp+80h] [rbp+8h] BYREF
  int v18; // [rsp+88h] [rbp+10h] BYREF

  v2 = 0;
  v18 = 0;
  v17 = 0;
  HIDWORD(v16) = HIDWORD(a1);
  WPP_RECORDER_SF_DDqLDDx(
    *(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL),
    *(unsigned __int8 *)(a1 + 15),
    *(unsigned __int8 *)(a1 + 11),
    0x11u,
    v15);
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
  if ( !Control_ProcessTransferEventPointer(a2, v6, (__int64 *)a1, &v18, (int *)&v17) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 88), *(_BYTE *)(a2 + 96));
    Control_ValidateED0TrbPointerOnMismatch(a2, a1);
    return v2;
  }
  v8 = v17;
  if ( v17 > *(_DWORD *)(v6 + 88) )
  {
    LODWORD(v16) = v17;
    WPP_RECORDER_SF_DDDD(
      *(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL),
      3u,
      0xDu,
      0x12u,
      (__int64)&WPP_b8bb340e430930fc90b81b2b4d1cc689_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(a2 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a2 + 56) + 144LL),
      v16,
      *(_DWORD *)(v6 + 88));
    v8 = 0LL;
    v17 = 0;
  }
  if ( (_DWORD)v8 )
  {
    v9 = *(_QWORD *)(v6 + 32);
    *(_DWORD *)(v6 + 92) = v8;
    if ( (*(_DWORD *)(v9 + 32) & 1) != 0 && *(_DWORD *)(v6 + 48) == 2 )
      memmove(*(void **)(v6 + 64), *(const void **)(*(_QWORD *)(v6 + 72) + 16LL), v8);
  }
  if ( !Endpoint_HaltedCompletionCode(*(_QWORD *)(a2 + 56), *(unsigned __int8 *)(a1 + 11)) )
  {
    v12 = *(unsigned __int8 *)(a1 + 11);
    if ( (unsigned int)(v12 - 26) > 2 )
    {
      v7 = *(_BYTE *)(a2 + 96);
      goto LABEL_29;
    }
    if ( *(_DWORD *)(v6 + 92) == *(_DWORD *)(v6 + 88) )
    {
      *(_DWORD *)(v6 + 108) = 1;
    }
    else if ( (_BYTE)v12 == 28 )
    {
      *(_DWORD *)(v6 + 108) = 28;
    }
    ++*(_DWORD *)(v6 + 116);
    v13 = *(_BYTE *)(a2 + 96);
    *(_DWORD *)(a2 + 308) = v18 - *(_DWORD *)(v6 + 116) + 1;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 88), v13);
    v10 = *(_QWORD *)(a2 + 56);
    _m_prefetchw((const void *)(v10 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v10 + 32), 0x10u) & 0x10) != 0 )
    {
      v11 = "Received duplicate Stopped Transfer Events";
      goto LABEL_25;
    }
    _m_prefetchw((const void *)(v10 + 32));
    if ( (_InterlockedXor((volatile signed __int32 *)(v10 + 32), 8u) & 8) == 0 )
      return 1;
LABEL_27:
    ESM_AddEvent((PVOID)(v10 + 272));
    return 1;
  }
  *(_DWORD *)(v6 + 108) = *(unsigned __int8 *)(a1 + 11);
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 88), *(_BYTE *)(a2 + 96));
  v10 = *(_QWORD *)(a2 + 56);
  _m_prefetchw((const void *)(v10 + 32));
  if ( (_InterlockedOr((volatile signed __int32 *)(v10 + 32), 0x20u) & 0x20) == 0 )
    goto LABEL_27;
  v11 = "Received duplicate Transfer Event TRB with Halted Completion Code";
LABEL_25:
  Controller_HwVerifierBreakIfEnabled(
    *(_QWORD **)v10,
    *(_QWORD *)(v10 + 8),
    *(_QWORD *)(v10 + 24),
    0x2000000LL,
    v11,
    0LL,
    0LL);
  return 1;
}
