/*
 * XREFs of ?GetCachedData@QDC_CACHE@@QEAAJIPEAIPEAUDISPLAYCONFIG_PATH_INFO@@0PEAUDISPLAYCONFIG_MODE_INFO@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@0@Z @ 0x1C0060978
 * Callers:
 *     DxgkQueryDisplayConfig @ 0x1C0060590 (DxgkQueryDisplayConfig.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogCodePointPacket @ 0x1C00084E0 (DxgkLogCodePointPacket.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     ?FindCacheEntry@QDC_CACHE@@AEAAPEAUQDC_CACHE_ENTRY@1@_NI@Z @ 0x1C006077C (-FindCacheEntry@QDC_CACHE@@AEAAPEAUQDC_CACHE_ENTRY@1@_NI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall QDC_CACHE::GetCachedData(
        struct DXGFASTMUTEX **this,
        __int64 a2,
        unsigned int *a3,
        struct DISPLAYCONFIG_PATH_INFO *a4,
        unsigned int *a5,
        struct DISPLAYCONFIG_MODE_INFO *a6,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a7,
        unsigned int *a8)
{
  __int64 v10; // rsi
  struct QDC_CACHE::QDC_CACHE_ENTRY *CacheEntry; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct QDC_CACHE::QDC_CACHE_ENTRY *v17; // rbx
  __int64 v18; // rcx
  int v19; // edi
  struct DXGPROCESS *Current; // rax
  unsigned int v21; // edx
  unsigned int v22; // ebx
  _QWORD *v24; // rax
  _BYTE v25[40]; // [rsp+20h] [rbp-28h] BYREF

  v10 = (unsigned int)a2;
  if ( *(_BYTE *)this )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = 248LL;
    return 3221225659LL;
  }
  else
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v25, this[1]);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
    *a8 = *((_DWORD *)this + 124);
    CacheEntry = QDC_CACHE::FindCacheEntry((QDC_CACHE *)this, 1, v10);
    v17 = CacheEntry;
    if ( CacheEntry )
    {
      v18 = *((unsigned int *)CacheEntry + 2);
      if ( (unsigned int)v18 > *a3 || *((_DWORD *)CacheEntry + 6) > *a5 )
      {
        v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v13, v15, v16);
        v24[3] = v10;
        v24[4] = *((unsigned int *)v17 + 2);
        v24[5] = *a3;
        v24[6] = *((unsigned int *)v17 + 6);
        v24[7] = *a5;
        WdLogEvent5_WdWarning(v24);
        v22 = -1073741823;
      }
      else
      {
        memmove(a4, *((const void **)CacheEntry + 2), 72 * v18);
        memmove(a6, *((const void **)v17 + 4), (unsigned __int64)*((unsigned int *)v17 + 6) << 6);
        *a3 = *((_DWORD *)v17 + 2);
        *a5 = *((_DWORD *)v17 + 6);
        if ( a7 )
          *(_DWORD *)a7 = *((_DWORD *)v17 + 10);
        v19 = *((_DWORD *)this + 124);
        Current = DXGPROCESS::GetCurrent();
        if ( v19 != *((_DWORD *)Current + 84) )
        {
          *((_DWORD *)Current + 83) = 0;
          *((_DWORD *)Current + 84) = v19;
        }
        v21 = ++*((_DWORD *)Current + 83);
        if ( ((v21 - 1) & v21) == 0 && v21 != 2 )
          DxgkLogCodePointPacket(0x4Du, v21, *((_DWORD *)v17 + 1), *((_DWORD *)v17 + 11));
        v22 = 0;
      }
    }
    else
    {
      v22 = -1073741801;
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v14, v13, v15, v16) + 24) = v10;
    }
    if ( v25[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v25);
    return v22;
  }
}
