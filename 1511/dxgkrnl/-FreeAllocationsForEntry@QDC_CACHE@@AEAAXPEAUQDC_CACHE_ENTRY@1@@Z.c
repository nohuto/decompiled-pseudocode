/*
 * XREFs of ?FreeAllocationsForEntry@QDC_CACHE@@AEAAXPEAUQDC_CACHE_ENTRY@1@@Z @ 0x1C00AAC74
 * Callers:
 *     ?AddToCache@QDC_CACHE@@QEAAJIIIIPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_INFO@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00AACD8 (-AddToCache@QDC_CACHE@@QEAAJIIIIPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_INFO@@PEAW4.c)
 *     ??1QDC_CACHE@@QEAA@XZ @ 0x1C0153478 (--1QDC_CACHE@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 */

void __fastcall QDC_CACHE::FreeAllocationsForEntry(QDC_CACHE *this, struct QDC_CACHE::QDC_CACHE_ENTRY *a2)
{
  void *v2; // rcx
  void *v4; // rcx

  v2 = (void *)*((_QWORD *)a2 + 2);
  if ( v2 )
  {
    operator delete(v2);
    *((_QWORD *)a2 + 2) = 0LL;
  }
  v4 = (void *)*((_QWORD *)a2 + 4);
  if ( v4 )
  {
    operator delete(v4);
    *((_QWORD *)a2 + 4) = 0LL;
  }
}
