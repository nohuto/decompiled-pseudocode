/*
 * XREFs of ?RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x180116FE0
 * Callers:
 *     ?Partition_SetCursor@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETCURSOR@@@Z @ 0x18003BD64 (-Partition_SetCursor@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PART.c)
 * Callees:
 *     ?RemoveAt@?$DynArray@PEAVCCursorVisual@@$0A@@@QEAAJI@Z @ 0x1800B70B0 (-RemoveAt@-$DynArray@PEAVCCursorVisual@@$0A@@@QEAAJI@Z.c)
 *     ??_GCCursorVisual@@QEAAPEAXI@Z @ 0x1800B71EC (--_GCCursorVisual@@QEAAPEAXI@Z.c)
 */

void __fastcall CComposition::RemoveCursorVisual(CComposition *this, struct CVisual *a2)
{
  __int64 v2; // rbx
  __int64 *v4; // rdi
  struct CResource ***v5; // rsi
  struct CVisual **v6; // rax

  LODWORD(v2) = *((_DWORD *)this + 224);
  if ( (int)v2 > 0 )
  {
    v4 = (__int64 *)((char *)this + 872);
    do
    {
      v2 = (unsigned int)(v2 - 1);
      v5 = *(struct CResource ****)(*v4 + 8 * v2);
      v6 = v5[1];
      if ( !*v6 || *v6 == a2 )
      {
        DynArray<CCursorVisual *,0>::RemoveAt(v4, v2);
        CCursorVisual::`scalar deleting destructor'(v5);
      }
    }
    while ( (int)v2 > 0 );
  }
}
