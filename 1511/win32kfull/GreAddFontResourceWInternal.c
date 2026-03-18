/*
 * XREFs of GreAddFontResourceWInternal @ 0x1C000DD2C
 * Callers:
 *     NtGdiAddFontResourceW @ 0x1C000DB80 (NtGdiAddFontResourceW.c)
 * Callees:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C0020D78 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bInitPrivatePFT@@YAHXZ @ 0x1C025D254 (-bInitPrivatePFT@@YAHXZ.c)
 */

__int64 __fastcall GreAddFontResourceWInternal(
        unsigned __int16 *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        struct tagDESIGNVECTOR *a6,
        size_t a7)
{
  unsigned int v7; // ebx
  unsigned int v12; // esi
  struct PFT **v13; // rax
  struct _FONTHASH **v14; // rax
  size_t v16; // [rsp+28h] [rbp-70h]
  struct _FONTHASH **v17; // [rsp+60h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-30h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+8h] BYREF

  v7 = 0;
  LODWORD(v19) = 0;
  if ( !a1 )
  {
    EngSetLastError(0x57u);
    return v7;
  }
  if ( a4 == 0x80000000 )
  {
    if ( RtlCreateUnicodeString(&DestinationString, a1) )
    {
      v19 = *((_QWORD *)gpxsGlobals + 2);
      GreAcquireSemaphore(v19);
      RtlInsertElementGenericTableAvl(*((PRTL_AVL_TABLE *)gpxsGlobals + 3), &DestinationString, 0x10u, 0LL);
      SEMOBJ::vUnlock((SEMOBJ *)&v19);
    }
    return 1LL;
  }
  else
  {
    if ( ((a4 & 8) == 0 || a5 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC))
      && ((a4 & 4) == 0 || a5 == (unsigned int)PsGetCurrentThreadId()) )
    {
      v12 = 0;
      if ( (a4 & 1) != 0 )
        v12 = 2;
      if ( (a4 & 2) != 0 )
        v12 |= 4u;
      if ( (a4 & 0x1C) == 0 )
        goto LABEL_10;
      v13 = gpPFTPrivate;
      if ( gpPFTPrivate )
        goto LABEL_11;
      if ( (unsigned int)bInitPrivatePFT() )
      {
LABEL_10:
        v13 = gpPFTPrivate;
LABEL_11:
        if ( (a4 & 0x1C) != 0 )
          v14 = (struct _FONTHASH **)*v13;
        else
          v14 = gpPFTPublic;
        v17 = v14;
        if ( v14
          && (LODWORD(v16) = a7,
              (unsigned int)PUBLIC_PFTOBJ::bLoadFonts(
                              (PUBLIC_PFTOBJ *)&v17,
                              a1,
                              a2,
                              a3,
                              a6,
                              v16,
                              (unsigned int *)&v19,
                              v12,
                              (struct PFF **)&DestinationString,
                              a4,
                              0,
                              0LL)) )
        {
          v7 = v19;
        }
        else
        {
          v7 = 0;
        }
        if ( v7 )
          GreQuerySystemTime(&PFTOBJ::FontChangeTime);
        return v7;
      }
    }
    return 0LL;
  }
}
