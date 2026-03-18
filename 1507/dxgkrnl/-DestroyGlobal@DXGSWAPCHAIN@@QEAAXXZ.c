/*
 * XREFs of ?DestroyGlobal@DXGSWAPCHAIN@@QEAAXXZ @ 0x1C01615E0
 * Callers:
 *     ??1DXGSWAPCHAIN@@QEAA@XZ @ 0x1C0161068 (--1DXGSWAPCHAIN@@QEAA@XZ.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C0004848 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0004FF8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ??_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z @ 0x1C000CBB8 (--_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C008AE34 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 */

void __fastcall DXGSWAPCHAIN::DestroyGlobal(DXGSWAPCHAIN *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int i; // esi
  __int64 v8; // rbp
  AUTOEXPANDALLOCATION *v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct DXGGLOBAL *Global; // rax
  __int64 v16; // rcx
  struct DXGSYNCOBJECT *ObjectA; // rbx
  PERESOURCE *v18; // rax
  __int64 v19; // r9
  void *v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rcx
  _BYTE v23[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_QWORD *)this + 18) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v5 + 24) = 1258LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( *((_QWORD *)this + 11) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 1259LL;
    WdLogEvent5_WdAssertion(v6);
  }
  for ( i = 0; i < *((_DWORD *)this + 10); ++i )
  {
    v8 = 56LL * i;
    v9 = *(AUTOEXPANDALLOCATION **)(*((_QWORD *)this + 6) + v8 + 8);
    if ( v9 )
    {
      AUTOEXPANDALLOCATION::`scalar deleting destructor'(v9);
      *(_QWORD *)(*((_QWORD *)this + 6) + v8 + 8) = 0LL;
    }
    if ( *(_DWORD *)(*((_QWORD *)this + 6) + v8 + 20) )
    {
      DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v23);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
      v10 = *((_QWORD *)this + 6);
      Global = DXGGLOBAL::GetGlobal(v12, v11, v13, v14);
      ObjectA = (struct DXGSYNCOBJECT *)DXGGLOBAL::GetObjectA((__int64)Global, *(_DWORD *)(v10 + v8 + 20), 8);
      if ( v23[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
      if ( ObjectA )
      {
        v18 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v16, a2, a3, a4);
        DXGGLOBAL::DestroySyncObject(v18, ObjectA, 0LL, v19);
      }
      *(_DWORD *)(*((_QWORD *)this + 6) + v8 + 20) = 0;
    }
  }
  v20 = (void *)*((_QWORD *)this + 6);
  if ( v20 )
  {
    operator delete(v20);
    *((_QWORD *)this + 6) = 0LL;
  }
  v21 = WdLogNewEntry5_WdEvent(v20, a2, a3, a4);
  *(_QWORD *)(v21 + 24) = this;
  *(_QWORD *)(v21 + 32) = DXGPROCESS::GetCurrent(v22);
  WdLogEvent5_WdEvent(v21);
}
