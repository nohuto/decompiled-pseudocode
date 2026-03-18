/*
 * XREFs of ?GetInteractionContext@CInteractionProcessor@@QEBAJKPEAPEAUIInteractionContextWrapper@@@Z @ 0x18012E32C
 * Callers:
 *     ?GetInteractionContext@CInteraction@@UEBAJKPEAPEAUIInteractionContextWrapper@@@Z @ 0x18010CF50 (-GetInteractionContext@CInteraction@@UEBAJKPEAPEAUIInteractionContextWrapper@@@Z.c)
 *     ?GetInteractionContext@CInteractionRoot@@UEBAJKPEAPEAUIInteractionContextWrapper@@@Z @ 0x18010CF70 (-GetInteractionContext@CInteractionRoot@@UEBAJKPEAPEAUIInteractionContextWrapper@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180059558 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ConvertToInputType @ 0x18012E290 (ConvertToInputType.c)
 */

__int64 __fastcall CInteractionProcessor::GetInteractionContext(
        CInteractionProcessor *this,
        int a2,
        struct IInteractionContextWrapper **a3)
{
  unsigned int v5; // ebx
  int v6; // eax

  v5 = 0;
  v6 = ConvertToInputType(a2);
  if ( v6 == 1 )
  {
    if ( *(_QWORD *)this )
    {
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(this);
      *a3 = *(struct IInteractionContextWrapper **)this;
      return v5;
    }
    return (unsigned int)-2147019873;
  }
  if ( v6 == 2 )
  {
    if ( *((_QWORD *)this + 17) )
    {
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((_QWORD *)this + 17);
      *a3 = (struct IInteractionContextWrapper *)*((_QWORD *)this + 17);
      return v5;
    }
    return (unsigned int)-2147019873;
  }
  return v5;
}
