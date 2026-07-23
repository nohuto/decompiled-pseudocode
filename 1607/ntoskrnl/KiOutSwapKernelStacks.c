/*
 * XREFs of KiOutSwapKernelStacks @ 0x1400A5934
 * Callers:
 *     KeSwapProcessOrStack @ 0x14013D844 (KeSwapProcessOrStack.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiWaitForContextSwap @ 0x1400C9948 (KiWaitForContextSwap.c)
 *     KiDecrementProcessStackCount @ 0x1400CC9C0 (KiDecrementProcessStackCount.c)
 *     KeQueryActiveProcessorCountEx @ 0x1400D1ED0 (KeQueryActiveProcessorCountEx.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     KeEnumerateKernelStackSegments @ 0x1400EE9A8 (KeEnumerateKernelStackSegments.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

ULONG KiOutSwapKernelStacks()
{
  __int64 v0; // rdi
  __int64 v1; // rbx
  unsigned int v2; // esi
  unsigned __int8 CurrentIrql; // r14
  _QWORD *v4; // r8
  unsigned __int64 v5; // rdx
  __int64 v6; // r9
  _QWORD *v7; // rcx
  ULONG result; // eax
  __int64 *v9; // rsi
  __int64 v10; // rbx
  int v11; // r14d
  int v12[4]; // [rsp+28h] [rbp-E0h] BYREF
  int v13; // [rsp+38h] [rbp-D0h] BYREF
  int v14; // [rsp+3Ch] [rbp-CCh]
  __int64 v15; // [rsp+40h] [rbp-C8h]
  __int64 v16; // [rsp+48h] [rbp-C0h]
  __int64 v17; // [rsp+50h] [rbp-B8h]
  _QWORD v18[5]; // [rsp+F8h] [rbp-10h] BYREF

  v0 = 0LL;
  v1 = KiProcessorBlock[KiLastProcessor];
  v2 = MEMORY[0xFFFFF78000000320] - KiStackProtectTime;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v12[0] = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 22672), 0LL) )
  {
    do
      KeYieldProcessorEx(v12);
    while ( *(_QWORD *)(v1 + 22672) );
  }
  v4 = *(_QWORD **)(v1 + 22656);
  while ( v4 != (_QWORD *)(v1 + 22656) )
  {
    if ( (unsigned int)v0 >= 5 )
      break;
    v5 = (unsigned __int64)(v4 - 27);
    v4 = (_QWORD *)*v4;
    if ( v2 < *(_DWORD *)(v5 + 436) )
      break;
    if ( *(char *)(v5 + 195) >= 25 )
    {
      v6 = *(_QWORD *)(v5 + 216);
      v7 = *(_QWORD **)(v5 + 224);
      if ( *(_QWORD *)(v6 + 8) != v5 + 216 || *v7 != v5 + 216 )
        __fastfail(3u);
    }
    else
    {
      _interlockedbittestandreset((volatile signed __int32 *)(v5 + 120), 0x10u);
      if ( _interlockedbittestandset((volatile signed __int32 *)(v5 + 120), 0x12u) )
        v18[v0] = v5 | 1;
      else
        v18[v0] = v5;
      v0 = (unsigned int)(v0 + 1);
      v6 = *(_QWORD *)(v5 + 216);
      v7 = *(_QWORD **)(v5 + 224);
      if ( *(_QWORD *)(v6 + 8) != v5 + 216 || *v7 != v5 + 216 )
        __fastfail(3u);
    }
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    *(_QWORD *)(v5 + 712) = 0LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v1 + 22672), 0LL);
  __writecr8(CurrentIrql);
  ++KiLastProcessor;
  result = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( KiLastProcessor == result )
    KiLastProcessor = 0;
  if ( (_DWORD)v0 )
  {
    v9 = &v18[v0];
    do
    {
      --v9;
      LODWORD(v0) = v0 - 1;
      v10 = *v9;
      if ( (*v9 & 1) != 0 )
      {
        v10 &= ~1uLL;
        v11 = 0;
      }
      else
      {
        v11 = 1;
      }
      KiWaitForContextSwap(v10);
      if ( v11 )
        KiDecrementProcessStackCount(*(_QWORD *)(v10 + 184));
      result = MiFlags;
      if ( (MiFlags & 0x40) != 0 )
      {
        v13 = 0;
        LOWORD(v14) = 0;
        v16 = 0LL;
        v17 = 0LL;
        v15 = 20LL;
        KeEnumerateKernelStackSegments(v10, MiOutPageSingleKernelStack, &v13);
        result = MiFlushTbList(&v13);
      }
    }
    while ( (_DWORD)v0 );
  }
  return result;
}
