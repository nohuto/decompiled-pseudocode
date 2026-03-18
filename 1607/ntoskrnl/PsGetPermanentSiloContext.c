/*
 * XREFs of PsGetPermanentSiloContext @ 0x140091EE0
 * Callers:
 *     OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO @ 0x140091EB0 (OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO.c)
 *     ObpLookupObjectName @ 0x14044F450 (ObpLookupObjectName.c)
 *     VrpShouldOperateOnCall @ 0x140464780 (VrpShouldOperateOnCall.c)
 *     VRegEnabledInJob @ 0x1404E9244 (VRegEnabledInJob.c)
 *     CmLockKeyForWrite @ 0x140574BC8 (CmLockKeyForWrite.c)
 *     ObInitServerSilo @ 0x140579FFC (ObInitServerSilo.c)
 *     CmpTerminateServerSiloCallback @ 0x1405FF3F0 (CmpTerminateServerSiloCallback.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x1406130D8 (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x14061338C (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlGetComRootKey @ 0x140613584 (VrpHandleIoctlGetComRootKey.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x1406139F8 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlModifyFlags @ 0x140613E80 (VrpHandleIoctlModifyFlags.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x14061418C (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     ObGetSiloRootDirectoryPath @ 0x1406E6284 (ObGetSiloRootDirectoryPath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetPermanentSiloContext(__int64 a1, unsigned int a2, unsigned __int64 *a3)
{
  __int64 v3; // rcx
  __int64 v4; // rcx

  if ( a1 )
    v3 = *(_QWORD *)(a1 + 1288);
  else
    v3 = qword_1403BF8D8;
  *a3 = 0LL;
  if ( a2 >= 0x20 )
  {
    a2 -= 32;
    if ( a2 >= 0x100 )
      return 3221225485LL;
    v3 = *(_QWORD *)(v3 + 512);
    if ( !v3 )
      return 3221226021LL;
  }
  v4 = *(_QWORD *)(v3 + 16LL * a2 + 8);
  if ( (v4 & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
    return 3221226021LL;
  if ( (v4 & 1) == 0 )
    return 3221225659LL;
  *a3 = v4 & 0xFFFFFFFFFFFFFFFEuLL;
  return 0LL;
}
