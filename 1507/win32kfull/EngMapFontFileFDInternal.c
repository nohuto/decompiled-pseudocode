/*
 * XREFs of EngMapFontFileFDInternal @ 0x1C00B1728
 * Callers:
 *     BmfdOpenFontContext @ 0x1C00A8C40 (BmfdOpenFontContext.c)
 *     bReconnectBmfdFont @ 0x1C00A90C8 (bReconnectBmfdFont.c)
 *     bBmfdMapFontFileFD @ 0x1C00A910C (bBmfdMapFontFileFD.c)
 *     ttfdOpenFontContextInternal @ 0x1C00A99C8 (ttfdOpenFontContextInternal.c)
 *     bttfdMapFontFileFD @ 0x1C00B11F8 (bttfdMapFontFileFD.c)
 *     ttfdSemQueryFontData @ 0x1C00B1560 (ttfdSemQueryFontData.c)
 *     ttfdSemQueryAdvanceWidths @ 0x1C00B1650 (ttfdSemQueryAdvanceWidths.c)
 *     bvtfdMapFontFileFD @ 0x1C011F300 (bvtfdMapFontFileFD.c)
 *     vtfdOpenFontContext @ 0x1C011F528 (vtfdOpenFontContext.c)
 *     ?MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z @ 0x1C0141C24 (-MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z.c)
 *     vtfdQueryFontFile @ 0x1C0153230 (vtfdQueryFontFile.c)
 *     bReconnectVtfdFont @ 0x1C0249214 (bReconnectVtfdFont.c)
 *     EngMapFontFileFD @ 0x1C027EBF0 (EngMapFontFileFD.c)
 *     ?UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A3F18 (-UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     GreMakeFontDir @ 0x1C02B3AAC (GreMakeFontDir.c)
 *     NtGdiGetFontFileData @ 0x1C02B4880 (NtGdiGetFontFileData.c)
 * Callees:
 *     ?bCreateSection@@YAHPEAGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C00AE1DC (-bCreateSection@@YAHPEAGPEAU_FILEVIEW@@HPEAHE@Z.c)
 *     ?bMapRoutine@@YAHPEAU_FONTFILEVIEW@@PEAU_FILEVIEW@@W4_MAP_MODE@@H@Z @ 0x1C00EFF7C (-bMapRoutine@@YAHPEAU_FONTFILEVIEW@@PEAU_FILEVIEW@@W4_MAP_MODE@@H@Z.c)
 *     ?vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z @ 0x1C00F195C (-vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C00F19B0 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     ?MapViewOfSectionToFontDriverProcess@@YAJPEAU_FILEVIEW@@@Z @ 0x1C00F5F68 (-MapViewOfSectionToFontDriverProcess@@YAJPEAU_FILEVIEW@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall EngMapFontFileFDInternal(struct _FILEVIEW *a1, _QWORD *a2, _DWORD *a3, int a4)
{
  unsigned int v8; // edi
  int v9; // esi
  int Section; // esi
  unsigned int v12; // esi
  struct _KPROCESS *CurrentThreadProcess; // rax
  int v14[4]; // [rsp+30h] [rbp-79h] BYREF
  _DWORD v15[20]; // [rsp+40h] [rbp-69h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+90h] [rbp-19h] BYREF

  memset(v15, 0, sizeof(v15));
  v8 = 1;
  v9 = 1;
  GreAcquireFastMutex(ghfmMemory);
  if ( *((_QWORD *)a1 + 2) )
  {
    v9 = 0;
    ++*((_DWORD *)a1 + 25);
  }
  else
  {
    if ( !*((_QWORD *)a1 + 10) )
    {
      GreReleaseFastMutex(ghfmMemory);
      return 0LL;
    }
    if ( *((_QWORD *)a1 + 4) )
    {
      if ( (int)MapViewOfSectionToFontDriverProcess(a1) < 0 )
        v8 = 0;
      else
        *((_DWORD *)a1 + 25) = 1;
      v9 = 0;
    }
  }
  GreReleaseFastMutex(ghfmMemory);
  if ( !v9 )
  {
LABEL_4:
    if ( v8 )
    {
      if ( a2 )
        *a2 = *((_QWORD *)a1 + 2);
      if ( a3 )
        *a3 = *((_DWORD *)a1 + 6);
    }
    return v8;
  }
  if ( a4 )
  {
    CurrentThreadProcess = (struct _KPROCESS *)PsGetCurrentThreadProcess();
    KeStackAttachProcess(CurrentThreadProcess, &ApcState);
  }
  Section = bCreateSection(*((PCWSTR *)a1 + 10), (struct _FILEVIEW *)v15, 0, v14, (*((_DWORD *)a1 + 10) & 8) != 0);
  v15[10] ^= (LOBYTE(v15[10]) ^ (unsigned __int8)*((_DWORD *)a1 + 10)) & 0x20;
  if ( a4 )
    KeUnstackDetachProcess(&ApcState);
  if ( !Section )
    return 0;
  if ( (int)MapViewOfSectionToFontDriverProcess((struct _FILEVIEW *)v15) >= 0 )
  {
    GreAcquireFastMutex(ghfmMemory);
    ++*((_DWORD *)a1 + 25);
    if ( *((_QWORD *)a1 + 2) )
    {
      v12 = 0;
    }
    else
    {
      v12 = bMapRoutine(a1, v15, 1LL, (unsigned int)v14[0]);
      v8 = v12;
    }
    GreReleaseFastMutex(ghfmMemory);
    if ( !v12 )
      vUnmapFileFD((struct _FILEVIEW *)v15, 1u);
    goto LABEL_4;
  }
  vUnreferenceFileviewSection((struct _FILEVIEW *)v15);
  return 0LL;
}
