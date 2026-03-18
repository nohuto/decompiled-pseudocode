/*
 * XREFs of ?InitializePowerManagement@ADAPTER_RENDER@@QEAAJXZ @ 0x1C012CB60
 * Callers:
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C00D88B8 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0003110 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
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
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  _QWORD v17[8]; // [rsp+40h] [rbp-40h] BYREF
  char v18; // [rsp+B0h] [rbp+30h] BYREF

  v1 = *((_QWORD *)this + 2);
  memset(v17, 0, sizeof(v17));
  v17[6] = *(_QWORD *)(v1 + 176);
  v17[1] = DxgSetPowerComponentActiveNoWaitCB;
  v17[0] = &DxgSetPowerComponentActiveCBInternal;
  v17[2] = DxgSetPowerComponentIdleCBInternal;
  v17[3] = DxgkLatencyToleranceTimerNotification;
  LODWORD(v17[7]) = *(_DWORD *)(v1 + 2456);
  v17[5] = DxgkNotifyMemorySegmentHasData;
  DriverVersion = DXGADAPTER::GetDriverVersion((DXGADAPTER *)v1);
  v4 = (void (__fastcall *)(__int64, __int64, __int64))v17[4];
  v5 = DriverVersion < 1300;
  v6 = *((_QWORD *)this + 50);
  if ( !v5 )
    v4 = DxgNotifyVSyncCB;
  v17[4] = v4;
  (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)(v6 + 8) + 688LL))(*((_QWORD *)this + 51), v17);
  (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)(*((_QWORD *)this + 53) + 8LL) + 712LL))(
    *((_QWORD *)this + 54),
    v17);
  v7 = *(_DWORD *)(v1 + 2168);
  LODWORD(v8) = 0;
  v9 = 0;
  if ( v7 )
  {
    v10 = 0LL;
    do
    {
      v11 = *(_QWORD *)(v1 + 2024);
      v12 = *(_DWORD *)(v10 + v11 + 208);
      if ( v12 )
      {
        switch ( v12 )
        {
          case 2:
            v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, unsigned int, char *))(*(_QWORD *)(*((_QWORD *)this + 50) + 8LL) + 696LL))(
                    *((_QWORD *)this + 51),
                    2LL,
                    0LL,
                    *(unsigned int *)(v10 + v11 + 212),
                    v9,
                    &v18);
            break;
          case 3:
            v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)(*((_QWORD *)this + 53)
                                                                                             + 8LL)
                                                                                 + 720LL))(
                    *((_QWORD *)this + 54),
                    *(unsigned __int16 *)(v10 + v11 + 6),
                    *(unsigned int *)(v10 + v11 + 212),
                    *(unsigned int *)(v10 + v11),
                    3);
            break;
          case 4:
            v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)(*((_QWORD *)this + 53)
                                                                                             + 8LL)
                                                                                 + 720LL))(
                    *((_QWORD *)this + 54),
                    0LL,
                    0LL,
                    *(unsigned int *)(v10 + v11),
                    4);
            break;
          default:
            goto LABEL_15;
        }
      }
      else
      {
        v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, unsigned int, __int64))(*(_QWORD *)(*((_QWORD *)this + 50) + 8LL)
                                                                                               + 696LL))(
                *((_QWORD *)this + 51),
                0LL,
                *(unsigned __int16 *)(v10 + v11 + 6),
                *(unsigned int *)(v10 + v11 + 212),
                v9,
                v10 + v11 + 358);
      }
      v8 = v13;
      if ( v13 < 0 )
      {
        v15 = WdLogNewEntry5_WdError(v14);
        *(_QWORD *)(v15 + 24) = v8;
        WdLogEvent5_WdError(v15);
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
