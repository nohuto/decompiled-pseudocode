/*
 * XREFs of ?SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@@Z @ 0x1C0180200
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     DxgkPowerOnOffMonitor @ 0x1C00E047C (DxgkPowerOnOffMonitor.c)
 *     LPMSetTTMDisplayPowerState @ 0x1C016B648 (LPMSetTTMDisplayPowerState.c)
 *     ?DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@E@Z @ 0x1C019948C (-DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@E@Z.c)
 */

__int64 __fastcall CTTMDEVICE::SetDisplayStateCallback(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rax
  int v6; // eax
  __int64 v7; // rdx
  char v8; // r12
  struct _DEVICE_OBJECT *v9; // r14
  __int64 v10; // r15
  struct _ERESOURCE *v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rdi
  __int64 v15; // rax
  int *v16; // r8
  _QWORD *OutputBufferLength; // rax
  int v18; // eax
  struct _ERESOURCE *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdi
  _QWORD *v22; // rax
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rdx
  int v28; // [rsp+38h] [rbp-69h] BYREF
  int v29; // [rsp+3Ch] [rbp-65h] BYREF
  _QWORD v30[8]; // [rsp+48h] [rbp-59h] BYREF
  _QWORD v31[8]; // [rsp+88h] [rbp-19h] BYREF

  v2 = a2;
  if ( !a1 )
  {
    v4 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v4 + 24) = 4205LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 48)) )
    return 3221226166LL;
  v6 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 624), 1u);
  v7 = (unsigned int)(v6 >> 31);
  LODWORD(v7) = v6 % 32;
  *(_DWORD *)(a1 + 8 * v7 + 628) = v2;
  *(_DWORD *)(a1 + 8LL * (unsigned int)(v6 % 32) + 632) = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1 + 888, 0LL);
  *(_QWORD *)(a1 + 896) = KeGetCurrentThread();
  v8 = *(_BYTE *)(a1 + 904);
  v9 = *(struct _DEVICE_OBJECT **)(a1 + 72);
  v10 = *(unsigned int *)(a1 + 80);
  *(_DWORD *)(a1 + 908) = v2;
  if ( !v8 )
    ObfReferenceObject(v9);
  *(_QWORD *)(a1 + 896) = 0LL;
  ExReleasePushLockExclusiveEx(a1 + 888, 0LL);
  KeLeaveCriticalRegion();
  if ( v8 )
    return 3221226166LL;
  if ( (*(_DWORD *)(a1 + 84) & 1) != 0 && (v2 & 0xFFFFFFFC) == 0 && (_DWORD)v2 != 1 )
  {
    v13 = LPMSetTTMDisplayPowerState(v2, v11);
    v14 = v13;
    if ( v13 < 0 )
    {
      v15 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v15 + 24) = v2;
      *(_QWORD *)(v15 + 32) = v14;
      WdLogEvent5_WdError(v15);
    }
  }
  if ( (int)v2 < 0 )
    goto LABEL_23;
  if ( (int)v2 <= 1 )
  {
    memset(v31, 0, sizeof(v31));
    EtwActivityIdControl(3u, (LPGUID)&v31[1]);
    v16 = &v29;
    v31[7] = MEMORY[0xFFFFF78000000014];
    OutputBufferLength = v31;
    LODWORD(v31[3]) = 54;
    v29 = 4;
    goto LABEL_18;
  }
  if ( (_DWORD)v2 == 2 )
  {
    v18 = DpiBrightnessNotifyMonitorDimming(v9, 1u);
    goto LABEL_19;
  }
  if ( (_DWORD)v2 != 3 )
  {
LABEL_23:
    LODWORD(v21) = -1073741811;
    v22 = (_QWORD *)WdLogNewEntry5_WdError(v12);
    v22[3] = v2;
    v22[4] = -1073741811LL;
    goto LABEL_24;
  }
  memset(v30, 0, sizeof(v30));
  EtwActivityIdControl(3u, (LPGUID)&v30[1]);
  v16 = &v28;
  v30[7] = MEMORY[0xFFFFF78000000014];
  OutputBufferLength = v30;
  LODWORD(v30[3]) = 55;
  v28 = 1;
LABEL_18:
  v18 = DxgkPowerOnOffMonitor((__int64)v9, v10, (DWORD *)v16, 0, (__int64)OutputBufferLength);
LABEL_19:
  v21 = v18;
  if ( v18 >= 0 )
    goto LABEL_25;
  v22 = (_QWORD *)WdLogNewEntry5_WdError(v20);
  v22[3] = v10;
  v22[4] = v9;
  v22[5] = v21;
LABEL_24:
  WdLogEvent5_WdError(v22);
LABEL_25:
  if ( (*(_DWORD *)(a1 + 84) & 1) != 0 && (_DWORD)v2 == 1 )
  {
    v23 = LPMSetTTMDisplayPowerState(1, v19);
    v21 = v23;
    if ( v23 < 0 )
    {
      v25 = WdLogNewEntry5_WdError(v24);
      *(_QWORD *)(v25 + 24) = 1LL;
      *(_QWORD *)(v25 + 32) = v21;
      WdLogEvent5_WdError(v25);
    }
  }
  v26 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 624), 1u);
  v27 = (unsigned int)(v26 >> 31);
  LODWORD(v27) = v26 % 32;
  *(_DWORD *)(a1 + 8 * v27 + 628) = v2 | 0x80000000;
  *(_DWORD *)(a1 + 8LL * (unsigned int)(v26 % 32) + 632) = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 48));
  ObfDereferenceObject(v9);
  return (unsigned int)v21;
}
