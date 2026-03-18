/*
 * XREFs of ?vRemoveRefPalettes@@YAXK@Z @ 0x1C005BD90
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C005B8C0 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000BD98 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1C003AF74 (-apalResetColorTable@XEPALOBJ@@QEAAXXZ.c)
 *     HmgDecrementShareReferenceCount @ 0x1C003BE20 (HmgDecrementShareReferenceCount.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C005AB10 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     HmgNextOwned @ 0x1C005C050 (HmgNextOwned.c)
 */

void __fastcall vRemoveRefPalettes(unsigned int a1)
{
  __int64 v2; // rdx
  HPALETTE i; // rcx
  __int64 Owned; // rax
  HPALETTE v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  _DWORD *v8; // [rsp+38h] [rbp+10h] BYREF
  HSEMAPHORE v9; // [rsp+40h] [rbp+18h] BYREF

  v2 = a1;
  for ( i = 0LL; ; i = v5 )
  {
    Owned = HmgNextOwned(i, v2);
    v5 = (HPALETTE)Owned;
    if ( !Owned )
      break;
    if ( (BYTE2(Owned) & 0x1F) == 8 )
    {
      v9 = ghsemPalette;
      EngAcquireSemaphore(ghsemPalette);
      EPALOBJ::EPALOBJ((EPALOBJ *)&v8, v5);
      if ( v8 )
      {
        XEPALOBJ::apalResetColorTable((XEPALOBJ *)&v8);
        HmgDecrementShareReferenceCount(v8);
      }
      SEMOBJ::vUnlock((SEMOBJ *)&v9, v6, v7);
    }
    v2 = a1;
  }
}
