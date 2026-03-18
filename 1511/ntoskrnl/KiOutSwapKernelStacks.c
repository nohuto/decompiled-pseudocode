/*
 * XREFs of KiOutSwapKernelStacks @ 0x1400E8164
 * Callers:
 *     KeSwapProcessOrStack @ 0x140136234 (KeSwapProcessOrStack.c)
 * Callees:
 *     KeEnumerateKernelStackSegments @ 0x14002BF20 (KeEnumerateKernelStackSegments.c)
 *     KiDecrementProcessStackCount @ 0x14002DAC8 (KiDecrementProcessStackCount.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     KiWaitForContextSwap @ 0x14007BE78 (KiWaitForContextSwap.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KeQueryActiveProcessorCountEx @ 0x14009DBD0 (KeQueryActiveProcessorCountEx.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

void __fastcall KiOutSwapKernelStacks(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  unsigned int v5; // esi
  unsigned __int8 CurrentIrql; // r14
  _QWORD *v7; // r8
  unsigned __int64 v8; // rdx
  __int64 v9; // r9
  _QWORD *v10; // rcx
  __int64 *v11; // rsi
  __int64 v12; // rbx
  int v13; // r14d
  _KPROCESS *v14; // rdx
  int v15[4]; // [rsp+28h] [rbp-E0h] BYREF
  int v16; // [rsp+38h] [rbp-D0h] BYREF
  int v17; // [rsp+3Ch] [rbp-CCh]
  __int64 v18; // [rsp+40h] [rbp-C8h]
  __int64 v19; // [rsp+48h] [rbp-C0h]
  __int64 v20; // [rsp+50h] [rbp-B8h]
  _QWORD v21[5]; // [rsp+F8h] [rbp-10h] BYREF

  v3 = 0LL;
  v4 = KiProcessorBlock[KiLastProcessor];
  v5 = MEMORY[0xFFFFF78000000320] - KiStackProtectTime;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v15[0] = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 22672), 0LL) )
  {
    do
      KeYieldProcessorEx(v15, a2, a3);
    while ( *(_QWORD *)(v4 + 22672) );
  }
  v7 = *(_QWORD **)(v4 + 22656);
  while ( v7 != (_QWORD *)(v4 + 22656) )
  {
    if ( (unsigned int)v3 >= 5 )
      break;
    v8 = (unsigned __int64)(v7 - 27);
    v7 = (_QWORD *)*v7;
    if ( v5 < *(_DWORD *)(v8 + 436) )
      break;
    if ( *(char *)(v8 + 195) >= 25 )
    {
      v9 = *(_QWORD *)(v8 + 216);
      v10 = *(_QWORD **)(v8 + 224);
      if ( *(_QWORD *)(v9 + 8) != v8 + 216 || *v10 != v8 + 216 )
        __fastfail(3u);
    }
    else
    {
      _interlockedbittestandreset((volatile signed __int32 *)(v8 + 120), 0x10u);
      if ( _interlockedbittestandset((volatile signed __int32 *)(v8 + 120), 0x12u) )
        v21[v3] = v8 | 1;
      else
        v21[v3] = v8;
      v3 = (unsigned int)(v3 + 1);
      v9 = *(_QWORD *)(v8 + 216);
      v10 = *(_QWORD **)(v8 + 224);
      if ( *(_QWORD *)(v9 + 8) != v8 + 216 || *v10 != v8 + 216 )
        __fastfail(3u);
    }
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    *(_QWORD *)(v8 + 712) = 0LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 22672), 0LL);
  __writecr8(CurrentIrql);
  ++KiLastProcessor;
  if ( KiLastProcessor == KeQueryActiveProcessorCountEx(0xFFFFu) )
    KiLastProcessor = 0;
  if ( (_DWORD)v3 )
  {
    v11 = &v21[v3];
    do
    {
      --v11;
      LODWORD(v3) = v3 - 1;
      v12 = *v11;
      if ( (*v11 & 1) != 0 )
      {
        v12 &= ~1uLL;
        v13 = 0;
      }
      else
      {
        v13 = 1;
      }
      KiWaitForContextSwap(v12);
      if ( v13 )
        KiDecrementProcessStackCount(*(_QWORD *)(v12 + 184));
      if ( (MiFlags & 0x40) != 0 )
      {
        v16 = 0;
        v19 = 0LL;
        v20 = 0LL;
        LOWORD(v17) = 0;
        v18 = 20LL;
        KeEnumerateKernelStackSegments(
          v12,
          (__int64 (__fastcall *)(__int64, _OWORD *, __int64))MiOutPageSingleKernelStack,
          (__int64)&v16);
        MiFlushTbList((__int64)&v16, v14);
      }
    }
    while ( (_DWORD)v3 );
  }
}
