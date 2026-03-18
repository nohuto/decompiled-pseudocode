/*
 * XREFs of ?GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z @ 0x18000DD9C
 * Callers:
 *     ?IsBufferingOutput@CInteractionProcessor@@QEAA_NW4InputType@@@Z @ 0x18000DDE0 (-IsBufferingOutput@CInteractionProcessor@@QEAA_NW4InputType@@@Z.c)
 *     ?DepartBufferedOutputPointer@CInteractionProcessor@@QEAA_NIW4InputType@@@Z @ 0x18016E788 (-DepartBufferedOutputPointer@CInteractionProcessor@@QEAA_NIW4InputType@@@Z.c)
 *     ?GetInteractionContext@CInteractionProcessor@@QEBAJKPEAPEAUIInteractionContextWrapper@@@Z @ 0x18016E8BC (-GetInteractionContext@CInteractionProcessor@@QEBAJKPEAPEAUIInteractionContextWrapper@@@Z.c)
 *     ?HasBufferedOutput@CInteractionProcessor@@QEAA_NIW4InputType@@@Z @ 0x18016E96C (-HasBufferedOutput@CInteractionProcessor@@QEAA_NIW4InputType@@@Z.c)
 *     ?ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4InertiaFrameType@@PEAW4PointerResult@@@Z @ 0x18016E9F8 (-ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4Inertia.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A5868 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CInteractionProcessor::GetInteractionContext(_QWORD *a1, int a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  int v6; // edx

  v3 = 0;
  *a3 = 0LL;
  v6 = a2 - 1;
  if ( !v6 )
  {
    if ( *a1 )
    {
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(a1);
      *a3 = *a1;
      return v3;
    }
    return (unsigned int)-2147019873;
  }
  if ( v6 == 1 )
  {
    if ( a1[19] )
    {
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(a1 + 19);
      *a3 = a1[19];
      return v3;
    }
    return (unsigned int)-2147019873;
  }
  return v3;
}
