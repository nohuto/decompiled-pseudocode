/*
 * XREFs of ??3@YAXPEAX@Z @ 0x18009D284
 * Callers:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??_Gtype_info@@UEAAPEAXI@Z @ 0x18009D290 (--_Gtype_info@@UEAAPEAXI@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_Ebad_alloc@std@@UEAAPEAXI@Z @ 0x18009E1A0 (--_Ebad_alloc@std@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl operator delete(void *Block)
{
  free(Block);
}
