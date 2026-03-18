/*
 * XREFs of GreDereferenceObject @ 0x1C007F7C0
 * Callers:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     NtGdiGetPixel @ 0x1C002CF70 (NtGdiGetPixel.c)
 *     ?UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C002E800 (-UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     UntrapAppContainerRenderingWrap @ 0x1C002E830 (UntrapAppContainerRenderingWrap.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C002E950 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     NtGdiGetDCObject @ 0x1C0040C40 (NtGdiGetDCObject.c)
 *     ?CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z @ 0x1C007B0F8 (-CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C007C3E0 (CreateOrGetRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C007F730 (DeleteOrSetRedirectionBitmap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreDereferenceObject(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  char v4; // bl
  __int64 v5; // rsi
  __int64 v6; // rax

  v2 = a2;
  if ( (a1 & 0x800000) != 0 )
    return 0LL;
  v4 = BYTE2(a1) & 0x1F;
  LOBYTE(a2) = BYTE2(a1) & 0x1F;
  v5 = HmgLock(a1, a2);
  if ( v5 )
  {
    v6 = HmgShareUnlockRemoveObject(a1, 1LL, 0LL, v2, v4);
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 12));
    if ( v6 )
    {
      if ( v4 == 5 )
        return (unsigned int)SURFACE::bDeleteSurface(v5, 0LL, 1LL) == 0 ? 0xC0000001 : 0;
      return 3221225480LL;
    }
    return 0LL;
  }
  return 3221225480LL;
}
