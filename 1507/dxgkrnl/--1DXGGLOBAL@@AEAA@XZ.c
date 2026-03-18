/*
 * XREFs of ??1DXGGLOBAL@@AEAA@XZ @ 0x1C013EAAC
 * Callers:
 *     ?DestroyGlobal@DXGGLOBAL@@SAXXZ @ 0x1C013F010 (-DestroyGlobal@DXGGLOBAL@@SAXXZ.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0004B5C (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??_GDXGPROCESS@@QEAAPEAXI@Z @ 0x1C00171D4 (--_GDXGPROCESS@@QEAAPEAXI@Z.c)
 *     ??_GDXGDIAGNOSTICS@@QEAAPEAXI@Z @ 0x1C001E6F0 (--_GDXGDIAGNOSTICS@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ??1AUTOEXPANDALLOCATION@@QEAA@XZ @ 0x1C00BE1AC (--1AUTOEXPANDALLOCATION@@QEAA@XZ.c)
 *     ??1EDIDCACHE@@QEAA@XZ @ 0x1C014149C (--1EDIDCACHE@@QEAA@XZ.c)
 *     ?Release@DXGMMS_EXPORT@@QEAAJXZ @ 0x1C0141A74 (-Release@DXGMMS_EXPORT@@QEAAJXZ.c)
 *     ??1DXGKSQM_GLOBAL@@QEAA@XZ @ 0x1C014B2DC (--1DXGKSQM_GLOBAL@@QEAA@XZ.c)
 *     ??1QDC_CACHE@@QEAA@XZ @ 0x1C0150164 (--1QDC_CACHE@@QEAA@XZ.c)
 *     ??1DXGSESSIONMGR@@QEAA@XZ @ 0x1C01567D8 (--1DXGSESSIONMGR@@QEAA@XZ.c)
 */

void __fastcall DXGGLOBAL::~DXGGLOBAL(DXGGLOBAL *this, __int64 a2, __int64 a3, __int64 a4)
{
  DXGMMS_EXPORT **v5; // rbx
  __int64 v6; // rbp
  DXGMMS_EXPORT *v7; // rsi
  struct _ERESOURCE *v8; // rcx
  DXGDIAGNOSTICS *v9; // rcx
  void *v10; // rbx
  void *v11; // rbx
  void *v12; // rbx
  DXGPROCESS *v13; // rcx
  ULONG v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rax
  void *v20; // rbx
  __int64 v21; // rax
  _QWORD *v22; // rsi
  __int64 v23; // rax
  _QWORD *v24; // rbp
  __int64 v25; // rax
  _QWORD *v26; // r14
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rax

  v5 = (DXGMMS_EXPORT **)DXGGLOBAL::m_pDxgmmsExport;
  v6 = 2LL;
  do
  {
    v7 = *v5;
    if ( *v5 )
    {
      DXGMMS_EXPORT::Release(*v5);
      operator delete(v7);
    }
    *v5++ = 0LL;
    --v6;
  }
  while ( v6 );
  v8 = (struct _ERESOURCE *)*((_QWORD *)this + 39);
  if ( v8 )
  {
    ExDeleteResourceLite(v8);
    operator delete(*((void **)this + 39));
    *((_QWORD *)this + 39) = 0LL;
  }
  v9 = (DXGDIAGNOSTICS *)*((_QWORD *)this + 68);
  if ( v9 )
  {
    DXGDIAGNOSTICS::`scalar deleting destructor'(v9);
    *((_QWORD *)this + 68) = 0LL;
  }
  v10 = (void *)*((_QWORD *)this + 69);
  if ( v10 )
  {
    DXGKSQM_GLOBAL::~DXGKSQM_GLOBAL(*((DXGKSQM_GLOBAL **)this + 69));
    operator delete(v10);
    *((_QWORD *)this + 69) = 0LL;
  }
  v11 = (void *)*((_QWORD *)this + 70);
  if ( v11 )
  {
    DXGSESSIONMGR::~DXGSESSIONMGR(*((DXGSESSIONMGR **)this + 70));
    operator delete(v11);
    *((_QWORD *)this + 70) = 0LL;
  }
  v12 = (void *)*((_QWORD *)this + 80);
  if ( v12 )
  {
    EDIDCACHE::~EDIDCACHE(*((EDIDCACHE **)this + 80));
    operator delete(v12);
    *((_QWORD *)this + 80) = 0LL;
  }
  if ( *((_BYTE *)this + 769) )
  {
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)((char *)this + 656));
    *((_BYTE *)this + 769) = 0;
  }
  v13 = (DXGPROCESS *)*((_QWORD *)this + 99);
  if ( v13 )
  {
    DXGPROCESS::`scalar deleting destructor'(v13);
    *((_QWORD *)this + 99) = 0LL;
  }
  if ( *((_QWORD *)this + 61) )
  {
    v14 = RtlNumberOfClearBits((PRTL_BITMAP)((char *)this + 472));
    v18 = (*((_DWORD *)this + 196) + 31) & 0xFFFFFFE0;
    if ( v14 != (_DWORD)v18 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v18, v15, v16, v17);
      *(_QWORD *)(v19 + 24) = 657LL;
      WdLogEvent5_WdAssertion(v19);
    }
    operator delete(*((void **)this + 61));
    *((_QWORD *)this + 61) = 0LL;
    RtlInitializeBitMap((PRTL_BITMAP)((char *)this + 472), 0LL, 0);
  }
  v20 = (void *)*((_QWORD *)this + 113);
  if ( v20 )
  {
    QDC_CACHE::~QDC_CACHE(*((QDC_CACHE **)this + 113));
    operator delete(v20);
    *((_QWORD *)this + 113) = 0LL;
  }
  if ( *((_DWORD *)this + 49) != *((_DWORD *)this + 48) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v13, a2, a3, a4);
    *(_QWORD *)(v21 + 24) = 679LL;
    WdLogEvent5_WdAssertion(v21);
  }
  v22 = (_QWORD *)((char *)this + 296);
  if ( (_QWORD *)*v22 != v22 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v13, a2, a3, a4);
    *(_QWORD *)(v23 + 24) = 680LL;
    WdLogEvent5_WdAssertion(v23);
  }
  v24 = (_QWORD *)((char *)this + 360);
  if ( (_QWORD *)*v24 != v24 )
  {
    v25 = WdLogNewEntry5_WdAssertion(v13, a2, a3, a4);
    *(_QWORD *)(v25 + 24) = 681LL;
    WdLogEvent5_WdAssertion(v25);
  }
  v26 = (_QWORD *)((char *)this + 416);
  if ( (_QWORD *)*v26 != v26 )
  {
    v27 = WdLogNewEntry5_WdAssertion(v13, a2, a3, a4);
    *(_QWORD *)(v27 + 24) = 682LL;
    WdLogEvent5_WdAssertion(v27);
  }
  if ( *((DXGGLOBAL **)this + 119) != (DXGGLOBAL *)((char *)this + 952) )
  {
    v28 = WdLogNewEntry5_WdAssertion(v13, a2, a3, a4);
    *(_QWORD *)(v28 + 24) = 613LL;
    WdLogEvent5_WdAssertion(v28);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 912));
  AUTOEXPANDALLOCATION::~AUTOEXPANDALLOCATION((DXGGLOBAL *)((char *)this + 848));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 808));
  if ( *((_QWORD *)this + 73) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v30, v29, v31, v32);
    *(_QWORD *)(v33 + 24) = 28922LL;
    WdLogEvent5_WdAssertion(v33);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 432));
  if ( (_QWORD *)*v26 != v26 )
  {
    v38 = WdLogNewEntry5_WdAssertion(v35, v34, v36, v37);
    *(_QWORD *)(v38 + 24) = 613LL;
    WdLogEvent5_WdAssertion(v38);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 376));
  if ( (_QWORD *)*v24 != v24 )
  {
    v43 = WdLogNewEntry5_WdAssertion(v40, v39, v41, v42);
    *(_QWORD *)(v43 + 24) = 613LL;
    WdLogEvent5_WdAssertion(v43);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 320));
  if ( (_QWORD *)*v22 != v22 )
  {
    v48 = WdLogNewEntry5_WdAssertion(v45, v44, v46, v47);
    *(_QWORD *)(v48 + 24) = 613LL;
    WdLogEvent5_WdAssertion(v48);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 256));
  if ( *((DXGGLOBAL **)this + 30) != (DXGGLOBAL *)((char *)this + 240) )
  {
    v53 = WdLogNewEntry5_WdAssertion(v50, v49, v51, v52);
    *(_QWORD *)(v53 + 24) = 613LL;
    WdLogEvent5_WdAssertion(v53);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 200));
  operator delete(*((void **)this + 22));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 136));
}
