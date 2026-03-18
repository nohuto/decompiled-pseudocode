/*
 * XREFs of ExpDereferenceHost @ 0x1406F824C
 * Callers:
 *     ExRegisterExtension @ 0x140594750 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x140594978 (ExRegisterHost.c)
 *     ExUnregisterExtension @ 0x1406F8120 (ExUnregisterExtension.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall ExpDereferenceHost(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 4, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
