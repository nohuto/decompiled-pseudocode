/*
 * XREFs of DxgkGetDeviceState @ 0x1C00B1890
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0003150 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00040BC (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00041F4 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     Template_pqqqqxx @ 0x1C001D5B0 (Template_pqqqqxx.c)
 *     Template_xq @ 0x1C0027B38 (Template_xq.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C006AE24 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?QueryLastCompletedPresentId@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z @ 0x1C013B068 (-QueryLastCompletedPresentId@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0145430 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?QueryPresentStatsDWM@BLTQUEUE@@QEAAJPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z @ 0x1C015E9F8 (-QueryPresentStatsDWM@BLTQUEUE@@QEAAJPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z.c)
 */

__int64 __fastcall DxgkGetDeviceState(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcess; // rbx
  __int64 ProcessWin32Process; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KTHREAD **v10; // r8
  ULONG64 v11; // rax
  __int64 v12; // rcx
  DXGDEVICE *v13; // rdi
  __int64 v14; // rax
  int LastCompletedPresentId; // edi
  __int64 v16; // rcx
  __int64 v17; // r8
  volatile signed __int64 *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // ebx
  int v27; // ecx
  int v28; // ecx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rcx
  struct DXGADAPTER *v35; // rbx
  __int64 v36; // r14
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  struct DXGDEVICE *v41; // [rsp+50h] [rbp-68h] BYREF
  struct DXGADAPTER *v42; // [rsp+58h] [rbp-60h]
  char v43; // [rsp+60h] [rbp-58h]
  unsigned int v44[4]; // [rsp+68h] [rbp-50h] BYREF
  struct _D3DKMT_PRESENT_STATS_DWM v45; // [rsp+78h] [rbp-40h] BYREF
  int v46; // [rsp+C8h] [rbp+10h] BYREF
  int v47; // [rsp+D0h] [rbp+18h]
  DXGDEVICE *v48; // [rsp+D8h] [rbp+20h] BYREF

  v47 = 2028;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2028);
  CurrentProcess = PsGetCurrentProcess();
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( !ProcessWin32Process )
  {
    v38 = WdLogNewEntry5_WdEvent(v7, v6, v8, v9);
    *(_QWORD *)(v38 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v38);
    goto LABEL_72;
  }
  v10 = *(struct _KTHREAD ***)(ProcessWin32Process + 248);
  if ( !v10 )
  {
LABEL_72:
    v39 = WdLogNewEntry5_WdError(v7);
    LastCompletedPresentId = -1073741811;
    *(_QWORD *)(v39 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v39);
    goto LABEL_73;
  }
  v11 = a1;
  if ( a1 >= MmUserProbeAddress )
    v11 = MmUserProbeAddress;
  *(_OWORD *)v44 = *(_OWORD *)v11;
  v45 = *(struct _D3DKMT_PRESENT_STATS_DWM *)(v11 + 16);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v41, v44[0], v10, &v48);
  v13 = v48;
  if ( !v48 )
  {
    v14 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v14 + 24) = v44[0];
    LastCompletedPresentId = -1073741811;
    *(_QWORD *)(v14 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v14);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v41);
    goto LABEL_73;
  }
  v18 = *(volatile signed __int64 **)(*((_QWORD *)v48 + 2) + 16LL);
  v42 = (struct DXGADAPTER *)v18;
  if ( _InterlockedAdd64(v18 + 3, 1uLL) <= 0 )
  {
    v19 = WdLogNewEntry5_WdAssertion(v18);
    *(_QWORD *)(v19 + 24) = 1141LL;
    WdLogEvent5_WdAssertion(v19);
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v42 + 104, 0LL);
  v43 = 1;
  switch ( v44[1] )
  {
    case 1u:
      v26 = 0;
      v20 = 0LL;
      v27 = *((_DWORD *)v48 + 88);
      if ( v27 == 1 )
      {
        v20 = (*(unsigned int (__fastcall **)(_QWORD, int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 400LL) + 8LL)
                                                            + 192LL))(
                *((_QWORD *)v48 + 68),
                &v46);
        LOBYTE(v31) = v46 < 0;
        v32 = v46 & 0x7FFFFFFF;
        v46 &= ~0x80000000;
        if ( (int)v20 >= 0 )
        {
          if ( v32 )
          {
            v21 = 0x1C0000000uLL;
            switch ( v32 )
            {
              case 2:
              case 11:
              case 12:
              case 13:
                v44[2] = 5;
                break;
              case 6:
                v44[2] = 6;
                break;
              case 7:
                goto LABEL_47;
              case 9:
              case 10:
              case 15:
              case 16:
              case 17:
              case 18:
              case 19:
                v44[2] = 7;
                break;
              case 14:
                goto LABEL_48;
              default:
                v33 = WdLogNewEntry5_WdAssertion(v31);
                *(_QWORD *)(v33 + 24) = 8731LL;
                WdLogEvent5_WdAssertion(v33);
                v20 = 3221225473LL;
                v44[2] = 5;
                break;
            }
          }
          else
          {
            LOBYTE(v26) = (_BYTE)v31 != 0;
            v44[2] = v26 + 1;
          }
        }
      }
      else
      {
        v28 = v27 - 2;
        if ( v28 )
        {
          v29 = (unsigned int)(v28 - 1);
          if ( (_DWORD)v29 )
          {
            if ( (_DWORD)v29 == 1 )
            {
LABEL_48:
              v44[2] = 4;
            }
            else
            {
              v30 = WdLogNewEntry5_WdAssertion(v29);
              *(_QWORD *)(v30 + 24) = 8744LL;
              WdLogEvent5_WdAssertion(v30);
              v44[2] = 4;
              v20 = 3221225473LL;
            }
          }
          else
          {
LABEL_47:
            v44[2] = 3;
          }
        }
        else
        {
          v44[2] = 2;
        }
      }
      LastCompletedPresentId = v20;
      goto LABEL_52;
    case 2u:
      v23 = *(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL);
      if ( *(_DWORD *)(v23 + 160) == 1 )
      {
        v25 = *((_QWORD *)v48 + 354);
        v20 = v44[2];
        if ( !v25 || v44[2] < *(_DWORD *)(*(_QWORD *)(v25 + 1984) + 104LL) )
        {
          LastCompletedPresentId = DXGDEVICE::QueryLastCompletedPresentId(
                                     v48,
                                     v44[2],
                                     (struct _D3DKMT_PRESENT_STATS *)&v45);
          goto LABEL_52;
        }
        goto LABEL_24;
      }
LABEL_19:
      LastCompletedPresentId = v46;
      goto LABEL_52;
    case 4u:
      if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL) + 160LL) == 1 )
      {
        v20 = *((_QWORD *)v48 + 354);
        if ( !v20 || (v23 = *(unsigned int *)(*(_QWORD *)(v20 + 1984) + 104LL), v44[2] < (unsigned int)v23) )
        {
          v21 = *((_QWORD *)v13 + 2);
          if ( v20 == *(_QWORD *)(v21 + 16) )
          {
            LastCompletedPresentId = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct _D3DKMT_PRESENT_STATS_DWM *))(*(_QWORD *)(*(_QWORD *)(v21 + 400) + 8LL) + 400LL))(
                                       *((_QWORD *)v48 + 68),
                                       v44[2],
                                       &v45);
            goto LABEL_52;
          }
          if ( v20 )
          {
            v20 = *(_QWORD *)(*(_QWORD *)(v20 + 1984) + 320LL);
            if ( v20 )
              LastCompletedPresentId = BLTQUEUE::QueryPresentStatsDWM(
                                         (BLTQUEUE *)(*(_QWORD *)(v20 + 8) + 2408LL * v44[2]),
                                         &v45);
            else
              LastCompletedPresentId = -1073741811;
            goto LABEL_52;
          }
          break;
        }
LABEL_24:
        v24 = WdLogNewEntry5_WdWarning(v23, v20, v21, v22);
        *(_QWORD *)(v24 + 24) = v44[2];
        LastCompletedPresentId = -1073741811;
        *(_QWORD *)(v24 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v24);
        goto LABEL_52;
      }
      goto LABEL_19;
    case 5u:
      if ( !DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)v13 + 2) + 16LL)) )
      {
        *(_QWORD *)&v44[2] = -1LL;
        v45.PresentCount = 0;
        v45.PresentRefreshCount = -1;
        v45.PresentQPCTime.LowPart = 0;
        *(_QWORD *)&v45.SyncRefreshCount = 0LL;
        LastCompletedPresentId = v46;
        goto LABEL_52;
      }
      (*(void (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)(*(_QWORD *)(v20 + 400) + 8LL) + 200LL))(
        *((_QWORD *)v48 + 68),
        &v44[2]);
      goto LABEL_19;
  }
  LastCompletedPresentId = -1073741811;
LABEL_52:
  if ( bTracingEnabled )
  {
    v34 = v44[1] - 1;
    if ( v44[1] == 1 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_xq(v34, &DeviceStateEvent, v21, v48, v44[2]);
    }
    else if ( v44[1] == 2 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    {
      Template_pqqqqxx(
        v34,
        v20,
        v21,
        v48,
        v44[2],
        v45.PresentCount,
        v45.PresentRefreshCount,
        v45.PresentQPCTime.LowPart,
        *(_QWORD *)&v45.SyncRefreshCount,
        v45.SyncQPCTime.QuadPart);
    }
  }
  if ( LastCompletedPresentId >= 0 )
  {
    if ( a1 + 56 > MmUserProbeAddress || a1 + 56 <= a1 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_OWORD *)a1 = *(_OWORD *)v44;
    *(struct _D3DKMT_PRESENT_STATS_DWM *)(a1 + 16) = v45;
  }
  v35 = v42;
  ExReleasePushLockSharedEx((char *)v42 + 104, 0LL);
  KeLeaveCriticalRegion();
  v36 = _InterlockedDecrement64((volatile signed __int64 *)v35 + 3);
  if ( !v36 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v42 + 2), v42);
  if ( v36 < 0 )
  {
    v37 = WdLogNewEntry5_WdAssertion(v16);
    *(_QWORD *)(v37 + 24) = 1158LL;
    WdLogEvent5_WdAssertion(v37);
  }
  if ( v41 && _InterlockedExchangeAdd64((volatile signed __int64 *)v41 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v41 + 2), v41);
LABEL_73:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v16, &EventProfilerExit, v17, 2028);
  return (unsigned int)LastCompletedPresentId;
}
