/*
 * XREFs of ?DestroyGlobal@DXGSWAPCHAIN@@QEAAXXZ @ 0x1C018D8D4
 * Callers:
 *     ??1DXGSWAPCHAIN@@QEAA@XZ @ 0x1C018D340 (--1DXGSWAPCHAIN@@QEAA@XZ.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0006E88 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C00099F0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x1C0009A6C (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009AB4 (-AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C0009B60 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z @ 0x1C000D798 (--_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1C0175F1C (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 */

void __fastcall DXGSWAPCHAIN::DestroyGlobal(DXGSWAPCHAIN *this)
{
  __int64 v2; // rax
  __int64 v3; // rax
  unsigned int i; // esi
  __int64 v5; // rbp
  AUTOEXPANDALLOCATION *v6; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  struct DXGGLOBAL *v10; // rax
  __int64 v11; // rcx
  struct DXGSYNCOBJECT *ObjectA; // rbx
  PERESOURCE *v13; // rax
  void *v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 CurrentProcess; // rax
  __int64 v18; // rdx
  _BYTE v19[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v20[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( *((_QWORD *)this + 18) )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v2 + 24) = 1287LL;
    WdLogEvent5_WdAssertion(v2);
  }
  if ( *((_QWORD *)this + 11) )
  {
    v3 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v3 + 24) = 1288LL;
    WdLogEvent5_WdAssertion(v3);
  }
  for ( i = 0; i < *((_DWORD *)this + 10); ++i )
  {
    v5 = 56LL * i;
    v6 = *(AUTOEXPANDALLOCATION **)(*((_QWORD *)this + 6) + v5 + 8);
    if ( v6 )
    {
      AUTOEXPANDALLOCATION::`scalar deleting destructor'(v6);
      *(_QWORD *)(*((_QWORD *)this + 6) + v5 + 8) = 0LL;
    }
    if ( *(_DWORD *)(*((_QWORD *)this + 6) + v5 + 20) )
    {
      Global = DXGGLOBAL::GetGlobal((__int64)v6);
      DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v20, Global);
      DXGSYNCOBJECTLOCK::AcquireExclusive((DXGSYNCOBJECTLOCK *)v20);
      DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v19);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
      v8 = *((_QWORD *)this + 6);
      v10 = DXGGLOBAL::GetGlobal(v9);
      ObjectA = (struct DXGSYNCOBJECT *)DXGGLOBAL::GetObjectA((__int64)v10, *(_DWORD *)(v8 + v5 + 20), 8);
      if ( v19[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
      if ( ObjectA )
      {
        v13 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v11);
        DXGGLOBAL::DestroySyncObject(v13, ObjectA, 0, 1);
      }
      *(_DWORD *)(*((_QWORD *)this + 6) + v5 + 20) = 0;
      DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v20);
    }
  }
  v14 = (void *)*((_QWORD *)this + 6);
  if ( v14 )
  {
    operator delete(v14);
    *((_QWORD *)this + 6) = 0LL;
  }
  v15 = WdLogNewEntry5_WdEvent(v14);
  *(_QWORD *)(v15 + 24) = this;
  CurrentProcess = PsGetCurrentProcess(v16);
  *(_QWORD *)(v15 + 32) = PsGetProcessDxgProcess(CurrentProcess, v18);
  WdLogEvent5_WdEvent(v15);
}
