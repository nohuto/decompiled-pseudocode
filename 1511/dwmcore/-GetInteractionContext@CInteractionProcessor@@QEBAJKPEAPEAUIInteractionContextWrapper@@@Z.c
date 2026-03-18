/*
 * XREFs of ?GetInteractionContext@CInteractionProcessor@@QEBAJKPEAPEAUIInteractionContextWrapper@@@Z @ 0x1801427F8
 * Callers:
 *     ?GetInteractionContext@CInteraction@@UEBAJKPEAPEAUIInteractionContextWrapper@@@Z @ 0x180127C60 (-GetInteractionContext@CInteraction@@UEBAJKPEAPEAUIInteractionContextWrapper@@@Z.c)
 *     ?GetInteractionContext@CInteractionRoot@@UEBAJKPEAPEAUIInteractionContextWrapper@@@Z @ 0x180127C80 (-GetInteractionContext@CInteractionRoot@@UEBAJKPEAPEAUIInteractionContextWrapper@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180002120 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?ConvertToInputType@?A0xe8837992@@YA?AW4InputType@@K@Z @ 0x180005C30 (-ConvertToInputType@-A0xe8837992@@YA-AW4InputType@@K@Z.c)
 */

__int64 __fastcall CInteractionProcessor::GetInteractionContext(
        CInteractionProcessor *this,
        int a2,
        struct IInteractionContextWrapper **a3)
{
  unsigned int v4; // ebx
  int v6; // eax

  v4 = 0;
  *a3 = 0LL;
  v6 = `anonymous namespace'::ConvertToInputType(a2);
  if ( v6 == 1 )
  {
    if ( *(_QWORD *)this )
    {
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(this);
      *a3 = *(struct IInteractionContextWrapper **)this;
      return v4;
    }
    return (unsigned int)-2147019873;
  }
  if ( v6 == 2 )
  {
    if ( *((_QWORD *)this + 17) )
    {
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((_QWORD *)this + 17);
      *a3 = (struct IInteractionContextWrapper *)*((_QWORD *)this + 17);
      return v4;
    }
    return (unsigned int)-2147019873;
  }
  return v4;
}
