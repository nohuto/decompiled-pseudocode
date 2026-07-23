/*
 * XREFs of PnprMirrorMarkedPages @ 0x1404006D8
 * Callers:
 *     PnprSwap @ 0x1401FCF70 (PnprSwap.c)
 *     PnprQuiesceProcessorDpc @ 0x140400A08 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14003E5A0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     RtlFindNextForwardRunClear @ 0x140063958 (RtlFindNextForwardRunClear.c)
 *     RtlSetBits @ 0x14008B810 (RtlSetBits.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400C8060 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     RtlFindFirstRunClear @ 0x140247454 (RtlFindFirstRunClear.c)
 */

__int64 __fastcall PnprMirrorMarkedPages()
{
  __int64 v0; // rsi
  int v1; // r14d
  SIZE_T v2; // rdx
  __int64 (__fastcall *v3)(_QWORD, _QWORD, unsigned __int64); // r13
  bool v4; // r12
  SIZE_T v5; // rax
  _RTL_BITMAP *v6; // rdi
  ULONG i; // eax
  ULONG v8; // ebp
  ULONG v9; // ebp
  ULONG v10; // ebx
  int v11; // eax
  int v12; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  ULONG StartingIndex; // [rsp+70h] [rbp+8h] BYREF

  LODWORD(v0) = KeGetPcr()->Prcb.Number;
  v1 = 0;
  v2 = PnprContext;
  if ( *(_QWORD *)(*(_QWORD *)(PnprContext + 136) + 24 * v0) )
  {
    v3 = *(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64))(PnprContext + 10688);
    v4 = (_DWORD)v0 == *(_DWORD *)(PnprContext + 180);
    do
    {
      v5 = v2 + 152;
      v6 = *(_RTL_BITMAP **)(v2 + 152);
      while ( 2 )
      {
        if ( v6 != (_RTL_BITMAP *)v5 )
        {
          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v2 + 168), &LockHandle);
          for ( i = RtlFindFirstRunClear(v6 + 2, &StartingIndex);
                ;
                i = RtlFindNextForwardRunClear(v6 + 2, v8, &StartingIndex) )
          {
            v9 = StartingIndex;
            v10 = i;
            if ( i )
            {
              if ( i >= 0x140 )
                v10 = 320;
              RtlSetBits(v6 + 2, StartingIndex, v10);
            }
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            if ( !v10 )
              break;
            v1 = v3(
                   *(_QWORD *)(PnprContext + 10640),
                   (*(_QWORD *)&v6[1].SizeOfBitMap + v9) << 12,
                   (unsigned __int64)v10 << 12);
            if ( v1 < 0 )
            {
              v2 = PnprContext;
              v11 = *(_DWORD *)(PnprContext + 10744);
              if ( !v11 )
                v11 = 3559;
              *(_DWORD *)(PnprContext + 10744) = v11;
              v12 = *(_DWORD *)(v2 + 10748);
              if ( !v12 )
                v12 = 8;
              *(_DWORD *)(v2 + 10748) = v12;
              goto LABEL_24;
            }
            v8 = v10 + v9;
            StartingIndex = v8;
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(PnprContext + 168), &LockHandle);
          }
          v2 = PnprContext;
          if ( *(_DWORD *)(PnprContext + 200) != 3 )
          {
            v6 = *(_RTL_BITMAP **)&v6->SizeOfBitMap;
            v5 = PnprContext + 152;
            continue;
          }
          v4 = 1;
        }
        break;
      }
    }
    while ( !v4 );
  }
LABEL_24:
  if ( (_DWORD)v0 != *(_DWORD *)(v2 + 180) && *(int *)(v2 + 200) < 3 )
  {
    do
      _mm_pause();
    while ( *(int *)(PnprContext + 200) < 3 );
  }
  return (unsigned int)v1;
}
