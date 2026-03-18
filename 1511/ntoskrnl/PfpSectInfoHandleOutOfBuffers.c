/*
 * XREFs of PfpSectInfoHandleOutOfBuffers @ 0x14063181C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PfpSectInfoHandleOutOfBuffers(struct _EX_RUNDOWN_REF *a1)
{
  return PfFbBufferListAllocateTemporary(a1, 0x4000);
}
