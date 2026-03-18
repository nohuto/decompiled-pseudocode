/*
 * XREFs of _NtGdiSetPUMPDOBJ_::_8_::UMPDObjDereference::_UMPDObjDereference @ 0x1400D7E90
 * Callers:
 *     NtGdiSetPUMPDOBJ @ 0x1400D63C0 (NtGdiSetPUMPDOBJ.c)
 * Callees:
 *     ?Dereference@UMPDOBJ@@QEAAXXZ @ 0x140290C80 (-Dereference@UMPDOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiSetPUMPDOBJ_::_8_::UMPDObjDereference::_UMPDObjDereference(__int64 a1)
{
  UMPDOBJ *v2; // rcx

  v2 = *(UMPDOBJ **)(a1 + 32);
  if ( v2 )
  {
    UMPDOBJ::Dereference(v2);
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  return PopThreadGuardedObject(a1);
}
