/*
 * XREFs of NVMeFreePool @ 0x1C000761C
 * Callers:
 *     AdminQueueInitialize @ 0x1C0005094 (AdminQueueInitialize.c)
 *     AdminQueuesFreeResources @ 0x1C000520C (AdminQueuesFreeResources.c)
 *     IoQueuesFreeResources @ 0x1C0005DA8 (IoQueuesFreeResources.c)
 *     IoQueuesInitialize @ 0x1C0005EFC (IoQueuesInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeFreePool(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 )
    return StorPortExtendedFunction(1LL, a1, a2);
  return result;
}
