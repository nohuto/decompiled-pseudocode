/*
 * XREFs of ?SetTopLevelWindow@CVisual@@QEAAX_K@Z @ 0x18004FBE8
 * Callers:
 *     ?ProcessTopLevelNode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_TOPLEVELNODE@@@Z @ 0x18004F76C (-ProcessTopLevelNode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_TOPLEVELNODE@@@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1800ACB14 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetTopLevelWindow(CVisual *this, __int64 a2)
{
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  if ( a2 == `CVisual::SetRelativeOffsetInternal'::`2'::sc_defaultValue )
    *(_DWORD *)(*((_QWORD *)this + 34) + 4LL) &= ~0x80000000;
  else
    CSparseStorage::SetData((CVisual *)((char *)this + 272), 1u, 8u, &v2);
}
