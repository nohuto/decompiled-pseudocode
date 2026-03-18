/*
 * XREFs of ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C013EA0C
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C013FB2C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z @ 0x1C025D6B4 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C025D918 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C025DCE4 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 * Callees:
 *     ?bRemovePvtData@PFFOBJ@@QEAAHPEAUtagPvtData@@@Z @ 0x1C02B4754 (-bRemovePvtData@PFFOBJ@@QEAAHPEAUtagPvtData@@@Z.c)
 *     ?vPFFC_DeleteAndCleanup@PFFOBJ@@QEAAXXZ @ 0x1C02B4858 (-vPFFC_DeleteAndCleanup@PFFOBJ@@QEAAXXZ.c)
 */

void __fastcall PFFMEMOBJ::~PFFMEMOBJ(PFFMEMOBJ *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rdx

  if ( (*((_BYTE *)this + 16) & 2) == 0 )
  {
    v5 = *(_QWORD *)this;
    if ( v5 )
    {
      PopThreadGuardedObject(v5 + 176, a2, a3, a4);
      if ( *((_DWORD *)this + 2) )
      {
        v6 = *(_QWORD *)(*(_QWORD *)this + 160LL);
        if ( (*((_DWORD *)this + 5) & 0x2C) != 0 )
          --*(_DWORD *)(v6 + 4);
        else
          --*(_DWORD *)v6;
        if ( !*(_DWORD *)(v6 + 4) && !*(_DWORD *)v6 )
          PFFOBJ::bRemovePvtData(this, (struct tagPvtData *)v6);
      }
      PFFOBJ::vPFFC_DeleteAndCleanup(this);
    }
  }
}
