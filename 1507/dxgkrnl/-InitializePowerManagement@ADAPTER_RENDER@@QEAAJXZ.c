/*
 * XREFs of ?InitializePowerManagement@ADAPTER_RENDER@@QEAAJXZ @ 0x1C01269B4
 * Callers:
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C00C0304 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002434 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 */

__int64 __fastcall ADAPTER_RENDER::InitializePowerManagement(ADAPTER_RENDER *this)
{
  __int64 v1; // r15
  int DriverVersion; // eax
  void (__fastcall *v4)(__int64, __int64, __int64); // rcx
  bool v5; // cc
  __int64 v6; // rax
  unsigned int v7; // r12d
  __int64 v8; // rbx
  unsigned int v9; // r14d
  __int64 v10; // rdi
  __int64 v11; // r10
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 (__fastcall *v16)(__int64, _QWORD, __int64, __int64, __int64); // rax
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v21; // [rsp+20h] [rbp-50h]
  _QWORD v22[8]; // [rsp+30h] [rbp-40h] BYREF
  char v23; // [rsp+A0h] [rbp+30h] BYREF

  v1 = *((_QWORD *)this + 2);
  memset(v22, 0, sizeof(v22));
  v22[6] = *(_QWORD *)(v1 + 176);
  v22[1] = DxgSetPowerComponentActiveNoWaitCB;
  v22[0] = &DxgSetPowerComponentActiveCBInternal;
  v22[2] = DxgSetPowerComponentIdleCBInternal;
  v22[3] = DxgkLatencyToleranceTimerNotification;
  LODWORD(v22[7]) = *(_DWORD *)(v1 + 2440);
  v22[5] = DxgkNotifyMemorySegmentHasData;
  DriverVersion = DXGADAPTER::GetDriverVersion((DXGADAPTER *)v1);
  v4 = (void (__fastcall *)(__int64, __int64, __int64))v22[4];
  v5 = DriverVersion < 1300;
  v6 = *((_QWORD *)this + 47);
  if ( !v5 )
    v4 = DxgNotifyVSyncCB;
  v22[4] = v4;
  (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)(v6 + 8) + 688LL))(*((_QWORD *)this + 48), v22);
  (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)(*((_QWORD *)this + 50) + 8LL) + 712LL))(
    *((_QWORD *)this + 51),
    v22);
  v7 = *(_DWORD *)(v1 + 2152);
  LODWORD(v8) = 0;
  v9 = 0;
  if ( v7 )
  {
    v10 = 0LL;
    do
    {
      v11 = *(_QWORD *)(v1 + 2008);
      v12 = *(_DWORD *)(v10 + v11 + 208);
      if ( v12 )
      {
        if ( v12 == 2 )
        {
          v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, char *))(*(_QWORD *)(*((_QWORD *)this + 47)
                                                                                               + 8LL)
                                                                                   + 696LL))(
                  *((_QWORD *)this + 48),
                  2LL,
                  *(unsigned int *)(v10 + v11 + 212),
                  v9,
                  &v23);
          goto LABEL_14;
        }
        if ( v12 == 3 )
        {
          LODWORD(v21) = 3;
          v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(*((_QWORD *)this + 50)
                                                                                               + 8LL)
                                                                                   + 720LL))(
                  *((_QWORD *)this + 51),
                  *(unsigned __int16 *)(v10 + v11 + 6),
                  *(unsigned int *)(v10 + v11 + 212),
                  *(unsigned int *)(v10 + v11),
                  v21);
          goto LABEL_14;
        }
        if ( v12 != 4 )
          goto LABEL_15;
        v13 = 0LL;
        v15 = *(unsigned int *)(v10 + v11);
        v14 = *((_QWORD *)this + 51);
        LODWORD(v21) = 4;
        v16 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))(*(_QWORD *)(*((_QWORD *)this + 50)
                                                                                               + 8LL)
                                                                                   + 720LL);
      }
      else
      {
        v13 = *(unsigned int *)(v10 + v11 + 212);
        v14 = *((_QWORD *)this + 48);
        v21 = v10 + v11 + 358;
        v15 = v9;
        v16 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))(*(_QWORD *)(*((_QWORD *)this + 47)
                                                                                               + 8LL)
                                                                                   + 696LL);
      }
      v17 = v16(v14, 0LL, v13, v15, v21);
LABEL_14:
      v8 = v17;
      if ( v17 < 0 )
      {
        v19 = WdLogNewEntry5_WdError(v18);
        *(_QWORD *)(v19 + 24) = v8;
        WdLogEvent5_WdError(v19);
        return (unsigned int)v8;
      }
LABEL_15:
      ++v9;
      v10 += 520LL;
    }
    while ( v9 < v7 );
  }
  return (unsigned int)v8;
}
