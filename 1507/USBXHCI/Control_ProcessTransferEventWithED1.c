/*
 * XREFs of Control_ProcessTransferEventWithED1 @ 0x1C0021A38
 * Callers:
 *     Control_EP_TransferEventHandler @ 0x1C0021330 (Control_EP_TransferEventHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00023E0 (WPP_RECORDER_SF_dd.c)
 *     memmove @ 0x1C0007C40 (memmove.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0014F6C (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001595C (Controller_ReportFatalError.c)
 *     Endpoint_HaltedCompletionCode @ 0x1C00186B4 (Endpoint_HaltedCompletionCode.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C001F854 (WPP_RECORDER_SF_DDDD.c)
 *     Control_Transfer_CompleteCancelable @ 0x1C0022180 (Control_Transfer_CompleteCancelable.c)
 *     WPP_RECORDER_SF_DDqLDDx @ 0x1C0023C84 (WPP_RECORDER_SF_DDqLDDx.c)
 *     WPP_RECORDER_SF_DDqq @ 0x1C0023F38 (WPP_RECORDER_SF_DDqq.c)
 *     WPP_RECORDER_SF_DDxqq @ 0x1C0024150 (WPP_RECORDER_SF_DDxqq.c)
 *     ESM_AddEvent @ 0x1C00383C8 (ESM_AddEvent.c)
 */

char __fastcall Control_ProcessTransferEventWithED1(__int64 *a1, __int64 a2)
{
  __int64 v2; // r8
  char v3; // bp
  bool v4; // r12
  bool v5; // r15
  unsigned __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v9; // rcx
  void *v10; // r8
  unsigned __int8 v11; // cl
  unsigned int v12; // ebx
  __int64 v13; // rcx
  int v14; // edx
  __int64 v15; // rax
  int v16; // edx
  __int64 v17; // r10
  const char *v18; // rax
  void *v19; // rcx
  KSPIN_LOCK *v20; // rcx
  int v21; // ecx
  bool v22; // zf
  int v23; // eax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v28; // [rsp+28h] [rbp-50h]
  __int64 v29; // [rsp+30h] [rbp-48h]
  __int64 v30; // [rsp+38h] [rbp-40h]
  __int64 v31; // [rsp+40h] [rbp-38h]
  __int64 v32; // [rsp+48h] [rbp-30h]
  int v33; // [rsp+50h] [rbp-28h]
  __int64 v34; // [rsp+58h] [rbp-20h]

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
  HIDWORD(v30) = HIDWORD(a1);
  WPP_RECORDER_SF_DDqLDDx(
    *(_QWORD *)(*(_QWORD *)(v7 + 56) + 80LL),
    *((unsigned __int8 *)a1 + 15),
    *((unsigned __int8 *)a1 + 11),
    21);
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
      a1);
    v10 = &WPP_ee7759932d876114f80ff23edcd4b288_Traceguids;
  }
  v11 = *((_BYTE *)a1 + 15);
  if ( v11 != *(_BYTE *)(*(_QWORD *)(v7 + 48) + 135LL) )
  {
    LODWORD(v29) = *((_WORD *)a1 + 7) & 0x1F;
    LODWORD(v28) = v11;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(v7 + 56) + 80LL),
      2u,
      0xDu,
      0x17u,
      (__int64)&WPP_ee7759932d876114f80ff23edcd4b288_Traceguids,
      v28,
      v29);
  }
  v12 = a1[1] & 0xFFFFFF;
  if ( v12 > *(_DWORD *)(v6 + 88) )
  {
    v13 = *(_QWORD *)(v7 + 56);
    LODWORD(v31) = *(_DWORD *)(v6 + 88);
    LODWORD(v30) = a1[1] & 0xFFFFFF;
    LODWORD(v29) = *(_DWORD *)(v13 + 144);
    LODWORD(v28) = *(unsigned __int8 *)(*(_QWORD *)(v7 + 48) + 135LL);
    WPP_RECORDER_SF_DDDD(
      *(_QWORD *)(v13 + 80),
      3u,
      0xDu,
      0x18u,
      (__int64)&WPP_ee7759932d876114f80ff23edcd4b288_Traceguids,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
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
    v17 = *(_QWORD *)(v7 + 56);
    _m_prefetchw((const void *)(v17 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v17 + 32), 0x20u) & 0x20) != 0 )
    {
      v18 = "Received duplicate Transfer Event TRB with Halted Completion Code";
LABEL_19:
      Controller_HwVerifierBreakIfEnabled(
        *(_QWORD **)v17,
        *(_QWORD *)(v17 + 8),
        *(_QWORD *)(v17 + 24),
        0x2000000LL,
        v18,
        0LL,
        0LL);
      return v3;
    }
    v19 = (void *)(v17 + 272);
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
        *(_DWORD *)(v6 + 108) = 1;
      }
      else if ( *((_BYTE *)a1 + 11) == 28 )
      {
        *(_DWORD *)(v6 + 108) = 28;
      }
      *(_DWORD *)(v7 + 308) = *(_DWORD *)(v6 + 112) - v21;
    }
    else
    {
      *(_DWORD *)(v7 + 308) = 0;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 88), *(_BYTE *)(v7 + 96));
    v17 = *(_QWORD *)(v7 + 56);
    _m_prefetchw((const void *)(v17 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v17 + 32), 0x10u) & 0x10) != 0 )
    {
      v18 = "Received duplicate Stopped Transfer Events";
      goto LABEL_19;
    }
    _m_prefetchw((const void *)(v17 + 32));
    if ( (_InterlockedXor((volatile signed __int32 *)(v17 + 32), 8u) & 8) == 0 )
      return v3;
    v19 = (void *)(v17 + 272);
LABEL_44:
    ESM_AddEvent(v19);
    return v3;
  }
  *(_BYTE *)(v7 + 96) = KeAcquireSpinLockRaiseToDpc(v20);
  ++*(_DWORD *)(v6 + 116);
  if ( v5 )
  {
    v22 = *(_DWORD *)(v6 + 96) == 3;
    *(_DWORD *)(v6 + 108) = *((unsigned __int8 *)a1 + 11);
    if ( !v22 && *(_DWORD *)(v6 + 100) != 3 )
      Control_Transfer_CompleteCancelable(v7);
  }
  v23 = *(_DWORD *)(v7 + 308);
  if ( v23 )
  {
    v24 = v23 - 1;
    *(_DWORD *)(v7 + 308) = v24;
    if ( !v24 )
      v4 = (*(_BYTE *)(v7 + 304) & 4) != 0;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 88), *(_BYTE *)(v7 + 96));
  if ( v4 )
  {
    v25 = *(_QWORD *)(v7 + 56);
    if ( !*(_BYTE *)(v25 + 37)
      || (v26 = *(_QWORD *)(v25 + 136),
          _InterlockedIncrement((volatile signed __int32 *)(v26 + 20)) == *(_DWORD *)(v26 + 8)) )
    {
      v19 = (void *)(v25 + 272);
      goto LABEL_44;
    }
  }
  return v3;
}
