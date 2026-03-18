/*
 * XREFs of VfDisableHalVerifier @ 0x140222B10
 * Callers:
 *     IoWriteCrashDump @ 0x1401C65BC (IoWriteCrashDump.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x1401C7E24 (IopWriteCapsuleTriageDumpToFirmware.c)
 *     VfAllocateCrashDumpRegisters @ 0x1407066B8 (VfAllocateCrashDumpRegisters.c)
 *     VfNotifyOfHibernate @ 0x140707FBC (VfNotifyOfHibernate.c)
 * Callees:
 *     <none>
 */

ULONG_PTR VfDisableHalVerifier()
{
  ULONG_PTR *i; // rcx
  ULONG_PTR v1; // rdx
  ULONG_PTR result; // rax

  if ( ViVerifyDma )
  {
    ViVerifyDma = 0;
    for ( i = (ULONG_PTR *)ViAdapterList; &ViAdapterList != i; i = (ULONG_PTR *)*i )
    {
      v1 = i[2];
      if ( v1 )
      {
        result = i[6];
        *(_QWORD *)(v1 + 8) = result;
      }
    }
  }
  return result;
}
