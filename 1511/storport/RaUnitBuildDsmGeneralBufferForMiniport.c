/*
 * XREFs of RaUnitBuildDsmGeneralBufferForMiniport @ 0x1C0031BDC
 * Callers:
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C00530FC (RaUnitStorageDataSetManagementIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0004A6C (RaidAllocatePool.c)
 *     memmove @ 0x1C0015B80 (memmove.c)
 *     memset @ 0x1C0015EC0 (memset.c)
 */

__int64 __fastcall RaUnitBuildDsmGeneralBufferForMiniport(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  __int64 v4; // rbp
  unsigned int v5; // ebx
  const void *v7; // r13
  _DWORD *v9; // rsi
  unsigned __int64 v10; // rdi
  _DWORD *Pool; // rax
  __int64 result; // rax

  v4 = *(_QWORD *)(a2 + 184);
  v5 = 0;
  v7 = *(const void **)(a2 + 24);
  v9 = 0LL;
  LODWORD(v10) = 0;
  if ( *(_BYTE *)(a2 + 64) )
  {
    v5 = -1073741637;
  }
  else
  {
    v10 = *(unsigned int *)(v4 + 16) + 32LL;
    if ( v10 <= 0xFFFFFFFF )
    {
      Pool = RaidAllocatePool(NonPagedPoolNx, (unsigned int)v10, 0x72536152u, *(_QWORD *)(a1 + 8));
      v9 = Pool;
      if ( Pool )
      {
        memset(Pool, 0, (unsigned int)v10);
        v9[4] = 1771297;
        memmove(v9 + 1, "MPDSMGEN", 8uLL);
        *v9 = 28;
        v9[6] = v10 - 28;
        v9[5] = 0;
        memmove(v9 + 8, v7, *(unsigned int *)(v4 + 16));
      }
      else
      {
        v5 = -1073741670;
      }
    }
    else
    {
      v5 = -1073741811;
    }
  }
  result = v5;
  *a3 = v9;
  *a4 = v10;
  return result;
}
