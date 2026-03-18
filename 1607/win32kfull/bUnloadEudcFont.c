/*
 * XREFs of bUnloadEudcFont @ 0x1C0021F90
 * Callers:
 *     bDeleteAllFlEntry @ 0x1C0021D74 (bDeleteAllFlEntry.c)
 *     ?CleanUpEUDC@@YAXXZ @ 0x1C0107CD8 (-CleanUpEUDC@@YAXXZ.c)
 *     GreEudcLoadLinkW @ 0x1C028937C (GreEudcLoadLinkW.c)
 *     GreEudcUnloadLinkW @ 0x1C02895C8 (GreEudcUnloadLinkW.c)
 *     bDeleteFlEntry @ 0x1C0289B84 (bDeleteFlEntry.c)
 * Callees:
 *     prfntDeactivateEudcRFONTs @ 0x1C0022058 (prfntDeactivateEudcRFONTs.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C0022ABC (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     ?vFreePql@PFEOBJ@@QEAAXXZ @ 0x1C0027C38 (-vFreePql@PFEOBJ@@QEAAXXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002D6C4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C002D840 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C00604D0 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0060C84 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall bUnloadEudcFont(__int64 *a1)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // r8
  int v5; // edx
  char *v6; // rcx
  __int64 v7; // rsi
  __int64 i; // rdx
  __int64 v10; // r8
  __int64 v11; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v12[4]; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int16 *v13; // [rsp+78h] [rbp+28h] BYREF
  __int64 v14; // [rsp+80h] [rbp+30h] BYREF

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v13, 0x20Au);
  v2 = 0;
  if ( v13 )
  {
    v14 = *a1;
    if ( (int)StringCchCopyW(v13, 0x105uLL, *(const unsigned __int16 **)(*(_QWORD *)v14 + 24LL)) >= 0 )
    {
      v5 = 0;
      if ( (dword_1C03292A0 & 0x10) != 0 || !bFinallyInitializeFontAssocDefault )
        goto LABEL_5;
      v6 = (char *)&unk_1C03236CC;
      v10 = 7LL;
      do
      {
        if ( *((_DWORD *)v6 - 31) && *(_WORD *)v6 && *(_QWORD *)(v6 + 524) == *a1 )
          v5 = 1;
        v6 += 664;
        --v10;
      }
      while ( v10 );
      if ( !v5 )
      {
LABEL_5:
        PFEOBJ::vFreePql((PFEOBJ *)&v14);
        v14 = a1[1];
        if ( v14 )
          PFEOBJ::vFreePql((PFEOBJ *)&v14);
        v7 = prfntDeactivateEudcRFONTs(a1);
        for ( i = v7; v7; i = v7 )
        {
          v7 = *(_QWORD *)(v7 + 504);
          v11 = *(_QWORD *)(i + 120);
          v14 = i;
          memset(v12, 0, sizeof(v12));
          PushThreadGuardedObject(v12, i, vRestartKillEudcRFONTs);
          RFONTOBJ::vDeleteRFONT((RFONTOBJ *)&v14, 0LL, (struct PFFOBJ *)&v11, 1);
          PopThreadGuardedObject(v12);
          v14 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v14);
        }
      }
      if ( (unsigned int)PFTOBJ::bUnloadEUDCFont((PFTOBJ *)v6, v13) )
        v2 = 1;
    }
    Win32FreePool(v13, v3, v4);
  }
  return v2;
}
