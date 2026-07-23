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

__int64 __fastcall VfPutDmaAdapter(struct _LIST_ENTRY *a1)
{
  __int64 result; // rax
  __int64 (__fastcall *v3)(struct _LIST_ENTRY *); // rsi
  unsigned __int8 CurrentIrql; // bp
  struct _LIST_ENTRY *i; // rbx
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  VF_ASSERT_MAX_IRQL();
  result = ViGetRealDmaOperation(a1, 8LL);
  v3 = (__int64 (__fastcall *)(struct _LIST_ENTRY *))result;
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
    for ( i = ViAdapterList.Flink; ; i = i->Flink )
    {
      if ( &ViAdapterList == i )
        goto LABEL_31;
      if ( a1 == i[1].Flink )
        break;
    }
    if ( _InterlockedDecrement((volatile signed __int32 *)&i[2].Flink + 1) < 0 )
    {
      ViHalPreprocessOptions(
        byte_140323178,
        "Driver has attempted to access an adapter (%p) that has already been released.",
        (const void *)0x18);
      VfReportIssueWithOptions(230, 24, (int)a1, (int)i, 0LL, byte_140323178);
    }
    ViFlushZeroMapRegisterBaseWcbs((__int64)i);
    if ( HIDWORD(i[11].Flink) != LODWORD(i[11].Blink) )
    {
      ViHalPreprocessOptions(
        byte_140323170,
        "Cannot put adapter %p until all adapter channels are freed (%x left).",
        (const void *)8,
        (_DWORD)a1);
      VfReportIssueWithOptions(
        230,
        8,
        (int)a1,
        HIDWORD(i[11].Flink) - LODWORD(i[11].Blink),
        (ULONG_PTR)i,
        byte_140323170);
    }
    if ( HIDWORD(i[10].Blink) != LODWORD(i[11].Flink) )
    {
      ViHalPreprocessOptions(
        byte_14032316C,
        "Cannot put adapter %p until all common buffers are freed (%x left).",
        (const void *)7,
        (_DWORD)a1);
      VfReportIssueWithOptions(
        230,
        7,
        (int)a1,
        HIDWORD(i[10].Blink) - LODWORD(i[11].Flink),
        (ULONG_PTR)i,
        byte_14032316C);
    }
    if ( LODWORD(i[10].Flink) )
    {
      ViHalPreprocessOptions(
        byte_140323164,
        "Cannot put adapter %p until all map registers are freed (%x left).",
        (const void *)9,
        (_DWORD)a1);
      VfReportIssueWithOptions(230, 9, (int)a1, (int)i[10].Flink, (ULONG_PTR)i, byte_140323164);
    }
    if ( LODWORD(i[10].Blink) )
    {
      ViHalPreprocessOptions(
        byte_140323168,
        "Cannot put adapter %p until all scatter gather lists are freed (%x left).",
        (const void *)0xA,
        (_DWORD)a1);
      VfReportIssueWithOptions(230, 10, (int)a1, (int)i[10].Blink, (ULONG_PTR)i, byte_140323168);
    }
    if ( !i[1].Blink )
    {
      Flink = i->Flink;
      Blink = i->Blink;
      if ( i->Flink->Blink != i || Blink->Flink != i )
        __fastfail(3u);
LABEL_28:
      Blink->Flink = Flink;
      Flink->Blink = Blink;
      goto LABEL_31;
    }
    if ( BYTE2(i[2].Flink) )
    {
      Flink = i->Flink;
      Blink = i->Blink;
      if ( i->Flink->Blink != i || Blink->Flink != i )
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
      ViReleaseDmaAdapter((ULONG_PTR)i);
    return v3(a1);
  }
  return result;
}
