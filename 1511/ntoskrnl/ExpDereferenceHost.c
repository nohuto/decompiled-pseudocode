/*
 * XREFs of ExpDereferenceHost @ 0x140673C30
 * Callers:
 *     ExRegisterExtension @ 0x1405278B0 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x140527A90 (ExRegisterHost.c)
 *     ExUnregisterExtension @ 0x140673B50 (ExUnregisterExtension.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall ExpDereferenceHost(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 4, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
