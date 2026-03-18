/*
 * XREFs of Crashdump_EventRing_UpdateDequeuePointer @ 0x1C0036ECC
 * Callers:
 *     Crashdump_EventRing_AsyncPoll @ 0x1C00366DC (Crashdump_EventRing_AsyncPoll.c)
 *     Crashdump_EventRing_Poll @ 0x1C0036A18 (Crashdump_EventRing_Poll.c)
 *     Crashdump_EventRing_PrepareForDump @ 0x1C0036CD8 (Crashdump_EventRing_PrepareForDump.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Crashdump_EventRing_UpdateDequeuePointer(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v1 = (*(_QWORD *)(a1 + 48) + 16LL * *(unsigned int *)(a1 + 92)) & 0xFFFFFFFFFFFFFFF0uLL | 8;
  result = *(_QWORD *)(a1 + 16);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 8LL) & 1) != 0 )
  {
    *(_DWORD *)(result + 24) = v1;
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
    *(_DWORD *)(result + 28) = HIDWORD(v1);
  }
  else
  {
    *(_QWORD *)(result + 24) = v1;
  }
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  return result;
}
