/*
 * XREFs of DpiFdoInvalidateChildRelations @ 0x1C00C4A50
 * Callers:
 *     DpiFdoSetAdapterPowerState @ 0x1C00BBD90 (DpiFdoSetAdapterPowerState.c)
 *     DpiFdoHandleSystemPower @ 0x1C00BC1D0 (DpiFdoHandleSystemPower.c)
 *     DpiFdoCreateRelatedObjects @ 0x1C00C4630 (DpiFdoCreateRelatedObjects.c)
 *     DpiGdoDispatchIoctl @ 0x1C00C4970 (DpiGdoDispatchIoctl.c)
 *     DpiFdoHandleQueryDeviceRelations @ 0x1C00DADF0 (DpiFdoHandleQueryDeviceRelations.c)
 *     DpiPollDisplayChildren @ 0x1C0167108 (DpiPollDisplayChildren.c)
 *     DpiFdoInvalidateChildWorkItem @ 0x1C01681A0 (DpiFdoInvalidateChildWorkItem.c)
 *     DpiAcpiProcessEventRequests @ 0x1C016D870 (DpiAcpiProcessEventRequests.c)
 * Callees:
 *     ?DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z @ 0x1C0008568 (-DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT.c)
 *     DxgkDiagCalcDuration1us @ 0x1C000D114 (DxgkDiagCalcDuration1us.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C009AC30 (DxgkWriteDiagEntry.c)
 *     DpiFdoInvalidateChildStatus @ 0x1C00C4CD8 (DpiFdoInvalidateChildStatus.c)
 */

__int64 __fastcall DpiFdoInvalidateChildRelations(__int64 a1, unsigned int a2)
{
  __int64 v2; // r12
  int v3; // ebp
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
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  int v29; // [rsp+50h] [rbp-98h]
  int v30; // [rsp+54h] [rbp-94h] BYREF
  __int64 v31; // [rsp+58h] [rbp-90h]
  __int64 v32; // [rsp+60h] [rbp-88h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+68h] [rbp-80h] BYREF
  _DWORD v34[16]; // [rsp+70h] [rbp-78h] BYREF

  v2 = a2;
  v3 = a1;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v31 = *(_QWORD *)(a1 + 64);
  v7 = v31;
  v32 = MEMORY[0xFFFFF78000000320];
  KeEnterCriticalRegion();
  v8 = (struct _ERESOURCE *)(v31 + 1936);
  ExAcquireResourceExclusiveLite((PERESOURCE)(v31 + 1936), 1u);
  v9 = MEMORY[0xFFFFF78000000320];
  v10 = KeQueryTimeIncrement() * v9;
  v11 = v2 & 0xFFFFFFFE;
  v29 = v2 & 1;
  if ( (v2 & 1) != 0 )
    --v11;
  if ( *(_DWORD *)(v31 + 2164) < v11 || v10 - *(_QWORD *)(v31 + 2168) >= 10000000 )
  {
    *(_QWORD *)(v31 + 2168) = v10;
    v17 = *(_QWORD *)(v7 + 1928);
    *(_DWORD *)(v7 + 2164) = v11;
    if ( v17 )
    {
      do
      {
        if ( !*(_DWORD *)v17 )
          break;
        v18 = DpiFdoInvalidateChildStatus(
                v3,
                *(_DWORD *)(v17 + 24),
                *(_QWORD *)(v17 + 40),
                -2,
                (v2 & 8) != 0,
                (v2 & 0x10) != 0,
                (v2 & 4) != 0,
                v29 != 0,
                (__int64)&v30);
        v4 = v18;
        if ( v18 < 0 )
          break;
        if ( v30 )
          v5 = 1;
        if ( v18 == 259 )
          v6 = 1;
        v17 += 120LL;
      }
      while ( v17 );
      v7 = v31;
      v8 = (struct _ERESOURCE *)(v31 + 1936);
    }
    ExReleaseResourceLite(v8);
    KeLeaveCriticalRegion();
    if ( v5 == 1 )
    {
      _m_prefetchw((const void *)(v7 + 2252));
      if ( (_InterlockedOr((volatile signed __int32 *)(v7 + 2252), 1u) & 1) == 0 )
        IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v7 + 152), BusRelations);
    }
    if ( v4 >= 0 && (v2 & 2) != 0 && v6 == 1 )
    {
      Timeout.QuadPart = -10000000LL;
      v4 = KeWaitForSingleObject((PVOID)(v7 + 2304), Executive, 0, 0, &Timeout);
      if ( v4 == 258 )
      {
        v28 = WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
        *(_QWORD *)(v28 + 24) = DpiFdoInvalidateChildRelations;
        *(_QWORD *)(v28 + 32) = 258LL;
        WdLogEvent5_WdWarning(v28);
      }
    }
  }
  else
  {
    ExReleaseResourceLite((PERESOURCE)(v31 + 1936));
    KeLeaveCriticalRegion();
    v4 = 1075708985;
    v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
    v16[3] = DpiFdoInvalidateChildRelations;
    v16[4] = *(int *)(v7 + 2164);
    v16[5] = v10;
    v16[6] = v2;
    v16[7] = 1075708985LL;
  }
  memset(v34, 0, sizeof(v34));
  v19 = DxgkDiagCalcDuration1us(&v32);
  DxgkDiagInitializeCodePointPacket(v34, 37, v29 | v3 & 0xFFFF00, v19, v4);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v34, v20, v21, v22);
  return (unsigned int)v4;
}
