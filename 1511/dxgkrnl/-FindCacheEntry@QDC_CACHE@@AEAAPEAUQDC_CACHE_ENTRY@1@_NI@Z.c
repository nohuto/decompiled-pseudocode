/*
 * XREFs of ?FindCacheEntry@QDC_CACHE@@AEAAPEAUQDC_CACHE_ENTRY@1@_NI@Z @ 0x1C00AACAC
 * Callers:
 *     ?AddToCache@QDC_CACHE@@QEAAJIIIIPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_INFO@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00AACD8 (-AddToCache@QDC_CACHE@@QEAAJIIIIPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_INFO@@PEAW4.c)
 *     ?GetCachedData@QDC_CACHE@@QEAAJIPEAIPEAUDISPLAYCONFIG_PATH_INFO@@0PEAUDISPLAYCONFIG_MODE_INFO@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@0@Z @ 0x1C00AAE9C (-GetCachedData@QDC_CACHE@@QEAAJIPEAIPEAUDISPLAYCONFIG_PATH_INFO@@0PEAUDISPLAYCONFIG_MODE_INFO@@P.c)
 *     ?GetCahcedBufferSizes@QDC_CACHE@@QEAAJIPEAI0@Z @ 0x1C00AAFFC (-GetCahcedBufferSizes@QDC_CACHE@@QEAAJIPEAI0@Z.c)
 * Callees:
 *     <none>
 */

struct QDC_CACHE::QDC_CACHE_ENTRY *__fastcall QDC_CACHE::FindCacheEntry(QDC_CACHE *this, char a2, int a3)
{
  struct QDC_CACHE::QDC_CACHE_ENTRY *result; // rax
  unsigned int i; // ecx
  bool v5; // zf

  result = (QDC_CACHE *)((char *)this + 16);
  for ( i = 0; i < 0x12; ++i )
  {
    if ( a2 )
    {
      if ( !*(_BYTE *)result )
        goto LABEL_4;
      v5 = *((_DWORD *)result + 1) == a3;
    }
    else
    {
      v5 = *(_BYTE *)result == 0;
    }
    if ( v5 )
      return result;
LABEL_4:
    result = (struct QDC_CACHE::QDC_CACHE_ENTRY *)((char *)result + 48);
  }
  return 0LL;
}
