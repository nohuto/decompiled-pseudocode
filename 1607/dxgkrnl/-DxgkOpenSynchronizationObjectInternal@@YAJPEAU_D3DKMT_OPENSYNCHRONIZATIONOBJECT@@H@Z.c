/*
 * XREFs of ?DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C00CCEC0
 * Callers:
 *     DxgkOpenSynchronizationObject @ 0x1C0070870 (DxgkOpenSynchronizationObject.c)
 *     ?DxgkCddOpenSynchronizationObject@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@@Z @ 0x1C00CCEB0 (-DxgkCddOpenSynchronizationObject@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009830 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     Template_pp @ 0x1C00256AC (Template_pp.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAI@Z @ 0x1C0143E0C (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAI@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1C0175F1C (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 */

__int64 __fastcall DxgkOpenSynchronizationObjectInternal(
        struct _D3DKMT_OPENSYNCHRONIZATIONOBJECT *a1,
        int a2,
        __int64 a3)
{
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 ProcessDxgProcess; // r13
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  struct _D3DKMT_OPENSYNCHRONIZATIONOBJECT *v13; // rax
  D3DKMT_HANDLE hSharedHandle; // esi
  DXGGLOBAL *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  _QWORD *v22; // rax
  PERESOURCE *v23; // rbx
  DXGGLOBAL *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  int v27; // esi
  __int64 v28; // r8
  _DWORD *p_hSyncObject; // rdx
  unsigned int v30; // edi
  struct DXGSYNCOBJECT *v31; // rbx
  DXGGLOBAL *Global; // rax
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // rax
  PERESOURCE *v36; // [rsp+38h] [rbp-40h] BYREF
  char v37; // [rsp+40h] [rbp-38h]
  unsigned int v38; // [rsp+90h] [rbp+18h] BYREF
  struct DXGSYNCOBJECT *v39; // [rsp+98h] [rbp+20h] BYREF

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2050);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v6);
  if ( !ProcessDxgProcess )
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v10, &EventProfilerExit, v11, 2050);
    return 3221225485LL;
  }
  if ( a2 )
  {
    v13 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v13 = (struct _D3DKMT_OPENSYNCHRONIZATIONOBJECT *)MmUserProbeAddress;
    hSharedHandle = v13->hSharedHandle;
  }
  else
  {
    hSharedHandle = a1->hSharedHandle;
  }
  v39 = 0LL;
  v38 = 0;
  v15 = DXGGLOBAL::m_pGlobal;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v16 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v16 + 24) = 982LL;
    WdLogEvent5_WdAssertion(v16);
    v15 = DXGGLOBAL::m_pGlobal;
  }
  v36 = (PERESOURCE *)v15;
  v37 = 0;
  if ( !v15 )
  {
    v17 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v17 + 24) = 1264LL;
    WdLogEvent5_WdAssertion(v17);
    v15 = (DXGGLOBAL *)v36;
  }
  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)v15 + 39)) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v19);
    *(_QWORD *)(v21 + 24) = 1269LL;
    WdLogEvent5_WdAssertion(v21);
  }
  if ( v37 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v18, v20);
    v22[3] = 275LL;
    v22[4] = 4LL;
    v22[5] = &v36;
    v22[6] = 0LL;
    v22[7] = 0LL;
    WdLogEvent5_WdCriticalError(v22);
  }
  v23 = v36;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v23[39], 1u);
  v37 = 1;
  v24 = DXGGLOBAL::m_pGlobal;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v25 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v25 + 24) = 982LL;
    WdLogEvent5_WdAssertion(v25);
    v24 = DXGGLOBAL::m_pGlobal;
  }
  v27 = DXGGLOBAL::OpenSyncObject(v24, hSharedHandle, &v39, &v38);
  if ( v37 )
  {
    v37 = 0;
    ExReleaseResourceLite(v36[39]);
    KeLeaveCriticalRegion();
  }
  if ( v27 < 0 )
  {
    v30 = v38;
  }
  else
  {
    if ( a2 )
    {
      p_hSyncObject = &a1->hSyncObject;
      if ( (unsigned __int64)&a1->hSyncObject >= MmUserProbeAddress )
        p_hSyncObject = (_DWORD *)MmUserProbeAddress;
      v30 = v38;
      *p_hSyncObject = v38;
      v31 = v39;
      goto LABEL_34;
    }
    v30 = v38;
    a1->hSyncObject = v38;
  }
  v31 = v39;
LABEL_34:
  if ( v27 >= 0 )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_pp(v26, &EventOpenSyncObject, v28, v31, v30);
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(ProcessDxgProcess + 184));
    v33 = (v30 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v33 < *(_DWORD *)(ProcessDxgProcess + 224) )
    {
      v34 = *(_QWORD *)(ProcessDxgProcess + 208);
      if ( ((v30 >> 26) & 0x30) == (*(_BYTE *)(v34 + 16 * v33 + 8) & 0x30)
        && (*(_DWORD *)(v34 + 16 * v33 + 8) & 0xF) != 0 )
      {
        if ( (*(_DWORD *)(v34 + 16LL * ((v30 >> 6) & 0xFFFFFF) + 8) & 0x1000) == 0 )
        {
          v35 = WdLogNewEntry5_WdAssertion((v30 >> 26) & 0x30);
          *(_QWORD *)(v35 + 24) = 193LL;
          WdLogEvent5_WdAssertion(v35);
        }
        *(_DWORD *)(*(_QWORD *)(ProcessDxgProcess + 208) + 16LL * ((v30 >> 6) & 0xFFFFFF) + 8) &= ~0x1000u;
      }
    }
    *(_QWORD *)(ProcessDxgProcess + 192) = 0LL;
    ExReleasePushLockExclusiveEx(ProcessDxgProcess + 184, 0LL);
    KeLeaveCriticalRegion();
  }
  else if ( v31 )
  {
    Global = DXGGLOBAL::GetGlobal(v26);
    DXGGLOBAL::DestroySyncObject(Global, v31, v30, 0);
  }
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v26, &EventProfilerExit, v28, 2050);
  return (unsigned int)v27;
}
