/*
 * XREFs of RmpActivityHostOnHostTerminated @ 0x180041160
 * Callers:
 *     ?OnProcessTerminated@ResourceManager@ExecutionModel@@UEAAXK@Z @ 0x18003D6D0 (-OnProcessTerminated@ResourceManager@ExecutionModel@@UEAAXK@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall RmpActivityHostOnHostTerminated(_QWORD *a1)
{
  if ( a1[112] )
    return RmpActivityHostRemoveFromRemediationGroup(a1);
  else
    return SetEvent(*((HANDLE *)RmSvcGlobals + 204));
}
