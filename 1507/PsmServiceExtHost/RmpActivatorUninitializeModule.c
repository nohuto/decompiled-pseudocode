/*
 * XREFs of RmpActivatorUninitializeModule @ 0x18003B578
 * Callers:
 *     RmpInitializeGlobalModules @ 0x180019718 (RmpInitializeGlobalModules.c)
 *     RmpUninitializeGlobalModules @ 0x18003996C (RmpUninitializeGlobalModules.c)
 * Callees:
 *     RmpActivatorUnregister @ 0x18003B5B8 (RmpActivatorUnregister.c)
 */

char *RmpActivatorUninitializeModule()
{
  char *result; // rax
  void **v1; // rcx
  void **v2; // rbx

  result = (char *)RmSvcGlobals + 8;
  v1 = (void **)*((_QWORD *)RmSvcGlobals + 1);
  if ( v1 != (void **)((char *)RmSvcGlobals + 8) )
  {
    do
    {
      v2 = (void **)*v1;
      RmpActivatorUnregister(v1);
      v1 = v2;
      result = (char *)RmSvcGlobals + 8;
    }
    while ( v2 != (void **)((char *)RmSvcGlobals + 8) );
  }
  return result;
}
