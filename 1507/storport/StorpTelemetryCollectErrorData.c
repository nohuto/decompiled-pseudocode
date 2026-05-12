/*
 * XREFs of StorpTelemetryCollectErrorData @ 0x1C0037E98
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0002480 (RaidUnitCompleteRequest.c)
 * Callees:
 *     StorpAreTelemetryErrorsEqual @ 0x1C0036538 (StorpAreTelemetryErrorsEqual.c)
 *     StorpTelemetryConstructErrorEntry @ 0x1C0038048 (StorpTelemetryConstructErrorEntry.c)
 */

__int64 __fastcall StorpTelemetryCollectErrorData(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  __int128 v5; // xmm2
  __int128 v6; // xmm3
  __int128 v7; // xmm1
  int v8; // edi
  unsigned int v9; // edi
  unsigned int v10; // edx
  __int64 v11; // rax
  unsigned __int8 v12; // r8
  char v13; // al
  unsigned __int8 v14; // r8
  __int64 v15; // r9
  int v16; // r10d
  char v17; // al
  unsigned __int8 v18; // r8
  int v19; // r10d
  __int64 v20; // rax
  _BYTE v22[17]; // [rsp+38h] [rbp-9h] BYREF
  __int64 v23; // [rsp+49h] [rbp+8h]
  int v24; // [rsp+51h] [rbp+10h]
  __int16 v25; // [rsp+55h] [rbp+14h]
  char v26; // [rsp+57h] [rbp+16h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp+17h] BYREF
  _OWORD v28[2]; // [rsp+70h] [rbp+2Fh] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v28, 0, sizeof(v28));
  StorpTelemetryConstructErrorEntry(a1, a2, a3, v28);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1792), &LockHandle);
  v4 = *(_DWORD *)(a1 + 1800);
  v5 = *(_OWORD *)(a1 + 1808);
  v6 = *(_OWORD *)(a1 + 1824);
  *(_OWORD *)v22 = v6;
  v7 = v28[1];
  *(_OWORD *)(a1 + 1808) = v28[0];
  *(_OWORD *)(a1 + 1824) = v7;
  if ( v4 != -1 )
    *(_DWORD *)(a1 + 1800) = v4 + 1;
  v8 = *(_DWORD *)(a1 + 1800);
  if ( ((v8 + 1) & 0xFFFFFFFD) != 0 )
  {
    v9 = v8 - 1;
    if ( v9 > 0xA )
    {
      v6 = *(_OWORD *)v22;
      v10 = rand() % v9;
    }
    else
    {
      v10 = v9 - 1;
    }
    if ( v10 < 0xA )
    {
      v11 = 32LL * v10;
      *(_OWORD *)(v11 + a1 + 1840) = v5;
      *(_OWORD *)(v11 + a1 + 1856) = v6;
    }
  }
  v12 = 0;
  while ( 1 )
  {
    v13 = StorpAreTelemetryErrorsEqual((_BYTE *)(a1 + 1808), (_BYTE *)(32LL * v12 + a1 + 2160));
    if ( v13 == (_BYTE)v16 )
      break;
    memset(v22, 0, sizeof(v22));
    v23 = 0LL;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v17 = StorpAreTelemetryErrorsEqual((_BYTE *)(v15 + a1 + 2160), v22);
    if ( v17 == (_BYTE)v19 )
    {
      v20 = 32LL * v18;
      *(_OWORD *)(v20 + a1 + 2160) = *(_OWORD *)(a1 + 1808);
      *(_OWORD *)(v20 + a1 + 2176) = *(_OWORD *)(a1 + 1824);
      *(_DWORD *)(v20 + a1 + 2184) = v19;
      goto LABEL_16;
    }
    v12 = v19 + v18;
    if ( v12 >= 5u )
      goto LABEL_16;
  }
  *(_DWORD *)(32LL * v14 + a1 + 2184) += v16;
LABEL_16:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
