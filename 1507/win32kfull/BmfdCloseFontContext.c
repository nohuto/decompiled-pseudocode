/*
 * XREFs of BmfdCloseFontContext @ 0x1C01288B4
 * Callers:
 *     BmfdDestroyFont @ 0x1C0128890 (BmfdDestroyFont.c)
 * Callees:
 *     EngUnmapFontFileFD @ 0x1C00B18E0 (EngUnmapFontFileFD.c)
 */

__int64 __fastcall BmfdCloseFontContext(_QWORD *pv)
{
  __int64 v2; // rbx
  int v3; // eax
  int v4; // eax
  unsigned int v5; // edi

  if ( pv )
  {
    v2 = pv[1];
    EngAcquireSemaphore(ghsemBMFD);
    v3 = *(_DWORD *)(v2 + 24);
    if ( v3 )
    {
      v4 = v3 - 1;
      v5 = 1;
      *(_DWORD *)(v2 + 24) = v4;
      if ( !v4 )
      {
        if ( (*(_DWORD *)(v2 + 4) & 1) == 0 )
          EngUnmapFontFileFD(*(_QWORD *)(v2 + 16));
        *(_DWORD *)(v2 + 4) &= ~1u;
      }
      EngFreeMem(pv);
    }
    else
    {
      v5 = 0;
    }
    EngReleaseSemaphore(ghsemBMFD);
  }
  else
  {
    return 0;
  }
  return v5;
}
