/*
 * XREFs of ?DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C008C6B0
 * Callers:
 *     ?DxgkCddOpenSynchronizationObject@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@@Z @ 0x1C008C6A0 (-DxgkCddOpenSynchronizationObject@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@@Z.c)
 *     DxgkOpenSynchronizationObject @ 0x1C014EAC0 (DxgkOpenSynchronizationObject.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002E50 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     Template_pp @ 0x1C001E834 (Template_pp.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C008AE34 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAI@Z @ 0x1C011E4C4 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAI@Z.c)
 */

__int64 __fastcall DxgkOpenSynchronizationObjectInternal(
        struct _D3DKMT_OPENSYNCHRONIZATIONOBJECT *a1,
        int a2,
        __int64 a3)
{
  __int64 CurrentProcess; // rbx
  __int64 ProcessWin32Process; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r15
  struct _D3DKMT_OPENSYNCHRONIZATIONOBJECT *v12; // rax
  D3DKMT_HANDLE hSharedHandle; // r14d
  struct DXGGLOBAL *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  _QWORD *v22; // rax
  PERESOURCE *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  DXGGLOBAL *v27; // rcx
  __int64 v28; // rax
  _DWORD *p_hSyncObject; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // r14d
  unsigned int v34; // edi
  struct DXGSYNCOBJECT *v35; // rbx
  PERESOURCE *Global; // rax
  __int64 v37; // r9
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // r8
  PERESOURCE *v48; // [rsp+38h] [rbp-40h] BYREF
  char v49; // [rsp+40h] [rbp-38h]
  unsigned int v50; // [rsp+90h] [rbp+18h] BYREF
  struct DXGSYNCOBJECT *v51; // [rsp+98h] [rbp+20h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2050);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( ProcessWin32Process )
  {
    v11 = *(_QWORD *)(ProcessWin32Process + 248);
    if ( v11 )
    {
      if ( a2 )
      {
        v12 = a1;
        if ( (unsigned __int64)a1 >= MmUserProbeAddress )
          v12 = (struct _D3DKMT_OPENSYNCHRONIZATIONOBJECT *)MmUserProbeAddress;
        hSharedHandle = v12->hSharedHandle;
      }
      else
      {
        hSharedHandle = a1->hSharedHandle;
      }
      v51 = 0LL;
      v50 = 0;
      v14 = DXGGLOBAL::m_pGlobal;
      if ( !DXGGLOBAL::m_pGlobal )
      {
        v15 = WdLogNewEntry5_WdAssertion(0LL, v7, v9, v10);
        *(_QWORD *)(v15 + 24) = 1038LL;
        WdLogEvent5_WdAssertion(v15);
        v14 = DXGGLOBAL::m_pGlobal;
      }
      v48 = (PERESOURCE *)v14;
      v49 = 0;
      if ( !v14 )
      {
        v16 = WdLogNewEntry5_WdAssertion(0LL, v7, v9, v10);
        *(_QWORD *)(v16 + 24) = 1277LL;
        WdLogEvent5_WdAssertion(v16);
        v14 = (struct DXGGLOBAL *)v48;
      }
      if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)v14 + 39)) )
      {
        v21 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
        *(_QWORD *)(v21 + 24) = 1282LL;
        WdLogEvent5_WdAssertion(v21);
      }
      if ( v49 )
      {
        v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v17, v19);
        v22[3] = 275LL;
        v22[4] = 4LL;
        v22[5] = &v48;
        v22[6] = 0LL;
        v22[7] = 0LL;
        WdLogEvent5_WdCriticalError(v22);
      }
      v23 = v48;
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v23[39], 1u);
      v49 = 1;
      v27 = DXGGLOBAL::m_pGlobal;
      if ( !DXGGLOBAL::m_pGlobal )
      {
        v28 = WdLogNewEntry5_WdAssertion(0LL, v24, v25, v26);
        *(_QWORD *)(v28 + 24) = 1038LL;
        WdLogEvent5_WdAssertion(v28);
        v27 = DXGGLOBAL::m_pGlobal;
      }
      v33 = DXGGLOBAL::OpenSyncObject(v27, hSharedHandle, &v51, &v50);
      if ( v49 )
      {
        v49 = 0;
        ExReleaseResourceLite(v48[39]);
        KeLeaveCriticalRegion();
      }
      if ( v33 < 0 )
      {
        v34 = v50;
      }
      else
      {
        if ( a2 )
        {
          p_hSyncObject = &a1->hSyncObject;
          if ( (unsigned __int64)&a1->hSyncObject >= MmUserProbeAddress )
            p_hSyncObject = (_DWORD *)MmUserProbeAddress;
          v34 = v50;
          *p_hSyncObject = v50;
          v35 = v51;
          goto LABEL_31;
        }
        v34 = v50;
        a1->hSyncObject = v50;
      }
      v35 = v51;
LABEL_31:
      if ( v33 >= 0 )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_pp(v30, &EventOpenSyncObject, v31, v35, a1->hSyncObject);
        DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v11 + 192));
        v39 = (v34 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v39 < *(_DWORD *)(v11 + 232) )
        {
          v40 = *(_QWORD *)(v11 + 216);
          v41 = *(unsigned int *)(v40 + 16 * v39 + 8);
          if ( ((v34 >> 26) & 0x30) == (*(_BYTE *)(v40 + 16 * v39 + 8) & 0x30) && (v41 & 0xF) != 0 )
          {
            if ( (*(_DWORD *)(v40 + 16LL * ((v34 >> 6) & 0xFFFFFF) + 8) & 0x1000) == 0 )
            {
              v42 = WdLogNewEntry5_WdAssertion((v34 >> 26) & 0x30, v41, v40, v38);
              *(_QWORD *)(v42 + 24) = 194LL;
              WdLogEvent5_WdAssertion(v42);
            }
            *(_DWORD *)(*(_QWORD *)(v11 + 216) + 16LL * ((v34 >> 6) & 0xFFFFFF) + 8) &= ~0x1000u;
          }
        }
        *(_QWORD *)(v11 + 200) = 0LL;
        ExReleasePushLockExclusiveEx(v11 + 192, 0LL);
        KeLeaveCriticalRegion();
      }
      else if ( v35 )
      {
        Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v30, (__int64)p_hSyncObject, v31, v32);
        DXGGLOBAL::DestroySyncObject(Global, v35, v34, v37);
      }
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v30, &EventProfilerExit, v31, 2050);
      return (unsigned int)v33;
    }
  }
  else
  {
    v44 = WdLogNewEntry5_WdEvent(v8, v7, v9, v10);
    *(_QWORD *)(v44 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v44);
  }
  v45 = WdLogNewEntry5_WdError(v8);
  *(_QWORD *)(v45 + 24) = -1073741811LL;
  WdLogEvent5_WdError(v45);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v46, &EventProfilerExit, v47, 2050);
  return 3221225485LL;
}
