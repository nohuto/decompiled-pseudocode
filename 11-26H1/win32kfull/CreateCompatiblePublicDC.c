/*
 * XREFs of CreateCompatiblePublicDC @ 0x140122300
 * Callers:
 *     xxxClientLpkDrawTextEx @ 0x140121E74 (xxxClientLpkDrawTextEx.c)
 *     xxxClientGetTextExtentPointW @ 0x140122668 (xxxClientGetTextExtentPointW.c)
 *     xxxClientExtTextOutW @ 0x1401FAFD0 (xxxClientExtTextOutW.c)
 *     xxxClientPSMTextOut @ 0x1401FBB08 (xxxClientPSMTextOut.c)
 * Callees:
 *     GreExtGetObjectW @ 0x140014058 (GreExtGetObjectW.c)
 *     GreCreateCompatibleBitmapEx @ 0x1400171C0 (GreCreateCompatibleBitmapEx.c)
 *     GreGetDCObject @ 0x1400AF38C (GreGetDCObject.c)
 *     GreBitBltInternal @ 0x1400B5980 (GreBitBltInternal.c)
 *     GreGetTextAlign @ 0x1401205E8 (GreGetTextAlign.c)
 *     GreSelectFont @ 0x140126190 (GreSelectFont.c)
 *     GreGetLayout @ 0x1401264BC (GreGetLayout.c)
 *     GreSetTextAlign @ 0x14012742C (GreSetTextAlign.c)
 *     GetDpiServerInfoForCurrentThread @ 0x140302578 (GetDpiServerInfoForCurrentThread.c)
 */

Gre::Base *__fastcall CreateCompatiblePublicDC(Gre::Base *a1, HBITMAP *a2)
{
  Gre::Base *result; // rax
  __int64 CompatibleDC; // rax
  Gre::Base *v6; // rdi
  Gre::Base *DCObject; // rax
  HBITMAP CompatibleBitmap; // rax
  HBITMAP v9; // rbp
  __int64 DpiServerInfoForCurrentThread; // rax
  __int64 v11; // rbx
  int v12[8]; // [rsp+60h] [rbp-28h] BYREF

  memset(v12, 0, sizeof(v12));
  if ( (unsigned int)GreGetObjectOwner(a1, 1LL) )
    return a1;
  CompatibleDC = GreCreateCompatibleDC(a1);
  v6 = (Gre::Base *)CompatibleDC;
  if ( !CompatibleDC )
    return 0LL;
  if ( !(unsigned int)GreSetDCOwnerEx(CompatibleDC, 2147483650LL, 0LL, 0LL)
    || (DCObject = (Gre::Base *)GreGetDCObject((__int64)a1, 327680), !(unsigned int)GreExtGetObjectW(DCObject, 32, v12)) )
  {
    GreDeleteDC(v6);
    return 0LL;
  }
  CompatibleBitmap = GreCreateCompatibleBitmapEx(a1, v12[1], v12[2], 0, 0LL, 0LL);
  v9 = CompatibleBitmap;
  if ( !CompatibleBitmap || !(unsigned int)GreSetBitmapOwner(CompatibleBitmap, 2147483650LL) )
  {
    GreDeleteDC(v6);
    if ( v9 )
      GreDeleteObject(v9);
    return 0LL;
  }
  GreSelectBitmap(v6, v9);
  DpiServerInfoForCurrentThread = GetDpiServerInfoForCurrentThread();
  v11 = GreSelectFont(a1, *(_QWORD *)(DpiServerInfoForCurrentThread + 24));
  GreSelectFont(a1, v11);
  GreSelectFont(v6, v11);
  GreGetTextAlign((HDC)a1);
  GreSetTextAlign((HDC)v6);
  if ( (GreGetLayout((HDC)a1) & 1) != 0 )
    GreSetLayout(v6, (unsigned int)(v12[1] - 1), 1LL);
  GreBitBltInternal(v6, 0, 0, v12[1], v12[2], (__int64)a1, 0, 0, 0xCC0020u, 0, 0);
  result = v6;
  *a2 = v9;
  return result;
}
