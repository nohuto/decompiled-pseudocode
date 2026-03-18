/*
 * XREFs of vMakeInactiveHelper @ 0x1C028A148
 * Callers:
 *     vUnlinkAllEudcRFONTsAndPFEsWorker @ 0x1C011FC04 (vUnlinkAllEudcRFONTsAndPFEsWorker.c)
 *     ?vUnlinkAllEudcFromRFONTList@@YAXHH@Z @ 0x1C0133468 (-vUnlinkAllEudcFromRFONTList@@YAXHH@Z.c)
 *     vUnlinkEudcRFONTsAndPFEsWorker @ 0x1C028A454 (vUnlinkEudcRFONTsAndPFEsWorker.c)
 *     vUnlinkEudcRFONTsWorker @ 0x1C028A5A0 (vUnlinkEudcRFONTsWorker.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002D6C4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C002E04C (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 */

void __fastcall vMakeInactiveHelper(__int64 *a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    if ( *a1 )
    {
      v2 = *a1;
      RFONTOBJ::bMakeInactiveHelper((RFONTOBJ *)&v2, 0LL);
      *a1 = 0LL;
      v2 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v2);
    }
  }
}
