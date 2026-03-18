/*
 * XREFs of ?CheckDoubleTap@@YAHPEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@@Z @ 0x1C01F0FDC
 * Callers:
 *     ?xxxDoTPMouseProcessing@@YA?AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@@@Z @ 0x1C01F4898 (-xxxDoTPMouseProcessing@@YA-AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CheckDoubleTap(struct tagTPSTATE *a1, struct tagTPCONTACTSTATE *a2)
{
  return *((_DWORD *)a2 + 18) - *((_DWORD *)a1 + 355) <= (unsigned int)gTPThresholds
      && (int)((HIDWORD(*((_QWORD *)a1 + 172)) - HIDWORD(*(_QWORD *)a2))
             * (HIDWORD(*((_QWORD *)a1 + 172)) - HIDWORD(*(_QWORD *)a2))
             + (*((_QWORD *)a1 + 172) - *(_QWORD *)a2) * (*((_QWORD *)a1 + 172) - *(_QWORD *)a2)) <= (unsigned __int64)(unsigned int)(dword_1C0321EEC * dword_1C0321EEC);
}
