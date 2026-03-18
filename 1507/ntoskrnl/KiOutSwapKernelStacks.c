/*
 * XREFs of KiOutSwapKernelStacks @ 0x140123398
 * Callers:
 *     KeSwapProcessOrStack @ 0x140164CD4 (KeSwapProcessOrStack.c)
 * Callees:
 *     KiWaitForContextSwap @ 0x140021070 (KiWaitForContextSwap.c)
 *     KeEnumerateKernelStackSegments @ 0x140021604 (KeEnumerateKernelStackSegments.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     KiDecrementProcessStackCount @ 0x14009AA60 (KiDecrementProcessStackCount.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

void KiOutSwapKernelStacks()
{
  __int64 v0; // rdi
  __int64 v1; // rsi
  unsigned int v2; // r14d
  unsigned __int8 CurrentIrql; // r15
  unsigned int v4; // ebx
  _QWORD *v5; // r8
  unsigned __int64 v6; // rdx
  __int64 v7; // r9
  _QWORD *v8; // rcx
  __int64 *v9; // rsi
  __int64 v10; // rbx
  int v11; // r14d
  int v12; // [rsp+28h] [rbp-E0h] BYREF
  int v13; // [rsp+2Ch] [rbp-DCh]
  __int64 v14; // [rsp+30h] [rbp-D8h]
  __int64 v15; // [rsp+38h] [rbp-D0h]
  __int64 v16; // [rsp+40h] [rbp-C8h]
  _QWORD v17[5]; // [rsp+E8h] [rbp-20h] BYREF

  v0 = 0LL;
  v1 = KiProcessorBlock[KiLastProcessor];
  v2 = MEMORY[0xFFFFF78000000320] - KiStackProtectTime;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v4 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 22672), 0LL) )
  {
    do
    {
      if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v4);
    }
    while ( *(_QWORD *)(v1 + 22672) );
  }
  v5 = *(_QWORD **)(v1 + 22656);
  while ( v5 != (_QWORD *)(v1 + 22656) )
  {
    if ( (unsigned int)v0 >= 5 )
      break;
    v6 = (unsigned __int64)(v5 - 27);
    v5 = (_QWORD *)*v5;
    if ( v2 < *(_DWORD *)(v6 + 436) )
      break;
    if ( *(char *)(v6 + 195) >= 25 )
    {
      v7 = *(_QWORD *)(v6 + 216);
      v8 = *(_QWORD **)(v6 + 224);
      if ( *(_QWORD *)(v7 + 8) != v6 + 216 || *v8 != v6 + 216 )
        __fastfail(3u);
    }
    else
    {
      _interlockedbittestandreset((volatile signed __int32 *)(v6 + 120), 0x10u);
      if ( _interlockedbittestandset((volatile signed __int32 *)(v6 + 120), 0x12u) )
        v17[v0] = v6 | 1;
      else
        v17[v0] = v6;
      v0 = (unsigned int)(v0 + 1);
      v7 = *(_QWORD *)(v6 + 216);
      v8 = *(_QWORD **)(v6 + 224);
      if ( *(_QWORD *)(v7 + 8) != v6 + 216 || *v8 != v6 + 216 )
        __fastfail(3u);
    }
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    *(_QWORD *)(v6 + 712) = 0LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v1 + 22672), 0LL);
  __writecr8(CurrentIrql);
  if ( ++KiLastProcessor == (_DWORD)KeNumberProcessors_0 )
    KiLastProcessor = 0;
  if ( (_DWORD)v0 )
  {
    v9 = &v17[v0];
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
      if ( (MiFlags & 0x40) != 0 )
      {
        v12 = 0;
        v15 = 0LL;
        v16 = 0LL;
        LOWORD(v13) = 0;
        v14 = 20LL;
        KeEnumerateKernelStackSegments(
          v10,
          (__int64 (__fastcall *)(__int64, _OWORD *, __int64))MiOutPageSingleKernelStack,
          (__int64)&v12);
        MiFlushTbList((__int64)&v12);
      }
    }
    while ( (_DWORD)v0 );
  }
}
