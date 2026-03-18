/*
 * XREFs of bUnloadEudcFont @ 0x1C000E074
 * Callers:
 *     ?CleanUpEUDC@@YAXXZ @ 0x1C000D930 (-CleanUpEUDC@@YAXXZ.c)
 *     bDeleteAllFlEntry @ 0x1C000DE58 (bDeleteAllFlEntry.c)
 *     GreEudcLoadLinkW @ 0x1C028AA00 (GreEudcLoadLinkW.c)
 *     GreEudcUnloadLinkW @ 0x1C028AC40 (GreEudcUnloadLinkW.c)
 *     bDeleteFlEntry @ 0x1C028B16C (bDeleteFlEntry.c)
 * Callees:
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C000E2DC (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     prfntDeactivateEudcRFONTs @ 0x1C000E81C (prfntDeactivateEudcRFONTs.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C001A988 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C001B5E8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?vFreePql@PFEOBJ@@QEAAXXZ @ 0x1C001E424 (-vFreePql@PFEOBJ@@QEAAXXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0027184 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C00272FC (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 */

__int64 __fastcall bUnloadEudcFont(__int64 *a1)
{
  unsigned int v2; // edi
  PFTOBJ *v3; // rcx
  __int64 v4; // rsi
  __int64 i; // rdx
  __int64 v7; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v8[4]; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int16 *v9; // [rsp+68h] [rbp+18h] BYREF
  __int64 v10; // [rsp+70h] [rbp+20h] BYREF

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v9, 0x20Au);
  v2 = 0;
  if ( v9 )
  {
    v10 = *a1;
    if ( (int)StringCchCopyW(v9, 0x105uLL, *(const unsigned __int16 **)(*(_QWORD *)v10 + 24LL)) >= 0 )
    {
      PFEOBJ::vFreePql((PFEOBJ *)&v10);
      v10 = a1[1];
      if ( v10 )
        PFEOBJ::vFreePql((PFEOBJ *)&v10);
      v4 = prfntDeactivateEudcRFONTs(a1);
      for ( i = v4; v4; i = v4 )
      {
        v4 = *(_QWORD *)(v4 + 504);
        v7 = *(_QWORD *)(i + 120);
        v10 = i;
        memset(v8, 0, sizeof(v8));
        PushThreadGuardedObject(v8, i, vRestartKillEudcRFONTs);
        RFONTOBJ::vDeleteRFONT((RFONTOBJ *)&v10, 0LL, (struct PFFOBJ *)&v7, 1);
        PopThreadGuardedObject(v8);
        v10 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v10);
      }
      LOBYTE(v2) = (unsigned int)PFTOBJ::bUnloadEUDCFont(v3, v9) != 0;
    }
    Win32FreePool(v9);
  }
  return v2;
}
