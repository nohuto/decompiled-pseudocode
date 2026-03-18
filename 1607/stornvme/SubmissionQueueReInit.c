/*
 * XREFs of SubmissionQueueReInit @ 0x1C00087C8
 * Callers:
 *     NVMeQueuesReInit @ 0x1C0008418 (NVMeQueuesReInit.c)
 * Callees:
 *     <none>
 */

void *__fastcall SubmissionQueueReInit(__int64 a1, __int64 a2)
{
  int v3; // edx

  *(_DWORD *)(a2 + 44) = 0;
  *(_WORD *)(a2 + 48) = 0;
  *(_WORD *)(a2 + 128) = 0;
  if ( *(_WORD *)(a2 + 40) )
    v3 = *(unsigned __int16 *)(a1 + 230);
  else
    v3 = *(unsigned __int16 *)(a1 + 228);
  return NVMeZeroMemory(*(void **)a2, v3 << 6);
}
