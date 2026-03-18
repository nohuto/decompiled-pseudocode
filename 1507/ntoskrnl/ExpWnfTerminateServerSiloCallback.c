/*
 * XREFs of ExpWnfTerminateServerSiloCallback @ 0x1406FC558
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExWnfServerSiloTerminated @ 0x1406F7718 (ExWnfServerSiloTerminated.c)
 */

void __fastcall ExpWnfTerminateServerSiloCallback(__int64 a1, PVOID *a2, __int64 a3, __int64 a4)
{
  if ( *a2 )
  {
    ExWnfServerSiloTerminated(a1, (__int64)a2, a3, a4);
    ExFreePoolWithTag(*a2, 0x20666E57u);
  }
}
