/*
 * XREFs of ?Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_FORCERENDER@@@Z @ 0x180093220
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?ForceFullRender@CComposition@@QEAAX_N@Z @ 0x180093208 (-ForceFullRender@CComposition@@QEAAX_N@Z.c)
 */

__int64 __fastcall CComposition::Partition_ForceRender(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_PARTITION_FORCERENDER *a4)
{
  char v5; // al

  if ( *((_DWORD *)a4 + 1) )
    *(_BYTE *)(*((_QWORD *)this + 4) + 117LL) = 1;
  if ( *((_DWORD *)a4 + 3) )
    *(_BYTE *)(*((_QWORD *)this + 4) + 118LL) = 1;
  if ( *((_DWORD *)a4 + 4) )
  {
    v5 = CComposition::s_bHwProtectionTempDisabled;
    if ( CComposition::s_cHwProtectedEntities )
      v5 = 1;
    CComposition::s_bHwProtectionTempDisabled = v5;
  }
  CComposition::ForceFullRender(this, *((_DWORD *)a4 + 2) != 0);
  return 0LL;
}
