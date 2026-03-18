/*
 * XREFs of ClearDelegationCapture @ 0x1C0044230
 * Callers:
 *     zzzAttachToQueue @ 0x1C0043EE8 (zzzAttachToQueue.c)
 *     xxxFreeWindow @ 0x1C0088BC8 (xxxFreeWindow.c)
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
