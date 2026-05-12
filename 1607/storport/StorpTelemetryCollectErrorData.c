/*
 * XREFs of StorpTelemetryCollectErrorData @ 0x1C0007970
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0006180 (RaidUnitCompleteRequest.c)
 * Callees:
 *     StorpAreTelemetryErrorsEqual @ 0x1C0007B78 (StorpAreTelemetryErrorsEqual.c)
 *     StorpTelemetryConstructErrorEntry @ 0x1C0007BA4 (StorpTelemetryConstructErrorEntry.c)
 *     memset @ 0x1C001AD80 (memset.c)
 */

__int64 __fastcall StorpTelemetryCollectErrorData(__int64 a1, int a2, int a3, int a4)
{
  unsigned __int8 v4; // r15
  int v9; // eax
  __int128 v10; // xmm2
  __int128 v11; // xmm3
  double v12; // xmm4_8
  __int128 v13; // xmm1
  __int64 v14; // xmm0_8
  int v15; // edi
  unsigned int v16; // edi
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v21; // rcx
  __int64 v22; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-49h] BYREF
  __int128 v24; // [rsp+50h] [rbp-31h]
  __int128 v25; // [rsp+60h] [rbp-21h]
  _BYTE v26[40]; // [rsp+70h] [rbp-11h] BYREF
  _BYTE v27[48]; // [rsp+98h] [rbp+17h] BYREF
  double v28; // [rsp+E8h] [rbp+67h]

  v4 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v26, 0, sizeof(v26));
  StorpTelemetryConstructErrorEntry(a1, a2, a3, a4, v26);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1880), &LockHandle);
  v9 = *(_DWORD *)(a1 + 1888);
  v10 = *(_OWORD *)(a1 + 1896);
  v11 = *(_OWORD *)(a1 + 1912);
  v24 = v10;
  v28 = *(double *)(a1 + 1928);
  v12 = v28;
  v25 = v11;
  v13 = *(_OWORD *)&v26[16];
  *(_OWORD *)(a1 + 1896) = *(_OWORD *)v26;
  v14 = *(_QWORD *)&v26[32];
  *(_OWORD *)(a1 + 1912) = v13;
  *(_QWORD *)(a1 + 1928) = v14;
  if ( v9 != -1 )
    *(_DWORD *)(a1 + 1888) = v9 + 1;
  v15 = *(_DWORD *)(a1 + 1888);
  if ( ((v15 + 1) & 0xFFFFFFFD) != 0 )
  {
    v16 = v15 - 1;
    if ( v16 <= 0xA )
    {
      v18 = v16 - 1;
    }
    else
    {
      v17 = rand();
      v10 = v24;
      v11 = v25;
      v12 = v28;
      v18 = v17 % v16;
    }
    if ( (unsigned int)v18 < 0xA )
    {
      v21 = 5 * v18;
      *(_OWORD *)(a1 + 8 * v21 + 1936) = v10;
      *(_OWORD *)(a1 + 8 * v21 + 1952) = v11;
      *(double *)(a1 + 8 * v21 + 1968) = v12;
    }
  }
  while ( 1 )
  {
    v19 = a1 + 40LL * v4;
    if ( (unsigned __int8)StorpAreTelemetryErrorsEqual(a1 + 1896, v19 + 2336) == 1 )
    {
      ++*(_DWORD *)(a1 + 40LL * v4 + 2368);
      goto LABEL_10;
    }
    memset(v27, 0, 0x28uLL);
    if ( (unsigned __int8)StorpAreTelemetryErrorsEqual(v19 + 2336, v27) == 1 )
      break;
    if ( ++v4 >= 5u )
      goto LABEL_10;
  }
  v22 = 5LL * v4;
  *(_OWORD *)(a1 + 8 * v22 + 2336) = *(_OWORD *)(a1 + 1896);
  *(_OWORD *)(a1 + 8 * v22 + 2352) = *(_OWORD *)(a1 + 1912);
  *(_QWORD *)(a1 + 8 * v22 + 2368) = *(_QWORD *)(a1 + 1928);
  *(_DWORD *)(a1 + 8 * v22 + 2368) = 1;
LABEL_10:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
