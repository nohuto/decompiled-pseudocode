/*
 * XREFs of PfpSectInfoHandleOutOfBuffers @ 0x1403EBD28
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PfpSectInfoHandleOutOfBuffers(_SLIST_ENTRY *a1)
{
  return PfFbBufferListAllocateTemporary(a1, 0x4000);
}
