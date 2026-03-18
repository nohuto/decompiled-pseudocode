/*
 * XREFs of ?ProcessInsertChildAt@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_INSERTCHILDAT@@@Z @ 0x180048380
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180048660 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x18004CDF0 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?IsOfType@CWindowNode@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18005EBD0 (-IsOfType@CWindowNode@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x180092D18 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 */

__int64 __fastcall CVisual::ProcessInsertChildAt(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct MILCMD_VISUAL_INSERTCHILDAT *a3)
{
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(_QWORD, __int64); // rsi
  char v10; // al
  struct CVisual *v11; // rdx
  int inserted; // eax
  unsigned int v13; // ebx

  if ( (unsigned int)HANDLE_TABLE::ValidEntry((const struct CResourceTable *)((char *)a2 + 16), *((_DWORD *)a3 + 2))
    && (v7 = *(_QWORD *)(v6 + 40) + (unsigned int)(*(_DWORD *)(v5 + 8) * *(_DWORD *)(v6 + 24)),
        (v8 = *(_QWORD *)(v7 + 8)) != 0)
    && ((v9 = *(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v8 + 48LL), v9 != CVisual::IsOfType)
      ? (v9 != CWindowNode::IsOfType
       ? (v10 = v9(*(_QWORD *)(v7 + 8), 31LL))
       : (v10 = CWindowNode::IsOfType(*(_QWORD *)(v7 + 8), 31LL)))
      : (v10 = CVisual::IsOfType(*(_QWORD *)(v7 + 8), 31LL)),
        v10) )
  {
    v11 = *(struct CVisual **)(v7 + 8);
  }
  else
  {
    v11 = 0LL;
  }
  if ( v11 )
  {
    inserted = CVisual::InsertChildAt(this, v11, *((_DWORD *)a3 + 3), 0);
    v13 = inserted;
    if ( inserted < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, 0x8E0u);
  }
  else
  {
    v13 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x8DDu);
  }
  return v13;
}
