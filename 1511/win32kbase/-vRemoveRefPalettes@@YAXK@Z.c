/*
 * XREFs of ?vRemoveRefPalettes@@YAXK@Z @ 0x1C004562C
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C00451E8 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1C00237D8 (-apalResetColorTable@XEPALOBJ@@QEAAXXZ.c)
 *     HmgDecrementShareReferenceCount @ 0x1C0031AF0 (HmgDecrementShareReferenceCount.c)
 *     EngAcquireSemaphore @ 0x1C00372E0 (EngAcquireSemaphore.c)
 *     HmgNextOwned @ 0x1C0037530 (HmgNextOwned.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00492E4 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C006E380 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void __fastcall vRemoveRefPalettes(int a1, __int64 a2, int a3)
{
  int v4; // edx
  __int64 i; // rcx
  unsigned __int64 Owned; // rax
  HPALETTE v7; // rdi
  _DWORD *v8; // [rsp+38h] [rbp+10h] BYREF
  PERESOURCE v9; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  for ( i = 0LL; ; i = (__int64)v7 )
  {
    Owned = HmgNextOwned(i, v4, a3);
    v7 = (HPALETTE)Owned;
    if ( !Owned )
      break;
    if ( (BYTE2(Owned) & 0x1F) == 8 )
    {
      v9 = ghsemPalette;
      EngAcquireSemaphore((HSEMAPHORE)ghsemPalette);
      EPALOBJ::EPALOBJ((EPALOBJ *)&v8, v7);
      if ( v8 )
      {
        XEPALOBJ::apalResetColorTable((XEPALOBJ *)&v8);
        HmgDecrementShareReferenceCount(v8);
      }
      SEMOBJ::vUnlock((SEMOBJ *)&v9);
    }
    v4 = a1;
  }
}
