/*
 * XREFs of Crashdump_EventRing_UpdateDequeuePointer @ 0x1C0037434
 * Callers:
 *     Crashdump_EventRing_AsyncPoll @ 0x1C0036C3C (Crashdump_EventRing_AsyncPoll.c)
 *     Crashdump_EventRing_Poll @ 0x1C0036F78 (Crashdump_EventRing_Poll.c)
 *     Crashdump_EventRing_PrepareForDump @ 0x1C0037238 (Crashdump_EventRing_PrepareForDump.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall Crashdump_EventRing_UpdateDequeuePointer(__int64 a1)
{
  __int128 v1; // xmm0
  unsigned __int64 result; // rax
  __int64 v3; // rcx
  signed __int32 v4[6]; // [rsp+0h] [rbp-18h] BYREF

  v1 = *(_OWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
  result = (*(_QWORD *)(a1 + 48) + 16LL * *(unsigned int *)(a1 + 92)) & 0xFFFFFFFFFFFFFFF0uLL | 8;
  v3 = *(_QWORD *)(a1 + 16);
  *(_OWORD *)v4 = v1;
  if ( (v1 & 1) != 0 )
  {
    *(_DWORD *)(v3 + 24) = result;
    _InterlockedOr(v4, 0);
    result >>= 32;
    *(_DWORD *)(v3 + 28) = result;
  }
  else
  {
    *(_QWORD *)(v3 + 24) = result;
  }
  _InterlockedOr(v4, 0);
  return result;
}
