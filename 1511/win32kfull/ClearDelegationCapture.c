/*
 * XREFs of ClearDelegationCapture @ 0x1C008BF60
 * Callers:
 *     xxxFreeWindow @ 0x1C0066C00 (xxxFreeWindow.c)
 *     zzzAttachToQueue @ 0x1C008BC0C (zzzAttachToQueue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ClearDelegationCapture(__int64 a1)
{
  __int64 result; // rax

  result = HMAssignmentUnlock(a1 + 96);
  *(_BYTE *)(a1 + 104) = 0;
  return result;
}
