/*
 * XREFs of RaidInsertDeviceQueue @ 0x1C00021D0
 * Callers:
 *     RaidStartIoPacket @ 0x1C0001C90 (RaidStartIoPacket.c)
 * Callees:
 *     RiGetEnqueueReason @ 0x1C00030BC (RiGetEnqueueReason.c)
 *     RiPeekDeviceQueue @ 0x1C000317C (RiPeekDeviceQueue.c)
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 *     Template_pqccqqq @ 0x1C0026840 (Template_pqccqqq.c)
 */

__int64 __fastcall RaidInsertDeviceQueue(__int64 a1, __int64 a2, char a3, __int64 a4, char a5)
{
  __int64 v5; // rbx
  __int64 v8; // rdx
  KIRQL v9; // r9
  __int64 v10; // r8
  char v11; // cl
  char v12; // r15
  unsigned __int8 v13; // si
  KIRQL v15; // al
  int EnqueueReason; // eax
  KIRQL v17; // r9
  _QWORD *v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rcx
  int v21; // [rsp+50h] [rbp-48h] BYREF
  __int64 v22; // [rsp+54h] [rbp-44h]
  int v23; // [rsp+5Ch] [rbp-3Ch]

  v5 = a2 + 120;
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
  *(_BYTE *)(a2 + 142) ^= (*(_BYTE *)(a2 + 142) ^ (16 * a5)) & 0x10;
  v9 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 72));
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 76));
  if ( *(_DWORD *)(a1 + 32)
    || (v10 = *(unsigned int *)(a1 + 76), (int)v10 > *(_DWORD *)(a1 + 4))
    || *(_BYTE *)(a1 + 37) && (*(_BYTE *)(v5 + 22) & 4) == 0
    || *(_BYTE *)(a1 + 36) && (*(_BYTE *)(v5 + 22) & 2) == 0
    || *(int *)(a1 + 28) > 0
    || *(_BYTE *)(a1 + 38)
    || (*(_DWORD *)(a1 + 20) || *(_DWORD *)(a1 + 16))
    && (v19 = RiPeekDeviceQueue(a1, v8, v10), v5 != v19)
    && (*(_BYTE *)(v19 + 22) & 1) != 0
    && (*(_BYTE *)(v5 + 22) & 6) == 0
    || (v11 = *(_BYTE *)(v5 + 22), (v11 & 1) != 0) && (int)v10 >= 1
    || *(_BYTE *)(a1 + 39) && (v11 & 8) == 0
    || (v11 & 0x10) != 0
    || (v12 = 0, (v11 & 1) != 0) )
  {
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 76));
    ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 72), v9);
    v15 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    EnqueueReason = RiGetEnqueueReason(a1, v5, 0LL, v15);
    v12 = EnqueueReason;
    if ( EnqueueReason )
    {
      if ( (*(_BYTE *)(v5 + 22) & 6) != 0 )
      {
        v20 = *(_QWORD **)(a1 + 104);
        *(_QWORD *)v5 = a1 + 96;
        *(_QWORD *)(v5 + 8) = v20;
        if ( *v20 != a1 + 96 )
          __fastfail(3u);
        *v20 = v5;
        *(_QWORD *)(a1 + 104) = v5;
        ++*(_DWORD *)(a1 + 20);
      }
      else
      {
        v18 = *(_QWORD **)(a1 + 88);
        *(_QWORD *)v5 = a1 + 80;
        *(_QWORD *)(v5 + 8) = v18;
        if ( *v18 != a1 + 80 )
          __fastfail(3u);
        *v18 = v5;
        *(_QWORD *)(a1 + 88) = v5;
        ++*(_DWORD *)(a1 + 16);
      }
      if ( (*(_BYTE *)(v5 + 22) & 8) != 0 )
        ++*(_DWORD *)(a1 + 24);
      v13 = 1;
    }
    else
    {
      ++*(_DWORD *)(a1 + 76);
      v13 = 0;
      if ( (*(_BYTE *)(v5 + 22) & 1) != 0 )
        *(_BYTE *)(a1 + 38) = 1;
    }
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v17);
  }
  else
  {
    v13 = 0;
    ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 72), v9);
  }
  *(_BYTE *)(v5 + 20) = v13;
  if ( v13 )
  {
    if ( StorEtwLoggingEnabled )
    {
      v21 = 0;
      v22 = 0LL;
      v23 = 0;
      IoGetActivityIdIrp(a2, &v21);
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x800000) != 0 )
        Template_pqccqqq(
          *(_DWORD *)(a1 + 76),
          *(_DWORD *)(a1 + 16) + *(_DWORD *)(a1 + 20),
          (unsigned int)&v21,
          a1,
          ((*(_BYTE *)(v5 + 22) & 6) != 0) + 1,
          3,
          v12,
          *(_BYTE *)(a1 + 16) + *(_BYTE *)(a1 + 20),
          *(_DWORD *)(a1 + 76));
    }
  }
  return v13;
}
