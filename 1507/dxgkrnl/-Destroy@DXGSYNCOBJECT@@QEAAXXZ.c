/*
 * XREFs of ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C00837A8
 * Callers:
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C008AE34 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@PEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAI@Z @ 0x1C00C3020 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?FreeHandle@DXGGLOBAL@@QEAAXI@Z @ 0x1C0004950 (-FreeHandle@DXGGLOBAL@@QEAAXI@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0004FF8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGADAPTERSYNCOBJECT@@QEAA@XZ @ 0x1C0083230 (--1DXGADAPTERSYNCOBJECT@@QEAA@XZ.c)
 *     ?Stop@DXGADAPTERSYNCOBJECT@@QEAAXXZ @ 0x1C00834F8 (-Stop@DXGADAPTERSYNCOBJECT@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECT@@IEAA@XZ @ 0x1C0083580 (--1DXGSYNCOBJECT@@IEAA@XZ.c)
 *     ?Destroy@DXGSYNCOBJECTCA@@QEAAXXZ @ 0x1C014C0F0 (-Destroy@DXGSYNCOBJECTCA@@QEAAXXZ.c)
 */

void __fastcall DXGSYNCOBJECT::Destroy(DXGSYNCOBJECT *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  _BYTE v15[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_DWORD *)this + 6) )
  {
    v14 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v14 + 24) = 1169LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( *((_DWORD *)this + 18) )
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v15);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
    DXGGLOBAL::FreeHandle(*((struct _KTHREAD ***)this + 2), *((_DWORD *)this + 18));
    *((_DWORD *)this + 18) = 0;
    if ( v15[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
  }
  if ( (*((_DWORD *)this + 33) & 4) != 0 )
    DXGSYNCOBJECTCA::Destroy(this);
  else
    DXGADAPTERSYNCOBJECT::Stop((DXGSYNCOBJECT *)((char *)this + 216));
  v9 = (_QWORD *)WdLogNewEntry5_WdEvent(v6, v5, v7, v8);
  v9[3] = this;
  v10 = *((unsigned int *)this + 18);
  v9[4] = v10;
  v9[5] = DXGPROCESS::GetCurrent(v10);
  WdLogEvent5_WdEvent(v9);
  if ( (*((_DWORD *)this + 33) & 4) == 0 )
    DXGADAPTERSYNCOBJECT::~DXGADAPTERSYNCOBJECT((DXGSYNCOBJECT *)((char *)this + 216), v11, v12, v13);
  DXGSYNCOBJECT::~DXGSYNCOBJECT(this, v11, v12, v13);
  operator delete(this);
}
