/*
 * XREFs of ?ProcessMoveChild@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_MOVECHILD@@@Z @ 0x180048480
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x18004CDF0 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?RemoveChild@CVisual@@IEAAJPEAV1@_N@Z @ 0x18004D180 (-RemoveChild@CVisual@@IEAAJPEAV1@_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180094250 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
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

  Resource = (struct CVisual *)CResourceTable::GetResource(a2, *((unsigned int *)a3 + 2), 31LL);
  v6 = Resource;
  if ( !Resource )
  {
    v8 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x8F3u);
    return v8;
  }
  inserted = CVisual::RemoveChild(this, Resource, 1);
  v8 = inserted;
  if ( inserted < 0 )
  {
    v10 = 2294;
LABEL_8:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, v10);
    return v8;
  }
  inserted = CVisual::InsertChildAt(this, v6, *((_DWORD *)a3 + 3), 1);
  v8 = inserted;
  if ( inserted < 0 )
  {
    v10 = 2295;
    goto LABEL_8;
  }
  return v8;
}
