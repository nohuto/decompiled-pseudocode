/*
 * XREFs of ?Release@CompositionObject@@QEBA_JXZ @ 0x1C00134A0
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C006AD40 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C007C5BC (-UserInitialize@@YAJXZ.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C00CFFB4 (RIMApplyPTPConfigRemedy.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LONG_PTR __stdcall CompositionObject::Release(PVOID Object)
{
  return ObfDereferenceObject(Object);
}
