/*
 * XREFs of ?Close@DXGSYNCOBJECT@@QEAAEI@Z @ 0x1C00A4670
 * Callers:
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1C0175F1C (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 * Callees:
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000966C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?IsSyncObjectLockExclusiveOwner@DXGGLOBAL@@QEBAEXZ @ 0x1C0009B08 (-IsSyncObjectLockExclusiveOwner@DXGGLOBAL@@QEBAEXZ.c)
 *     Template_ppqqpqq @ 0x1C0011F20 (Template_ppqqpqq.c)
 *     Template_ppqqpt @ 0x1C0011FE4 (Template_ppqqpt.c)
 *     Template_ppqqpx @ 0x1C0012098 (Template_ppqqpx.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

bool __fastcall DXGSYNCOBJECT::Close(DXGSYNCOBJECT *this, unsigned int a2)
{
  __int64 v2; // rsi
  PERESOURCE *Global; // rax
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  DXGPROCESS *ProcessDxgProcess; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int128 v15; // xmm2
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int128 v20; // [rsp+90h] [rbp-18h]

  v2 = a2;
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal();
  if ( !DXGGLOBAL::IsSyncObjectLockExclusiveOwner(Global) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v17 + 24) = 1631LL;
    WdLogEvent5_WdAssertion(v17);
  }
  CurrentProcess = PsGetCurrentProcess(v5);
  ProcessDxgProcess = (DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v7);
  if ( (_DWORD)v2 )
    DXGPROCESS::FreeHandleSafe(ProcessDxgProcess, v2);
  if ( !*((_DWORD *)this + 6) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v18 + 24) = 1647LL;
    WdLogEvent5_WdAssertion(v18);
  }
  v10 = (_QWORD *)WdLogNewEntry5_WdEvent(v9);
  v10[3] = this;
  v10[4] = v2;
  v12 = PsGetCurrentProcess(v11);
  v10[5] = PsGetProcessDxgProcess(v12, v13);
  WdLogEvent5_WdEvent(v10);
  v15 = *((_OWORD *)this + 8);
  v20 = *((_OWORD *)this + 12);
  switch ( (_DWORD)v15 )
  {
    case 1:
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_ppqqpt(
          DWORD2(v20),
          &EventOpenSynchronizationMutex,
          v14,
          0LL,
          this,
          3,
          DWORD1(v15),
          DWORD2(v20),
          DWORD2(v15));
      break;
    case 2:
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_ppqqpqq(
          DWORD2(v20),
          &EventOpenSemaphore,
          v14,
          0LL,
          this,
          3,
          DWORD1(v15),
          DWORD2(v20),
          DWORD2(v15),
          HIDWORD(v15),
          (_QWORD)v15);
      break;
    case 3:
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_ppqqpx(
          DWORD2(v20),
          &EventOpenFence,
          v14,
          0LL,
          this,
          3,
          DWORD1(v15),
          DWORD2(v20),
          *((_QWORD *)&v15 + 1));
      break;
    case 4:
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_ppqqpx(
          DWORD2(v20),
          &EventOpenCPUNotification,
          v14,
          0LL,
          this,
          3,
          DWORD1(v15),
          DWORD2(v20),
          *((_QWORD *)&v15 + 1));
      break;
    case 5:
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_ppqqpx(
          DWORD2(v20),
          &EventOpenMonitoredFence,
          v14,
          0LL,
          this,
          3,
          DWORD1(v15),
          DWORD2(v20),
          *((_QWORD *)&v15 + 1));
      break;
    default:
      v19 = WdLogNewEntry5_WdAssertion((unsigned int)(v15 - 4));
      *(_QWORD *)(v19 + 24) = 864LL;
      WdLogEvent5_WdAssertion(v19);
      break;
  }
  return _InterlockedAdd((volatile signed __int32 *)this + 6, 0xFFFFFFFF) == 0;
}
