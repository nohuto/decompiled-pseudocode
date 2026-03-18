/*
 * XREFs of ExpQueueWorkItemNode @ 0x14000D530
 * Callers:
 *     ExpQueueWorkItem @ 0x14000CDF0 (ExpQueueWorkItem.c)
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 * Callees:
 *     KiTryUnwaitThreadWithPriority @ 0x14000D710 (KiTryUnwaitThreadWithPriority.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

int __fastcall ExpQueueWorkItemNode(_QWORD *a1, int a2, __int64 a3, int a4)
{
  unsigned int v4; // esi
  __int64 v5; // r15
  __int64 v7; // rdi
  _QWORD *v8; // rbp
  struct _KPRCB *CurrentPrcb; // r12
  unsigned int v10; // ebx
  _KTHREAD *CurrentThread; // r13
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // eax
  _QWORD *v15; // rbx
  _QWORD *v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  _QWORD *v19; // rax
  int v20; // ecx
  int result; // eax
  char CurrentIrql; // [rsp+70h] [rbp+8h]

  v4 = 0;
  v5 = a2;
  v7 = *(_QWORD *)(a3 + 8LL * a4 + 256);
  if ( (v7 & 1) != 0 )
    v7 = 0LL;
  v8 = (_QWORD *)(v7 + 8);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v10 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  if ( _interlockedbittestandset((volatile signed __int32 *)v7, 7u) )
  {
    do
    {
      if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v10);
    }
    while ( (*(_DWORD *)v7 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v7, 7u) );
  }
  if ( *(_QWORD *)(v7 + 16) != v7 + 8
    && (CurrentThread->Queue != (_DISPATCHER_HEADER *volatile)v7 || CurrentThread->WaitReason != 15) )
  {
    v12 = 32LL;
    v13 = v7 + 664;
    while ( 1 )
    {
      v14 = *(_DWORD *)(v13 - 4);
      v13 -= 4LL;
      v4 += v14;
      --v12;
      if ( v4 >= *(_DWORD *)(v7 + 664) )
        break;
      if ( v12 <= v5 )
      {
        if ( v4 >= *(_DWORD *)(v7 + 664) )
          break;
        v15 = *(_QWORD **)(v7 + 16);
        while ( 1 )
        {
          v16 = v15;
          v15 = (_QWORD *)v15[1];
          v17 = *v16;
          if ( *(_QWORD **)(*v16 + 8LL) != v16 || (_QWORD *)*v15 != v16 )
            __fastfail(3u);
          *v15 = v17;
          *(_QWORD *)(v17 + 8) = v15;
          if ( (unsigned __int8)KiTryUnwaitThreadWithPriority(CurrentPrcb, v16, a1, (unsigned int)v5) )
            goto LABEL_26;
          if ( v15 == v8 )
            goto LABEL_22;
        }
      }
    }
  }
LABEL_22:
  ++*(_DWORD *)(v7 + 4);
  v18 = v7 + 16 * v5 + 24;
  v19 = *(_QWORD **)(v18 + 8);
  *a1 = v18;
  a1[1] = v19;
  if ( *v19 != v18 )
    __fastfail(3u);
  *v19 = a1;
  *(_QWORD *)(v18 + 8) = a1;
LABEL_26:
  _InterlockedAnd((volatile signed __int32 *)v7, 0xFFFFFF7F);
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, CurrentIrql);
  v20 = *(_DWORD *)(v7 + 704);
  result = (2 * *(_DWORD *)(v7 + 708)) >> 1;
  if ( v20 < result )
    return KeSetEvent((PRKEVENT)(a3 + 1040), 0, 0);
  if ( v20 < *(_DWORD *)(v7 + 712) && (_QWORD *)*v8 == v8 )
  {
    if ( *(_DWORD *)(v7 + 4) )
      return KeSetEvent((PRKEVENT)(a3 + 1040), 0, 0);
    result = *(_DWORD *)(v7 + 708);
    if ( result < 0 )
      return KeSetEvent((PRKEVENT)(a3 + 1040), 0, 0);
  }
  return result;
}
