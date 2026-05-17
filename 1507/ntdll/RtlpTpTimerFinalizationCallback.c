/*
 * XREFs of RtlpTpTimerFinalizationCallback @ 0x18007B7B0
 * Callers:
 *     TppCleanupGroupMemberDestroy @ 0x18003D810 (TppCleanupGroupMemberDestroy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpTpTimerFinalizationCallback(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  _m_prefetchw((const void *)(a2 + 48));
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(a2 + 48), 2u);
  if ( (result & 1) == 0 )
    return RtlpTpTimerRundown(a2);
  return result;
}
