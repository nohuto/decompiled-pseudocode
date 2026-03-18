/*
 * XREFs of ULongLongMult @ 0x1401B7584
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140613754 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x14061418C (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpAddNamespaceNodeToList @ 0x140614330 (VrpAddNamespaceNodeToList.c)
 *     VrpDestroyNamespaceNode @ 0x140614978 (VrpDestroyNamespaceNode.c)
 *     VrpDestroyNamespaceNodeList @ 0x140614C00 (VrpDestroyNamespaceNodeList.c)
 *     VrpFindNamespaceNode @ 0x140614CB8 (VrpFindNamespaceNode.c)
 *     SdbpCheckPackageAttributes @ 0x1406C2EC4 (SdbpCheckPackageAttributes.c)
 *     SdbpFreePackageAttributes @ 0x1406C3208 (SdbpFreePackageAttributes.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall ULongLongMult(ULONGLONG ullMultiplicand, ULONGLONG ullMultiplier, ULONGLONG *pullResult)
{
  ULONGLONG v4; // rcx
  HRESULT result; // eax

  v4 = ullMultiplicand * ullMultiplier;
  result = 0;
  if ( is_mul_ok(ullMultiplicand, ullMultiplier) )
  {
    *pullResult = v4;
  }
  else
  {
    *pullResult = -1LL;
    return -2147024362;
  }
  return result;
}
