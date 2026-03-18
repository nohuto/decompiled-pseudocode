/*
 * XREFs of ?Close@DXGSYNCOBJECT@@QEAAEI@Z @ 0x1C00946F4
 * Callers:
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00969B4 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001BC8 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Template_ppqqpqq @ 0x1C0011B4C (Template_ppqqpqq.c)
 *     Template_ppqqpt @ 0x1C0011C10 (Template_ppqqpt.c)
 *     Template_ppqqpx @ 0x1C0011CC4 (Template_ppqqpx.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C0094580 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 */

bool __fastcall DXGSYNCOBJECT::Close(DXGSYNCOBJECT *this, unsigned int a2)
{
  __int64 v3; // r15
  struct DXGGLOBAL *v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 CurrentProcess; // rbx
  __int64 ProcessWin32Process; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // r14
  _QWORD *v14; // rbx
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r8
  __int128 v22; // xmm2
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  const EVENT_DESCRIPTOR *v30; // rdx
  __int128 v31; // [rsp+98h] [rbp+37h]

  v3 = a2;
  v4 = DXGGLOBAL::m_pGlobal;
  v5 = 0LL;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v26 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v26 + 24) = 1016LL;
    WdLogEvent5_WdAssertion(v26);
    v4 = DXGGLOBAL::m_pGlobal;
  }
  if ( !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)v4 + 48)) )
  {
    v27 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v27 + 24) = 1543LL;
    WdLogEvent5_WdAssertion(v27);
  }
  CurrentProcess = PsGetCurrentProcess();
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( ProcessWin32Process )
  {
    v13 = *(_QWORD **)(ProcessWin32Process + 248);
  }
  else
  {
    v24 = WdLogNewEntry5_WdEvent(v10, v9, v11, v12);
    *(_QWORD *)(v24 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v24);
    v13 = 0LL;
  }
  if ( (_DWORD)v3 )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v13 + 24));
    HMGRTABLE::FreeHandle((HMGRTABLE *)(v13 + 27), v3);
    v13[25] = 0LL;
    ExReleasePushLockExclusiveEx(v13 + 24, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( !*((_DWORD *)this + 6) )
  {
    v28 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v28 + 24) = 1559LL;
    WdLogEvent5_WdAssertion(v28);
  }
  v14 = (_QWORD *)WdLogNewEntry5_WdEvent(v10, v9, v11, v12);
  v14[3] = this;
  v14[4] = v3;
  v15 = PsGetCurrentProcess();
  v16 = PsGetProcessWin32Process(v15);
  if ( v16 )
  {
    v5 = *(_QWORD *)(v16 + 248);
  }
  else
  {
    v25 = WdLogNewEntry5_WdEvent(v18, v17, v19, v20);
    *(_QWORD *)(v25 + 24) = v15;
    WdLogEvent5_WdEvent(v25);
  }
  v14[5] = v5;
  WdLogEvent5_WdEvent(v14);
  v22 = *(_OWORD *)((char *)this + 152);
  v31 = *(_OWORD *)((char *)this + 216);
  switch ( (_DWORD)v22 )
  {
    case 1:
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_ppqqpt(
          DWORD2(v31),
          &EventOpenSynchronizationMutex,
          v21,
          0LL,
          this,
          3,
          DWORD1(v22),
          DWORD2(v31),
          DWORD2(v22));
      return _InterlockedAdd((volatile signed __int32 *)this + 6, 0xFFFFFFFF) == 0;
    case 2:
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_ppqqpqq(
          DWORD2(v31),
          &EventOpenSemaphore,
          v21,
          0LL,
          this,
          3,
          DWORD1(v22),
          DWORD2(v31),
          DWORD2(v22),
          HIDWORD(v22),
          (_QWORD)v22);
      break;
    case 3:
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) == 0 )
        return _InterlockedAdd((volatile signed __int32 *)this + 6, 0xFFFFFFFF) == 0;
      v30 = (const EVENT_DESCRIPTOR *)&EventOpenFence;
LABEL_30:
      Template_ppqqpx(DWORD2(v31), v30, v21, 0LL, this, 3, DWORD1(v22), DWORD2(v31), *((_QWORD *)&v22 + 1));
      return _InterlockedAdd((volatile signed __int32 *)this + 6, 0xFFFFFFFF) == 0;
    case 4:
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_ppqqpx(
          DWORD2(v31),
          &EventOpenCPUNotification,
          v21,
          0LL,
          this,
          3,
          DWORD1(v22),
          DWORD2(v31),
          *((_QWORD *)&v22 + 1));
      break;
    case 5:
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      {
        v30 = (const EVENT_DESCRIPTOR *)&EventOpenMonitoredFence;
        goto LABEL_30;
      }
      break;
    default:
      v29 = WdLogNewEntry5_WdAssertion((unsigned int)(v22 - 4));
      *(_QWORD *)(v29 + 24) = 864LL;
      WdLogEvent5_WdAssertion(v29);
      return _InterlockedAdd((volatile signed __int32 *)this + 6, 0xFFFFFFFF) == 0;
  }
  return _InterlockedAdd((volatile signed __int32 *)this + 6, 0xFFFFFFFF) == 0;
}
