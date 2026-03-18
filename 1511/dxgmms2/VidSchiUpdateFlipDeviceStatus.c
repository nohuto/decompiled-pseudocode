/*
 * XREFs of VidSchiUpdateFlipDeviceStatus @ 0x1C00023C8
 * Callers:
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x1C0002288 (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z.c)
 *     VidSchUnreferenceDisplayingAllocationInternal @ 0x1C0022BF0 (VidSchUnreferenceDisplayingAllocationInternal.c)
 * Callees:
 *     ?VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0002428 (-VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiProcessFlipPendingContextList @ 0x1C0002458 (VidSchiProcessFlipPendingContextList.c)
 */

__int64 __fastcall VidSchiUpdateFlipDeviceStatus(__int64 a1)
{
  __int64 result; // rax
  int v2; // ebx
  _QWORD *v4; // rsi
  _QWORD *v5; // rdi
  int updated; // eax

  result = *(_QWORD *)(a1 + 16);
  v2 = 0;
  if ( result )
  {
    v4 = (_QWORD *)(result + 72);
    v5 = *(_QWORD **)(result + 72);
    while ( v5 != v4 )
    {
      updated = VidSchiUpdateFlipContextStatus((struct _VIDSCH_CONTEXT *)(v5 - 3));
      v5 = (_QWORD *)*v5;
      v2 |= updated;
    }
    return v2 | (unsigned int)VidSchiProcessFlipPendingContextList(a1, a1);
  }
  return result;
}
