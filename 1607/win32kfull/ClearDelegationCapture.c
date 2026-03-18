/*
 * XREFs of ClearDelegationCapture @ 0x1C00DC2F0
 * Callers:
 *     xxxFreeWindow @ 0x1C00543AC (xxxFreeWindow.c)
 *     zzzAttachToQueue @ 0x1C00DBFA0 (zzzAttachToQueue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ClearDelegationCapture(__int64 a1)
{
  __int64 result; // rax

  result = HMAssignmentUnlock(a1 + 104);
  *(_BYTE *)(a1 + 112) = 0;
  return result;
}
