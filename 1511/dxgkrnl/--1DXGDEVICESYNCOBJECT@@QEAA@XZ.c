/*
 * XREFs of ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C0089E60
 * Callers:
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C00035F4 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     ??1DXGPAGINGQUEUE@@IEAA@XZ @ 0x1C008BD50 (--1DXGPAGINGQUEUE@@IEAA@XZ.c)
 *     ?DxgkDestroySynchronizationObjectInternal@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C0093D30 (-DxgkDestroySynchronizationObjectInternal@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C0089C50 (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C0094580 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00969B4 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 */

void __fastcall DXGDEVICESYNCOBJECT::~DXGDEVICESYNCOBJECT(DXGDEVICESYNCOBJECT *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  DXGDEVICESYNCOBJECT *v6; // rcx
  DXGDEVICESYNCOBJECT **v7; // rax
  __int64 v8; // rcx
  __int64 CurrentProcess; // rdi
  __int64 ProcessWin32Process; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned int v18; // edx
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  DXGGLOBAL *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // r9d
  __int64 v27; // rax
  __int64 v28; // rax
  char v29[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v30; // [rsp+28h] [rbp-20h]
  int v31; // [rsp+30h] [rbp-18h]

  v4 = *((_QWORD *)this + 2);
  if ( !*(_DWORD *)(v4 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v4 + 80)) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v23 + 24) = 6922LL;
    WdLogEvent5_WdAssertion(v23);
  }
  v6 = *(DXGDEVICESYNCOBJECT **)this;
  v7 = (DXGDEVICESYNCOBJECT **)*((_QWORD *)this + 1);
  if ( *(DXGDEVICESYNCOBJECT **)(*(_QWORD *)this + 8LL) != this || *v7 != this )
    __fastfail(3u);
  *v7 = v6;
  *((_QWORD *)v6 + 1) = v7;
  DXGDEVICESYNCOBJECT::DestroyCoreState(this, a2, a3);
  if ( *((_DWORD *)this + 10) )
  {
    CurrentProcess = PsGetCurrentProcess();
    ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
    if ( ProcessWin32Process )
    {
      v15 = *(_QWORD *)(ProcessWin32Process + 248);
    }
    else
    {
      v24 = WdLogNewEntry5_WdEvent(v12, v11, v13, v14);
      *(_QWORD *)(v24 + 24) = CurrentProcess;
      WdLogEvent5_WdEvent(v24);
      v15 = 0LL;
    }
    v30 = v15 + 192;
    if ( v15 != -192 && *(struct _KTHREAD **)(v15 + 200) == KeGetCurrentThread() )
    {
      v25 = WdLogNewEntry5_WdAssertion(v12);
      *(_QWORD *)(v25 + 24) = 1155LL;
      WdLogEvent5_WdAssertion(v25);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v15 + 192, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v26 = *(_DWORD *)(v15 + 208);
        if ( v26 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_q(v16, &EventBlockThread, v17, v26);
      }
      ExAcquirePushLockExclusiveEx(v15 + 192, 0LL);
    }
    *(_QWORD *)(v15 + 200) = KeGetCurrentThread();
    v18 = *((_DWORD *)this + 10);
    v31 = 2;
    HMGRTABLE::FreeHandle((HMGRTABLE *)(v15 + 216), v18);
    *((_DWORD *)this + 10) = 0;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v29);
  }
  if ( *((_QWORD *)this + 7) )
  {
    v19 = *((_QWORD *)this + 4);
    if ( *(_DWORD *)(v19 + 152) != 5 )
    {
      v27 = WdLogNewEntry5_WdAssertion(v8);
      *(_QWORD *)(v27 + 24) = 240LL;
      WdLogEvent5_WdAssertion(v27);
    }
    v20 = *((_QWORD *)this + 2);
    v21 = *(_QWORD *)(*(_QWORD *)(v20 + 40) + 72LL);
    if ( v21 )
      v21 = *(_QWORD *)(v21 + 8);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 424LL) + 8LL) + 928LL))(
      v21,
      v19 + 112);
  }
  if ( *((_QWORD *)this + 4) )
  {
    v22 = DXGGLOBAL::m_pGlobal;
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v28 = WdLogNewEntry5_WdAssertion(0LL);
      *(_QWORD *)(v28 + 24) = 1016LL;
      WdLogEvent5_WdAssertion(v28);
      v22 = DXGGLOBAL::m_pGlobal;
    }
    DXGGLOBAL::DestroySyncObject(v22, *((struct DXGSYNCOBJECT **)this + 4), 0);
  }
  *((_QWORD *)this + 2) = 0LL;
}
