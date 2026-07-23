/*
 * XREFs of KiBeginThreadWait @ 0x1400CE820
 * Callers:
 *     MiWaitForInPageComplete @ 0x140024D30 (MiWaitForInPageComplete.c)
 *     KeWaitForGate @ 0x140097498 (KeWaitForGate.c)
 *     KiWaitForAllObjects @ 0x14009759C (KiWaitForAllObjects.c)
 *     KeWaitForAlertByThreadId @ 0x1400CE2E8 (KeWaitForAlertByThreadId.c)
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiDeliverApc @ 0x14005D750 (KiDeliverApc.c)
 *     KiCheckForThreadDispatch @ 0x1400F07B0 (KiCheckForThreadDispatch.c)
 */

__int64 __fastcall KiBeginThreadWait(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v4; // r14
  char v5; // di
  char v6; // bp
  unsigned int v10; // edi
  int v11; // [rsp+58h] [rbp+10h] BYREF

  v4 = *(_BYTE *)(a1 + 390);
  v5 = a4;
  v6 = a3;
  while ( 1 )
  {
    *(_DWORD *)(a1 + 116) &= ~0x10u;
    *(_BYTE *)(a1 + 112) = 0;
    *(_BYTE *)(a1 + 391) = a2;
    if ( v5 )
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
    KiDeliverApc(0, 0, 0LL);
    __writecr8(2uLL);
    *(_BYTE *)(a1 + 390) = 0;
  }
  if ( !v5 )
  {
    if ( (a2 & *(_BYTE *)(a1 + 194)) == 0 )
    {
LABEL_9:
      *(_BYTE *)(a1 + 388) = 5;
      *(_BYTE *)(a1 + 643) = v6;
      *(_QWORD *)(a1 + 64) = 0LL;
      *(_DWORD *)(a1 + 436) = MEMORY[0xFFFFF78000000320];
      return 0LL;
    }
    goto LABEL_16;
  }
  if ( *(_BYTE *)((char)a2 + a1 + 114) )
  {
    *(_BYTE *)((char)a2 + a1 + 114) = 0;
    v10 = 257;
    goto LABEL_17;
  }
  if ( a2 && *(_QWORD *)(a1 + 168) != a1 + 168 )
  {
    *(_BYTE *)(a1 + 194) = 1;
LABEL_16:
    v10 = 192;
    goto LABEL_17;
  }
  if ( !*(_BYTE *)(a1 + 114) )
    goto LABEL_9;
  *(_BYTE *)(a1 + 114) = 0;
  v10 = 257;
LABEL_17:
  *(_QWORD *)(a1 + 64) = 0LL;
  KiCheckForThreadDispatch(KeGetCurrentPrcb(), v4, a3, a4);
  return v10;
}
