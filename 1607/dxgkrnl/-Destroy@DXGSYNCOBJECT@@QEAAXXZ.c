/*
 * XREFs of ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C00A47B0
 * Callers:
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@PEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAI@Z @ 0x1C00A38A8 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1C0175F1C (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0006E88 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?FreeHandle@DXGGLOBAL@@QEAAXI@Z @ 0x1C0009C7C (-FreeHandle@DXGGLOBAL@@QEAAXI@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGADAPTERSYNCOBJECT@@QEAA@XZ @ 0x1C007F690 (--1DXGADAPTERSYNCOBJECT@@QEAA@XZ.c)
 *     ?Stop@DXGADAPTERSYNCOBJECT@@QEAAXXZ @ 0x1C007F898 (-Stop@DXGADAPTERSYNCOBJECT@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECT@@IEAA@XZ @ 0x1C00A45DC (--1DXGSYNCOBJECT@@IEAA@XZ.c)
 *     ?Destroy@DXGSYNCOBJECTCA@@QEAAXXZ @ 0x1C0175E88 (-Destroy@DXGSYNCOBJECTCA@@QEAAXXZ.c)
 */

void __fastcall DXGSYNCOBJECT::Destroy(DXGSYNCOBJECT *this)
{
  __int64 v2; // rcx
  _QWORD *v3; // rdi
  __int64 v4; // rcx
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rax
  bool v9; // zf
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_DWORD *)this + 6) )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v8 + 24) = 1279LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( *((_DWORD *)this + 18) )
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v10);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
    DXGGLOBAL::FreeHandle(*((struct _KTHREAD ***)this + 2), *((_DWORD *)this + 18));
    v9 = v10[8] == 0;
    *((_DWORD *)this + 18) = 0;
    if ( !v9 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10);
  }
  if ( (*((_DWORD *)this + 33) & 4) != 0 )
    DXGSYNCOBJECTCA::Destroy(this);
  else
    DXGADAPTERSYNCOBJECT::Stop((DXGSYNCOBJECT *)((char *)this + 216));
  v3 = (_QWORD *)WdLogNewEntry5_WdEvent(v2);
  v3[3] = this;
  v4 = *((unsigned int *)this + 18);
  v3[4] = v4;
  CurrentProcess = PsGetCurrentProcess(v4);
  v3[5] = PsGetProcessDxgProcess(CurrentProcess, v6);
  WdLogEvent5_WdEvent(v3);
  if ( (*((_DWORD *)this + 33) & 4) == 0 )
    DXGADAPTERSYNCOBJECT::~DXGADAPTERSYNCOBJECT((DXGSYNCOBJECT *)((char *)this + 216));
  DXGSYNCOBJECT::~DXGSYNCOBJECT(this, v7);
  operator delete(this);
}
