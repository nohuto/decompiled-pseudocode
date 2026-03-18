/*
 * XREFs of EngMapFontFileFDInternal @ 0x1C00C20D4
 * Callers:
 *     BmfdOpenFontContext @ 0x1C0018290 (BmfdOpenFontContext.c)
 *     bBmfdMapFontFileFD @ 0x1C0018718 (bBmfdMapFontFileFD.c)
 *     bReconnectBmfdFont @ 0x1C0018740 (bReconnectBmfdFont.c)
 *     ttfdOpenFontContextInternal @ 0x1C0019C90 (ttfdOpenFontContextInternal.c)
 *     ?MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z @ 0x1C0021AD8 (-MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z.c)
 *     bttfdMapFontFileFD @ 0x1C00C1D20 (bttfdMapFontFileFD.c)
 *     ttfdSemQueryFontData @ 0x1C00C1FF0 (ttfdSemQueryFontData.c)
 *     vtfdQueryFontFile @ 0x1C012F7D0 (vtfdQueryFontFile.c)
 *     bvtfdMapFontFileFD @ 0x1C014D8A0 (bvtfdMapFontFileFD.c)
 *     vtfdOpenFontContext @ 0x1C014DAC4 (vtfdOpenFontContext.c)
 *     bReconnectVtfdFont @ 0x1C0245514 (bReconnectVtfdFont.c)
 *     EngMapFontFileFD @ 0x1C027C840 (EngMapFontFileFD.c)
 *     ?UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A4898 (-UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     GreMakeFontDir @ 0x1C02B5C2C (GreMakeFontDir.c)
 *     NtGdiGetFontFileData @ 0x1C02B6980 (NtGdiGetFontFileData.c)
 * Callees:
 *     ?vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z @ 0x1C0021474 (-vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C00214C8 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     ?bCreateSection@@YAHPEAGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C00BCBCC (-bCreateSection@@YAHPEAGPEAU_FILEVIEW@@HPEAHE@Z.c)
 *     ?bMapRoutine@@YAHPEAU_FONTFILEVIEW@@PEAU_FILEVIEW@@W4_MAP_MODE@@H@Z @ 0x1C0113F1C (-bMapRoutine@@YAHPEAU_FONTFILEVIEW@@PEAU_FILEVIEW@@W4_MAP_MODE@@H@Z.c)
 *     ?MapViewOfSectionToFontDriverProcess@@YAJPEAU_FILEVIEW@@@Z @ 0x1C011DD50 (-MapViewOfSectionToFontDriverProcess@@YAJPEAU_FILEVIEW@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall EngMapFontFileFDInternal(struct _FILEVIEW *a1, _QWORD *a2, _DWORD *a3, int a4)
{
  unsigned int v8; // edi
  int v9; // esi
  int Section; // esi
  unsigned int v12; // esi
  struct _KPROCESS *CurrentThreadProcess; // rax
  int v14; // eax
  int v15[4]; // [rsp+30h] [rbp-79h] BYREF
  _DWORD v16[20]; // [rsp+40h] [rbp-69h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+90h] [rbp-19h] BYREF

  memset(v16, 0, sizeof(v16));
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
      v14 = MapViewOfSectionToFontDriverProcess(a1);
      if ( v14 < 0 )
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
  Section = bCreateSection(*((PCWSTR *)a1 + 10), (struct _FILEVIEW *)v16, 0, v15, (*((_DWORD *)a1 + 10) & 8) != 0);
  v16[10] ^= (LOBYTE(v16[10]) ^ (unsigned __int8)*((_DWORD *)a1 + 10)) & 0x20;
  if ( a4 )
    KeUnstackDetachProcess(&ApcState);
  if ( !Section )
    return 0;
  if ( (int)MapViewOfSectionToFontDriverProcess((struct _FILEVIEW *)v16) >= 0 )
  {
    GreAcquireFastMutex(ghfmMemory);
    ++*((_DWORD *)a1 + 25);
    if ( *((_QWORD *)a1 + 2) )
    {
      v12 = 0;
    }
    else
    {
      v12 = bMapRoutine(a1, v16, 1LL, (unsigned int)v15[0]);
      v8 = v12;
    }
    GreReleaseFastMutex(ghfmMemory);
    if ( !v12 )
      vUnmapFileFD((struct _FILEVIEW *)v16, 1);
    goto LABEL_4;
  }
  vUnreferenceFileviewSection((struct _FILEVIEW *)v16);
  return 0LL;
}
