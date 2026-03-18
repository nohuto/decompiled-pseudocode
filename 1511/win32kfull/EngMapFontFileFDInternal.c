/*
 * XREFs of EngMapFontFileFDInternal @ 0x1C00A9F68
 * Callers:
 *     ?MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z @ 0x1C0011AB4 (-MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z.c)
 *     bttfdMapFontFileFD @ 0x1C00A9A88 (bttfdMapFontFileFD.c)
 *     ttfdSemQueryFontData @ 0x1C00A9DA0 (ttfdSemQueryFontData.c)
 *     ttfdSemQueryAdvanceWidths @ 0x1C00A9E90 (ttfdSemQueryAdvanceWidths.c)
 *     vtfdQueryFontFile @ 0x1C010EF80 (vtfdQueryFontFile.c)
 *     BmfdOpenFontContext @ 0x1C0116624 (BmfdOpenFontContext.c)
 *     bReconnectBmfdFont @ 0x1C0116AA8 (bReconnectBmfdFont.c)
 *     bBmfdMapFontFileFD @ 0x1C0116AEC (bBmfdMapFontFileFD.c)
 *     ttfdOpenFontContextInternal @ 0x1C011A638 (ttfdOpenFontContextInternal.c)
 *     bvtfdMapFontFileFD @ 0x1C012C3A0 (bvtfdMapFontFileFD.c)
 *     vtfdOpenFontContext @ 0x1C012C5C8 (vtfdOpenFontContext.c)
 *     bReconnectVtfdFont @ 0x1C02491D4 (bReconnectVtfdFont.c)
 *     EngMapFontFileFD @ 0x1C027E5E0 (EngMapFontFileFD.c)
 *     ?UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A3764 (-UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     GreMakeFontDir @ 0x1C02B2BF0 (GreMakeFontDir.c)
 *     NtGdiGetFontFileData @ 0x1C02B3850 (NtGdiGetFontFileData.c)
 * Callees:
 *     ?bCreateSection@@YAHPEAGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C00A68E4 (-bCreateSection@@YAHPEAGPEAU_FILEVIEW@@HPEAHE@Z.c)
 *     ?vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z @ 0x1C00D8FD4 (-vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C00D9028 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     ?bMapRoutine@@YAHPEAU_FONTFILEVIEW@@PEAU_FILEVIEW@@W4_MAP_MODE@@H@Z @ 0x1C00F2214 (-bMapRoutine@@YAHPEAU_FONTFILEVIEW@@PEAU_FILEVIEW@@W4_MAP_MODE@@H@Z.c)
 *     ?MapViewOfSectionToFontDriverProcess@@YAJPEAU_FILEVIEW@@@Z @ 0x1C00F7984 (-MapViewOfSectionToFontDriverProcess@@YAJPEAU_FILEVIEW@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 __fastcall EngMapFontFileFDInternal(struct _FILEVIEW *a1, _QWORD *a2, _DWORD *a3, int a4)
{
  unsigned int v8; // edi
  int v9; // esi
  struct _KPROCESS *CurrentThreadProcess; // rax
  int Section; // esi
  unsigned int v13; // esi
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
      v13 = 0;
    }
    else
    {
      v13 = bMapRoutine(a1, v15, 1LL, (unsigned int)v14[0]);
      v8 = v13;
    }
    GreReleaseFastMutex(ghfmMemory);
    if ( !v13 )
      vUnmapFileFD((struct _FILEVIEW *)v15, 1u);
    goto LABEL_4;
  }
  vUnreferenceFileviewSection((struct _FILEVIEW *)v15);
  return 0LL;
}
