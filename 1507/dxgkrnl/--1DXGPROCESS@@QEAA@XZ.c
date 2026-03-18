/*
 * XREFs of ??1DXGPROCESS@@QEAA@XZ @ 0x1C0085220
 * Callers:
 *     ?ReleaseReference@DXGPROCESS@@AEAAXXZ @ 0x1C0002D00 (-ReleaseReference@DXGPROCESS@@AEAAXXZ.c)
 *     ??_GDXGPROCESS@@QEAAPEAXI@Z @ 0x1C00171D4 (--_GDXGPROCESS@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0004B5C (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?FlushQueue@DXGWORKQUEUE@@QEAAXXZ @ 0x1C000999C (-FlushQueue@DXGWORKQUEUE@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXXZ @ 0x1C0084D7C (-Destroy@DXGPROCESS@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESS::~DXGPROCESS(DXGPROCESS *this, __int64 a2, __int64 a3, __int64 a4)
{
  void *v5; // rdi
  volatile signed __int32 *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  void *v12; // rdi
  unsigned int i; // edi
  struct DXGGLOBAL *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax

  if ( !*((_DWORD *)this + 10) )
    DXGPROCESS::Destroy((DXGFASTMUTEX **)this, a2, a3, a4);
  if ( *((_DWORD *)this + 10) != 2 )
  {
    v19 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v19 + 24) = 576LL;
    WdLogEvent5_WdAssertion(v19);
  }
  v5 = (void *)*((_QWORD *)this + 36);
  if ( v5 )
  {
    DXGFASTMUTEX::~DXGFASTMUTEX(*((DXGFASTMUTEX **)this + 36));
    operator delete(v5);
  }
  *((_QWORD *)this + 36) = 0LL;
  v6 = (volatile signed __int32 *)*((_QWORD *)this + 3);
  if ( v6 && _InterlockedExchangeAdd(v6 + 10, 0xFFFFFFFF) == 1 )
    operator delete((void *)v6);
  operator delete(*(void **)(*((_QWORD *)this + 9) + 80LL));
  v11 = *((_QWORD *)this + 9);
  if ( v11 )
  {
    DXGWORKQUEUE::FlushQueue((struct _LIST_ENTRY *)(v11 + 88));
    operator delete((void *)v11);
  }
  v12 = (void *)*((_QWORD *)this + 11);
  if ( v12 )
  {
    DXGFASTMUTEX::~DXGFASTMUTEX(*((DXGFASTMUTEX **)this + 11));
    operator delete(v12);
  }
  *((_QWORD *)this + 11) = 0LL;
  for ( i = 0; ; ++i )
  {
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v20 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
      *(_QWORD *)(v20 + 24) = 1038LL;
      WdLogEvent5_WdAssertion(v20);
    }
    v14 = DXGGLOBAL::m_pGlobal;
    if ( !*((_DWORD *)DXGGLOBAL::m_pGlobal + 196) )
    {
      v21 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
      *(_QWORD *)(v21 + 24) = 1189LL;
      WdLogEvent5_WdAssertion(v21);
    }
    if ( i >= *((_DWORD *)v14 + 196) )
      break;
  }
  operator delete(*((void **)this + 6));
  if ( *((DXGPROCESS **)this + 34) != (DXGPROCESS *)((char *)this + 272) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
    *(_QWORD *)(v22 + 24) = 613LL;
    WdLogEvent5_WdAssertion(v22);
  }
  if ( *((DXGPROCESS **)this + 31) != (DXGPROCESS *)((char *)this + 248) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
    *(_QWORD *)(v23 + 24) = 613LL;
    WdLogEvent5_WdAssertion(v23);
  }
  operator delete(*((void **)this + 27));
  *((_QWORD *)this + 2) = 0LL;
}
