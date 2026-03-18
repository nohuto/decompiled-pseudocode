/*
 * XREFs of ?SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@IEAAJPEAXPEA_N@Z @ 0x1C001CBC0
 * Callers:
 *     ?SetHandleProperty@CInteractionMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z @ 0x1C001CEA0 (-SetHandleProperty@CInteractionMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z.c)
 * Callees:
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0013050 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?ReleaseCompositionInputObject@CInteractionMarshaler@DirectComposition@@IEAAXXZ @ 0x1C001CB00 (-ReleaseCompositionInputObject@CInteractionMarshaler@DirectComposition@@IEAAXXZ.c)
 *     ?CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ @ 0x1C001CC70 (-CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ.c)
 *     ?AssociateWithVisual@CompositionInputObject@@QEBAJPEAX@Z @ 0x1C00207E0 (-AssociateWithVisual@CompositionInputObject@@QEBAJPEAX@Z.c)
 */

__int64 __fastcall DirectComposition::CInteractionMarshaler::SetInputSinkHelper(
        DirectComposition::CInteractionMarshaler *this,
        void *a2,
        bool *a3)
{
  CompositionInputObject *v3; // rbx
  int v4; // esi
  bool *v5; // r14
  int v7; // eax
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  v4 = 0;
  Object = 0LL;
  v5 = a3;
  if ( !a2
    || (LOBYTE(a3) = 1,
        v7 = CompositionInputObject::ResolveHandle(a2, 1LL, (__int64)a3, (struct CompositionInputObject **)&Object),
        v3 = (CompositionInputObject *)Object,
        v4 = v7,
        v7 >= 0) )
  {
    if ( *((CompositionInputObject **)this + 23) != v3 )
    {
      if ( v3 )
        v4 = CompositionInputObject::AssociateWithVisual(v3, this);
      if ( v4 >= 0 )
      {
        DirectComposition::CInteractionMarshaler::ReleaseCompositionInputObject(this);
        if ( v3 )
        {
          *((_QWORD *)this + 23) = v3;
          v3 = 0LL;
        }
        *((_DWORD *)this + 4) |= 0x80u;
        *v5 = 1;
      }
    }
    DirectComposition::CInteractionMarshaler::CheckInputSinkTypes(this);
  }
  if ( v3 )
    ObfDereferenceObject(v3);
  return (unsigned int)v4;
}
