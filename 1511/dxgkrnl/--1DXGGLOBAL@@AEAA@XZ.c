/*
 * XREFs of ??1DXGGLOBAL@@AEAA@XZ @ 0x1C0144EFC
 * Callers:
 *     ?DestroyGlobal@DXGGLOBAL@@SAXXZ @ 0x1C0145488 (-DestroyGlobal@DXGGLOBAL@@SAXXZ.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0006E14 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??_GDXGPROCESS@@QEAAPEAXI@Z @ 0x1C0018818 (--_GDXGPROCESS@@QEAAPEAXI@Z.c)
 *     ??_GDXGDIAGNOSTICS@@QEAAPEAXI@Z @ 0x1C001E7B0 (--_GDXGDIAGNOSTICS@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??1AUTOEXPANDALLOCATION@@QEAA@XZ @ 0x1C00BC014 (--1AUTOEXPANDALLOCATION@@QEAA@XZ.c)
 *     ??1EDIDCACHE@@QEAA@XZ @ 0x1C0146F5C (--1EDIDCACHE@@QEAA@XZ.c)
 *     ?Release@DXGMMS_EXPORT@@QEAAJXZ @ 0x1C014753C (-Release@DXGMMS_EXPORT@@QEAAJXZ.c)
 *     ??1DXGKSQM_GLOBAL@@QEAA@XZ @ 0x1C0150030 (--1DXGKSQM_GLOBAL@@QEAA@XZ.c)
 *     ??1QDC_CACHE@@QEAA@XZ @ 0x1C0153478 (--1QDC_CACHE@@QEAA@XZ.c)
 *     ??1DXGSESSIONMGR@@QEAA@XZ @ 0x1C015AAEC (--1DXGSESSIONMGR@@QEAA@XZ.c)
 */

void __fastcall DXGGLOBAL::~DXGGLOBAL(DXGGLOBAL *this)
{
  DXGMMS_EXPORT **v2; // rbx
  __int64 v3; // rbp
  DXGMMS_EXPORT *v4; // rsi
  struct _ERESOURCE *v5; // rcx
  DXGDIAGNOSTICS *v6; // rcx
  void *v7; // rbx
  void *v8; // rbx
  void *v9; // rbx
  DXGPROCESS *v10; // rcx
  ULONG v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  void *v14; // rbx
  __int64 v15; // rax
  _QWORD *v16; // rsi
  __int64 v17; // rax
  _QWORD *v18; // rbp
  __int64 v19; // rax
  _QWORD *v20; // r14
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax

  v2 = (DXGMMS_EXPORT **)DXGGLOBAL::m_pDxgmmsExport;
  v3 = 2LL;
  do
  {
    v4 = *v2;
    if ( *v2 )
    {
      DXGMMS_EXPORT::Release(*v2);
      operator delete(v4);
    }
    *v2++ = 0LL;
    --v3;
  }
  while ( v3 );
  v5 = (struct _ERESOURCE *)*((_QWORD *)this + 48);
  if ( v5 )
  {
    ExDeleteResourceLite(v5);
    operator delete(*((void **)this + 48));
    *((_QWORD *)this + 48) = 0LL;
  }
  v6 = (DXGDIAGNOSTICS *)*((_QWORD *)this + 86);
  if ( v6 )
  {
    DXGDIAGNOSTICS::`scalar deleting destructor'(v6);
    *((_QWORD *)this + 86) = 0LL;
  }
  v7 = (void *)*((_QWORD *)this + 87);
  if ( v7 )
  {
    DXGKSQM_GLOBAL::~DXGKSQM_GLOBAL(*((DXGKSQM_GLOBAL **)this + 87));
    operator delete(v7);
    *((_QWORD *)this + 87) = 0LL;
  }
  v8 = (void *)*((_QWORD *)this + 88);
  if ( v8 )
  {
    DXGSESSIONMGR::~DXGSESSIONMGR(*((DXGSESSIONMGR **)this + 88));
    operator delete(v8);
    *((_QWORD *)this + 88) = 0LL;
  }
  v9 = (void *)*((_QWORD *)this + 98);
  if ( v9 )
  {
    EDIDCACHE::~EDIDCACHE(*((EDIDCACHE **)this + 98));
    operator delete(v9);
    *((_QWORD *)this + 98) = 0LL;
  }
  if ( *((_BYTE *)this + 913) )
  {
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)((char *)this + 800));
    *((_BYTE *)this + 913) = 0;
  }
  v10 = (DXGPROCESS *)*((_QWORD *)this + 117);
  if ( v10 )
  {
    DXGPROCESS::`scalar deleting destructor'(v10);
    *((_QWORD *)this + 117) = 0LL;
  }
  if ( *((_QWORD *)this + 79) )
  {
    v11 = RtlNumberOfClearBits((PRTL_BITMAP)((char *)this + 616));
    v12 = (*((_DWORD *)this + 232) + 31) & 0xFFFFFFE0;
    if ( v11 != (_DWORD)v12 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v12);
      *(_QWORD *)(v13 + 24) = 633LL;
      WdLogEvent5_WdAssertion(v13);
    }
    operator delete(*((void **)this + 79));
    *((_QWORD *)this + 79) = 0LL;
    RtlInitializeBitMap((PRTL_BITMAP)((char *)this + 616), 0LL, 0);
  }
  v14 = (void *)*((_QWORD *)this + 134);
  if ( v14 )
  {
    QDC_CACHE::~QDC_CACHE(*((QDC_CACHE **)this + 134));
    operator delete(v14);
    *((_QWORD *)this + 134) = 0LL;
  }
  if ( *((_DWORD *)this + 55) != *((_DWORD *)this + 54) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v15 + 24) = 655LL;
    WdLogEvent5_WdAssertion(v15);
  }
  v16 = (_QWORD *)((char *)this + 368);
  if ( (_QWORD *)*v16 != v16 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v17 + 24) = 656LL;
    WdLogEvent5_WdAssertion(v17);
  }
  v18 = (_QWORD *)((char *)this + 456);
  if ( (_QWORD *)*v18 != v18 )
  {
    v19 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v19 + 24) = 657LL;
    WdLogEvent5_WdAssertion(v19);
  }
  v20 = (_QWORD *)((char *)this + 536);
  if ( (_QWORD *)*v20 != v20 )
  {
    v21 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v21 + 24) = 658LL;
    WdLogEvent5_WdAssertion(v21);
  }
  if ( *((_QWORD *)this + 136) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v22 + 24) = 659LL;
    WdLogEvent5_WdAssertion(v22);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 1224));
  if ( *((DXGGLOBAL **)this + 149) != (DXGGLOBAL *)((char *)this + 1192) )
  {
    v24 = WdLogNewEntry5_WdAssertion(v23);
    *(_QWORD *)(v24 + 24) = 633LL;
    WdLogEvent5_WdAssertion(v24);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 1128));
  AUTOEXPANDALLOCATION::~AUTOEXPANDALLOCATION((DXGGLOBAL *)((char *)this + 1016));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 952));
  if ( *((_QWORD *)this + 91) )
  {
    v26 = WdLogNewEntry5_WdAssertion(v25);
    *(_QWORD *)(v26 + 24) = 29583LL;
    WdLogEvent5_WdAssertion(v26);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 552));
  if ( (_QWORD *)*v20 != v20 )
  {
    v28 = WdLogNewEntry5_WdAssertion(v27);
    *(_QWORD *)(v28 + 24) = 633LL;
    WdLogEvent5_WdAssertion(v28);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 472));
  if ( (_QWORD *)*v18 != v18 )
  {
    v30 = WdLogNewEntry5_WdAssertion(v29);
    *(_QWORD *)(v30 + 24) = 633LL;
    WdLogEvent5_WdAssertion(v30);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 392));
  if ( (_QWORD *)*v16 != v16 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v31);
    *(_QWORD *)(v32 + 24) = 633LL;
    WdLogEvent5_WdAssertion(v32);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 304));
  if ( *((DXGGLOBAL **)this + 36) != (DXGGLOBAL *)((char *)this + 288) )
  {
    v34 = WdLogNewEntry5_WdAssertion(v33);
    *(_QWORD *)(v34 + 24) = 633LL;
    WdLogEvent5_WdAssertion(v34);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 224));
  operator delete(*((void **)this + 25));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 136));
}
