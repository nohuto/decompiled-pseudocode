/*
 * XREFs of ?DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C0097574
 * Callers:
 *     ?DxgkCddOpenSynchronizationObject@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@@Z @ 0x1C00978C0 (-DxgkCddOpenSynchronizationObject@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@@Z.c)
 *     DxgkOpenSynchronizationObject @ 0x1C0152550 (DxgkOpenSynchronizationObject.c)
 * Callees:
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     Template_pp @ 0x1C001E898 (Template_pp.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00969B4 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAI@Z @ 0x1C0096C80 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAI@Z.c)
 */

__int64 __fastcall DxgkOpenSynchronizationObjectInternal(
        struct _D3DKMT_OPENSYNCHRONIZATIONOBJECT *a1,
        int a2,
        __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 CurrentProcess; // rbx
  __int64 ProcessWin32Process; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // ebx
  __int64 v16; // r8
  __int64 v17; // rcx
  bool v18; // zf
  struct _D3DKMT_OPENSYNCHRONIZATIONOBJECT *v19; // rax
  D3DKMT_HANDLE hSharedHandle; // r15d
  struct DXGGLOBAL *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rbx
  PERESOURCE *v30; // rcx
  __int64 v31; // rax
  _DWORD *p_hSyncObject; // rdx
  DXGGLOBAL *Global; // rax
  _BYTE v35[32]; // [rsp+90h] [rbp+90h] BYREF

  v3 = (unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2050);
  CurrentProcess = PsGetCurrentProcess();
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( ProcessWin32Process )
  {
    v12 = *(_QWORD *)(ProcessWin32Process + 248);
  }
  else
  {
    v13 = WdLogNewEntry5_WdEvent(v9, v8, v10, v11);
    *(_QWORD *)(v13 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v13);
    v12 = 0LL;
  }
  if ( v12 )
  {
    if ( a2 )
    {
      v19 = a1;
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        v19 = (struct _D3DKMT_OPENSYNCHRONIZATIONOBJECT *)MmUserProbeAddress;
      hSharedHandle = v19->hSharedHandle;
    }
    else
    {
      hSharedHandle = a1->hSharedHandle;
    }
    *(_QWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
    *(_DWORD *)v3 = 0;
    v21 = DXGGLOBAL::m_pGlobal;
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v22 = WdLogNewEntry5_WdAssertion(0LL);
      *(_QWORD *)(v22 + 24) = 1016LL;
      WdLogEvent5_WdAssertion(v22);
      v21 = DXGGLOBAL::m_pGlobal;
    }
    *(_QWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v21;
    *(_BYTE *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 0;
    if ( !v21 )
    {
      v23 = WdLogNewEntry5_WdAssertion(0LL);
      *(_QWORD *)(v23 + 24) = 1380LL;
      WdLogEvent5_WdAssertion(v23);
      v21 = *(struct DXGGLOBAL **)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    }
    if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)v21 + 48)) )
    {
      v27 = WdLogNewEntry5_WdAssertion(v25);
      *(_QWORD *)(v27 + 24) = 1385LL;
      WdLogEvent5_WdAssertion(v27);
    }
    if ( *(_BYTE *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25, v24, v26);
      v28[3] = 275LL;
      v28[4] = 4LL;
      v28[5] = v3 + 16;
      v28[6] = 0LL;
      v28[7] = 0LL;
      WdLogEvent5_WdCriticalError(v28);
    }
    v29 = *(_QWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v29 + 384), 1u);
    *(_BYTE *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 1;
    v30 = (PERESOURCE *)DXGGLOBAL::m_pGlobal;
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v31 = WdLogNewEntry5_WdAssertion(0LL);
      *(_QWORD *)(v31 + 24) = 1016LL;
      WdLogEvent5_WdAssertion(v31);
      v30 = (PERESOURCE *)DXGGLOBAL::m_pGlobal;
    }
    v15 = DXGGLOBAL::OpenSyncObject(
            v30,
            hSharedHandle,
            (struct DXGSYNCOBJECT **)(v3 + 8),
            (unsigned int *)((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL));
    if ( *(_BYTE *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) )
    {
      *(_BYTE *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 0;
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) + 384LL));
      KeLeaveCriticalRegion();
    }
    if ( v15 < 0 )
    {
      if ( *(_QWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
      {
        Global = DXGGLOBAL::GetGlobal(v17);
        DXGGLOBAL::DestroySyncObject(
          Global,
          *(struct DXGSYNCOBJECT **)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
          *(_DWORD *)v3);
      }
    }
    else
    {
      if ( a2 )
      {
        p_hSyncObject = &a1->hSyncObject;
        if ( (unsigned __int64)&a1->hSyncObject >= MmUserProbeAddress )
          p_hSyncObject = (_DWORD *)MmUserProbeAddress;
        *p_hSyncObject = *(_DWORD *)v3;
      }
      else
      {
        a1->hSyncObject = *(_DWORD *)v3;
      }
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_pp(
          v17,
          &EventOpenSyncObject,
          v16,
          *(_QWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
          a1->hSyncObject);
    }
    v18 = (qword_1C00467F0 & 2) == 0;
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v9);
    v15 = -1073741811;
    *(_QWORD *)(v14 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v14);
    v17 = qword_1C00467F0;
    v18 = (qword_1C00467F0 & 2) == 0;
  }
  if ( !v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v17, &EventProfilerExit, v16, 2050);
  return (unsigned int)v15;
}
