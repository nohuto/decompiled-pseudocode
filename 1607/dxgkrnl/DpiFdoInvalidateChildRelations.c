/*
 * XREFs of DpiFdoInvalidateChildRelations @ 0x1C00C2FD0
 * Callers:
 *     DpiGdoDispatchIoctl @ 0x1C00C4D40 (DpiGdoDispatchIoctl.c)
 *     DpiFdoSetAdapterPowerState @ 0x1C00DF6A8 (DpiFdoSetAdapterPowerState.c)
 *     DpiFdoHandleSystemPower @ 0x1C00DFB38 (DpiFdoHandleSystemPower.c)
 *     DpiFdoCreateRelatedObjects @ 0x1C00EC0D8 (DpiFdoCreateRelatedObjects.c)
 *     DpiFdoHandleQueryDeviceRelations @ 0x1C00F8690 (DpiFdoHandleQueryDeviceRelations.c)
 *     DpiPollDisplayChildren @ 0x1C0193460 (DpiPollDisplayChildren.c)
 *     DpiFdoInvalidateChildWorkItem @ 0x1C01955E0 (DpiFdoInvalidateChildWorkItem.c)
 *     DpiAcpiProcessEventRequests @ 0x1C019BD20 (DpiAcpiProcessEventRequests.c)
 * Callees:
 *     DxgkDiagCalcDuration1us @ 0x1C000BB54 (DxgkDiagCalcDuration1us.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00C0600 (DxgkWriteDiagEntry.c)
 *     DpiFdoInvalidateChildStatus @ 0x1C00C2E54 (DpiFdoInvalidateChildStatus.c)
 */

__int64 __fastcall DpiFdoInvalidateChildRelations(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r13
  NTSTATUS v5; // esi
  char v6; // r15
  char v7; // r12
  __int64 v8; // rdi
  __int64 v9; // rbx
  ULONG TimeIncrement; // eax
  int v11; // edx
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rax
  unsigned int v18; // eax
  __int64 v20; // rbx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  int v27; // [rsp+50h] [rbp-59h]
  int v28; // [rsp+54h] [rbp-55h] BYREF
  __int64 v29; // [rsp+58h] [rbp-51h]
  __int64 v30; // [rsp+60h] [rbp-49h]
  union _LARGE_INTEGER Timeout; // [rsp+68h] [rbp-41h] BYREF
  __int64 v32; // [rsp+70h] [rbp-39h] BYREF
  _QWORD v33[8]; // [rsp+80h] [rbp-29h] BYREF

  v29 = a3;
  v3 = a2;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v30 = *(_QWORD *)(a1 + 64);
  v8 = v30;
  v32 = MEMORY[0xFFFFF78000000320];
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(v30 + 3120), 1u);
  v9 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  v11 = v3 & 0xFFFFFFFE;
  v12 = TimeIncrement * v9;
  v27 = v3 & 1;
  if ( (v3 & 1) != 0 )
    --v11;
  if ( *(_DWORD *)(v30 + 3348) < v11 || v12 - *(_QWORD *)(v30 + 3352) >= 10000000 )
  {
    *(_QWORD *)(v30 + 3352) = v12;
    v20 = *(_QWORD *)(v8 + 3112);
    *(_DWORD *)(v8 + 3348) = v11;
    if ( v20 )
    {
      do
      {
        if ( !*(_DWORD *)v20 )
          break;
        v21 = DpiFdoInvalidateChildStatus(
                a1,
                *(_DWORD *)(v20 + 24),
                *(_QWORD *)(v20 + 40),
                4294967294LL,
                (v3 & 8) != 0,
                (v3 & 0x10) != 0,
                (v3 & 4) != 0,
                v27 != 0,
                &v28,
                v29);
        v5 = v21;
        if ( v21 < 0 )
          break;
        if ( v28 )
          v6 = 1;
        if ( v21 == 259 )
          v7 = 1;
        v20 += 120LL;
      }
      while ( v20 );
      v8 = v30;
    }
    ExReleaseResourceLite((PERESOURCE)(v8 + 3120));
    KeLeaveCriticalRegion();
    if ( v6 == 1 )
    {
      _m_prefetchw((const void *)(v8 + 3436));
      if ( (_InterlockedOr((volatile signed __int32 *)(v8 + 3436), 1u) & 1) == 0 )
        IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v8 + 152), BusRelations);
    }
    if ( v5 >= 0 && (v3 & 2) != 0 && v7 == 1 )
    {
      Timeout.QuadPart = -10000000LL;
      v5 = KeWaitForSingleObject((PVOID)(v8 + 3488), Executive, 0, 0, &Timeout);
      if ( v5 == 258 )
      {
        v26 = WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
        *(_QWORD *)(v26 + 24) = 258LL;
        WdLogEvent5_WdWarning(v26);
      }
    }
  }
  else
  {
    ExReleaseResourceLite((PERESOURCE)(v30 + 3120));
    KeLeaveCriticalRegion();
    v5 = 1075708985;
    v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13, v15, v16);
    v17[3] = DpiFdoInvalidateChildRelations;
    v17[4] = *(int *)(v8 + 3348);
    v17[5] = v12;
    v17[6] = v3;
    v17[7] = 1075708985LL;
  }
  memset(v33, 0, sizeof(v33));
  v18 = DxgkDiagCalcDuration1us(&v32);
  memset(&v33[1], 0, 36);
  v33[0] = 0x4000000006LL;
  LODWORD(v33[6]) = 37;
  HIDWORD(v33[6]) = v27 | a1 & 0xFFFF00;
  v33[7] = __PAIR64__(v5, v18);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v33);
  return (unsigned int)v5;
}
