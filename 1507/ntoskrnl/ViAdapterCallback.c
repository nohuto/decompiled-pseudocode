/*
 * XREFs of ViAdapterCallback @ 0x14073CEBC
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140033280 (ExFreeToNPagedLookasideList.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     VfUtilDbgPrint @ 0x14025A0F4 (VfUtilDbgPrint.c)
 *     ViIsActiveChannelWcb @ 0x14025A7A8 (ViIsActiveChannelWcb.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x14073A150 (DECREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x14073A430 (SUBTRACT_MAP_REGISTERS.c)
 *     ViFreeMapRegisterFile @ 0x14073DFEC (ViFreeMapRegisterFile.c)
 */

__int64 __fastcall ViAdapterCallback(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rbx
  __int64 v6; // rsi
  __int64 v9; // rax
  __int64 v10; // r9
  unsigned int v11; // esi
  _DWORD *v13; // rdx
  volatile signed __int32 *v14; // rbx
  unsigned __int8 CurrentIrql; // bp
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((_QWORD *)a4 + 7);
  v6 = a3;
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 + 192) < 3u )
    {
      v9 = *((_QWORD *)a4 + 12);
      if ( v9 && *(_DWORD *)v9 == -1393569779 )
      {
        *(_QWORD *)(v9 + 48) = a3;
        v6 = *((_QWORD *)a4 + 12);
      }
      else if ( !a3 )
      {
        v6 = -559026163LL;
      }
    }
    if ( *(_BYTE *)(v4 + 196) )
      DECREMENT_ADAPTER_CHANNELS(v4);
  }
  v10 = *(_QWORD *)a4;
  *((_QWORD *)a4 + 11) = v6;
  v11 = (*((__int64 (__fastcall **)(__int64, __int64, __int64, __int64))a4 + 1))(a1, a2, v6, v10);
  if ( !v4 || !ViIsActiveChannelWcb(v4, (__int64)a4) )
    return v11;
  a4[13] = v11;
  if ( v11 != 1 )
  {
    if ( !*(_BYTE *)(v4 + 196) )
      DECREMENT_ADAPTER_CHANNELS(v4);
    if ( v11 == 3 )
      return 3LL;
    SUBTRACT_MAP_REGISTERS(v4, a4[12]);
    v13 = (_DWORD *)*((_QWORD *)a4 + 12);
    if ( v13 && *v13 == -1393569779 )
    {
      ViFreeMapRegisterFile(v4);
      *((_QWORD *)a4 + 12) = 0LL;
    }
    v14 = (volatile signed __int32 *)(v4 + 144);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v14);
    }
    else if ( _interlockedbittestandset64(v14, 0LL) )
    {
      KxWaitForSpinLockAndAcquire(v14);
    }
    v16 = *((_QWORD *)a4 + 9);
    v17 = (_QWORD *)*((_QWORD *)a4 + 10);
    if ( *(_DWORD **)(v16 + 8) != a4 + 18 || (_DWORD *)*v17 != a4 + 18 )
      __fastfail(3u);
    *v17 = v16;
    *(_QWORD *)(v16 + 8) = v17;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)v14, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v14, 0LL);
    __writecr8(CurrentIrql);
    ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, a4);
    return v11;
  }
  if ( *(_BYTE *)(v4 + 196) )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 184));
    VfUtilDbgPrint("Driver at address %p has a problem\n", *(const void **)(v4 + 40));
    VfUtilDbgPrint("Master devices should return DeallocateObjectKeepRegisters\n");
  }
  *(_DWORD *)(v4 + 256) = a4[12];
  return 1LL;
}
