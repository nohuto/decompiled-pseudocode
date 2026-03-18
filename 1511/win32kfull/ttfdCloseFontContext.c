/*
 * XREFs of ttfdCloseFontContext @ 0x1C00F834C
 * Callers:
 *     ttfdSemDestroyFont @ 0x1C00F8310 (ttfdSemDestroyFont.c)
 * Callees:
 *     EngUnmapFontFileFD @ 0x1C00AA120 (EngUnmapFontFileFD.c)
 */

__int64 __fastcall ttfdCloseFontContext(_QWORD *pv)
{
  __int64 *v2; // rbx
  __int64 v3; // rsi
  void *v5; // rcx

  if ( !pv )
    return 0LL;
  v2 = (__int64 *)pv[1];
  v3 = *v2;
  --*((_DWORD *)v2 + 12);
  --*(_DWORD *)v3;
  if ( (_QWORD *)v2[4] == pv )
    v2[4] = 0LL;
  if ( (*(_DWORD *)(v3 + 4) & 1) != 0 )
  {
    v5 = (void *)pv[3];
    if ( v5 )
    {
      EngFreeMem(v5);
      pv[3] = 0LL;
    }
  }
  if ( !*((_DWORD *)v2 + 12) && (*(_DWORD *)(v3 + 4) & 1) == 0 )
  {
    EngFreeMem((PVOID)v2[3]);
    v2[3] = 0LL;
  }
  if ( !*(_DWORD *)v3 )
    EngUnmapFontFileFD(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 56LL));
  EngFreeMem(pv);
  return 1LL;
}
