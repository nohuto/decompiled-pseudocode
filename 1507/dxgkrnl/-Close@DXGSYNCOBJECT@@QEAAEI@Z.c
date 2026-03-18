/*
 * XREFs of ?Close@DXGSYNCOBJECT@@QEAAEI@Z @ 0x1C008364C
 * Callers:
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C008AE34 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002E50 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Template_ppqqpqq @ 0x1C00103DC (Template_ppqqpqq.c)
 *     Template_ppqqpt @ 0x1C00104A0 (Template_ppqqpt.c)
 *     Template_ppqqpx @ 0x1C0010554 (Template_ppqqpx.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C00848F0 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 */

bool __fastcall DXGSYNCOBJECT::Close(DXGSYNCOBJECT *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct DXGPROCESS *Current; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct DXGPROCESS *v16; // r14
  char *v17; // rbx
  _QWORD *v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int128 v23; // xmm2
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  const EVENT_DESCRIPTOR *v28; // rdx
  __int128 v29; // [rsp+98h] [rbp+47h]

  v4 = (unsigned int)a2;
  Global = DXGGLOBAL::GetGlobal((__int64)this, a2, a3, a4);
  if ( !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)Global + 39)) )
  {
    v25 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    *(_QWORD *)(v25 + 24) = 1532LL;
    WdLogEvent5_WdAssertion(v25);
  }
  Current = DXGPROCESS::GetCurrent(v8);
  v16 = Current;
  if ( (_DWORD)v4 )
  {
    v17 = (char *)Current + 192;
    DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 192));
    HMGRTABLE::FreeHandle((struct DXGPROCESS *)((char *)v16 + 216), v4);
    *((_QWORD *)v17 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v17, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( !*((_DWORD *)this + 6) )
  {
    v26 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    *(_QWORD *)(v26 + 24) = 1548LL;
    WdLogEvent5_WdAssertion(v26);
  }
  v18 = (_QWORD *)WdLogNewEntry5_WdEvent(v13, v12, v14, v15);
  v18[3] = this;
  v18[4] = v4;
  v18[5] = DXGPROCESS::GetCurrent(v19);
  WdLogEvent5_WdEvent(v18);
  v23 = *((_OWORD *)this + 8);
  v29 = *((_OWORD *)this + 12);
  switch ( (_DWORD)v23 )
  {
    case 1:
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_ppqqpt(
          DWORD2(v29),
          &EventOpenSynchronizationMutex,
          v21,
          0LL,
          this,
          3,
          DWORD1(v23),
          DWORD2(v29),
          DWORD2(v23));
      return _InterlockedAdd((volatile signed __int32 *)this + 6, 0xFFFFFFFF) == 0;
    case 2:
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_ppqqpqq(
          DWORD2(v29),
          &EventOpenSemaphore,
          v21,
          0LL,
          this,
          3,
          DWORD1(v23),
          DWORD2(v29),
          DWORD2(v23),
          HIDWORD(v23),
          (_QWORD)v23);
      break;
    case 3:
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) == 0 )
        return _InterlockedAdd((volatile signed __int32 *)this + 6, 0xFFFFFFFF) == 0;
      v28 = (const EVENT_DESCRIPTOR *)&EventOpenFence;
LABEL_22:
      Template_ppqqpx(DWORD2(v29), v28, v21, 0LL, this, 3, DWORD1(v23), DWORD2(v29), *((_QWORD *)&v23 + 1));
      return _InterlockedAdd((volatile signed __int32 *)this + 6, 0xFFFFFFFF) == 0;
    case 4:
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_ppqqpx(
          DWORD2(v29),
          &EventOpenCPUNotification,
          v21,
          0LL,
          this,
          3,
          DWORD1(v23),
          DWORD2(v29),
          *((_QWORD *)&v23 + 1));
      break;
    case 5:
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      {
        v28 = (const EVENT_DESCRIPTOR *)&EventOpenMonitoredFence;
        goto LABEL_22;
      }
      break;
    default:
      v27 = WdLogNewEntry5_WdAssertion((unsigned int)(v23 - 4), v20, v21, v22);
      *(_QWORD *)(v27 + 24) = 864LL;
      WdLogEvent5_WdAssertion(v27);
      return _InterlockedAdd((volatile signed __int32 *)this + 6, 0xFFFFFFFF) == 0;
  }
  return _InterlockedAdd((volatile signed __int32 *)this + 6, 0xFFFFFFFF) == 0;
}
