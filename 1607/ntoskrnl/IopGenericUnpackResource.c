/*
 * XREFs of IopGenericUnpackResource @ 0x14062E754
 * Callers:
 *     <none>
 * Callees:
 *     RtlCmDecodeMemIoResource @ 0x1400B2110 (RtlCmDecodeMemIoResource.c)
 */

__int64 __fastcall IopGenericUnpackResource(
        struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *a1,
        unsigned __int64 *a2,
        ULONGLONG *a3)
{
  *a3 = RtlCmDecodeMemIoResource(a1, a2);
  return 0LL;
}
