/*
 * XREFs of ?CompareEntry@QDC_CACHE@@AEAA_NPEAUQDC_CACHE_ENTRY@1@IIPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_INFO@@@Z @ 0x1C0178540
 * Callers:
 *     ?AddToCache@QDC_CACHE@@QEAAJIIIIPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_INFO@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00C13B0 (-AddToCache@QDC_CACHE@@QEAAJIIIIPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_INFO@@PEAW4.c)
 * Callees:
 *     <none>
 */

bool __fastcall QDC_CACHE::CompareEntry(
        QDC_CACHE *this,
        struct QDC_CACHE::QDC_CACHE_ENTRY *a2,
        __int64 a3,
        int a4,
        struct DISPLAYCONFIG_PATH_INFO *Source2,
        unsigned int a6,
        struct DISPLAYCONFIG_MODE_INFO *a7)
{
  return *((_DWORD *)a2 + 2) == a4
      && *((_DWORD *)a2 + 6) == a6
      && RtlCompareMemory(*((const void **)a2 + 2), Source2, (unsigned int)(72 * a4)) == 72 * a4
      && RtlCompareMemory(*((const void **)a2 + 4), a7, a6 << 6) == a6 << 6;
}
