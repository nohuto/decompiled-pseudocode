/*
 * XREFs of PsGetJobSilo @ 0x14020F794
 * Callers:
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x1406130D8 (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x14061338C (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlGetComRootKey @ 0x140613584 (VrpHandleIoctlGetComRootKey.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140613754 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x1406139F8 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlModifyFlags @ 0x140613E80 (VrpHandleIoctlModifyFlags.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x14061418C (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 * Callees:
 *     PspGetJobSilo @ 0x140076728 (PspGetJobSilo.c)
 */

__int64 __fastcall PsGetJobSilo(__int64 a1)
{
  __int64 JobSilo; // rax
  __int64 *v3; // rdx

  if ( !a1 )
    return 3221225485LL;
  JobSilo = PspGetJobSilo(a1);
  if ( !JobSilo )
    return 3221226761LL;
  *v3 = JobSilo;
  return 0LL;
}
