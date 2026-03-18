/*
 * XREFs of ?ConfigureSharedResourceWithSharedHandle@DXGDEVICE@@QEAAJEPEAXIE@Z @ 0x1C015D02C
 * Callers:
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C017CE7C (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0006E88 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C0009B60 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ConfigureSharedResourceHelper@DXGDEVICE@@QEAAJEPEAXPEAVDXGSHAREDRESOURCE@@EH@Z @ 0x1C009564C (-ConfigureSharedResourceHelper@DXGDEVICE@@QEAAJEPEAXPEAVDXGSHAREDRESOURCE@@EH@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
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
  __int64 v9; // rcx
  struct DXGGLOBAL *Global; // rax
  struct DXGSHAREDRESOURCE *ObjectA; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rax
  _BYTE v18[24]; // [rsp+30h] [rbp-18h] BYREF

  v5 = (unsigned int)a4;
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(this[10]) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v6 + 24) = 4748LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( (_DWORD)v5 )
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v18);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
    Global = DXGGLOBAL::GetGlobal(v9);
    ObjectA = (struct DXGSHAREDRESOURCE *)DXGGLOBAL::GetObjectA((__int64)Global, v5, 2);
    if ( ObjectA )
    {
      v8 = DXGDEVICE::ConfigureSharedResourceHelper(this, 0LL, (void *)0xFFFFFFFFFFFFFFFFLL, ObjectA, 1u, 0);
    }
    else
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
      v16[3] = this;
      v8 = -1073741811;
      v16[5] = -1073741811LL;
      v16[4] = v5;
      WdLogEvent5_WdWarning(v16);
    }
    if ( v18[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
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
