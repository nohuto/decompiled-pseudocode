/*
 * XREFs of DxgkGetDeviceState @ 0x1C00C61B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007F80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00080A0 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000911C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     Template_xq @ 0x1C001E838 (Template_xq.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0021384 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     Template_pqqqqxx @ 0x1C0022590 (Template_pqqqqxx.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00936AC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z @ 0x1C0143BF4 (-QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z.c)
 *     ?QueryLastCompletedPresentId@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z @ 0x1C015E794 (-QueryLastCompletedPresentId@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0168F1C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkGetDeviceState(ULONG64 a1, __int64 a2, __int64 a3)
{
  int LastCompletedPresentId; // edi
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KTHREAD **ProcessDxgProcess; // r8
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  ULONG64 v13; // rax
  __int64 v14; // rcx
  struct DXGDEVICE *v15; // r14
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // ebx
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  struct DXGADAPTER *v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // r8
  struct DXGDEVICE *v34[3]; // [rsp+50h] [rbp-88h] BYREF
  struct DXGADAPTER *v35; // [rsp+68h] [rbp-70h]
  char v36; // [rsp+70h] [rbp-68h]
  unsigned int v37[4]; // [rsp+78h] [rbp-60h] BYREF
  _D3DKMT_PRESENT_STATS_DWM v38; // [rsp+88h] [rbp-50h] BYREF
  int v39; // [rsp+E8h] [rbp+10h] BYREF
  int v40; // [rsp+F0h] [rbp+18h]
  struct DXGDEVICE *v41; // [rsp+F8h] [rbp+20h] BYREF

  v40 = 2028;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2028);
  LastCompletedPresentId = 0;
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct _KTHREAD **)PsGetProcessDxgProcess(CurrentProcess, v6);
  if ( !ProcessDxgProcess )
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
LABEL_6:
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v10, &EventProfilerExit, v11, 2028);
    return 3221225485LL;
  }
  v13 = a1;
  if ( a1 >= MmUserProbeAddress )
    v13 = MmUserProbeAddress;
  *(_OWORD *)v37 = *(_OWORD *)v13;
  v38 = *(_D3DKMT_PRESENT_STATS_DWM *)(v13 + 16);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v34, v37[0], ProcessDxgProcess, &v41);
  v15 = v41;
  if ( !v41 )
  {
    v16 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v16 + 24) = v37[0];
    *(_QWORD *)(v16 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v16);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v34);
    goto LABEL_6;
  }
  v35 = *(struct DXGADAPTER **)(*((_QWORD *)v41 + 2) + 16LL);
  _InterlockedIncrement64((volatile signed __int64 *)v35 + 3);
  v34[2] = (struct DXGDEVICE *)-1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v35 + 120, 0LL);
  v36 = 1;
  if ( v37[1] == 1 )
  {
    v25 = 0;
    switch ( *((_DWORD *)v41 + 94) )
    {
      case 1:
        v25 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v15 + 2) + 376LL) + 8LL)
                                                       + 192LL))(
                *((_QWORD *)v41 + 71),
                &v39);
        LOBYTE(v17) = v39 < 0;
        v27 = v39 & 0x7FFFFFFF;
        v39 &= ~0x80000000;
        if ( v25 >= 0 )
        {
          v28 = v27;
          v18 = 0x1C0000000uLL;
          switch ( v27 )
          {
            case 0:
              LOBYTE(LastCompletedPresentId) = (_BYTE)v17 != 0;
              v37[2] = LastCompletedPresentId + 1;
              goto LABEL_50;
            case 2:
            case 11:
            case 12:
            case 13:
              v37[2] = 5;
              goto LABEL_50;
            case 6:
              v37[2] = 6;
              goto LABEL_50;
            case 7:
              goto LABEL_45;
            case 9:
            case 10:
            case 15:
            case 16:
            case 17:
            case 18:
            case 19:
              v37[2] = 7;
              goto LABEL_50;
            case 14:
              goto LABEL_47;
            case 27:
              if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_4029903163_58741410_FeatureDescriptorDetails) )
                goto LABEL_47;
              goto LABEL_48;
            default:
LABEL_48:
              v29 = WdLogNewEntry5_WdAssertion(v28);
              *(_QWORD *)(v29 + 24) = 9178LL;
              WdLogEvent5_WdAssertion(v29);
              v37[2] = 5;
              break;
          }
          goto LABEL_49;
        }
        break;
      case 2:
        v37[2] = 2;
        break;
      case 3:
LABEL_45:
        v37[2] = 3;
        break;
      case 4:
LABEL_47:
        v37[2] = 4;
        break;
      default:
        v26 = WdLogNewEntry5_WdAssertion((unsigned int)(*((_DWORD *)v41 + 94) - 3));
        *(_QWORD *)(v26 + 24) = 9191LL;
        WdLogEvent5_WdAssertion(v26);
        v37[2] = 4;
LABEL_49:
        v25 = -1073741823;
        break;
    }
LABEL_50:
    LastCompletedPresentId = v25;
    goto LABEL_51;
  }
  if ( v37[1] == 2 )
  {
    v20 = *(_QWORD *)(*((_QWORD *)v15 + 2) + 16LL);
    if ( *(_DWORD *)(v20 + 176) != 1 )
    {
      LastCompletedPresentId = -1073741130;
      goto LABEL_51;
    }
    v24 = *((_QWORD *)v41 + 357);
    v22 = v37[2];
    if ( !v24 || v37[2] < *(_DWORD *)(*(_QWORD *)(v24 + 2128) + 80LL) )
    {
      LastCompletedPresentId = DXGDEVICE::QueryLastCompletedPresentId(v41, v37[2], (struct _D3DKMT_PRESENT_STATS *)&v38);
      goto LABEL_51;
    }
LABEL_26:
    v23 = WdLogNewEntry5_WdWarning(v20, v22, v18, v19);
    *(_QWORD *)(v23 + 24) = v37[2];
    *(_QWORD *)(v23 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v23);
    LastCompletedPresentId = -1073741811;
    goto LABEL_51;
  }
  if ( v37[1] != 4 )
  {
    if ( v37[1] == 5 )
    {
      if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)v15 + 2) + 16LL)) )
      {
        (*(void (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)(*(_QWORD *)(v17 + 376) + 8LL) + 200LL))(
          *((_QWORD *)v41 + 71),
          &v37[2]);
      }
      else
      {
        *(_QWORD *)&v37[2] = -1LL;
        v38.PresentCount = 0;
        v38.PresentRefreshCount = -1;
        v38.PresentQPCTime.LowPart = 0;
        *(_QWORD *)&v38.SyncRefreshCount = 0LL;
      }
    }
    else
    {
      LastCompletedPresentId = -1073741811;
    }
    goto LABEL_51;
  }
  v20 = *(_QWORD *)(*((_QWORD *)v15 + 2) + 16LL);
  if ( *(_DWORD *)(v20 + 176) == 1 )
  {
    v21 = *((_QWORD *)v41 + 357);
    v22 = v37[2];
    if ( !v21 || v37[2] < *(_DWORD *)(*(_QWORD *)(v21 + 2128) + 80LL) )
    {
      LastCompletedPresentId = DXGDEVICE::QueryLastCompletedPresentIdDWM(v41, v37[2], &v38);
      goto LABEL_51;
    }
    goto LABEL_26;
  }
  LastCompletedPresentId = -1073741130;
LABEL_51:
  if ( bTracingEnabled )
  {
    v30 = v37[1] - 1;
    if ( v37[1] == 1 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_xq(v30, &DeviceStateEvent, v18, v41, v37[2]);
    }
    else if ( v37[1] == 2 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      Template_pqqqqxx(
        v30,
        v17,
        v18,
        v41,
        v37[2],
        v38.PresentCount,
        v38.PresentRefreshCount,
        v38.PresentQPCTime.LowPart,
        *(_QWORD *)&v38.SyncRefreshCount,
        v38.SyncQPCTime.QuadPart);
    }
  }
  if ( LastCompletedPresentId >= 0 )
  {
    if ( a1 + 56 > MmUserProbeAddress || a1 + 56 <= a1 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_OWORD *)a1 = *(_OWORD *)v37;
    *(_D3DKMT_PRESENT_STATS_DWM *)(a1 + 16) = v38;
  }
  v31 = v35;
  ExReleasePushLockSharedEx((char *)v35 + 120, 0LL);
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v31 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v35 + 2), v35);
  if ( v34[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v34[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v34[0] + 2), v34[0]);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v32, &EventProfilerExit, v33, 2028);
  return (unsigned int)LastCompletedPresentId;
}
