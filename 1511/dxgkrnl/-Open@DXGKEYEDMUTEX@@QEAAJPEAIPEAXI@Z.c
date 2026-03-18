/*
 * XREFs of ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI@Z @ 0x1C005C730
 * Callers:
 *     ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1C005C394 (-CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FL.c)
 *     DxgkOpenResourceFromNtHandle @ 0x1C0061660 (DxgkOpenResourceFromNtHandle.c)
 *     ?OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z @ 0x1C0151220 (-OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0001088 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ??0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z @ 0x1C00010BC (--0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C0001AB8 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0006F38 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::Open(DXGKEYEDMUTEX *this, unsigned int *a2, char *a3, unsigned int a4)
{
  unsigned __int64 v4; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct DXGPROCESS *Current; // r12
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  void *v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rt0
  char v24; // of
  unsigned int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v31; // rbx
  _QWORD *v32; // rax
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  _BYTE v37[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = a4;
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v31 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
    *(_QWORD *)(v31 + 24) = a2;
    *(_QWORD *)(v31 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdWarning(v31);
    return 3221225485LL;
  }
  if ( !a2 )
    return 3221225485LL;
  DXGKEYEDMUTEXLOCK::DXGKEYEDMUTEXLOCK((DXGKEYEDMUTEXLOCK *)v37, this, v10);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v37);
  if ( !(_DWORD)v4 )
  {
    if ( a3 )
      goto LABEL_18;
LABEL_13:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v37);
    v23 = _InterlockedAdd64((volatile signed __int64 *)this + 3, 1uLL);
    if ( (v23 < 0) ^ v24 | (v23 == 0) )
    {
      v36 = WdLogNewEntry5_WdAssertion(v22);
      *(_QWORD *)(v36 + 24) = 499LL;
      WdLogEvent5_WdAssertion(v36);
    }
    v25 = DXGPROCESS::AllocHandleSafe((__int64)Current, (__int64)this, 9u);
    *a2 = v25;
    if ( v25 )
      return 0LL;
    v35 = WdLogNewEntry5_WdLowResource(v27, v26, v28, v29);
    *(_QWORD *)(v35 + 24) = this;
    *(_QWORD *)(v35 + 32) = -1073741801LL;
    WdLogEvent5_WdLowResource(v35);
    DXGKEYEDMUTEX::ReleaseReference(this);
    return 3221225495LL;
  }
  v17 = *((_DWORD *)this + 42);
  if ( v17 )
  {
    if ( v17 != (_DWORD)v4 )
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
      v32[3] = this;
      v32[4] = v4;
      v32[5] = *((unsigned int *)this + 42);
      v32[6] = -1073741811LL;
      goto LABEL_19;
    }
    goto LABEL_13;
  }
  if ( !a3 )
  {
LABEL_18:
    v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
    v32[3] = this;
    v32[4] = -1073741811LL;
LABEL_19:
    WdLogEvent5_WdWarning(v32);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v37);
    return 3221225485LL;
  }
  if ( *((_QWORD *)this + 20) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v14);
    *(_QWORD *)(v33 + 24) = 2732LL;
    WdLogEvent5_WdAssertion(v33);
  }
  v21 = operator new[](v4, 0x4B677844u, PagedPool);
  *((_QWORD *)this + 20) = v21;
  if ( v21 )
  {
    *((_DWORD *)this + 42) = v4;
    if ( &a3[v4] < a3 || (unsigned __int64)&a3[v4] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v21, a3, v4);
    goto LABEL_13;
  }
  v34 = (_QWORD *)WdLogNewEntry5_WdLowResource(v19, v18, v20, 0LL);
  v34[3] = this;
  v34[4] = v4;
  v34[5] = -1073741801LL;
  WdLogEvent5_WdLowResource(v34);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v37);
  return 3221225495LL;
}
