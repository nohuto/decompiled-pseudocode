/*
 * XREFs of CreateCaptionStrip @ 0x1C00FFA60
 * Callers:
 *     ?CreateDPIBitmapStrip@@YAHH@Z @ 0x1C0055E40 (-CreateDPIBitmapStrip@@YAHH@Z.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C0226AF4 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 * Callees:
 *     GreCreateCompatibleBitmapInternal @ 0x1C0098F78 (GreCreateCompatibleBitmapInternal.c)
 */

__int64 CreateCaptionStrip()
{
  __int64 CompatibleBitmapInternal; // rax
  __int64 v1; // rbx

  CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(
                               *(HDC *)(gpDispInfo + 24LL),
                               *(_DWORD *)(gpsi + 2192LL),
                               2 * *(_DWORD *)(gpsi + 1896LL) - 2,
                               0,
                               0LL);
  v1 = CompatibleBitmapInternal;
  if ( CompatibleBitmapInternal )
    GreSetBitmapOwner(CompatibleBitmapInternal, 0LL);
  return v1;
}
