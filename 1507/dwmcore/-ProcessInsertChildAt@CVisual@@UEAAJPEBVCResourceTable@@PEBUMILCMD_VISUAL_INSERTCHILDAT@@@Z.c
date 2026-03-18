/*
 * XREFs of ?ProcessInsertChildAt@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_INSERTCHILDAT@@@Z @ 0x1800359B0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x1800345B0 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18006CA90 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CVisual::ProcessInsertChildAt(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct MILCMD_VISUAL_INSERTCHILDAT *a3)
{
  struct CVisual *Resource; // rax
  int inserted; // eax
  unsigned int v7; // ebx

  Resource = (struct CVisual *)CResourceTable::GetResource(a2, *((unsigned int *)a3 + 2), 31LL);
  if ( Resource )
  {
    inserted = CVisual::InsertChildAt(this, Resource, *((_DWORD *)a3 + 3), 0);
    v7 = inserted;
    if ( inserted < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, 0x8CAu);
  }
  else
  {
    v7 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x8C7u);
  }
  return v7;
}
