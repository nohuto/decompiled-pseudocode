/*
 * XREFs of ?NotifyCompositionBuffersOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00E0ABC
 * Callers:
 *     ?NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0045CF0 (-NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z @ 0x1C0039408 (-ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z.c)
 *     ?UpdateDirtyRegions@CCompositionToken@@QEAAJXZ @ 0x1C003F1D8 (-UpdateDirtyRegions@CCompositionToken@@QEAAJXZ.c)
 */

__int64 __fastcall NotifyCompositionBuffersOfSkippedToken(const struct _D3DKMT_PRESENTHISTORYTOKEN *a1)
{
  void *FenceValue; // rcx
  int updated; // ebx
  PVOID v3; // rdi
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  FenceValue = (void *)a1->Token.Flip.FenceValue;
  Object = 0LL;
  updated = CompositionObject::ResolveHandle(FenceValue, 2u, 1, 4, &Object);
  if ( updated >= 0 )
  {
    v3 = Object;
    updated = CCompositionToken::UpdateDirtyRegions((CCompositionToken *)((char *)Object + 24));
    ObfDereferenceObject(v3);
  }
  return (unsigned int)updated;
}
