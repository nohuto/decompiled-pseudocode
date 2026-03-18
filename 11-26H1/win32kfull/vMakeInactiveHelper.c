/*
 * XREFs of vMakeInactiveHelper @ 0x1403250D4
 * Callers:
 *     ?vUnlinkAllEudcFromRFONTListInternal@@YAXPEAUHDEV__@@@Z @ 0x140288444 (-vUnlinkAllEudcFromRFONTListInternal@@YAXPEAUHDEV__@@@Z.c)
 *     vUnlinkAllEudcRFONTsAndPFEsWorker @ 0x140325234 (vUnlinkAllEudcRFONTsAndPFEsWorker.c)
 *     vUnlinkEudcRFONTsAndPFEsWorker @ 0x140325628 (vUnlinkEudcRFONTsAndPFEsWorker.c)
 *     vUnlinkEudcRFONTsWorker @ 0x140325770 (vUnlinkEudcRFONTsWorker.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1400F59E4 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 */

void __fastcall vMakeInactiveHelper(HSEMAPHORE *a1, __int64 a2, __int64 a3)
{
  HSEMAPHORE v4; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    if ( *a1 )
    {
      v4 = *a1;
      RFONTOBJ::bMakeInactiveHelper(&v4, 0LL, a3);
      *a1 = 0LL;
      v4 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v4);
    }
  }
}
