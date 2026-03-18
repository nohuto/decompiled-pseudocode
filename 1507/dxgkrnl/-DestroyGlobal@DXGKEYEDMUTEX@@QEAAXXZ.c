/*
 * XREFs of ?DestroyGlobal@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C005B79C
 * Callers:
 *     ??1DXGKEYEDMUTEX@@QEAA@XZ @ 0x1C005B8D4 (--1DXGKEYEDMUTEX@@QEAA@XZ.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?FreeHandle@DXGGLOBAL@@QEAAXI@Z @ 0x1C0004950 (-FreeHandle@DXGGLOBAL@@QEAAXI@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0004FF8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall DXGKEYEDMUTEX::DestroyGlobal(DXGKEYEDMUTEX *this, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_QWORD *)this + 3) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 2649LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( *((DXGKEYEDMUTEX **)this + 10) != (DXGKEYEDMUTEX *)((char *)this + 80) )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = 2650LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( *((_DWORD *)this + 8) )
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v8);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
    DXGGLOBAL::FreeHandle(*((struct _KTHREAD ***)this + 2), *((_DWORD *)this + 8));
    *((_DWORD *)this + 8) = 0;
    if ( v8[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
  }
  operator delete(*((void **)this + 17));
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 36) = 0;
  v5 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v5[3] = this;
  v5[4] = *((unsigned int *)this + 8);
  v5[5] = DXGPROCESS::GetCurrent();
  WdLogEvent5_WdEvent(v5);
}
