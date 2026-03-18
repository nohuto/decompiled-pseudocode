/*
 * XREFs of ??1DXGPROCESS@@AEAA@XZ @ 0x1C00A2908
 * Callers:
 *     ?ReleaseReference@DXGPROCESS@@AEAAXXZ @ 0x1C0009544 (-ReleaseReference@DXGPROCESS@@AEAAXXZ.c)
 *     ??_GDXGPROCESS@@AEAAPEAXI@Z @ 0x1C001CEA0 (--_GDXGPROCESS@@AEAAPEAXI@Z.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0006DF8 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?FlushQueue@DXGWORKQUEUE@@QEAAXXZ @ 0x1C000CDA4 (-FlushQueue@DXGWORKQUEUE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00A2328 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

void __fastcall DXGPROCESS::~DXGPROCESS(DXGPROCESS *this)
{
  __int64 v2; // rcx
  bool v3; // zf
  void *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rdi
  void *v8; // rdi
  unsigned int i; // edi
  DXGGLOBAL *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  _BYTE v18[88]; // [rsp+20h] [rbp-58h] BYREF

  if ( *((_QWORD *)this + 39) )
  {
    v12 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v12 + 24) = 843LL;
    WdLogEvent5_WdAssertion(v12);
  }
  memset(v18, 0, 0x40uLL);
  EtwActivityIdControl(3u, (LPGUID)&v18[8]);
  v3 = *((_DWORD *)this + 8) == 0;
  *(_QWORD *)&v18[56] = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)&v18[24] = 25;
  if ( v3 )
    DXGPROCESS::Destroy((DXGFASTMUTEX **)this, (struct _ERESOURCE *)v18);
  if ( *((_DWORD *)this + 8) != 2 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v13 + 24) = 854LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v4 = (void *)*((_QWORD *)this + 35);
  if ( v4 )
  {
    DXGFASTMUTEX::~DXGFASTMUTEX(*((DXGFASTMUTEX **)this + 35));
    operator delete(v4);
  }
  v5 = *((_QWORD *)this + 8);
  *((_QWORD *)this + 35) = 0LL;
  operator delete(*(void **)(v5 + 80));
  v7 = *((_QWORD *)this + 8);
  if ( v7 )
  {
    DXGWORKQUEUE::FlushQueue((struct _LIST_ENTRY *)(v7 + 88));
    operator delete((void *)v7);
  }
  v8 = (void *)*((_QWORD *)this + 10);
  if ( v8 )
  {
    DXGFASTMUTEX::~DXGFASTMUTEX(*((DXGFASTMUTEX **)this + 10));
    operator delete(v8);
  }
  *((_QWORD *)this + 10) = 0LL;
  for ( i = 0; ; ++i )
  {
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v14 = WdLogNewEntry5_WdAssertion(v6);
      *(_QWORD *)(v14 + 24) = 982LL;
      WdLogEvent5_WdAssertion(v14);
    }
    v10 = DXGGLOBAL::m_pGlobal;
    if ( !*((_DWORD *)DXGGLOBAL::m_pGlobal + 192) )
    {
      v15 = WdLogNewEntry5_WdAssertion(v6);
      *(_QWORD *)(v15 + 24) = 1117LL;
      WdLogEvent5_WdAssertion(v15);
    }
    if ( i >= *((_DWORD *)v10 + 192) )
      break;
  }
  operator delete(*((void **)this + 5));
  if ( *((DXGPROCESS **)this + 33) != (DXGPROCESS *)((char *)this + 264) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v16 + 24) = 619LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( *((DXGPROCESS **)this + 30) != (DXGPROCESS *)((char *)this + 240) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v17 + 24) = 619LL;
    WdLogEvent5_WdAssertion(v17);
  }
  operator delete(*((void **)this + 26));
  *((_QWORD *)this + 2) = 0LL;
}
