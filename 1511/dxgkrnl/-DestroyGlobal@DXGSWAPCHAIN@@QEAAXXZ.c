/*
 * XREFs of ?DestroyGlobal@DXGSWAPCHAIN@@QEAAXXZ @ 0x1C0165C10
 * Callers:
 *     ??1DXGSWAPCHAIN@@QEAA@XZ @ 0x1C0165694 (--1DXGSWAPCHAIN@@QEAA@XZ.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C00015E8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C0006B18 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z @ 0x1C000C10C (--_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00969B4 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 */

void __fastcall DXGSWAPCHAIN::DestroyGlobal(DXGSWAPCHAIN *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int i; // esi
  __int64 v8; // rbp
  AUTOEXPANDALLOCATION *v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v13; // rcx
  struct DXGSYNCOBJECT *ObjectA; // rbx
  DXGGLOBAL *v15; // rax
  void *v16; // rcx
  __int64 v17; // rbx
  _BYTE v18[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_QWORD *)this + 21) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v5 + 24) = 1258LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( *((_QWORD *)this + 14) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v6 + 24) = 1259LL;
    WdLogEvent5_WdAssertion(v6);
  }
  for ( i = 0; i < *((_DWORD *)this + 16); ++i )
  {
    v8 = 56LL * i;
    v9 = *(AUTOEXPANDALLOCATION **)(*((_QWORD *)this + 9) + v8 + 8);
    if ( v9 )
    {
      AUTOEXPANDALLOCATION::`scalar deleting destructor'(v9);
      *(_QWORD *)(*((_QWORD *)this + 9) + v8 + 8) = 0LL;
    }
    if ( *(_DWORD *)(*((_QWORD *)this + 9) + v8 + 20) )
    {
      DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v18);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
      v10 = *((_QWORD *)this + 9);
      Global = DXGGLOBAL::GetGlobal(v11);
      ObjectA = (struct DXGSYNCOBJECT *)DXGGLOBAL::GetObjectA((__int64)Global, *(_DWORD *)(v10 + v8 + 20), 8);
      if ( v18[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
      if ( ObjectA )
      {
        v15 = DXGGLOBAL::GetGlobal(v13);
        DXGGLOBAL::DestroySyncObject(v15, ObjectA, 0);
      }
      *(_DWORD *)(*((_QWORD *)this + 9) + v8 + 20) = 0;
    }
  }
  v16 = (void *)*((_QWORD *)this + 9);
  if ( v16 )
  {
    operator delete(v16);
    *((_QWORD *)this + 9) = 0LL;
  }
  v17 = WdLogNewEntry5_WdEvent(v16, a2, a3, a4);
  *(_QWORD *)(v17 + 24) = this;
  *(_QWORD *)(v17 + 32) = DXGPROCESS::GetCurrent();
  WdLogEvent5_WdEvent(v17);
}
