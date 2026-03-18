/*
 * XREFs of ?ConfigureSharedResourceWithSharedHandle@DXGDEVICE@@QEAAJEPEAXIE@Z @ 0x1C0134FD8
 * Callers:
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C0153F7C (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C0004848 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0004FF8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ConfigureSharedResourceHelper@DXGDEVICE@@QEAAJEPEAXPEAVDXGSHAREDRESOURCE@@EH@Z @ 0x1C0079FA4 (-ConfigureSharedResourceHelper@DXGDEVICE@@QEAAJEPEAXPEAVDXGSHAREDRESOURCE@@EH@Z.c)
 */

__int64 __fastcall DXGDEVICE::ConfigureSharedResourceWithSharedHandle(
        PERESOURCE *this,
        __int64 a2,
        void *a3,
        __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct DXGGLOBAL *Global; // rax
  struct DXGSHAREDRESOURCE *ObjectA; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rax
  _BYTE v21[24]; // [rsp+30h] [rbp-18h] BYREF

  v5 = (unsigned int)a4;
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(this[10]) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 4425LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( (_DWORD)v5 )
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v21);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
    Global = DXGGLOBAL::GetGlobal(v10, v9, v11, v12);
    ObjectA = (struct DXGSHAREDRESOURCE *)DXGGLOBAL::GetObjectA((__int64)Global, v5, 2);
    if ( ObjectA )
    {
      v8 = DXGDEVICE::ConfigureSharedResourceHelper(this, 0LL, (void *)0xFFFFFFFFFFFFFFFFLL, ObjectA, 1u, 0);
    }
    else
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17, v18);
      v19[3] = this;
      v8 = -1073741811;
      v19[5] = -1073741811LL;
      v19[4] = v5;
      WdLogEvent5_WdWarning(v19);
    }
    if ( v21[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21);
  }
  else
  {
    v7 = WdLogNewEntry5_WdWarning(this, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = this;
    v8 = -1073741811;
    *(_QWORD *)(v7 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v7);
  }
  return v8;
}
