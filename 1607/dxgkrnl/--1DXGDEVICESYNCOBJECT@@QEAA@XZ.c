/*
 * XREFs of ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C008FE30
 * Callers:
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C0006F8C (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     ??1DXGPAGINGQUEUE@@IEAA@XZ @ 0x1C00902DC (--1DXGPAGINGQUEUE@@IEAA@XZ.c)
 *     ?DxgkDestroySynchronizationObjectInternal@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C00A32F0 (-DxgkDestroySynchronizationObjectInternal@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C008FCC4 (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C00A3220 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1C0175F1C (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 */

void __fastcall DXGDEVICESYNCOBJECT::~DXGDEVICESYNCOBJECT(DXGDEVICESYNCOBJECT *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rax
  DXGDEVICESYNCOBJECT *v5; // rcx
  DXGDEVICESYNCOBJECT **v6; // rax
  __int64 v7; // rcx
  __int64 CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v11; // rsi
  __int64 v12; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // r9d
  unsigned int v18; // edx
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  DXGGLOBAL *v23; // rcx
  __int64 v24; // rax
  char v25[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v26; // [rsp+28h] [rbp-20h]
  int v27; // [rsp+30h] [rbp-18h]

  if ( (*((_BYTE *)this + 68) & 2) != 0 )
  {
    v2 = *((_QWORD *)this + 2);
    if ( !*(_DWORD *)(v2 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v2 + 80)) )
    {
      v4 = WdLogNewEntry5_WdAssertion(v3);
      *(_QWORD *)(v4 + 24) = 7254LL;
      WdLogEvent5_WdAssertion(v4);
    }
    v5 = *(DXGDEVICESYNCOBJECT **)this;
    v6 = (DXGDEVICESYNCOBJECT **)*((_QWORD *)this + 1);
    if ( *(DXGDEVICESYNCOBJECT **)(*(_QWORD *)this + 8LL) != this || *v6 != this )
      __fastfail(3u);
    *v6 = v5;
    *((_QWORD *)v5 + 1) = v6;
  }
  DXGDEVICESYNCOBJECT::DestroyCoreState(this);
  if ( *((_DWORD *)this + 10) )
  {
    CurrentProcess = PsGetCurrentProcess();
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v9);
    v11 = ProcessDxgProcess;
    v12 = ProcessDxgProcess + 184;
    v26 = ProcessDxgProcess + 184;
    if ( ProcessDxgProcess != -184 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( *(struct _KTHREAD **)(ProcessDxgProcess + 192) == CurrentThread )
      {
        v14 = WdLogNewEntry5_WdAssertion(CurrentThread);
        *(_QWORD *)(v14 + 24) = 1142LL;
        WdLogEvent5_WdAssertion(v14);
      }
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v12, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v17 = *(_DWORD *)(v12 + 16);
        if ( v17 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v15, &EventBlockThread, v16, v17);
      }
      ExAcquirePushLockExclusiveEx(v12, 0LL);
    }
    *(_QWORD *)(v12 + 8) = KeGetCurrentThread();
    v18 = *((_DWORD *)this + 10);
    v27 = 2;
    HMGRTABLE::FreeHandle((HMGRTABLE *)(v11 + 208), v18);
    *((_DWORD *)this + 10) = 0;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v25);
  }
  if ( *((_QWORD *)this + 7) )
  {
    v19 = *((_QWORD *)this + 4);
    if ( *(_DWORD *)(v19 + 128) != 5 )
    {
      v20 = WdLogNewEntry5_WdAssertion(v7);
      *(_QWORD *)(v20 + 24) = 274LL;
      WdLogEvent5_WdAssertion(v20);
    }
    v21 = *((_QWORD *)this + 2);
    v22 = *(_QWORD *)(*(_QWORD *)(v21 + 40) + 64LL);
    if ( v22 )
      v22 = *(_QWORD *)(v22 + 8);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 400LL) + 8LL) + 944LL))(
      v22,
      v19 + 88);
  }
  if ( *((_QWORD *)this + 4) )
  {
    v23 = DXGGLOBAL::m_pGlobal;
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v24 = WdLogNewEntry5_WdAssertion(0LL);
      *(_QWORD *)(v24 + 24) = 982LL;
      WdLogEvent5_WdAssertion(v24);
      v23 = DXGGLOBAL::m_pGlobal;
    }
    DXGGLOBAL::DestroySyncObject(v23, *((struct DXGSYNCOBJECT **)this + 4), 0, 0);
  }
  *((_QWORD *)this + 2) = 0LL;
}
