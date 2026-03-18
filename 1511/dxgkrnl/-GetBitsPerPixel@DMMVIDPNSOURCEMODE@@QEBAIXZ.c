/*
 * XREFs of ?GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ @ 0x1C00067A8
 * Callers:
 *     ?PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z @ 0x1C00A6FF4 (-PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z.c)
 * Callees:
 *     ?GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z @ 0x1C00087A8 (-GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z.c)
 */

__int64 __fastcall DMMVIDPNSOURCEMODE::GetBitsPerPixel(enum _D3DDDIFORMAT *this)
{
  __int64 v2; // rcx
  unsigned int BitsPerPixel; // edi
  __int64 v5; // rax

  v2 = *((unsigned int *)this + 18);
  if ( (((_DWORD)v2 - 1) & 0xFFFFFFFC) != 0 || (_DWORD)v2 == 2 )
  {
    v5 = WdLogNewEntry5_WdAssertion(v2);
    WdLogEvent5_WdAssertion(v5);
  }
  BitsPerPixel = GetBitsPerPixel(this[24]);
  if ( !BitsPerPixel )
    *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = *((int *)this + 24);
  return BitsPerPixel;
}
