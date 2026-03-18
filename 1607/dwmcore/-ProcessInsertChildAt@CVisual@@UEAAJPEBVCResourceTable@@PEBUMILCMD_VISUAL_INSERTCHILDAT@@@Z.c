/*
 * XREFs of ?ProcessInsertChildAt@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_INSERTCHILDAT@@@Z @ 0x18004F610
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?IsOfType@CWindowNode@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180026450 (-IsOfType@CWindowNode@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x180037E18 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18004FDA0 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x18004FEF0 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::ProcessInsertChildAt(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct MILCMD_VISUAL_INSERTCHILDAT *a3)
{
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rcx
  bool (__fastcall *v9)(__int64, int); // rax
  char v10; // al
  struct CVisual *v11; // rdx
  int inserted; // eax
  unsigned int v13; // ebx

  if ( HANDLE_TABLE::ValidEntry((const struct CResourceTable *)((char *)a2 + 16), *((_DWORD *)a3 + 2))
    && (v7 = *(_QWORD *)(v6 + 40) + (unsigned int)(*(_DWORD *)(v5 + 8) * *(_DWORD *)(v6 + 24)),
        (v8 = *(_QWORD *)(v7 + 8)) != 0)
    && ((v9 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v8 + 48LL), (char *)v9 != (char *)CVisual::IsOfType)
      ? (v9 != CWindowNode::IsOfType
       ? (v10 = v9(v8, 32))
       : (v10 = CWindowNode::IsOfType(v8, 32)))
      : (v10 = CVisual::IsOfType(v8, 32LL)),
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, 0x9E3u);
  }
  else
  {
    v13 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x9E0u);
  }
  return v13;
}
