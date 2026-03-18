/*
 * XREFs of ?GetCachedData@QDC_CACHE@@QEAAJIPEAIPEAUDISPLAYCONFIG_PATH_INFO@@0PEAUDISPLAYCONFIG_MODE_INFO@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@0@Z @ 0x1C00C1574
 * Callers:
 *     DxgkQueryDisplayConfig @ 0x1C00C11A0 (DxgkQueryDisplayConfig.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogCodePointPacket @ 0x1C000AF10 (DxgkLogCodePointPacket.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     ?FindCacheEntry@QDC_CACHE@@AEAAPEAUQDC_CACHE_ENTRY@1@_NI@Z @ 0x1C00C1388 (-FindCacheEntry@QDC_CACHE@@AEAAPEAUQDC_CACHE_ENTRY@1@_NI@Z.c)
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
  __int64 CurrentProcess; // rax
  __int64 v20; // rdx
  __int64 ProcessDxgProcess; // rax
  int v22; // ecx
  unsigned int v23; // edx
  unsigned int v24; // ebx
  _QWORD *v26; // rax
  _BYTE v27[40]; // [rsp+20h] [rbp-28h] BYREF

  v10 = (unsigned int)a2;
  if ( *(_BYTE *)this )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = 270LL;
    return 3221225659LL;
  }
  else
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v27, this[1]);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
    *a8 = *((_DWORD *)this + 220);
    CacheEntry = QDC_CACHE::FindCacheEntry((QDC_CACHE *)this, 1, v10);
    v17 = CacheEntry;
    if ( CacheEntry )
    {
      v18 = *((unsigned int *)CacheEntry + 2);
      if ( (unsigned int)v18 > *a3 || *((_DWORD *)CacheEntry + 6) > *a5 )
      {
        v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v13, v15, v16);
        v26[3] = v10;
        v26[4] = *((unsigned int *)v17 + 2);
        v26[5] = *a3;
        v26[6] = *((unsigned int *)v17 + 6);
        v26[7] = *a5;
        WdLogEvent5_WdWarning(v26);
        v24 = -1073741823;
      }
      else
      {
        memmove(a4, *((const void **)CacheEntry + 2), 72 * v18);
        memmove(a6, *((const void **)v17 + 4), (unsigned __int64)*((unsigned int *)v17 + 6) << 6);
        *a3 = *((_DWORD *)v17 + 2);
        *a5 = *((_DWORD *)v17 + 6);
        if ( a7 )
          *(_DWORD *)a7 = *((_DWORD *)v17 + 10);
        CurrentProcess = PsGetCurrentProcess(a7);
        ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v20);
        v22 = *((_DWORD *)this + 220);
        if ( v22 != *(_DWORD *)(ProcessDxgProcess + 360) )
        {
          *(_DWORD *)(ProcessDxgProcess + 356) = 0;
          *(_DWORD *)(ProcessDxgProcess + 360) = v22;
        }
        v23 = ++*(_DWORD *)(ProcessDxgProcess + 356);
        if ( ((v23 - 1) & v23) == 0 && v23 != 2 )
          DxgkLogCodePointPacket(0x4Du, v23, *((_DWORD *)v17 + 1), *((_DWORD *)v17 + 11));
        v24 = 0;
      }
    }
    else
    {
      v24 = -1073741801;
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v14, v13, v15, v16) + 24) = v10;
    }
    if ( v27[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27);
    return v24;
  }
}
