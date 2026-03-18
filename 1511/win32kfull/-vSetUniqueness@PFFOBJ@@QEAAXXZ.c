/*
 * XREFs of ?vSetUniqueness@PFFOBJ@@QEAAXXZ @ 0x1C0021990
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C0020D78 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C025D890 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 * Callees:
 *     ?iHash@@YAIPEBGI@Z @ 0x1C001AE64 (-iHash@@YAIPEBGI@Z.c)
 */

void __fastcall PFFOBJ::vSetUniqueness(PFFOBJ *this)
{
  __int64 v1; // rax
  int v2; // eax
  __int64 v3; // r10

  v1 = *(_QWORD *)this;
  *(_DWORD *)(v1 + 140) = ++PFFOBJ::uGlobalUniqueness;
  v2 = iHash(
         *(const unsigned __int16 **)(*(_QWORD *)this + 24LL),
         *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 128LL) + 24LL));
  *(_DWORD *)(v3 + 140) = *(_DWORD *)(v3 + 140) & 0xFFFFFF | (v2 << 24);
}
