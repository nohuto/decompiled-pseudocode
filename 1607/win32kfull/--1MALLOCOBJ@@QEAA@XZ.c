/*
 * XREFs of ??1MALLOCOBJ@@QEAA@XZ @ 0x1C00604AC
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C00242E8 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z.c)
 *     bAddFlEntry @ 0x1C00608E8 (bAddFlEntry.c)
 * Callees:
 *     <none>
 */

void __fastcall MALLOCOBJ::~MALLOCOBJ(MALLOCOBJ *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)this;
  if ( v4 )
  {
    Win32FreePool(v4, a2, a3);
    *(_QWORD *)this = 0LL;
  }
}
