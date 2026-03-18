/*
 * XREFs of VfPutDmaAdapter @ 0x14073C9BC
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ViFlushZeroMapRegisterBaseWcbs @ 0x14025A6B4 (ViFlushZeroMapRegisterBaseWcbs.c)
 *     VfReportIssueWithOptions @ 0x14025B0C0 (VfReportIssueWithOptions.c)
 *     VF_ASSERT_MAX_IRQL @ 0x14073A5A0 (VF_ASSERT_MAX_IRQL.c)
 *     ViGetRealDmaOperation @ 0x14073E5E4 (ViGetRealDmaOperation.c)
 *     ViHalPreprocessOptions @ 0x14073E7D0 (ViHalPreprocessOptions.c)
 *     ViReleaseDmaAdapter @ 0x14073F00C (ViReleaseDmaAdapter.c)
 */

__int64 __fastcall VfPutDmaAdapter(__int64 a1)
{
  __int64 result; // rax
  __int64 (__fastcall *v3)(__int64); // rsi
  unsigned __int8 CurrentIrql; // bp
  ULONG_PTR i; // rbx
  ULONG_PTR v6; // rcx
  ULONG_PTR *v7; // rax
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  VF_ASSERT_MAX_IRQL();
  result = ViGetRealDmaOperation(a1, 8LL);
  v3 = (__int64 (__fastcall *)(__int64))result;
  if ( result )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)&Lock);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)&Lock, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&Lock);
    }
    for ( i = ViAdapterList; ; i = *(_QWORD *)i )
    {
      if ( &ViAdapterList == (ULONG_PTR *)i )
        goto LABEL_31;
      if ( a1 == *(_QWORD *)(i + 16) )
        break;
    }
    if ( _InterlockedDecrement((volatile signed __int32 *)(i + 36)) < 0 )
    {
      ViHalPreprocessOptions(
        byte_140323178,
        "Driver has attempted to access an adapter (%p) that has already been released.",
        (const void *)0x18);
      VfReportIssueWithOptions(230, 24, a1, i, 0LL, byte_140323178);
    }
    ViFlushZeroMapRegisterBaseWcbs(i);
    if ( *(_DWORD *)(i + 180) != *(_DWORD *)(i + 184) )
    {
      ViHalPreprocessOptions(
        byte_140323170,
        "Cannot put adapter %p until all adapter channels are freed (%x left).",
        (const void *)8,
        a1);
      VfReportIssueWithOptions(230, 8, a1, *(_DWORD *)(i + 180) - *(_DWORD *)(i + 184), i, byte_140323170);
    }
    if ( *(_DWORD *)(i + 172) != *(_DWORD *)(i + 176) )
    {
      ViHalPreprocessOptions(
        byte_14032316C,
        "Cannot put adapter %p until all common buffers are freed (%x left).",
        (const void *)7,
        a1);
      VfReportIssueWithOptions(230, 7, a1, *(_DWORD *)(i + 172) - *(_DWORD *)(i + 176), i, byte_14032316C);
    }
    if ( *(_DWORD *)(i + 160) )
    {
      ViHalPreprocessOptions(
        byte_140323164,
        "Cannot put adapter %p until all map registers are freed (%x left).",
        (const void *)9,
        a1);
      VfReportIssueWithOptions(230, 9, a1, *(_DWORD *)(i + 160), i, byte_140323164);
    }
    if ( *(_DWORD *)(i + 168) )
    {
      ViHalPreprocessOptions(
        byte_140323168,
        "Cannot put adapter %p until all scatter gather lists are freed (%x left).",
        (const void *)0xA,
        a1);
      VfReportIssueWithOptions(230, 10, a1, *(_DWORD *)(i + 168), i, byte_140323168);
    }
    if ( !*(_QWORD *)(i + 24) )
    {
      v6 = *(_QWORD *)i;
      v7 = *(ULONG_PTR **)(i + 8);
      if ( *(_QWORD *)(*(_QWORD *)i + 8LL) != i || *v7 != i )
        __fastfail(3u);
LABEL_28:
      *v7 = v6;
      *(_QWORD *)(v6 + 8) = v7;
      goto LABEL_31;
    }
    if ( *(_BYTE *)(i + 34) )
    {
      v6 = *(_QWORD *)i;
      v7 = *(ULONG_PTR **)(i + 8);
      if ( *(_QWORD *)(*(_QWORD *)i + 8LL) != i || *v7 != i )
        __fastfail(3u);
      goto LABEL_28;
    }
    i = 0LL;
LABEL_31:
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)&Lock, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)&Lock, 0LL);
    __writecr8(CurrentIrql);
    if ( i )
      ViReleaseDmaAdapter(i);
    return v3(a1);
  }
  return result;
}
