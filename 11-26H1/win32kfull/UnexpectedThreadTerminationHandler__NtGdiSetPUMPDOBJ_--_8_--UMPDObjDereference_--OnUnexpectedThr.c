/*
 * XREFs of UnexpectedThreadTerminationHandler__NtGdiSetPUMPDOBJ_::_8_::UMPDObjDereference_::OnUnexpectedThreadTerminationStatic @ 0x14032C150
 * Callers:
 *     <none>
 * Callees:
 *     ?Dereference@UMPDOBJ@@QEAAXXZ @ 0x140290C80 (-Dereference@UMPDOBJ@@QEAAXXZ.c)
 */

void __fastcall UnexpectedThreadTerminationHandler__NtGdiSetPUMPDOBJ_::_8_::UMPDObjDereference_::OnUnexpectedThreadTerminationStatic(
        __int64 a1)
{
  PATHOBJ **v2; // rcx

  v2 = *(PATHOBJ ***)(a1 + 32);
  if ( v2 )
  {
    UMPDOBJ::Dereference(v2);
    *(_QWORD *)(a1 + 32) = 0LL;
  }
}
