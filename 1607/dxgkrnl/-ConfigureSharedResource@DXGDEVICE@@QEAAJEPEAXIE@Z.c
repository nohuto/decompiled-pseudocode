/*
 * XREFs of ?ConfigureSharedResource@DXGDEVICE@@QEAAJEPEAXIE@Z @ 0x1C0095794
 * Callers:
 *     DxgkConfigureSharedResource @ 0x1C00D2F70 (DxgkConfigureSharedResource.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?ConfigureSharedResourceHelper@DXGDEVICE@@QEAAJEPEAXPEAVDXGSHAREDRESOURCE@@EH@Z @ 0x1C009564C (-ConfigureSharedResourceHelper@DXGDEVICE@@QEAAJEPEAXPEAVDXGSHAREDRESOURCE@@EH@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00A5A60 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00A5A90 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DXGDEVICE::ConfigureSharedResource(
        PERESOURCE *this,
        __int64 a2,
        void *a3,
        __int64 a4,
        unsigned __int8 a5)
{
  __int64 v6; // rdi
  char v7; // r15
  __int64 CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 ProcessDxgProcess; // rsi
  __int64 v12; // rdx
  __int64 v13; // r9
  int v14; // r8d
  __int64 v15; // rdx
  struct DXGRESOURCE *v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned int v20; // ebx
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // [rsp+50h] [rbp+8h] BYREF

  v6 = (unsigned int)a4;
  v7 = a2;
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(this[10]) )
  {
    v22 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v22 + 24) = 4691LL;
    WdLogEvent5_WdAssertion(v22);
  }
  if ( !(_DWORD)v6 )
  {
    v23 = WdLogNewEntry5_WdWarning(this, a2, a3, a4);
    *(_QWORD *)(v23 + 24) = this;
    v20 = -1073741811;
    *(_QWORD *)(v23 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v23);
    return v20;
  }
  CurrentProcess = PsGetCurrentProcess(this);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v10);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(ProcessDxgProcess + 184));
  v12 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v12 < *(_DWORD *)(ProcessDxgProcess + 224)
    && (v13 = *(_QWORD *)(ProcessDxgProcess + 208),
        v14 = *(_DWORD *)(v13 + 16LL * (unsigned int)v12 + 8),
        (((unsigned int)v6 >> 26) & 0x30) == (*(_BYTE *)(v13 + 16LL * (unsigned int)v12 + 8) & 0x30))
    && (v14 & 0x1000) == 0
    && (v14 & 0xF) != 0
    && (v15 = 2 * v12, (*(_BYTE *)(v13 + 8 * v15 + 8) & 0xF) == 4) )
  {
    v16 = *(struct DXGRESOURCE **)(v13 + 8 * v15);
  }
  else
  {
    v16 = 0LL;
  }
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v25, v16);
  ExReleasePushLockSharedEx(ProcessDxgProcess + 184, 0LL);
  KeLeaveCriticalRegion();
  if ( !v25 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19, 0LL);
    v24[3] = this;
    v24[4] = v6;
LABEL_22:
    v20 = -1073741811;
    v24[5] = -1073741811LL;
    goto LABEL_23;
  }
  if ( *(PERESOURCE **)(v25 + 8) != this )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19, v25);
    v24[3] = this;
    v20 = -1073741811;
    v24[4] = v25;
    v24[5] = *(_QWORD *)(v25 + 8);
    v24[6] = -1073741811LL;
LABEL_23:
    WdLogEvent5_WdWarning(v24);
    goto LABEL_15;
  }
  if ( (*(_DWORD *)(v25 + 4) & 1) == 0 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19, v25);
    v24[3] = this;
    v24[4] = v25;
    goto LABEL_22;
  }
  LOBYTE(v17) = v7;
  v20 = DXGDEVICE::ConfigureSharedResourceHelper(this, v17, a3, *(struct DXGSHAREDRESOURCE **)(v25 + 56), a5, 1);
LABEL_15:
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v25);
  return v20;
}
