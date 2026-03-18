/*
 * XREFs of ??1DXGPROCESS@@QEAA@XZ @ 0x1C0068064
 * Callers:
 *     ?ReleaseReference@DXGPROCESS@@AEAAXXZ @ 0x1C00018D0 (-ReleaseReference@DXGPROCESS@@AEAAXXZ.c)
 *     ??_GDXGPROCESS@@QEAAPEAXI@Z @ 0x1C0018818 (--_GDXGPROCESS@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0006E14 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?FlushQueue@DXGWORKQUEUE@@QEAAXXZ @ 0x1C000C390 (-FlushQueue@DXGWORKQUEUE@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXXZ @ 0x1C0067BB4 (-Destroy@DXGPROCESS@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESS::~DXGPROCESS(DXGPROCESS *this)
{
  void *v2; // rdi
  volatile signed __int32 *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdi
  void *v6; // rdi
  unsigned int i; // edi
  struct DXGGLOBAL *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax

  if ( !*((_DWORD *)this + 10) )
    DXGPROCESS::Destroy((union _LARGE_INTEGER **)this);
  if ( *((_DWORD *)this + 10) != 2 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v10 + 24) = 576LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v2 = (void *)*((_QWORD *)this + 36);
  if ( v2 )
  {
    DXGFASTMUTEX::~DXGFASTMUTEX(*((DXGFASTMUTEX **)this + 36));
    operator delete(v2);
  }
  *((_QWORD *)this + 36) = 0LL;
  v3 = (volatile signed __int32 *)*((_QWORD *)this + 3);
  if ( v3 && _InterlockedExchangeAdd(v3 + 10, 0xFFFFFFFF) == 1 )
    operator delete((void *)v3);
  operator delete(*(void **)(*((_QWORD *)this + 9) + 80LL));
  v5 = *((_QWORD *)this + 9);
  if ( v5 )
  {
    DXGWORKQUEUE::FlushQueue((struct _LIST_ENTRY *)(v5 + 88));
    operator delete((void *)v5);
  }
  v6 = (void *)*((_QWORD *)this + 11);
  if ( v6 )
  {
    DXGFASTMUTEX::~DXGFASTMUTEX(*((DXGFASTMUTEX **)this + 11));
    operator delete(v6);
  }
  *((_QWORD *)this + 11) = 0LL;
  for ( i = 0; ; ++i )
  {
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v11 = WdLogNewEntry5_WdAssertion(v4);
      *(_QWORD *)(v11 + 24) = 1016LL;
      WdLogEvent5_WdAssertion(v11);
    }
    v8 = DXGGLOBAL::m_pGlobal;
    if ( !*((_DWORD *)DXGGLOBAL::m_pGlobal + 232) )
    {
      v12 = WdLogNewEntry5_WdAssertion(v4);
      *(_QWORD *)(v12 + 24) = 1167LL;
      WdLogEvent5_WdAssertion(v12);
    }
    if ( i >= *((_DWORD *)v8 + 232) )
      break;
  }
  operator delete(*((void **)this + 6));
  if ( *((DXGPROCESS **)this + 34) != (DXGPROCESS *)((char *)this + 272) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v13 + 24) = 633LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( *((DXGPROCESS **)this + 31) != (DXGPROCESS *)((char *)this + 248) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v14 + 24) = 633LL;
    WdLogEvent5_WdAssertion(v14);
  }
  operator delete(*((void **)this + 27));
  *((_QWORD *)this + 2) = 0LL;
}
