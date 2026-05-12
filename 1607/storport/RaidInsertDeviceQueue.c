/*
 * XREFs of RaidInsertDeviceQueue @ 0x1C00046D0
 * Callers:
 *     RaidStartIoPacket @ 0x1C0003FF0 (RaidStartIoPacket.c)
 * Callees:
 *     RiGetEnqueueReason @ 0x1C0007630 (RiGetEnqueueReason.c)
 *     RiPeekDeviceQueue @ 0x1C00076F4 (RiPeekDeviceQueue.c)
 *     RiEnqueueDeviceQueue @ 0x1C0007714 (RiEnqueueDeviceQueue.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     Template_pqccqqq @ 0x1C002BFFC (Template_pqccqqq.c)
 */

char __fastcall RaidInsertDeviceQueue(__int64 a1, __int64 a2, char a3, __int64 a4, char a5)
{
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // r8
  char v11; // cl
  char result; // al
  char v13; // r14
  KIRQL v14; // al
  int EnqueueReason; // eax
  __int64 v16; // rcx
  KIRQL v17; // r9
  char v18; // r15
  char v19; // bp
  __int64 v20; // rax
  char v21; // [rsp+50h] [rbp-48h]
  int v22; // [rsp+58h] [rbp-40h] BYREF
  __int64 v23; // [rsp+5Ch] [rbp-3Ch]
  int v24; // [rsp+64h] [rbp-34h]

  v22 = 0;
  v23 = 0LL;
  v24 = 0;
  v7 = a2 + 120;
  if ( (a3 & 2) != 0 )
    *(_BYTE *)(a2 + 142) |= 2u;
  else
    *(_BYTE *)(a2 + 142) &= ~2u;
  if ( (a3 & 4) != 0 )
    *(_BYTE *)(a2 + 142) |= 4u;
  else
    *(_BYTE *)(a2 + 142) &= ~4u;
  if ( (a3 & 1) != 0 )
    *(_BYTE *)(a2 + 142) |= 1u;
  else
    *(_BYTE *)(a2 + 142) &= ~1u;
  if ( (a3 & 8) != 0 )
    *(_BYTE *)(a2 + 142) |= 8u;
  else
    *(_BYTE *)(a2 + 142) &= ~8u;
  if ( (a3 & 0x10) != 0 )
    *(_BYTE *)(a2 + 142) |= 0x20u;
  else
    *(_BYTE *)(a2 + 142) &= ~0x20u;
  *(_BYTE *)(a2 + 142) ^= (*(_BYTE *)(a2 + 142) ^ (16 * a5)) & 0x10;
  v9 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 72));
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 76));
  if ( *(_DWORD *)(a1 + 32)
    || (v10 = *(unsigned int *)(a1 + 76), (int)v10 > *(_DWORD *)(a1 + 4))
    || *(_BYTE *)(a1 + 37) && (*(_BYTE *)(v7 + 22) & 4) == 0
    || *(_BYTE *)(a1 + 36) && (*(_BYTE *)(v7 + 22) & 2) == 0
    || *(int *)(a1 + 28) > 0
    || *(_BYTE *)(a1 + 38)
    || (*(_DWORD *)(a1 + 20) || *(_DWORD *)(a1 + 16))
    && (v20 = RiPeekDeviceQueue(a1, v8, v10, v9), v7 != v20)
    && (*(_BYTE *)(v20 + 22) & 1) != 0
    && (*(_BYTE *)(v7 + 22) & 6) == 0
    || (v11 = *(_BYTE *)(v7 + 22), (v11 & 1) != 0) && (int)v10 >= 1
    || *(_BYTE *)(a1 + 39) && (v11 & 8) == 0
    || (v11 & 0x10) != 0
    || (v11 & 1) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 76));
    ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 72), v9);
    if ( (Microsoft_Windows_StorPortEnableBits & 0x800000) != 0 )
    {
      IoGetActivityIdIrp(a2, &v22);
      v13 = ((*(_BYTE *)(v7 + 22) & 6) != 0) + 1;
    }
    else
    {
      v13 = v21;
    }
    v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    EnqueueReason = RiGetEnqueueReason(a1, v7, 0LL, v14);
    v18 = EnqueueReason;
    if ( EnqueueReason )
    {
      RiEnqueueDeviceQueue(v16, v7);
      v19 = 1;
    }
    else
    {
      ++*(_DWORD *)(a1 + 76);
      v19 = 0;
      if ( (*(_BYTE *)(v7 + 22) & 1) != 0 )
        *(_BYTE *)(a1 + 38) = 1;
    }
    *(_BYTE *)(v7 + 20) = v19;
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v17);
    if ( v19 )
    {
      if ( (Microsoft_Windows_StorPortEnableBits & 0x800000) != 0 )
        Template_pqccqqq(
          *(_DWORD *)(a1 + 76),
          *(_DWORD *)(a1 + 16) + *(_DWORD *)(a1 + 20),
          (unsigned int)&v22,
          a1,
          v13,
          3,
          v18,
          *(_BYTE *)(a1 + 16) + *(_BYTE *)(a1 + 20),
          *(_DWORD *)(a1 + 76));
    }
    return v19;
  }
  else
  {
    ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 72), v9);
    result = 0;
    *(_BYTE *)(v7 + 20) = 0;
  }
  return result;
}
