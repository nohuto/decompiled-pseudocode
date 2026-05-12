/*
 * XREFs of RaBuildHwFirmwareGetInfoBufferForMiniport @ 0x1C0030804
 * Callers:
 *     RaidAdapterHwFirmwareDownloadIoctl @ 0x1C0023D6C (RaidAdapterHwFirmwareDownloadIoctl.c)
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C0023F08 (RaidAdapterHwFirmwareGetInfoIoctl.c)
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C0032244 (RaUnitHwFirmwareGetInfoIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0004A6C (RaidAllocatePool.c)
 *     memmove @ 0x1C0015B80 (memmove.c)
 *     memset @ 0x1C0015EC0 (memset.c)
 */

__int64 __fastcall RaBuildHwFirmwareGetInfoBufferForMiniport(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  __int64 v4; // rbp
  unsigned int v5; // edi
  __int64 v8; // rsi
  _DWORD *Pool; // rax
  _DWORD *v10; // rbx
  int v11; // eax
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0;
  if ( *(_DWORD *)v4 == 1 )
  {
    v8 = *(_QWORD *)(a1 + 64);
    v4 = *(_QWORD *)(v4 + 24);
  }
  else
  {
    v8 = 0LL;
  }
  Pool = RaidAllocatePool(NonPagedPoolNx, 0x110uLL, 0x72536152u, a1);
  v10 = Pool;
  if ( Pool )
  {
    memset(Pool, 0, 0x110uLL);
    *v10 = 28;
    v10[4] = 1771392;
    memmove(v10 + 1, "FIRMWARE", 8uLL);
    if ( v8 )
      v11 = *(_DWORD *)(v8 + 1000);
    else
      v11 = *(_DWORD *)(v4 + 4204);
    v10[3] = v11;
    v10[6] = 244;
    v10[7] = 1;
    v10[8] = 24;
    v10[9] = 1;
    v10[10] = v8 == 0;
    v10[11] = 56;
    v10[12] = 216;
    v10[14] = 2;
    v10[15] = 24;
  }
  else
  {
    v5 = -1073741670;
  }
  result = v5;
  *a3 = v10;
  *a4 = 272;
  return result;
}
