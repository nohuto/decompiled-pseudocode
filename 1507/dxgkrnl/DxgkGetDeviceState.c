/*
 * XREFs of DxgkGetDeviceState @ 0x1C00A1800
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0002474 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0002714 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C0002810 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     Template_xq @ 0x1C001B6CC (Template_xq.c)
 *     Template_pqqqqxx @ 0x1C001D580 (Template_pqqqqxx.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0094550 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?QueryLastCompletedPresentId@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z @ 0x1C0136958 (-QueryLastCompletedPresentId@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C013EFB8 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?QueryPresentStatsDWM@BLTQUEUE@@QEAAJPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z @ 0x1C015A6D4 (-QueryPresentStatsDWM@BLTQUEUE@@QEAAJPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z.c)
 */

__int64 __fastcall DxgkGetDeviceState(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcess; // rdi
  __int64 ProcessWin32Process; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KTHREAD **v10; // r8
  ULONG64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  DXGDEVICE *v16; // rdi
  volatile signed __int64 *v17; // rcx
  unsigned int v18; // esi
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // ecx
  __int64 v23; // r9
  bool v24; // al
  int v25; // ecx
  int LastCompletedPresentId; // r14d
  struct DXGADAPTER *v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rsi
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // ecx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  struct DXGDEVICE *v49; // [rsp+50h] [rbp-68h] BYREF
  struct DXGADAPTER *v50; // [rsp+58h] [rbp-60h]
  char v51; // [rsp+60h] [rbp-58h]
  unsigned int v52[4]; // [rsp+68h] [rbp-50h] BYREF
  struct _D3DKMT_PRESENT_STATS_DWM v53; // [rsp+78h] [rbp-40h] BYREF
  int v54; // [rsp+C8h] [rbp+10h] BYREF
  int v55; // [rsp+D0h] [rbp+18h]
  DXGDEVICE *v56; // [rsp+D8h] [rbp+20h] BYREF

  v55 = 2028;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2028);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( !ProcessWin32Process )
  {
    v47 = WdLogNewEntry5_WdEvent(v7, v6, v8, v9);
    *(_QWORD *)(v47 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v47);
    goto LABEL_77;
  }
  v10 = *(struct _KTHREAD ***)(ProcessWin32Process + 248);
  if ( !v10 )
  {
LABEL_77:
    v48 = WdLogNewEntry5_WdError(v7);
    LastCompletedPresentId = -1073741811;
    *(_QWORD *)(v48 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v48);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      goto LABEL_79;
    return (unsigned int)LastCompletedPresentId;
  }
  v11 = a1;
  if ( a1 >= MmUserProbeAddress )
    v11 = MmUserProbeAddress;
  *(_OWORD *)v52 = *(_OWORD *)v11;
  v53 = *(struct _D3DKMT_PRESENT_STATS_DWM *)(v11 + 16);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v49, v52[0], v10, &v56);
  v16 = v56;
  if ( !v56 )
  {
    v35 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v35 + 24) = v52[0];
    LastCompletedPresentId = -1073741811;
    *(_QWORD *)(v35 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v35);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v49);
    goto LABEL_29;
  }
  v17 = *(volatile signed __int64 **)(*((_QWORD *)v56 + 2) + 16LL);
  v50 = (struct DXGADAPTER *)v17;
  v18 = 1;
  if ( _InterlockedAdd64(v17 + 3, 1uLL) <= 0 )
  {
    v36 = WdLogNewEntry5_WdAssertion(v17, v12, v14, v15);
    *(_QWORD *)(v36 + 24) = 1050LL;
    WdLogEvent5_WdAssertion(v36);
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v50 + 104, 0LL);
  v51 = 1;
  if ( v52[1] != 1 )
  {
    switch ( v52[1] )
    {
      case 2u:
        v34 = *(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL);
        if ( *(_DWORD *)(v34 + 160) == 1 )
        {
          v39 = *((_QWORD *)v56 + 2338);
          v19 = v52[2];
          if ( !v39 || v52[2] < *(_DWORD *)(*(_QWORD *)(v39 + 1976) + 80LL) )
          {
            LastCompletedPresentId = DXGDEVICE::QueryLastCompletedPresentId(
                                       v56,
                                       v52[2],
                                       (struct _D3DKMT_PRESENT_STATS *)&v53);
            goto LABEL_16;
          }
          goto LABEL_49;
        }
        break;
      case 4u:
        if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 160LL) == 1 )
        {
          v19 = *((_QWORD *)v56 + 2338);
          if ( !v19 || (v34 = *(unsigned int *)(*(_QWORD *)(v19 + 1976) + 80LL), v52[2] < (unsigned int)v34) )
          {
            v20 = *((_QWORD *)v16 + 2);
            if ( v19 == *(_QWORD *)(v20 + 16) )
            {
              LastCompletedPresentId = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct _D3DKMT_PRESENT_STATS_DWM *))(*(_QWORD *)(*(_QWORD *)(v20 + 376) + 8LL) + 400LL))(
                                         *((_QWORD *)v56 + 68),
                                         v52[2],
                                         &v53);
              goto LABEL_16;
            }
            if ( v19 )
            {
              v19 = *(_QWORD *)(*(_QWORD *)(v19 + 1976) + 248LL);
              if ( v19 )
                LastCompletedPresentId = BLTQUEUE::QueryPresentStatsDWM(
                                           (BLTQUEUE *)(*(_QWORD *)(v19 + 8) + 2384LL * v52[2]),
                                           &v53);
              else
                LastCompletedPresentId = -1073741811;
              goto LABEL_16;
            }
LABEL_47:
            LastCompletedPresentId = -1073741811;
            goto LABEL_16;
          }
LABEL_49:
          v38 = WdLogNewEntry5_WdWarning(v34, v19, v20, v21);
          *(_QWORD *)(v38 + 24) = v52[2];
          LastCompletedPresentId = -1073741811;
          *(_QWORD *)(v38 + 32) = -1073741811LL;
          WdLogEvent5_WdWarning(v38);
          goto LABEL_16;
        }
        break;
      case 5u:
        if ( !DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)v16 + 2) + 16LL)) )
        {
          *(_QWORD *)&v52[2] = -1LL;
          v19 = 0LL;
          v53.PresentCount = 0;
          v53.PresentRefreshCount = -1;
          v53.PresentQPCTime.LowPart = 0;
          *(_QWORD *)&v53.SyncRefreshCount = 0LL;
          LastCompletedPresentId = v54;
          goto LABEL_16;
        }
        (*(void (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)(*(_QWORD *)(v37 + 376) + 8LL) + 200LL))(
          *((_QWORD *)v56 + 68),
          &v52[2]);
        break;
      default:
        goto LABEL_47;
    }
    LastCompletedPresentId = v54;
    goto LABEL_16;
  }
  v19 = 0LL;
  v22 = *((_DWORD *)v56 + 88);
  if ( v22 != 1 )
  {
    v40 = v22 - 2;
    if ( v40 )
    {
      v41 = (unsigned int)(v40 - 1);
      if ( (_DWORD)v41 )
      {
        if ( (_DWORD)v41 == 1 )
        {
LABEL_67:
          v52[2] = 4;
        }
        else
        {
          v42 = WdLogNewEntry5_WdAssertion(v41, 0LL, v20, v21);
          *(_QWORD *)(v42 + 24) = 8664LL;
          WdLogEvent5_WdAssertion(v42);
          v52[2] = 4;
          v19 = 3221225473LL;
        }
      }
      else
      {
LABEL_66:
        v52[2] = 3;
      }
      goto LABEL_15;
    }
LABEL_69:
    v18 = 2;
LABEL_14:
    v52[2] = v18;
    goto LABEL_15;
  }
  v19 = (*(unsigned int (__fastcall **)(_QWORD, int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 376LL) + 8LL)
                                                      + 192LL))(
          *((_QWORD *)v56 + 68),
          &v54);
  v24 = v54 < 0;
  v25 = v54 & 0x7FFFFFFF;
  v54 &= ~0x80000000;
  if ( (int)v19 >= 0 )
  {
    if ( v25 )
    {
      v43 = (unsigned int)(v25 - 2);
      v20 = 0x1C0000000uLL;
      switch ( (int)v43 )
      {
        case 0:
        case 9:
        case 10:
        case 11:
          v52[2] = 5;
          break;
        case 4:
          v52[2] = 6;
          break;
        case 5:
          goto LABEL_66;
        case 7:
        case 8:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
          v52[2] = 7;
          break;
        case 12:
          goto LABEL_67;
        default:
          v44 = WdLogNewEntry5_WdAssertion(v43, v19, 0x1C0000000uLL, v23);
          *(_QWORD *)(v44 + 24) = 8651LL;
          WdLogEvent5_WdAssertion(v44);
          v19 = 3221225473LL;
          v52[2] = 5;
          break;
      }
      goto LABEL_15;
    }
    if ( !v24 )
      goto LABEL_14;
    goto LABEL_69;
  }
LABEL_15:
  LastCompletedPresentId = v19;
LABEL_16:
  if ( bTracingEnabled )
  {
    v45 = v52[1] - 1;
    if ( v52[1] == 1 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_xq(v45, &DeviceStateEvent, v20, v56, v52[2]);
    }
    else if ( v52[1] == 2 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    {
      Template_pqqqqxx(
        v45,
        v19,
        v20,
        v56,
        v52[2],
        v53.PresentCount,
        v53.PresentRefreshCount,
        v53.PresentQPCTime.LowPart,
        *(_QWORD *)&v53.SyncRefreshCount,
        v53.SyncQPCTime.QuadPart);
    }
  }
  if ( LastCompletedPresentId >= 0 )
  {
    if ( a1 + 56 > MmUserProbeAddress || a1 + 56 <= a1 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_OWORD *)a1 = *(_OWORD *)v52;
    *(struct _D3DKMT_PRESENT_STATS_DWM *)(a1 + 16) = v53;
  }
  v27 = v50;
  ExReleasePushLockSharedEx((char *)v50 + 104, 0LL);
  KeLeaveCriticalRegion();
  v32 = _InterlockedDecrement64((volatile signed __int64 *)v27 + 3);
  if ( !v32 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v50 + 2), v50);
  if ( v32 < 0 )
  {
    v46 = WdLogNewEntry5_WdAssertion(v29, v28, v30, v31);
    *(_QWORD *)(v46 + 24) = 1067LL;
    WdLogEvent5_WdAssertion(v46);
  }
  if ( v49 && _InterlockedExchangeAdd64((volatile signed __int64 *)v49 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v49 + 2), v49);
LABEL_29:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
LABEL_79:
    Template_q(v29, &EventProfilerExit, v30, 2028);
  return (unsigned int)LastCompletedPresentId;
}
