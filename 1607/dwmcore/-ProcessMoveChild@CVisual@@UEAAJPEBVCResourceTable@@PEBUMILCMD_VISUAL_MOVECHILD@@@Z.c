/*
 * XREFs of ?ProcessMoveChild@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_MOVECHILD@@@Z @ 0x18004F6E0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18003ABA0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x18004FEF0 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?RemoveChild@CVisual@@IEAAJPEAV1@_N@Z @ 0x1800502CC (-RemoveChild@CVisual@@IEAAJPEAV1@_N@Z.c)
 */

__int64 __fastcall CVisual::ProcessMoveChild(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct MILCMD_VISUAL_MOVECHILD *a3)
{
  struct CVisual *Resource; // rax
  struct CVisual *v6; // rdi
  int inserted; // eax
  unsigned int v8; // ebx
  unsigned int v10; // [rsp+20h] [rbp-18h]

  Resource = (struct CVisual *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x20u);
  v6 = Resource;
  if ( !Resource )
  {
    v8 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x9F6u);
    return v8;
  }
  inserted = CVisual::RemoveChild(this, Resource, 1);
  v8 = inserted;
  if ( inserted < 0 )
  {
    v10 = 2553;
    goto LABEL_8;
  }
  inserted = CVisual::InsertChildAt(this, v6, *((_DWORD *)a3 + 3), 1);
  v8 = inserted;
  if ( inserted < 0 )
  {
    v10 = 2554;
LABEL_8:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, v10);
  }
  return v8;
}
