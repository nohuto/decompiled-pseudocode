/*
 * XREFs of KiBeginThreadWait @ 0x140029950
 * Callers:
 *     KeWaitForAlertByThreadId @ 0x1400297D0 (KeWaitForAlertByThreadId.c)
 *     KeWaitForGate @ 0x1400DEBE8 (KeWaitForGate.c)
 *     KiWaitForAllObjects @ 0x1400DECEC (KiWaitForAllObjects.c)
 * Callees:
 *     KiTestForAlertPending @ 0x14002A034 (KiTestForAlertPending.c)
 *     KiCheckForThreadDispatch @ 0x14002AD14 (KiCheckForThreadDispatch.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiDeliverApc @ 0x140083D40 (KiDeliverApc.c)
 */

__int64 __fastcall KiBeginThreadWait(__int64 a1, unsigned __int8 a2, char a3, unsigned __int8 a4)
{
  unsigned __int8 v4; // si
  unsigned int v9; // edi
  int v11; // [rsp+58h] [rbp+10h] BYREF

  v4 = *(_BYTE *)(a1 + 390);
  while ( 1 )
  {
    *(_DWORD *)(a1 + 116) &= ~0x10u;
    *(_BYTE *)(a1 + 112) = 0;
    *(_BYTE *)(a1 + 391) = a2;
    if ( a4 )
      *(_DWORD *)(a1 + 116) |= 0x10u;
    v11 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v11);
      while ( *(_QWORD *)(a1 + 64) );
    }
    if ( !*(_BYTE *)(a1 + 193) || *(_WORD *)(a1 + 486) || v4 )
      break;
    *(_QWORD *)(a1 + 64) = 0LL;
    __writecr8(1uLL);
    KiDeliverApc(0LL, 0LL, 0LL);
    __writecr8(2uLL);
    *(_BYTE *)(a1 + 390) = 0;
  }
  v9 = KiTestForAlertPending(a1, a4, a2, 1LL);
  if ( v9 )
  {
    *(_QWORD *)(a1 + 64) = 0LL;
    KiCheckForThreadDispatch(KeGetCurrentPrcb(), v4);
    return v9;
  }
  else
  {
    *(_BYTE *)(a1 + 388) = 5;
    *(_BYTE *)(a1 + 643) = a3;
    *(_QWORD *)(a1 + 64) = 0LL;
    *(_DWORD *)(a1 + 436) = MEMORY[0xFFFFF78000000320];
    return 0LL;
  }
}
