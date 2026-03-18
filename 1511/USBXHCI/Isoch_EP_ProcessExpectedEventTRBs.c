/*
 * XREFs of Isoch_EP_ProcessExpectedEventTRBs @ 0x1C002ADB0
 * Callers:
 *     <none>
 * Callees:
 *     ESM_AddEvent @ 0x1C00393A8 (ESM_AddEvent.c)
 */

__int64 __fastcall Isoch_EP_ProcessExpectedEventTRBs(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 56);
  if ( !*(_BYTE *)(v1 + 37) )
    return ESM_AddEvent((PVOID)(v1 + 272));
  v2 = *(_QWORD *)(v1 + 136);
  result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v2 + 20));
  if ( (_DWORD)result == *(_DWORD *)(v2 + 8) )
    return ESM_AddEvent((PVOID)(v1 + 272));
  return result;
}
