/*
 * XREFs of ViAdapterCallback @ 0x1407084B8
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14000F024 (ExFreeToNPagedLookasideList.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     VfUtilDbgPrint @ 0x140222478 (VfUtilDbgPrint.c)
 *     ViIsActiveChannelWcb @ 0x140222ADC (ViIsActiveChannelWcb.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x140705BC0 (DECREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140705EA0 (SUBTRACT_MAP_REGISTERS.c)
 *     ViFreeMapRegisterFile @ 0x140709488 (ViFreeMapRegisterFile.c)
 */

__int64 __fastcall ViAdapterCallback(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rbx
  __int64 v6; // rsi
  __int64 v9; // rax
  __int64 v10; // r9
  unsigned int v11; // esi
  _DWORD *v13; // rdx
  KIRQL v14; // al
  __int64 v15; // r9
  _QWORD *v16; // r8

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
    v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 144));
    v15 = *((_QWORD *)a4 + 9);
    v16 = (_QWORD *)*((_QWORD *)a4 + 10);
    if ( *(_DWORD **)(v15 + 8) != a4 + 18 || (_DWORD *)*v16 != a4 + 18 )
      __fastfail(3u);
    *v16 = v15;
    *(_QWORD *)(v15 + 8) = v16;
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 144), v14);
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
