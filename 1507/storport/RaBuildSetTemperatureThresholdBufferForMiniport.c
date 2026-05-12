/*
 * XREFs of RaBuildSetTemperatureThresholdBufferForMiniport @ 0x1C002FA6C
 * Callers:
 *     RaAdapterSetTemperatureThresholdIoctl @ 0x1C0020C30 (RaAdapterSetTemperatureThresholdIoctl.c)
 *     RaUnitSetTemperatureThresholdIoctl @ 0x1C00314F8 (RaUnitSetTemperatureThresholdIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0003BAC (RaidAllocatePool.c)
 *     memset @ 0x1C0013300 (memset.c)
 */

__int64 __fastcall RaBuildSetTemperatureThresholdBufferForMiniport(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  __int64 v4; // rbp
  unsigned int v5; // edi
  _OWORD *v6; // r12
  __int64 v9; // rsi
  char *Pool; // rax
  char *v11; // rbx
  int v12; // eax
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0;
  v6 = *(_OWORD **)(a2 + 24);
  if ( *(_DWORD *)v4 == 1 )
  {
    v9 = *(_QWORD *)(a1 + 64);
    v4 = *(_QWORD *)(v4 + 24);
  }
  else
  {
    v9 = 0LL;
  }
  Pool = (char *)RaidAllocatePool(NonPagedPoolNx, 0x2CuLL, 0x72536152u, a1);
  v11 = Pool;
  if ( Pool )
  {
    memset(Pool, 0, 0x2CuLL);
    *(_DWORD *)v11 = 28;
    *(_QWORD *)(v11 + 4) = 0x54504D4554544553LL;
    *((_DWORD *)v11 + 4) = 3002880;
    if ( v9 )
      v12 = *(_DWORD *)(v9 + 976);
    else
      v12 = *(_DWORD *)(v4 + 4204);
    *((_DWORD *)v11 + 3) = v12;
    *((_DWORD *)v11 + 6) = 16;
    *(_OWORD *)(v11 + 28) = *v6;
  }
  else
  {
    v5 = -1073741670;
  }
  result = v5;
  *a3 = v11;
  *a4 = 44;
  return result;
}
