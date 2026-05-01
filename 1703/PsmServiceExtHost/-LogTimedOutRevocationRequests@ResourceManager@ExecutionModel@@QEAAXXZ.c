/*
 * XREFs of ?LogTimedOutRevocationRequests@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x18000D830
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x18001C580 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

void __fastcall ExecutionModel::ResourceManager::LogTimedOutRevocationRequests(ExecutionModel::ResourceManager *this)
{
  _QWORD *v1; // rsi
  DWORD TickCount; // eax
  const struct _TlgProvider_t *v3; // rcx
  _QWORD *v4; // rbx
  DWORD v5; // ebp
  __int64 v6; // rdi
  const GUID *v7; // r8
  const GUID *v8; // r9
  int v9; // [rsp+30h] [rbp-A8h] BYREF
  int v10; // [rsp+34h] [rbp-A4h] BYREF
  int v11; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v12; // [rsp+40h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-88h] BYREF
  __int64 *v14; // [rsp+70h] [rbp-68h]
  __int64 v15; // [rsp+78h] [rbp-60h]
  int *v16; // [rsp+80h] [rbp-58h]
  __int64 v17; // [rsp+88h] [rbp-50h]
  int *v18; // [rsp+90h] [rbp-48h]
  __int64 v19; // [rsp+98h] [rbp-40h]
  int *v20; // [rsp+A0h] [rbp-38h]
  __int64 v21; // [rsp+A8h] [rbp-30h]

  v1 = (_QWORD *)(*((_QWORD *)this + 13) + 160LL);
  TickCount = GetTickCount();
  v4 = (_QWORD *)*v1;
  v5 = TickCount;
  while ( v4 != v1 )
  {
    v6 = v4[2];
    if ( (*(_BYTE *)(v6 + 1356) & 1) != 0
      && *(_DWORD *)(v6 + 1352)
      && (*(_BYTE *)(v6 + 1404) & 8) == 0
      && v5 - *(_DWORD *)(v6 + 1860) >= 0x2710 )
    {
      if ( (unsigned int)dword_18004D030 > 4 )
      {
        if ( TlgKeywordOn(v3, 0x400000000009uLL) )
        {
          v12 = *(_QWORD *)(v6 + 1840);
          v14 = &v12;
          v9 = *(_DWORD *)(v6 + 1408);
          v16 = &v9;
          v10 = *(_DWORD *)(v6 + 1424);
          v18 = &v10;
          v11 = *(_DWORD *)(v6 + 136);
          v20 = &v11;
          v15 = 8LL;
          v17 = 4LL;
          v19 = 4LL;
          v21 = 4LL;
          TlgWrite(v3, &unk_18003FDDF, v7, v8, 6u, &pData);
        }
      }
      *(_DWORD *)(v6 + 1404) |= 8u;
    }
    v4 = (_QWORD *)*v4;
  }
}
