/*
 * XREFs of USBMidiOutProcessPin @ 0x1C0023300
 * Callers:
 *     <none>
 * Callees:
 *     USBMidiOutCreateBulkUrbs @ 0x1C0006714 (USBMidiOutCreateBulkUrbs.c)
 */

__int64 __fastcall USBMidiOutProcessPin(struct _KSPIN *a1)
{
  unsigned int v1; // edi
  PKSSTREAM_POINTER LeadingEdgeStreamPointer; // rax
  struct _KSSTREAM_POINTER *v3; // rbx
  unsigned __int64 Remaining; // rdx
  __int64 v5; // rcx
  struct _KSSTREAM_POINTER *v6; // rcx

  v1 = -1073741811;
  LeadingEdgeStreamPointer = KsPinGetLeadingEdgeStreamPointer(a1, KSSTREAM_POINTER_STATE_LOCKED);
  v3 = LeadingEdgeStreamPointer;
  if ( LeadingEdgeStreamPointer )
  {
    Remaining = LeadingEdgeStreamPointer->OffsetIn.Remaining;
    if ( (unsigned int)Remaining <= 8 )
    {
      v6 = LeadingEdgeStreamPointer;
    }
    else
    {
      v5 = *((unsigned int *)LeadingEdgeStreamPointer->OffsetIn.Data + 1);
      if ( (_DWORD)v5 && Remaining >= v5 + 8 )
        return (unsigned int)USBMidiOutCreateBulkUrbs(LeadingEdgeStreamPointer);
      v6 = LeadingEdgeStreamPointer;
    }
    KsStreamPointerSetStatusCode(v6, -1073741808);
    KsStreamPointerAdvanceOffsets(v3, v3->OffsetIn.Remaining, 0, 0);
  }
  return v1;
}
