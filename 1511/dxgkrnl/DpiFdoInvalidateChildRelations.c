/*
 * XREFs of DpiFdoInvalidateChildRelations @ 0x1C00AA5F0
 * Callers:
 *     DpiGdoDispatchIoctl @ 0x1C00C47A0 (DpiGdoDispatchIoctl.c)
 *     DpiFdoSetAdapterPowerState @ 0x1C00C9E50 (DpiFdoSetAdapterPowerState.c)
 *     DpiFdoHandleSystemPower @ 0x1C00CA470 (DpiFdoHandleSystemPower.c)
 *     DpiFdoHandleQueryDeviceRelations @ 0x1C00D02D0 (DpiFdoHandleQueryDeviceRelations.c)
 *     DpiFdoCreateRelatedObjects @ 0x1C00D4150 (DpiFdoCreateRelatedObjects.c)
 *     DpiPollDisplayChildren @ 0x1C016B6D8 (DpiPollDisplayChildren.c)
 *     DpiFdoInvalidateChildWorkItem @ 0x1C016C8D0 (DpiFdoInvalidateChildWorkItem.c)
 *     DpiAcpiProcessEventRequests @ 0x1C0172080 (DpiAcpiProcessEventRequests.c)
 * Callees:
 *     ?DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z @ 0x1C000A24C (-DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT.c)
 *     DxgkDiagCalcDuration1us @ 0x1C000CF1C (DxgkDiagCalcDuration1us.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00A68F0 (DxgkWriteDiagEntry.c)
 *     DpiFdoInvalidateChildStatus @ 0x1C00AA488 (DpiFdoInvalidateChildStatus.c)
 */

__int64 __fastcall DpiFdoInvalidateChildRelations(__int64 a1, unsigned int a2)
{
  __int64 v2; // r12
  NTSTATUS v4; // esi
  char v5; // r14
  char v6; // r15
  __int64 v7; // rdi
  struct _ERESOURCE *v8; // r13
  __int64 v9; // rbx
  __int64 v10; // rbx
  int v11; // edx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rax
  __int64 v17; // rbx
  int v18; // eax
  int v19; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  union _LARGE_INTEGER *v26; // [rsp+28h] [rbp-C0h]
  int v27; // [rsp+50h] [rbp-98h]
  int v28; // [rsp+54h] [rbp-94h] BYREF
  __int64 v29; // [rsp+58h] [rbp-90h]
  __int64 v30; // [rsp+60h] [rbp-88h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+68h] [rbp-80h] BYREF
  _DWORD v32[16]; // [rsp+70h] [rbp-78h] BYREF

  v2 = a2;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v29 = *(_QWORD *)(a1 + 64);
  v7 = v29;
  v30 = MEMORY[0xFFFFF78000000320];
  KeEnterCriticalRegion();
  v8 = (struct _ERESOURCE *)(v29 + 1976);
  ExAcquireResourceExclusiveLite((PERESOURCE)(v29 + 1976), 1u);
  v9 = MEMORY[0xFFFFF78000000320];
  v10 = KeQueryTimeIncrement() * v9;
  v11 = v2 & 0xFFFFFFFE;
  v27 = v2 & 1;
  if ( (v2 & 1) != 0 )
    --v11;
  if ( *(_DWORD *)(v29 + 2204) < v11 || v10 - *(_QWORD *)(v29 + 2208) >= 10000000 )
  {
    *(_QWORD *)(v29 + 2208) = v10;
    v17 = *(_QWORD *)(v7 + 1968);
    *(_DWORD *)(v7 + 2204) = v11;
    if ( v17 )
    {
      do
      {
        if ( !*(_DWORD *)v17 )
          break;
        LOBYTE(v26) = (v2 & 0x10) != 0;
        v18 = DpiFdoInvalidateChildStatus(
                a1,
                *(_DWORD *)(v17 + 24),
                *(_QWORD *)(v17 + 40),
                4294967294LL,
                (v2 & 8) != 0,
                v26,
                (v2 & 4) != 0,
                v27 != 0,
                &v28);
        v4 = v18;
        if ( v18 < 0 )
          break;
        if ( v28 )
          v5 = 1;
        if ( v18 == 259 )
          v6 = 1;
        v17 += 120LL;
      }
      while ( v17 );
      v7 = v29;
      v8 = (struct _ERESOURCE *)(v29 + 1976);
    }
    ExReleaseResourceLite(v8);
    KeLeaveCriticalRegion();
    if ( v5 == 1 )
    {
      _m_prefetchw((const void *)(v7 + 2292));
      if ( (_InterlockedOr((volatile signed __int32 *)(v7 + 2292), 1u) & 1) == 0 )
        IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v7 + 152), BusRelations);
    }
    if ( v4 >= 0 && (v2 & 2) != 0 && v6 == 1 )
    {
      Timeout.QuadPart = -10000000LL;
      v4 = KeWaitForSingleObject((PVOID)(v7 + 2344), Executive, 0, 0, &Timeout);
      if ( v4 == 258 )
      {
        v25 = WdLogNewEntry5_WdWarning(v22, v21, v23, v24);
        *(_QWORD *)(v25 + 24) = DpiFdoInvalidateChildRelations;
        *(_QWORD *)(v25 + 32) = 258LL;
        WdLogEvent5_WdWarning(v25);
      }
    }
  }
  else
  {
    ExReleaseResourceLite((PERESOURCE)(v29 + 1976));
    KeLeaveCriticalRegion();
    v4 = 1075708985;
    v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
    v16[3] = DpiFdoInvalidateChildRelations;
    v16[4] = *(int *)(v7 + 2204);
    v16[5] = v10;
    v16[6] = v2;
    v16[7] = 1075708985LL;
  }
  memset(v32, 0, sizeof(v32));
  v19 = DxgkDiagCalcDuration1us(&v30);
  DxgkDiagInitializeCodePointPacket(v32, 37, v27 | a1 & 0xFFFF00, v19, v4);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v32);
  return (unsigned int)v4;
}
