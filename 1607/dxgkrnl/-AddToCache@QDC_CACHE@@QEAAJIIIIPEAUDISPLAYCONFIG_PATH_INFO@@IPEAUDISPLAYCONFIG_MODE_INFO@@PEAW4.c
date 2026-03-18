/*
 * XREFs of ?AddToCache@QDC_CACHE@@QEAAJIIIIPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_INFO@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00C13B0
 * Callers:
 *     ?QueryDisplayConfigInternal@@YAJ_NIIPEAIPEAUDISPLAYCONFIG_PATH_INFO@@1PEAUDISPLAYCONFIG_MODE_INFO@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00C245C (-QueryDisplayConfigInternal@@YAJ_NIIPEAIPEAUDISPLAYCONFIG_PATH_INFO@@1PEAUDISPLAYCONFIG_MODE_INF.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B4048 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?FreeAllocationsForEntry@QDC_CACHE@@AEAAXPEAUQDC_CACHE_ENTRY@1@@Z @ 0x1C00C1350 (-FreeAllocationsForEntry@QDC_CACHE@@AEAAXPEAUQDC_CACHE_ENTRY@1@@Z.c)
 *     ?FindCacheEntry@QDC_CACHE@@AEAAPEAUQDC_CACHE_ENTRY@1@_NI@Z @ 0x1C00C1388 (-FindCacheEntry@QDC_CACHE@@AEAAPEAUQDC_CACHE_ENTRY@1@_NI@Z.c)
 *     ?CompareEntry@QDC_CACHE@@AEAA_NPEAUQDC_CACHE_ENTRY@1@IIPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_INFO@@@Z @ 0x1C0178540 (-CompareEntry@QDC_CACHE@@AEAA_NPEAUQDC_CACHE_ENTRY@1@IIPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAY.c)
 */

__int64 __fastcall QDC_CACHE::AddToCache(
        struct DXGFASTMUTEX **this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        struct DISPLAYCONFIG_PATH_INFO *Src,
        unsigned int a7,
        struct DISPLAYCONFIG_MODE_INFO *a8,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a9)
{
  int v9; // r14d
  int v10; // r13d
  __int64 v11; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct QDC_CACHE::QDC_CACHE_ENTRY *CacheEntry; // rax
  QDC_CACHE *v18; // rcx
  unsigned int v19; // r8d
  struct QDC_CACHE::QDC_CACHE_ENTRY *v20; // rbx
  __int64 v21; // rdx
  QDC_CACHE *v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  SIZE_T v25; // rax
  SIZE_T v26; // rax
  PVOID v27; // rax
  unsigned int v28; // ebx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rax
  QDC_CACHE *v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  _BYTE v38[16]; // [rsp+40h] [rbp-38h] BYREF

  v9 = a4;
  v10 = a3;
  v11 = (unsigned int)a2;
  if ( *(_BYTE *)this )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = 435LL;
    return 3221225659LL;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v38, this[1]);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v38);
  if ( (_DWORD)v11 != *((_DWORD *)this + 220) )
  {
    v30 = WdLogNewEntry5_WdTrace(v14, v13, v15, v16);
    v31 = *((unsigned int *)this + 220);
    *(_QWORD *)(v30 + 32) = v11;
    v28 = -1071774921;
    *(_QWORD *)(v30 + 24) = v31;
    goto LABEL_20;
  }
  CacheEntry = QDC_CACHE::FindCacheEntry((QDC_CACHE *)this, 1, v9);
  v20 = CacheEntry;
  if ( !CacheEntry )
  {
    v20 = QDC_CACHE::FindCacheEntry((QDC_CACHE *)this, 0, 0);
    if ( !v20 )
    {
      v28 = -1073741671;
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v22, v21, v23, v24) + 24) = 478LL;
      goto LABEL_20;
    }
LABEL_5:
    if ( *((_DWORD *)v20 + 2) != a5 || *((_DWORD *)v20 + 6) != a7 )
      QDC_CACHE::FreeAllocationsForEntry(v22, v20);
    if ( *((_QWORD *)v20 + 4) )
    {
      v22 = (QDC_CACHE *)*((_QWORD *)v20 + 2);
      if ( v22 )
      {
LABEL_16:
        memmove(v22, Src, 72LL * a5);
        memmove(*((void **)v20 + 4), a8, (unsigned __int64)a7 << 6);
        if ( a9 )
          *((_DWORD *)v20 + 10) = *(_DWORD *)a9;
        *((_DWORD *)v20 + 11) = v10;
        *((_DWORD *)v20 + 2) = a5;
        *((_DWORD *)v20 + 6) = a7;
        *(_BYTE *)v20 = 1;
        *((_DWORD *)v20 + 1) = v9;
        goto LABEL_19;
      }
    }
    else if ( !*((_QWORD *)v20 + 2) )
    {
      goto LABEL_10;
    }
    v35 = WdLogNewEntry5_WdAssertion(v22);
    *(_QWORD *)(v35 + 24) = 494LL;
    WdLogEvent5_WdAssertion(v35);
LABEL_10:
    v25 = 72LL * a5;
    if ( !is_mul_ok(a5, 0x48uLL) )
      v25 = -1LL;
    *((_QWORD *)v20 + 2) = operator new[](v25, 0x43434451u, PagedPool);
    v26 = (unsigned __int64)a7 << 6;
    if ( !is_mul_ok(a7, 0x40uLL) )
      v26 = -1LL;
    v27 = operator new[](v26, 0x43434451u, PagedPool);
    *((_QWORD *)v20 + 4) = v27;
    if ( !v27 || (v22 = (QDC_CACHE *)*((_QWORD *)v20 + 2)) == 0LL )
    {
      QDC_CACHE::FreeAllocationsForEntry(v22, v20);
      v37 = WdLogNewEntry5_WdLowResource(v36);
      *(_QWORD *)(v37 + 24) = 502LL;
      WdLogEvent5_WdLowResource(v37);
      v28 = -1073741801;
      goto LABEL_20;
    }
    goto LABEL_16;
  }
  if ( !QDC_CACHE::CompareEntry(v18, CacheEntry, v19, a5, Src, a7, a8) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v32);
    *(_QWORD *)(v33 + 24) = 466LL;
    WdLogEvent5_WdAssertion(v33);
    QDC_CACHE::FreeAllocationsForEntry(v34, v20);
    goto LABEL_5;
  }
LABEL_19:
  v28 = 0;
LABEL_20:
  if ( v38[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v38);
  return v28;
}
