/*
 * XREFs of ?CheckDoubleTap@@YAHPEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@@Z @ 0x1C01F107C
 * Callers:
 *     ?xxxDoTPMouseProcessing@@YA?AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@@@Z @ 0x1C01F4538 (-xxxDoTPMouseProcessing@@YA-AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CheckDoubleTap(struct tagTPSTATE *a1, struct tagTPCONTACTSTATE *a2)
{
  return *((_QWORD *)a2 + 9) - *((_QWORD *)a1 + 148) <= (unsigned __int64)(unsigned int)gTPThresholds
      && (int)((HIDWORD(*((_QWORD *)a1 + 142)) - HIDWORD(*(_QWORD *)a2))
             * (HIDWORD(*((_QWORD *)a1 + 142)) - HIDWORD(*(_QWORD *)a2))
             + (*((_QWORD *)a1 + 142) - *(_QWORD *)a2) * (*((_QWORD *)a1 + 142) - *(_QWORD *)a2)) <= (unsigned __int64)(unsigned int)(dword_1C032368C * dword_1C032368C);
}
