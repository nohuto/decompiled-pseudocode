/*
 * XREFs of Control_ProcessTransferEventWithED1 @ 0x1C000D930
 * Callers:
 *     Control_EP_TransferEventHandler @ 0x1C0029800 (Control_EP_TransferEventHandler.c)
 * Callees:
 *     Endpoint_HaltedCompletionCode @ 0x1C000188C (Endpoint_HaltedCompletionCode.c)
 *     Control_Transfer_CompleteCancelable @ 0x1C00035B4 (Control_Transfer_CompleteCancelable.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0004A10 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_DDqq @ 0x1C000CF64 (WPP_RECORDER_SF_DDqq.c)
 *     WPP_RECORDER_SF_DDqLDDx @ 0x1C000D674 (WPP_RECORDER_SF_DDqLDDx.c)
 *     memmove @ 0x1C000FEC0 (memmove.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C001E910 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001F48C (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C002846C (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_DDxqq @ 0x1C002ADAC (WPP_RECORDER_SF_DDxqq.c)
 *     ESM_AddEvent @ 0x1C0039978 (ESM_AddEvent.c)
 */

__int64 __fastcall Control_ProcessTransferEventWithED1(__int64 *a1, __int64 a2)
{
  bool v2; // r15
  __int64 v3; // rsi
  unsigned __int64 v4; // rbx
  unsigned __int8 v6; // bp
  bool v7; // r12
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // rcx
  unsigned __int8 v11; // cl
  unsigned int v12; // edi
  int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // edx
  KSPIN_LOCK *v17; // rcx
  int v18; // ecx
  volatile signed __int32 *v19; // r10
  int v20; // eax
  int v21; // eax
  void *v23; // rcx
  bool v24; // zf
  __int64 v25; // r8
  const char *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // [rsp+20h] [rbp-68h]
  __int64 v30; // [rsp+28h] [rbp-60h]
  __int64 v31; // [rsp+30h] [rbp-58h]
  __int64 v32; // [rsp+40h] [rbp-48h]
  __int64 v33; // [rsp+48h] [rbp-40h]
  int v34; // [rsp+50h] [rbp-38h]
  __int64 v35; // [rsp+58h] [rbp-30h]

  v2 = 0;
  v3 = a2;
  v4 = *a1 & 0xFFFFFFFFFFFFFFF8uLL;
  v6 = 1;
  v7 = (*a1 & 4) != 0;
  if ( a2 )
  {
    v25 = *(_QWORD *)(a2 + 296);
    if ( v4 != v25 )
    {
      WPP_RECORDER_SF_DDxqq(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL), *((_WORD *)a1 + 7) & 0x1F, v25, 19);
      Controller_ReportFatalError(*(_QWORD *)(v3 + 40), 2, 4126, *(_QWORD *)(v3 + 48), *(_QWORD *)(v3 + 56), v3);
      return 0;
    }
  }
  else
  {
    v3 = *(_QWORD *)(v4 + 40);
    v8 = *(_QWORD *)(v3 + 296);
    if ( v4 != v8 )
    {
      v33 = *(_QWORD *)(v3 + 296);
      HIDWORD(v32) = (*a1 & 0xFFFFFFFFFFFFFFF8uLL) >> 32;
      WPP_RECORDER_SF_DDxqq(*(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL), *((_WORD *)a1 + 7) & 0x1F, v8, 20);
    }
  }
  v35 = *a1;
  v34 = (*((_DWORD *)a1 + 3) >> 2) & 1;
  LODWORD(v33) = a1[1] & 0xFFFFFF;
  LODWORD(v32) = *((unsigned __int8 *)a1 + 11);
  WPP_RECORDER_SF_DDqLDDx(
    *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
    *((unsigned __int8 *)a1 + 15),
    *((unsigned __int8 *)a1 + 11),
    0x15u,
    v29);
  v10 = *(_QWORD *)(v3 + 56);
  if ( (*((_WORD *)a1 + 7) & 0x1F) != *(_DWORD *)(v10 + 144) )
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v10 + 80),
      2u,
      0xDu,
      0x16u,
      (__int64)&WPP_536c295522f23df8bdaea150c8299cbf_Traceguids,
      *((unsigned __int8 *)a1 + 15),
      *((_WORD *)a1 + 7) & 0x1F,
      a1,
      v32,
      v33,
      v34,
      v35);
  v11 = *((_BYTE *)a1 + 15);
  if ( v11 != *(_BYTE *)(*(_QWORD *)(v3 + 48) + 135LL) )
  {
    LODWORD(v31) = *((_WORD *)a1 + 7) & 0x1F;
    LODWORD(v30) = v11;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
      2u,
      0xDu,
      0x17u,
      (__int64)&WPP_536c295522f23df8bdaea150c8299cbf_Traceguids,
      v30,
      v31);
  }
  v12 = a1[1] & 0xFFFFFF;
  if ( v12 > *(_DWORD *)(v4 + 88) )
  {
    v13 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 48) + 135LL);
    LOBYTE(v13) = 3;
    WPP_RECORDER_SF_DDDD(
      *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
      v13,
      13,
      24,
      (__int64)&WPP_536c295522f23df8bdaea150c8299cbf_Traceguids,
      *(_BYTE *)(*(_QWORD *)(v3 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(v3 + 56) + 144LL),
      *((_BYTE *)a1 + 8),
      *(_DWORD *)(v4 + 88));
    v12 = 0;
  }
  v14 = *(_QWORD *)(v3 + 56);
  LODWORD(v31) = *(_DWORD *)(v14 + 144);
  LODWORD(v30) = *(unsigned __int8 *)(*(_QWORD *)(v3 + 48) + 135LL);
  WPP_RECORDER_SF_DDqq(
    *(_QWORD *)(v14 + 80),
    4u,
    v9,
    0x19u,
    (__int64)&WPP_536c295522f23df8bdaea150c8299cbf_Traceguids,
    v30,
    v31,
    *(_QWORD *)(v4 + 24),
    v4);
  if ( !v7 )
  {
    v15 = *(_QWORD *)(v4 + 32);
    *(_DWORD *)(v4 + 92) = v12;
    if ( (*(_DWORD *)(v15 + 32) & 1) != 0 && *(_DWORD *)(v4 + 48) == 2 )
      memmove(*(void **)(v4 + 64), *(const void **)(*(_QWORD *)(v4 + 72) + 16LL), v12);
  }
  if ( Endpoint_HaltedCompletionCode(*((unsigned __int8 *)a1 + 11)) )
  {
    *(_DWORD *)(v4 + 108) = v16;
    v19 = *(volatile signed __int32 **)(v3 + 56);
    _m_prefetchw((const void *)(v19 + 8));
    if ( (_InterlockedOr(v19 + 8, 0x20u) & 0x20) != 0 )
    {
      v26 = "Received duplicate Transfer Event TRB with Halted Completion Code";
      goto LABEL_42;
    }
    v23 = (void *)(v19 + 68);
LABEL_32:
    ESM_AddEvent(v23);
    return v6;
  }
  v17 = (KSPIN_LOCK *)(v3 + 88);
  if ( (unsigned int)(v16 - 26) <= 2 )
  {
    *(_BYTE *)(v3 + 96) = KeAcquireSpinLockRaiseToDpc(v17);
    v18 = ++*(_DWORD *)(v4 + 116);
    if ( v7 )
    {
      if ( *(_DWORD *)(v4 + 92) == *(_DWORD *)(v4 + 88) )
      {
        *(_DWORD *)(v4 + 108) = 1;
      }
      else if ( *((_BYTE *)a1 + 11) == 28 )
      {
        *(_DWORD *)(v4 + 108) = 28;
      }
      *(_DWORD *)(v3 + 308) = *(_DWORD *)(v4 + 112) - v18;
    }
    else
    {
      *(_DWORD *)(v3 + 308) = 0;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 88), *(_BYTE *)(v3 + 96));
    v19 = *(volatile signed __int32 **)(v3 + 56);
    _m_prefetchw((const void *)(v19 + 8));
    if ( (_InterlockedOr(v19 + 8, 0x10u) & 0x10) == 0 )
    {
      _m_prefetchw((const void *)(v19 + 8));
      if ( (_InterlockedXor(v19 + 8, 8u) & 8) == 0 )
        return v6;
      v23 = (void *)(v19 + 68);
      goto LABEL_32;
    }
    v26 = "Received duplicate Stopped Transfer Events";
LABEL_42:
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD *)v19,
      *((_QWORD *)v19 + 1),
      *((_QWORD *)v19 + 3),
      0x2000000,
      (__int64)v26,
      0LL,
      0LL);
    return v6;
  }
  *(_BYTE *)(v3 + 96) = KeAcquireSpinLockRaiseToDpc(v17);
  ++*(_DWORD *)(v4 + 116);
  if ( v7 )
  {
    v24 = *(_DWORD *)(v4 + 96) == 3;
    *(_DWORD *)(v4 + 108) = *((unsigned __int8 *)a1 + 11);
    if ( !v24 && *(_DWORD *)(v4 + 100) != 3 )
      Control_Transfer_CompleteCancelable((_QWORD *)v3);
  }
  v20 = *(_DWORD *)(v3 + 308);
  if ( v20 )
  {
    v21 = v20 - 1;
    *(_DWORD *)(v3 + 308) = v21;
    if ( !v21 )
      v2 = (*(_BYTE *)(v3 + 304) & 4) != 0;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 88), *(_BYTE *)(v3 + 96));
  if ( v2 )
  {
    v27 = *(_QWORD *)(v3 + 56);
    if ( !*(_BYTE *)(v27 + 37)
      || (v28 = *(_QWORD *)(v27 + 136),
          _InterlockedIncrement((volatile signed __int32 *)(v28 + 20)) == *(_DWORD *)(v28 + 8)) )
    {
      v23 = (void *)(v27 + 272);
      goto LABEL_32;
    }
  }
  return v6;
}
