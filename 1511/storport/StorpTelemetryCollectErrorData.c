/*
 * XREFs of StorpTelemetryCollectErrorData @ 0x1C0039D28
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C00016A0 (RaidUnitCompleteRequest.c)
 * Callees:
 *     memset @ 0x1C0015EC0 (memset.c)
 *     StorpAreTelemetryErrorsEqual @ 0x1C0038398 (StorpAreTelemetryErrorsEqual.c)
 *     StorpTelemetryConstructErrorEntry @ 0x1C0039F10 (StorpTelemetryConstructErrorEntry.c)
 */

__int64 __fastcall StorpTelemetryCollectErrorData(__int64 a1, int a2, int a3, int a4)
{
  int v5; // eax
  __int128 v6; // xmm2
  __int128 v7; // xmm3
  double v8; // xmm4_8
  __int128 v9; // xmm1
  __int64 v10; // xmm0_8
  int v11; // ebx
  unsigned int v12; // ebx
  __int64 v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // rcx
  unsigned __int8 v16; // bl
  __int64 v17; // rsi
  __int64 v18; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-49h] BYREF
  _BYTE v21[40]; // [rsp+48h] [rbp-31h] BYREF
  __int128 v22; // [rsp+70h] [rbp-9h]
  __int128 v23; // [rsp+80h] [rbp+7h]
  _BYTE v24[48]; // [rsp+90h] [rbp+17h] BYREF
  double v25; // [rsp+E0h] [rbp+67h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v21, 0, sizeof(v21));
  StorpTelemetryConstructErrorEntry(a1, a2, a3, a4, v21);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1856), &LockHandle);
  v5 = *(_DWORD *)(a1 + 1864);
  v6 = *(_OWORD *)(a1 + 1872);
  v7 = *(_OWORD *)(a1 + 1888);
  v22 = v6;
  v25 = *(double *)(a1 + 1904);
  v8 = v25;
  v23 = v7;
  v9 = *(_OWORD *)&v21[16];
  *(_OWORD *)(a1 + 1872) = *(_OWORD *)v21;
  v10 = *(_QWORD *)&v21[32];
  *(_OWORD *)(a1 + 1888) = v9;
  *(_QWORD *)(a1 + 1904) = v10;
  if ( v5 != -1 )
    *(_DWORD *)(a1 + 1864) = v5 + 1;
  v11 = *(_DWORD *)(a1 + 1864);
  if ( ((v11 + 1) & 0xFFFFFFFD) != 0 )
  {
    v12 = v11 - 1;
    if ( v12 > 0xA )
    {
      v14 = rand();
      v6 = v22;
      v7 = v23;
      v8 = v25;
      v13 = v14 % v12;
    }
    else
    {
      v13 = v12 - 1;
    }
    if ( (unsigned int)v13 < 0xA )
    {
      v15 = 5 * v13;
      *(_OWORD *)(a1 + 8 * v15 + 1912) = v6;
      *(_OWORD *)(a1 + 8 * v15 + 1928) = v7;
      *(double *)(a1 + 8 * v15 + 1944) = v8;
    }
  }
  v16 = 0;
  while ( 1 )
  {
    v17 = a1 + 40LL * v16;
    if ( StorpAreTelemetryErrorsEqual((_BYTE *)(a1 + 1872), (_BYTE *)(v17 + 2312)) )
      break;
    memset(v24, 0, 40);
    if ( StorpAreTelemetryErrorsEqual((_BYTE *)(v17 + 2312), v24) )
    {
      v18 = 5LL * v16;
      *(_OWORD *)(a1 + 8 * v18 + 2312) = *(_OWORD *)(a1 + 1872);
      *(_OWORD *)(a1 + 8 * v18 + 2328) = *(_OWORD *)(a1 + 1888);
      *(_QWORD *)(a1 + 8 * v18 + 2344) = *(_QWORD *)(a1 + 1904);
      *(_DWORD *)(a1 + 8 * v18 + 2344) = 1;
      goto LABEL_16;
    }
    if ( ++v16 >= 5u )
      goto LABEL_16;
  }
  ++*(_DWORD *)(a1 + 40LL * v16 + 2344);
LABEL_16:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
