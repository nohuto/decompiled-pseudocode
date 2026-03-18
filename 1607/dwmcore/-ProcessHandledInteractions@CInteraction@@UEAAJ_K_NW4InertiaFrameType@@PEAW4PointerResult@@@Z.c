/*
 * XREFs of ?ProcessHandledInteractions@CInteraction@@UEAAJ_K_NW4InertiaFrameType@@PEAW4PointerResult@@@Z @ 0x18000D8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4InertiaFrameType@@PEAW4PointerResult@@@Z @ 0x18016E9F8 (-ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4Inertia.c)
 */

__int64 __fastcall CInteraction::ProcessHandledInteractions(__int64 a1, __int64 a2, char a3, __int64 a4, _DWORD *a5)
{
  __int64 result; // rax
  __int64 v7; // rdx
  int v8; // [rsp+20h] [rbp-18h]

  result = 0LL;
  if ( a5 )
    *a5 = 1;
  v7 = *(_QWORD *)(a1 + 336);
  if ( v7 )
  {
    v8 = a4;
    LOBYTE(a4) = a3;
    return CInteractionProcessor::ProcessHandledInteractions(a1 + 408, v7, a2, a4, v8, a5);
  }
  return result;
}
