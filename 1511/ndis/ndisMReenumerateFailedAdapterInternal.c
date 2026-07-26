/*
 * XREFs of ndisMReenumerateFailedAdapterInternal @ 0x1C005EBEC
 * Callers:
 *     ndisQueuedReenumerateFailedAdapter @ 0x1C00CE6E0 (ndisQueuedReenumerateFailedAdapter.c)
 * Callees:
 *     ndisLogMiniportEvent @ 0x1C00194EC (ndisLogMiniportEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     ndisCancelOidRequestInternal @ 0x1C0040DEC (ndisCancelOidRequestInternal.c)
 */

void __fastcall ndisMReenumerateFailedAdapterInternal(__int64 a1)
{
  __int64 v1; // r14
  KSPIN_LOCK *v2; // rdi
  KIRQL v4; // al
  int v5; // ecx
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rax
  KIRQL v10; // al

  v1 = *(_QWORD *)(a1 + 4096);
  v2 = (KSPIN_LOCK *)(a1 + 96);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v5 = *(_DWORD *)(a1 + 124);
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 1641690;
  *(_DWORD *)(a1 + 1856) = 0;
  if ( (v5 & 0x100) != 0 )
  {
    KeReleaseSpinLock(v2, v4);
  }
  else
  {
    *(_DWORD *)(a1 + 4484) |= 4u;
    *(_DWORD *)(a1 + 124) = v5 | 0x100;
    KeReleaseSpinLock(v2, v4);
    if ( (unsigned __int8)byte_1C0083718 >= 2u )
      WPP_SF_q(0x44u, &WPP_8f6d621b9670942a7823ab6ddc5f2e50_Traceguids, a1);
    ndisLogMiniportEvent(a1, *(_WORD *)(v1 + 1460));
    v6 = MEMORY[0xFFFFF78000000008];
    v7 = *(unsigned __int8 *)(v1 + 1488);
    v8 = *(_QWORD *)(v1 + 8 * v7 + 1464);
    *(_QWORD *)(v1 + 8 * v7 + 1464) = MEMORY[0xFFFFF78000000008];
    v9 = *(unsigned __int16 *)(v1 + 1460);
    *(_BYTE *)(v1 + 1488) = (*(unsigned __int8 *)(v1 + 1488) + 1) % 3;
    DbgkWerCaptureLiveKernelDump(
      L"NDIS",
      350LL,
      1LL,
      a1,
      *(_QWORD *)(a1 + 3888),
      v9,
      a1,
      ndisFailedAdapterLiveDumpCallback,
      0);
    if ( (*(_DWORD *)(a1 + 124) & 0x100000) != 0 )
      NT_ASSERT(
        "*** An NDIS miniport driver has encountered a fatal error
    This is NOT a break in NDIS.sys
    The most commo"
        "n causes of these types of breaks are hung/unresponsive miniport firmware,
    failed power transitions, or fail"
        "ing MiniportRestart.
");
    ndisCancelOidRequestInternal(a1, 0LL, 0LL, 1u);
    if ( v8 && (unsigned __int64)(v6 - v8) <= 0x23C34600 )
    {
      v10 = KeAcquireSpinLockRaiseToDpc(v2);
      *(_DWORD *)(a1 + 4484) &= ~4u;
      *(_QWORD *)(a1 + 520) = 0LL;
      *(_DWORD *)(a1 + 1856) = 0;
      KeReleaseSpinLock(v2, v10);
      IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(a1 + 3888));
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)(a1 + 4144) + 32LL))(
        *(_QWORD *)(*(_QWORD *)(a1 + 4144) + 8LL),
        1LL,
        0LL);
    }
  }
}
