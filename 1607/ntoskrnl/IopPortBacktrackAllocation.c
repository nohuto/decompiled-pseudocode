/*
 * XREFs of IopPortBacktrackAllocation @ 0x14062EA10
 * Callers:
 *     <none>
 * Callees:
 *     IopPortGetNextAlias @ 0x1405587F8 (IopPortGetNextAlias.c)
 *     RtlDeleteRange @ 0x14055AC8C (RtlDeleteRange.c)
 */

NTSTATUS __fastcall IopPortBacktrackAllocation(__int64 a1, ULONGLONG *a2)
{
  __int64 v2; // rdi
  char NextAlias; // al
  __int64 v6; // r10
  struct _RTL_RANGE_LIST *v7; // rcx
  void *v8; // r9
  ULONGLONG Start; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  for ( Start = *a2; ; RtlDeleteRange(v7, Start, *(_QWORD *)(v6 + 16) + Start - 1, v8) )
  {
    NextAlias = IopPortGetNextAlias(*(_DWORD *)(a2[5] + 36), v2, &Start);
    v7 = *(struct _RTL_RANGE_LIST **)(a1 + 48);
    v8 = *(void **)(a2[4] + 32);
    if ( !NextAlias )
      break;
    v2 = Start;
  }
  return RtlDeleteRange(v7, *a2, a2[1], v8);
}
