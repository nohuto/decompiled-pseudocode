/*
 * XREFs of ?Release@CompositionObject@@QEBA_JXZ @ 0x1C0045FB0
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0062380 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C00D1390 (RIMApplyPTPConfigRemedy.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LONG_PTR __stdcall CompositionObject::Release(PVOID Object)
{
  return ObfDereferenceObject(Object);
}
