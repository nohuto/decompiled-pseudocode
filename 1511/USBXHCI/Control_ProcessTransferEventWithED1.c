/*
 * XREFs of Control_ProcessTransferEventWithED1 @ 0x1C000B480
 * Callers:
 *     Control_EP_TransferEventHandler @ 0x1C00291E0 (Control_EP_TransferEventHandler.c)
 * Callees:
 *     Control_Transfer_CompleteCancelable @ 0x1C0001D4C (Control_Transfer_CompleteCancelable.c)
 *     Endpoint_HaltedCompletionCode @ 0x1C0004018 (Endpoint_HaltedCompletionCode.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0005540 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_DDqLDDx @ 0x1C000BF20 (WPP_RECORDER_SF_DDqLDDx.c)
 *     WPP_RECORDER_SF_DDqq @ 0x1C000D300 (WPP_RECORDER_SF_DDqq.c)
 *     memmove @ 0x1C0010CC0 (memmove.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C001E4B0 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001F02C (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C0027E34 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_DDxqq @ 0x1C002A78C (WPP_RECORDER_SF_DDxqq.c)
 *     ESM_AddEvent @ 0x1C00393A8 (ESM_AddEvent.c)
 */

__int64 __fastcall Control_ProcessTransferEventWithED1(__int64 *a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned __int8 v3; // r13
  bool v4; // r15
  bool v5; // bp
  unsigned __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v9; // rcx
  void *v10; // r8
  unsigned __int8 v11; // cl
  unsigned int v12; // ebx
  int v13; // edx
  int v14; // edx
  __int64 v15; // rax
  int v16; // edx
  volatile signed __int32 *v17; // r10
  const char *v18; // rax
  void *v19; // rcx
  KSPIN_LOCK *v20; // rcx
  int v21; // ecx
  int v22; // eax
  bool v23; // zf
  int v24; // eax
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v29; // [rsp+28h] [rbp-60h]
  __int64 v30; // [rsp+30h] [rbp-58h]
  __int64 v31; // [rsp+40h] [rbp-48h]
  __int64 v32; // [rsp+48h] [rbp-40h]
  int v33; // [rsp+50h] [rbp-38h]
  __int64 v34; // [rsp+58h] [rbp-30h]

  v2 = *a1;
  v3 = 1;
  v4 = 0;
  v5 = (*a1 & 4) != 0;
  v6 = *a1 & 0xFFFFFFFFFFFFFFF8uLL;
  v7 = a2;
  if ( a2 )
  {
    if ( v6 != *(_QWORD *)(a2 + 296) )
    {
      WPP_RECORDER_SF_DDxqq(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL), *((_WORD *)a1 + 7) & 0x1F, v2, 19);
      Controller_ReportFatalError(*(_QWORD *)(v7 + 40), 2, 4126, *(_QWORD *)(v7 + 48), *(_QWORD *)(v7 + 56), v7);
      return 0;
    }
  }
  else
  {
    v7 = *(_QWORD *)(v6 + 40);
    if ( v6 != *(_QWORD *)(v7 + 296) )
    {
      v32 = *(_QWORD *)(v7 + 296);
      HIDWORD(v31) = (*a1 & 0xFFFFFFFFFFFFFFF8uLL) >> 32;
      WPP_RECORDER_SF_DDxqq(*(_QWORD *)(*(_QWORD *)(v7 + 56) + 80LL), *((_WORD *)a1 + 7) & 0x1F, v2, 20);
    }
  }
  v34 = *a1;
  v33 = (*((_DWORD *)a1 + 3) >> 2) & 1;
  LODWORD(v32) = a1[1] & 0xFFFFFF;
  LODWORD(v31) = *((unsigned __int8 *)a1 + 11);
  WPP_RECORDER_SF_DDqLDDx(*(_QWORD *)(*(_QWORD *)(v7 + 56) + 80LL), *((unsigned __int8 *)a1 + 15), v31, 21);
  v9 = *(_QWORD *)(v7 + 56);
  v10 = &WPP_ee7759932d876114f80ff23edcd4b288_Traceguids;
  if ( (*((_WORD *)a1 + 7) & 0x1F) != *(_DWORD *)(v9 + 144) )
  {
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v9 + 80),
      2u,
      0xDu,
      0x16u,
      (__int64)&WPP_ee7759932d876114f80ff23edcd4b288_Traceguids,
      *((unsigned __int8 *)a1 + 15),
      *((_WORD *)a1 + 7) & 0x1F,
      a1,
      v31,
      v32,
      v33,
      v34);
    v10 = &WPP_ee7759932d876114f80ff23edcd4b288_Traceguids;
  }
  v11 = *((_BYTE *)a1 + 15);
  if ( v11 != *(_BYTE *)(*(_QWORD *)(v7 + 48) + 135LL) )
  {
    LODWORD(v30) = *((_WORD *)a1 + 7) & 0x1F;
    LODWORD(v29) = v11;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(v7 + 56) + 80LL),
      2u,
      0xDu,
      0x17u,
      (__int64)&WPP_ee7759932d876114f80ff23edcd4b288_Traceguids,
      v29,
      v30);
  }
  v12 = a1[1] & 0xFFFFFF;
  if ( v12 > *(_DWORD *)(v6 + 88) )
  {
    v13 = *(unsigned __int8 *)(*(_QWORD *)(v7 + 48) + 135LL);
    LOBYTE(v13) = 3;
    WPP_RECORDER_SF_DDDD(
      *(_QWORD *)(*(_QWORD *)(v7 + 56) + 80LL),
      v13,
      13,
      24,
      (__int64)&WPP_ee7759932d876114f80ff23edcd4b288_Traceguids,
      *(_BYTE *)(*(_QWORD *)(v7 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(v7 + 56) + 144LL),
      *((_BYTE *)a1 + 8),
      *(_DWORD *)(v6 + 88));
    v12 = 0;
  }
  v14 = *(unsigned __int8 *)(*(_QWORD *)(v7 + 48) + 135LL);
  LOBYTE(v14) = 4;
  WPP_RECORDER_SF_DDqq(
    *(_QWORD *)(*(_QWORD *)(v7 + 56) + 80LL),
    v14,
    (_DWORD)v10,
    25,
    (__int64)&WPP_ee7759932d876114f80ff23edcd4b288_Traceguids,
    *(_BYTE *)(*(_QWORD *)(v7 + 48) + 135LL),
    *(_DWORD *)(*(_QWORD *)(v7 + 56) + 144LL),
    *(_QWORD *)(v6 + 24),
    v6);
  if ( !v5 )
  {
    v15 = *(_QWORD *)(v6 + 32);
    *(_DWORD *)(v6 + 92) = v12;
    if ( (*(_DWORD *)(v15 + 32) & 1) != 0 && *(_DWORD *)(v6 + 48) == 2 )
      memmove(*(void **)(v6 + 64), *(const void **)(*(_QWORD *)(v6 + 72) + 16LL), v12);
  }
  if ( Endpoint_HaltedCompletionCode(*((unsigned __int8 *)a1 + 11)) )
  {
    *(_DWORD *)(v6 + 108) = v16;
    v17 = *(volatile signed __int32 **)(v7 + 56);
    _m_prefetchw((const void *)(v17 + 8));
    if ( (_InterlockedOr(v17 + 8, 0x20u) & 0x20) != 0 )
    {
      v18 = "Received duplicate Transfer Event TRB with Halted Completion Code";
LABEL_30:
      Controller_HwVerifierBreakIfEnabled(
        *(_QWORD *)v17,
        *((_QWORD *)v17 + 1),
        *((_QWORD *)v17 + 3),
        0x2000000,
        (__int64)v18,
        0LL,
        0LL);
      return v3;
    }
    v19 = (void *)(v17 + 68);
    goto LABEL_44;
  }
  v20 = (KSPIN_LOCK *)(v7 + 88);
  if ( (unsigned int)(v16 - 26) <= 2 )
  {
    *(_BYTE *)(v7 + 96) = KeAcquireSpinLockRaiseToDpc(v20);
    v21 = ++*(_DWORD *)(v6 + 116);
    if ( v5 )
    {
      if ( *(_DWORD *)(v6 + 92) == *(_DWORD *)(v6 + 88) )
      {
        v22 = *(_DWORD *)(v6 + 112) - v21;
        *(_DWORD *)(v6 + 108) = 1;
        *(_DWORD *)(v7 + 308) = v22;
      }
      else
      {
        if ( *((_BYTE *)a1 + 11) == 28 )
          *(_DWORD *)(v6 + 108) = 28;
        *(_DWORD *)(v7 + 308) = *(_DWORD *)(v6 + 112) - v21;
      }
    }
    else
    {
      *(_DWORD *)(v7 + 308) = 0;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 88), *(_BYTE *)(v7 + 96));
    v17 = *(volatile signed __int32 **)(v7 + 56);
    _m_prefetchw((const void *)(v17 + 8));
    if ( (_InterlockedOr(v17 + 8, 0x10u) & 0x10) != 0 )
    {
      v18 = "Received duplicate Stopped Transfer Events";
      goto LABEL_30;
    }
    _m_prefetchw((const void *)(v17 + 8));
    if ( (_InterlockedXor(v17 + 8, 8u) & 8) == 0 )
      return v3;
    v19 = (void *)(v17 + 68);
LABEL_44:
    ESM_AddEvent(v19);
    return v3;
  }
  *(_BYTE *)(v7 + 96) = KeAcquireSpinLockRaiseToDpc(v20);
  ++*(_DWORD *)(v6 + 116);
  if ( v5 )
  {
    v23 = *(_DWORD *)(v6 + 96) == 3;
    *(_DWORD *)(v6 + 108) = *((unsigned __int8 *)a1 + 11);
    if ( !v23 && *(_DWORD *)(v6 + 100) != 3 )
      Control_Transfer_CompleteCancelable((_QWORD *)v7);
  }
  v24 = *(_DWORD *)(v7 + 308);
  if ( v24 )
  {
    v25 = v24 - 1;
    *(_DWORD *)(v7 + 308) = v25;
    if ( !v25 )
      v4 = (*(_BYTE *)(v7 + 304) & 4) != 0;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 88), *(_BYTE *)(v7 + 96));
  if ( v4 )
  {
    v26 = *(_QWORD *)(v7 + 56);
    if ( !*(_BYTE *)(v26 + 37)
      || (v27 = *(_QWORD *)(v26 + 136),
          _InterlockedIncrement((volatile signed __int32 *)(v27 + 20)) == *(_DWORD *)(v27 + 8)) )
    {
      v19 = (void *)(v26 + 272);
      goto LABEL_44;
    }
  }
  return v3;
}
