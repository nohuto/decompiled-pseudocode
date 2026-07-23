/*
 * XREFs of VfPutDmaAdapter @ 0x14070807C
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ViFlushZeroMapRegisterBaseWcbs @ 0x140222A28 (ViFlushZeroMapRegisterBaseWcbs.c)
 *     VfReportIssueWithOptions @ 0x140223370 (VfReportIssueWithOptions.c)
 *     VF_ASSERT_MAX_IRQL @ 0x140706010 (VF_ASSERT_MAX_IRQL.c)
 *     ViGetRealDmaOperation @ 0x140709954 (ViGetRealDmaOperation.c)
 *     ViHalPreprocessOptions @ 0x140709AEC (ViHalPreprocessOptions.c)
 *     ViReleaseDmaAdapter @ 0x14070A27C (ViReleaseDmaAdapter.c)
 */

__int64 __fastcall VfPutDmaAdapter(struct _LIST_ENTRY *a1)
{
  __int64 result; // rax
  __int64 (__fastcall *v3)(struct _LIST_ENTRY *); // rsi
  KIRQL v4; // al
  struct _LIST_ENTRY *Flink; // rbx
  KIRQL v6; // bp
  struct _LIST_ENTRY *v7; // rcx
  struct _LIST_ENTRY *Blink; // rax

  VF_ASSERT_MAX_IRQL();
  result = ViGetRealDmaOperation(a1, 8LL);
  v3 = (__int64 (__fastcall *)(struct _LIST_ENTRY *))result;
  if ( result )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&Lock);
    Flink = ViAdapterList.Flink;
    v6 = v4;
    while ( 1 )
    {
      if ( &ViAdapterList == Flink )
        goto LABEL_27;
      if ( a1 == Flink[1].Flink )
        break;
      Flink = Flink->Flink;
    }
    if ( _InterlockedDecrement((volatile signed __int32 *)&Flink[2].Flink + 1) < 0 )
    {
      ViHalPreprocessOptions(
        byte_1402F99AC,
        "Driver has attempted to access an adapter (%p) that has already been released.",
        (const void *)0x18);
      VfReportIssueWithOptions(230, 24, (int)a1, (int)Flink, 0LL, byte_1402F99AC);
    }
    ViFlushZeroMapRegisterBaseWcbs((__int64)Flink);
    if ( HIDWORD(Flink[11].Flink) != LODWORD(Flink[11].Blink) )
    {
      ViHalPreprocessOptions(
        byte_1402F99B0,
        "Cannot put adapter %p until all adapter channels are freed (%x left).",
        (const void *)8,
        (_DWORD)a1);
      VfReportIssueWithOptions(
        230,
        8,
        (int)a1,
        HIDWORD(Flink[11].Flink) - LODWORD(Flink[11].Blink),
        (ULONG_PTR)Flink,
        byte_1402F99B0);
    }
    if ( HIDWORD(Flink[10].Blink) != LODWORD(Flink[11].Flink) )
    {
      ViHalPreprocessOptions(
        byte_1402F99A4,
        "Cannot put adapter %p until all common buffers are freed (%x left).",
        (const void *)7,
        (_DWORD)a1);
      VfReportIssueWithOptions(
        230,
        7,
        (int)a1,
        HIDWORD(Flink[10].Blink) - LODWORD(Flink[11].Flink),
        (ULONG_PTR)Flink,
        byte_1402F99A4);
    }
    if ( LODWORD(Flink[10].Flink) )
    {
      ViHalPreprocessOptions(
        byte_1402F99A8,
        "Cannot put adapter %p until all map registers are freed (%x left).",
        (const void *)9,
        (_DWORD)a1);
      VfReportIssueWithOptions(230, 9, (int)a1, (int)Flink[10].Flink, (ULONG_PTR)Flink, byte_1402F99A8);
    }
    if ( LODWORD(Flink[10].Blink) )
    {
      ViHalPreprocessOptions(
        byte_1402F99A0,
        "Cannot put adapter %p until all scatter gather lists are freed (%x left).",
        (const void *)0xA,
        (_DWORD)a1);
      VfReportIssueWithOptions(230, 10, (int)a1, (int)Flink[10].Blink, (ULONG_PTR)Flink, byte_1402F99A0);
    }
    if ( !Flink[1].Blink )
    {
      v7 = Flink->Flink;
      Blink = Flink->Blink;
      if ( Flink->Flink->Blink != Flink || Blink->Flink != Flink )
        __fastfail(3u);
LABEL_24:
      Blink->Flink = v7;
      v7->Blink = Blink;
      goto LABEL_27;
    }
    if ( BYTE2(Flink[2].Flink) )
    {
      v7 = Flink->Flink;
      Blink = Flink->Blink;
      if ( Flink->Flink->Blink != Flink || Blink->Flink != Flink )
        __fastfail(3u);
      goto LABEL_24;
    }
    Flink = 0LL;
LABEL_27:
    KeReleaseSpinLock(&Lock, v6);
    if ( Flink )
      ViReleaseDmaAdapter((ULONG_PTR)Flink);
    return v3(a1);
  }
  return result;
}
