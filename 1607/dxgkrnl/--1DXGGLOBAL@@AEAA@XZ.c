/*
 * XREFs of ??1DXGGLOBAL@@AEAA@XZ @ 0x1C0168A04
 * Callers:
 *     ?DestroyGlobal@DXGGLOBAL@@SAXXZ @ 0x1C0168F74 (-DestroyGlobal@DXGGLOBAL@@SAXXZ.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0006DF8 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??_GDXGDIAGNOSTICS@@QEAAPEAXI@Z @ 0x1C0025530 (--_GDXGDIAGNOSTICS@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00CE444 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ??1AUTOEXPANDALLOCATION@@QEAA@XZ @ 0x1C00DB56C (--1AUTOEXPANDALLOCATION@@QEAA@XZ.c)
 *     ??1EDIDCACHE@@QEAA@XZ @ 0x1C016B6F0 (--1EDIDCACHE@@QEAA@XZ.c)
 *     ?Release@DXGMMS_EXPORT@@QEAAJXZ @ 0x1C016BD90 (-Release@DXGMMS_EXPORT@@QEAAJXZ.c)
 *     ??1QDC_CACHE@@QEAA@XZ @ 0x1C01784F8 (--1QDC_CACHE@@QEAA@XZ.c)
 *     ??1DXGSESSIONMGR@@QEAA@XZ @ 0x1C017FAE4 (--1DXGSESSIONMGR@@QEAA@XZ.c)
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
  struct DXGPROCESS *v9; // rcx
  ULONG v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  void *v13; // rbx
  __int64 v14; // rax
  _QWORD *v15; // rsi
  __int64 v16; // rax
  _QWORD *v17; // rbp
  __int64 v18; // rax
  _QWORD *v19; // r14
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax

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
  v5 = (struct _ERESOURCE *)*((_QWORD *)this + 39);
  if ( v5 )
  {
    ExDeleteResourceLite(v5);
    operator delete(*((void **)this + 39));
    *((_QWORD *)this + 39) = 0LL;
  }
  v6 = (DXGDIAGNOSTICS *)*((_QWORD *)this + 68);
  if ( v6 )
  {
    DXGDIAGNOSTICS::`scalar deleting destructor'(v6);
    *((_QWORD *)this + 68) = 0LL;
  }
  v7 = (void *)*((_QWORD *)this + 69);
  if ( v7 )
  {
    DXGSESSIONMGR::~DXGSESSIONMGR(*((DXGSESSIONMGR **)this + 69));
    operator delete(v7);
    *((_QWORD *)this + 69) = 0LL;
  }
  v8 = (void *)*((_QWORD *)this + 79);
  if ( v8 )
  {
    EDIDCACHE::~EDIDCACHE(*((EDIDCACHE **)this + 79));
    operator delete(v8);
    *((_QWORD *)this + 79) = 0LL;
  }
  if ( *((_BYTE *)this + 753) )
  {
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)((char *)this + 640));
    *((_BYTE *)this + 753) = 0;
  }
  v9 = (struct DXGPROCESS *)*((_QWORD *)this + 97);
  if ( v9 )
  {
    DXGPROCESS::DestroyDxgProcess(v9);
    *((_QWORD *)this + 97) = 0LL;
  }
  if ( *((_QWORD *)this + 61) )
  {
    v10 = RtlNumberOfClearBits((PRTL_BITMAP)((char *)this + 472));
    v11 = (*((_DWORD *)this + 192) + 31) & 0xFFFFFFE0;
    if ( v10 != (_DWORD)v11 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v11);
      *(_QWORD *)(v12 + 24) = 611LL;
      WdLogEvent5_WdAssertion(v12);
    }
    operator delete(*((void **)this + 61));
    *((_QWORD *)this + 61) = 0LL;
    RtlInitializeBitMap((PRTL_BITMAP)((char *)this + 472), 0LL, 0);
  }
  v13 = (void *)*((_QWORD *)this + 111);
  if ( v13 )
  {
    QDC_CACHE::~QDC_CACHE(*((QDC_CACHE **)this + 111));
    operator delete(v13);
    *((_QWORD *)this + 111) = 0LL;
  }
  if ( *((_DWORD *)this + 49) != *((_DWORD *)this + 48) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v14 + 24) = 633LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = (_QWORD *)((char *)this + 296);
  if ( (_QWORD *)*v15 != v15 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v16 + 24) = 634LL;
    WdLogEvent5_WdAssertion(v16);
  }
  v17 = (_QWORD *)((char *)this + 360);
  if ( (_QWORD *)*v17 != v17 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v18 + 24) = 635LL;
    WdLogEvent5_WdAssertion(v18);
  }
  v19 = (_QWORD *)((char *)this + 416);
  if ( (_QWORD *)*v19 != v19 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v20 + 24) = 636LL;
    WdLogEvent5_WdAssertion(v20);
  }
  if ( *((_QWORD *)this + 113) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v21 + 24) = 637LL;
    WdLogEvent5_WdAssertion(v21);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 1016));
  if ( *((DXGGLOBAL **)this + 123) != (DXGGLOBAL *)((char *)this + 984) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v22);
    *(_QWORD *)(v23 + 24) = 619LL;
    WdLogEvent5_WdAssertion(v23);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 944));
  AUTOEXPANDALLOCATION::~AUTOEXPANDALLOCATION((DXGGLOBAL *)((char *)this + 832));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 792));
  if ( *((_QWORD *)this + 72) )
  {
    v25 = WdLogNewEntry5_WdAssertion(v24);
    *(_QWORD *)(v25 + 24) = 31LL;
    WdLogEvent5_WdAssertion(v25);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 432));
  if ( (_QWORD *)*v19 != v19 )
  {
    v27 = WdLogNewEntry5_WdAssertion(v26);
    *(_QWORD *)(v27 + 24) = 619LL;
    WdLogEvent5_WdAssertion(v27);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 376));
  if ( (_QWORD *)*v17 != v17 )
  {
    v29 = WdLogNewEntry5_WdAssertion(v28);
    *(_QWORD *)(v29 + 24) = 619LL;
    WdLogEvent5_WdAssertion(v29);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 320));
  if ( (_QWORD *)*v15 != v15 )
  {
    v31 = WdLogNewEntry5_WdAssertion(v30);
    *(_QWORD *)(v31 + 24) = 619LL;
    WdLogEvent5_WdAssertion(v31);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 256));
  if ( *((DXGGLOBAL **)this + 30) != (DXGGLOBAL *)((char *)this + 240) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v32);
    *(_QWORD *)(v33 + 24) = 619LL;
    WdLogEvent5_WdAssertion(v33);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 200));
  operator delete(*((void **)this + 22));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 136));
}
