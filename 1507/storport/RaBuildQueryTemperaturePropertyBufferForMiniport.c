/*
 * XREFs of RaBuildQueryTemperaturePropertyBufferForMiniport @ 0x1C002F970
 * Callers:
 *     RaidGetStorageAdapterTemperatureProperty @ 0x1C0024148 (RaidGetStorageAdapterTemperatureProperty.c)
 *     RaUnitStorageQueryDeviceTemperaturePropertyIoctl @ 0x1C0031CAC (RaUnitStorageQueryDeviceTemperaturePropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0003BAC (RaidAllocatePool.c)
 *     memset @ 0x1C0013300 (memset.c)
 *     RtlULongAdd @ 0x1C003038C (RtlULongAdd.c)
 */

__int64 __fastcall RaBuildQueryTemperaturePropertyBufferForMiniport(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  __int64 v4; // rsi
  char *v5; // rbx
  ULONG v8; // edx
  __int64 v9; // rdi
  NTSTATUS v10; // eax
  __int64 v11; // r9
  size_t v12; // r14
  unsigned int v13; // ebp
  char *Pool; // rax
  int v15; // eax
  __int64 result; // rax
  ULONG pulResult; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0LL;
  pulResult = 0;
  v8 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( *(_DWORD *)v4 == 1 )
  {
    v9 = v4;
    v4 = *(_QWORD *)(v4 + 24);
  }
  else
  {
    v9 = 0LL;
  }
  v10 = RtlULongAdd(0x1Cu, v8, &pulResult);
  v12 = pulResult;
  v13 = v10;
  if ( v10 >= 0 )
  {
    Pool = (char *)RaidAllocatePool(NonPagedPoolNx, pulResult, 0x72536152u, v11);
    v5 = Pool;
    if ( Pool )
    {
      memset(Pool, 0, v12);
      *(_DWORD *)v5 = 28;
      *(_QWORD *)(v5 + 4) = 0x54415245504D4554LL;
      *((_DWORD *)v5 + 4) = 2954240;
      if ( v9 )
        v15 = *(_DWORD *)(v9 + 976);
      else
        v15 = *(_DWORD *)(v4 + 4204);
      *((_DWORD *)v5 + 3) = v15;
      *((_DWORD *)v5 + 6) = v12 - 28;
      *((_DWORD *)v5 + 7) = 40;
      *((_DWORD *)v5 + 8) = 40;
    }
    else
    {
      v13 = -1073741670;
    }
  }
  result = v13;
  *a3 = v5;
  *a4 = v12;
  return result;
}
