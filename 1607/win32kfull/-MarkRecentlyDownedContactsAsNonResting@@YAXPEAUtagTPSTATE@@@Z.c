/*
 * XREFs of ?MarkRecentlyDownedContactsAsNonResting@@YAXPEAUtagTPSTATE@@@Z @ 0x1C01E814C
 * Callers:
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01EC198 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     ?SetContactRestingState@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@H@Z @ 0x1C01E84F0 (-SetContactRestingState@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@H@Z.c)
 */

void __fastcall MarkRecentlyDownedContactsAsNonResting(struct tagTPSTATE *a1)
{
  char *v1; // rsi
  _DWORD *v3; // rbx

  v1 = (char *)a1 + 1632;
  v3 = (_DWORD *)((char *)a1 + 264);
  do
  {
    if ( (*v3 & 1) != 0
      && (*v3 & 0x80u) != 0
      && (unsigned __int64)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *((_QWORD *)v3 - 26)) < 300
                                                                                               * gliQpcFreq.QuadPart
                                                                                               / 1000 )
    {
      SetContactRestingState((struct tagTPCONTACTSTATE *)(v3 - 66), a1, 0);
    }
    v3 += 68;
  }
  while ( v3 - 66 != (_DWORD *)v1 );
}
