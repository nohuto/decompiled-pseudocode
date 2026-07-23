/*
 * XREFs of ExpDereferenceHost @ 0x1406B6AE8
 * Callers:
 *     ExRegisterExtension @ 0x140553780 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x140553960 (ExRegisterHost.c)
 *     ExUnregisterExtension @ 0x1406B6A08 (ExUnregisterExtension.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall ExpDereferenceHost(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 4, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
