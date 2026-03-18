/*
 * XREFs of ttfdUnloadFontFile @ 0x1C011B7FC
 * Callers:
 *     bLoadFontFile @ 0x1C002025C (bLoadFontFile.c)
 *     ttfdUnloadFontFileTTC @ 0x1C011B784 (ttfdUnloadFontFileTTC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ttfdUnloadFontFile(_QWORD *pv)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  if ( !pv )
    return 0LL;
  v2 = (void *)pv[11];
  if ( v2 )
  {
    EngFreeMem(v2);
    pv[11] = 0LL;
  }
  v3 = (void *)pv[12];
  if ( v3 )
  {
    EngFreeMem(v3);
    pv[12] = 0LL;
  }
  v4 = (void *)pv[2];
  if ( v4 )
    EngFreeMem(v4);
  EngFreeMem(pv);
  return 1LL;
}
