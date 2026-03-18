/*
 * XREFs of DeleteFadeSprite @ 0x1C010E1E0
 * Callers:
 *     StopFade @ 0x1C010E080 (StopFade.c)
 *     CreateFade @ 0x1C010E24C (CreateFade.c)
 * Callees:
 *     UnsetLayeredWindow @ 0x1C000CA0C (UnsetLayeredWindow.c)
 *     GreDeleteSprite @ 0x1C000CBEC (GreDeleteSprite.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 DeleteFadeSprite()
{
  __int64 v0; // rbx
  __int64 v1; // rax

  v0 = 0LL;
  if ( (gfade[12] & 8) != 0 )
  {
    v1 = HMValidateHandleNoSecure(*(unsigned __int64 *)gfade, 1);
    v0 = v1;
    if ( v1 && (*(_BYTE *)(v1 + 50) & 8) != 0 )
      UnsetLayeredWindow((struct tagWND *)v1, 0);
  }
  else
  {
    GreDeleteSprite((HDEV)*gpDispInfo, 0LL, *(void **)gfade, 1);
  }
  *(_QWORD *)gfade = 0LL;
  return v0;
}
