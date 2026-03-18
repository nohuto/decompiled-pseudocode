/*
 * XREFs of FsRtlAllocatePool @ 0x1401E2C84
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall FsRtlAllocatePool(POOL_TYPE a1, unsigned int a2)
{
  PVOID result; // rax

  result = ExAllocatePoolWithTag(a1, a2, 0x74725346u);
  if ( !result )
    RtlRaiseStatus(-1073741670);
  return result;
}
