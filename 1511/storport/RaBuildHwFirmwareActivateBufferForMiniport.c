/*
 * XREFs of RaBuildHwFirmwareActivateBufferForMiniport @ 0x1C0030520
 * Callers:
 *     RaidAdapterHwFirmwareActivateIoctl @ 0x1C0023C70 (RaidAdapterHwFirmwareActivateIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0004A6C (RaidAllocatePool.c)
 *     memmove @ 0x1C0015B80 (memmove.c)
 *     memset @ 0x1C0015EC0 (memset.c)
 */

__int64 __fastcall RaBuildHwFirmwareActivateBufferForMiniport(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  __int64 v4; // rbp
  unsigned int v5; // edi
  __int64 v6; // r13
  __int64 v9; // rsi
  _DWORD *Pool; // rax
  _DWORD *v11; // rbx
  int v12; // eax
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0;
  v6 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)v4 == 1 )
  {
    v9 = *(_QWORD *)(a1 + 64);
    v4 = *(_QWORD *)(v4 + 24);
  }
  else
  {
    v9 = 0LL;
  }
  Pool = RaidAllocatePool(NonPagedPoolNx, 0x44uLL, 0x72536152u, a1);
  v11 = Pool;
  if ( Pool )
  {
    memset(Pool, 0, 0x44uLL);
    *v11 = 28;
    v11[4] = 1771392;
    memmove(v11 + 1, "FIRMWARE", 8uLL);
    if ( v9 )
      v12 = *(_DWORD *)(v9 + 1000);
    else
      v12 = *(_DWORD *)(v4 + 4204);
    v11[3] = v12;
    v11[6] = 40;
    v11[7] = 1;
    v11[8] = 24;
    v11[9] = 3;
    v11[10] = v9 == 0;
    v11[12] = 12;
    v11[11] = 56;
    v11[15] = 12;
    v11[14] = 1;
    *((_BYTE *)v11 + 64) = *(_BYTE *)(v6 + 12);
    if ( *(int *)(v6 + 8) < 0 )
      v11[10] |= 0x80000000;
  }
  else
  {
    v5 = -1073741670;
  }
  result = v5;
  *a3 = v11;
  *a4 = 68;
  return result;
}
