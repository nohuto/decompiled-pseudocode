/*
 * XREFs of VfPutDmaAdapter @ 0x14070804C
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 *     ViFlushZeroMapRegisterBaseWcbs @ 0x140222BFC (ViFlushZeroMapRegisterBaseWcbs.c)
 *     VfReportIssueWithOptions @ 0x140223544 (VfReportIssueWithOptions.c)
 *     VF_ASSERT_MAX_IRQL @ 0x140705FE0 (VF_ASSERT_MAX_IRQL.c)
 *     ViGetRealDmaOperation @ 0x140709924 (ViGetRealDmaOperation.c)
 *     ViHalPreprocessOptions @ 0x140709ABC (ViHalPreprocessOptions.c)
 *     ViReleaseDmaAdapter @ 0x14070A24C (ViReleaseDmaAdapter.c)
 */

__int64 __fastcall VfPutDmaAdapter(__int64 a1)
{
  __int64 result; // rax
  __int64 (__fastcall *v3)(__int64); // rsi
  KIRQL v4; // al
  ULONG_PTR v5; // rbx
  KIRQL v6; // bp
  ULONG_PTR v7; // rcx
  ULONG_PTR *v8; // rax

  VF_ASSERT_MAX_IRQL();
  result = ViGetRealDmaOperation(a1, 8LL);
  v3 = (__int64 (__fastcall *)(__int64))result;
  if ( result )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&Lock);
    v5 = ViAdapterList;
    v6 = v4;
    while ( 1 )
    {
      if ( &ViAdapterList == (ULONG_PTR *)v5 )
        goto LABEL_27;
      if ( a1 == *(_QWORD *)(v5 + 16) )
        break;
      v5 = *(_QWORD *)v5;
    }
    if ( _InterlockedDecrement((volatile signed __int32 *)(v5 + 36)) < 0 )
    {
      ViHalPreprocessOptions(
        byte_1402F99AC,
        "Driver has attempted to access an adapter (%p) that has already been released.",
        (const void *)0x18);
      VfReportIssueWithOptions(230, 24, a1, v5, 0LL, byte_1402F99AC);
    }
    ViFlushZeroMapRegisterBaseWcbs(v5);
    if ( *(_DWORD *)(v5 + 180) != *(_DWORD *)(v5 + 184) )
    {
      ViHalPreprocessOptions(
        byte_1402F99B0,
        "Cannot put adapter %p until all adapter channels are freed (%x left).",
        (const void *)8,
        a1);
      VfReportIssueWithOptions(230, 8, a1, *(_DWORD *)(v5 + 180) - *(_DWORD *)(v5 + 184), v5, byte_1402F99B0);
    }
    if ( *(_DWORD *)(v5 + 172) != *(_DWORD *)(v5 + 176) )
    {
      ViHalPreprocessOptions(
        byte_1402F99A4,
        "Cannot put adapter %p until all common buffers are freed (%x left).",
        (const void *)7,
        a1);
      VfReportIssueWithOptions(230, 7, a1, *(_DWORD *)(v5 + 172) - *(_DWORD *)(v5 + 176), v5, byte_1402F99A4);
    }
    if ( *(_DWORD *)(v5 + 160) )
    {
      ViHalPreprocessOptions(
        byte_1402F99A8,
        "Cannot put adapter %p until all map registers are freed (%x left).",
        (const void *)9,
        a1);
      VfReportIssueWithOptions(230, 9, a1, *(_DWORD *)(v5 + 160), v5, byte_1402F99A8);
    }
    if ( *(_DWORD *)(v5 + 168) )
    {
      ViHalPreprocessOptions(
        byte_1402F99A0,
        "Cannot put adapter %p until all scatter gather lists are freed (%x left).",
        (const void *)0xA,
        a1);
      VfReportIssueWithOptions(230, 10, a1, *(_DWORD *)(v5 + 168), v5, byte_1402F99A0);
    }
    if ( !*(_QWORD *)(v5 + 24) )
    {
      v7 = *(_QWORD *)v5;
      v8 = *(ULONG_PTR **)(v5 + 8);
      if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 || *v8 != v5 )
        __fastfail(3u);
LABEL_24:
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      goto LABEL_27;
    }
    if ( *(_BYTE *)(v5 + 34) )
    {
      v7 = *(_QWORD *)v5;
      v8 = *(ULONG_PTR **)(v5 + 8);
      if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 || *v8 != v5 )
        __fastfail(3u);
      goto LABEL_24;
    }
    v5 = 0LL;
LABEL_27:
    KeReleaseSpinLock(&Lock, v6);
    if ( v5 )
      ViReleaseDmaAdapter(v5);
    return v3(a1);
  }
  return result;
}
