/*
 * XREFs of VfPoolDelayFreeIfPossible @ 0x14012EF14
 * Callers:
 *     VfUtilFreePoolCheckIRQL @ 0x14012EF04 (VfUtilFreePoolCheckIRQL.c)
 *     VfUtilFreePoolDispatchLevel @ 0x14022267C (VfUtilFreePoolDispatchLevel.c)
 * Callees:
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     RtlpInterlockedPushEntrySList @ 0x140166E40 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall VfPoolDelayFreeIfPossible(PSLIST_ENTRY ListEntry, unsigned int a2)
{
  unsigned __int16 *v2; // rbx
  unsigned int v3; // edi

  if ( a2 > 1
    || (v2 = (unsigned __int16 *)((char *)&VfPoolDelayFreeData + 64 * (__int64)(int)a2),
        ++*((_DWORD *)v2 + 13),
        !*((_DWORD *)v2 + 12)) )
  {
    ExFreePoolWithTag(ListEntry, 0);
    return;
  }
  v3 = *v2;
  if ( v3 >= 0x200 )
  {
    ++*((_DWORD *)v2 + 14);
    ExFreePoolWithTag(ListEntry, 0);
LABEL_7:
    KeSetEvent((PRKEVENT)(v2 + 8), 1, 0);
    return;
  }
  RtlpInterlockedPushEntrySList((PSLIST_HEADER)v2, ListEntry);
  if ( v3 >= 0x40 )
    goto LABEL_7;
}
