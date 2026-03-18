/*
 * XREFs of ?CheckDoubleTap@@YAHPEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@@Z @ 0x1C01E6EE4
 * Callers:
 *     ?xxxDoTPMouseProcessing@@YA?AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@@@Z @ 0x1C01EB354 (-xxxDoTPMouseProcessing@@YA-AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CheckDoubleTap(struct tagTPSTATE *a1, struct tagTPCONTACTSTATE *a2)
{
  return *((_QWORD *)a2 + 13) - *((_QWORD *)a1 + 221) <= (unsigned __int64)(unsigned int)gTPThresholds
      && (int)((HIDWORD(*((_QWORD *)a1 + 215)) - HIDWORD(*(_QWORD *)a2))
             * (HIDWORD(*((_QWORD *)a1 + 215)) - HIDWORD(*(_QWORD *)a2))
             + (*((_QWORD *)a1 + 215) - *(_QWORD *)a2) * (*((_QWORD *)a1 + 215) - *(_QWORD *)a2)) <= (unsigned __int64)(unsigned int)(dword_1C03280AC * dword_1C03280AC);
}
