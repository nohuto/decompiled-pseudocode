/*
 * XREFs of ULongLongMult @ 0x1401B7468
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140613808 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x140614240 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpAddNamespaceNodeToList @ 0x1406143E4 (VrpAddNamespaceNodeToList.c)
 *     VrpDestroyNamespaceNode @ 0x140614A2C (VrpDestroyNamespaceNode.c)
 *     VrpDestroyNamespaceNodeList @ 0x140614CB4 (VrpDestroyNamespaceNodeList.c)
 *     VrpFindNamespaceNode @ 0x140614D6C (VrpFindNamespaceNode.c)
 *     SdbpCheckPackageAttributes @ 0x1406C2FFC (SdbpCheckPackageAttributes.c)
 *     SdbpFreePackageAttributes @ 0x1406C3340 (SdbpFreePackageAttributes.c)
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
