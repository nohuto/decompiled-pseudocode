/*
 * XREFs of ?FindEdidInCache@EDIDCACHE@@AEAAHU_LUID@@IPEBE@Z @ 0x1C00FB39C
 * Callers:
 *     ?AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C00FB1EC (-AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 * Callees:
 *     memcmp @ 0x1C0012360 (memcmp.c)
 */

__int64 __fastcall EDIDCACHE::FindEdidInCache(EDIDCACHE *this, struct _LUID a2, int a3, const unsigned __int8 *a4)
{
  DWORD LowPart; // ebx
  _DWORD *v8; // rdi
  unsigned int v9; // esi
  LONG HighPart; // [rsp+5Ch] [rbp+14h]

  HighPart = a2.HighPart;
  LowPart = a2.LowPart;
  if ( !a4 )
    return 0xFFFFFFFFLL;
  v8 = (_DWORD *)((char *)this + 12);
  v9 = 0;
  while ( *(v8 - 1) != LowPart || *v8 != HighPart || v8[1] != a3 || memcmp((char *)this + 152 * v9 + 24, a4, 0x80uLL) )
  {
    ++v9;
    v8 += 38;
    if ( v9 >= 4 )
      return 0xFFFFFFFFLL;
  }
  return v9;
}
