/*
 * XREFs of ?DestroyGlobal@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C005C5C4
 * Callers:
 *     ??1DXGKEYEDMUTEX@@QEAA@XZ @ 0x1C005C6FC (--1DXGKEYEDMUTEX@@QEAA@XZ.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C00015E8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?FreeHandle@DXGGLOBAL@@QEAAXI@Z @ 0x1C0006C6C (-FreeHandle@DXGGLOBAL@@QEAAXI@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall DXGKEYEDMUTEX::DestroyGlobal(DXGKEYEDMUTEX *this)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_QWORD *)this + 3) )
  {
    v3 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v3 + 24) = 2611LL;
    WdLogEvent5_WdAssertion(v3);
  }
  if ( *((DXGKEYEDMUTEX **)this + 10) != (DXGKEYEDMUTEX *)((char *)this + 80) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 2612LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( *((_DWORD *)this + 8) )
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v5);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v5);
    DXGGLOBAL::FreeHandle(*((struct _KTHREAD ***)this + 2), *((_DWORD *)this + 8));
    *((_DWORD *)this + 8) = 0;
    if ( v5[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v5);
  }
  operator delete(*((void **)this + 20));
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 42) = 0;
  v2 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v2[3] = this;
  v2[4] = *((unsigned int *)this + 8);
  v2[5] = DXGPROCESS::GetCurrent();
  WdLogEvent5_WdEvent(v2);
}
