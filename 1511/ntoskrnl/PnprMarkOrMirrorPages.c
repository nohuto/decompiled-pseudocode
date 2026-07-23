/*
 * XREFs of PnprMarkOrMirrorPages @ 0x1403AFFA8
 * Callers:
 *     PnprMirrorPhysicalMemory @ 0x1401C0F74 (PnprMirrorPhysicalMemory.c)
 *     PnprRecopyAddress @ 0x1401C1130 (PnprRecopyAddress.c)
 *     PnprRecopyMappingReserve @ 0x1401C1180 (PnprRecopyMappingReserve.c)
 * Callees:
 *     RtlClearBits @ 0x14003B430 (RtlClearBits.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall PnprMarkOrMirrorPages(__int64 a1, __int64 a2, char a3)
{
  SIZE_T v4; // rcx
  unsigned __int64 v6; // r14
  SIZE_T v7; // rax
  unsigned __int64 v8; // r15
  _RTL_BITMAP *v9; // rsi
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rdi
  int v13; // eax
  int v14; // eax
  int v15; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v4 = PnprContext;
  v6 = a1 >> 12;
  v7 = PnprContext + 152;
  v8 = v6 + (a2 >> 12) - 1;
  v9 = *(_RTL_BITMAP **)(PnprContext + 152);
  while ( v9 != (_RTL_BITMAP *)v7 )
  {
    v10 = *(_QWORD *)&v9[1].SizeOfBitMap;
    v11 = (unsigned __int64)v9[1].Buffer + v10 - 1;
    if ( v8 < v10 )
      break;
    v12 = *(_QWORD *)&v9[1].SizeOfBitMap;
    if ( v6 > v10 )
      v12 = v6;
    if ( v8 < v11 )
      v11 = v8;
    if ( v12 <= v11 )
    {
      if ( a3 )
      {
        v13 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64))(v4 + 10688))(
                *(_QWORD *)(v4 + 10640),
                v12 << 12,
                (v11 << 12) - (v12 << 12) + 4096);
        v4 = PnprContext;
        if ( v13 < 0 )
        {
          v14 = *(_DWORD *)(PnprContext + 10744);
          if ( !v14 )
            v14 = 3407;
          *(_DWORD *)(PnprContext + 10744) = v14;
          v15 = *(_DWORD *)(v4 + 10748);
          if ( !v15 )
            v15 = 8;
          *(_DWORD *)(v4 + 10748) = v15;
        }
      }
      else
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 168), &LockHandle);
        RtlClearBits(v9 + 2, v12 - v10, v11 - v12 + 1);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v4 = PnprContext;
      }
    }
    v9 = *(_RTL_BITMAP **)&v9->SizeOfBitMap;
    v7 = v4 + 152;
  }
  return 0LL;
}
