/*
 * XREFs of RmpActivityHostOnHostTerminated @ 0x18003BE44
 * Callers:
 *     ?OnProcessTerminated@ResourceManager@ExecutionModel@@UEAAXK@Z @ 0x180037430 (-OnProcessTerminated@ResourceManager@ExecutionModel@@UEAAXK@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall RmpActivityHostOnHostTerminated(_QWORD *a1)
{
  if ( a1[108] )
    return RmpActivityHostRemoveFromRemediationGroup(a1);
  else
    return SetEvent(*((HANDLE *)RmSvcGlobals + 213));
}
