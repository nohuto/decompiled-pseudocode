/*
 * XREFs of bUnloadEudcFont @ 0x1C01295F4
 * Callers:
 *     bDeleteAllFlEntry @ 0x1C01293D8 (bDeleteAllFlEntry.c)
 *     ?CleanUpEUDC@@YAXXZ @ 0x1C012AAA4 (-CleanUpEUDC@@YAXXZ.c)
 *     GreEudcLoadLinkW @ 0x1C028A9D4 (GreEudcLoadLinkW.c)
 *     GreEudcUnloadLinkW @ 0x1C028AC14 (GreEudcUnloadLinkW.c)
 *     bDeleteFlEntry @ 0x1C028B194 (bDeleteFlEntry.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002F3C8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0031DE4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0125E48 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?vFreePql@PFEOBJ@@QEAAXXZ @ 0x1C0129780 (-vFreePql@PFEOBJ@@QEAAXXZ.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C0129B00 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     prfntDeactivateEudcRFONTs @ 0x1C012A5B0 (prfntDeactivateEudcRFONTs.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C013F8A4 (--0MALLOCOBJ@@QEAA@K@Z.c)
 */

__int64 __fastcall bUnloadEudcFont(__int64 a1)
{
  unsigned int v2; // edi
  PFTOBJ *v3; // rcx
  __int64 v4; // rsi
  struct _FONTOBJ *i; // rdx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  PVOID v10[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v11[4]; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int16 *v12; // [rsp+68h] [rbp+18h] BYREF
  struct _FONTOBJ *v13; // [rsp+70h] [rbp+20h] BYREF

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v12, 0x20Au);
  v2 = 0;
  if ( v12 )
  {
    v13 = *(struct _FONTOBJ **)a1;
    if ( (int)StringCchCopyW((char *)v12, 261LL, *(char **)(*(_QWORD *)&v13->iUniq + 24LL)) >= 0 )
    {
      PFEOBJ::vFreePql((PFEOBJ *)&v13);
      v13 = *(struct _FONTOBJ **)(a1 + 8);
      if ( v13 )
        PFEOBJ::vFreePql((PFEOBJ *)&v13);
      v4 = prfntDeactivateEudcRFONTs(a1);
      for ( i = (struct _FONTOBJ *)v4; v4; i = (struct _FONTOBJ *)v4 )
      {
        v4 = *(_QWORD *)(v4 + 504);
        v10[0] = i[1].pvProducer;
        v13 = i;
        memset(v11, 0, sizeof(v11));
        PushThreadGuardedObject(v11, i, vRestartKillEudcRFONTs);
        RFONTOBJ::vDeleteRFONT(&v13, 0LL, (struct PFFOBJ *)v10, 1);
        PopThreadGuardedObject(v11, v7, v8, v9, v10[0]);
        v13 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v13);
      }
      LOBYTE(v2) = (unsigned int)PFTOBJ::bUnloadEUDCFont(v3, v12) != 0;
    }
    Win32FreePool(v12);
  }
  return v2;
}
