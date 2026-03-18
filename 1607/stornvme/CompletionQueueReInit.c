/*
 * XREFs of CompletionQueueReInit @ 0x1C00052A4
 * Callers:
 *     NVMeQueuesReInit @ 0x1C0008418 (NVMeQueuesReInit.c)
 * Callees:
 *     <none>
 */

void *__fastcall CompletionQueueReInit(__int64 a1, __int64 a2)
{
  int v3; // edx

  *(_DWORD *)(a2 + 98) = 0;
  if ( *(_WORD *)(a2 + 96) )
    v3 = *(unsigned __int16 *)(a1 + 230);
  else
    v3 = *(unsigned __int16 *)(a1 + 228);
  return NVMeZeroMemory(*(void **)a2, 16 * v3);
}
