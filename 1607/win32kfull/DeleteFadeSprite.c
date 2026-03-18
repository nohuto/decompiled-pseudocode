/*
 * XREFs of DeleteFadeSprite @ 0x1C013FDD0
 * Callers:
 *     StopFade @ 0x1C013FC70 (StopFade.c)
 *     CreateFade @ 0x1C013FE3C (CreateFade.c)
 * Callees:
 *     GreDeleteSprite @ 0x1C00660AC (GreDeleteSprite.c)
 *     UnsetLayeredWindow @ 0x1C0066114 (UnsetLayeredWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall DeleteFadeSprite(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rax

  v4 = 0LL;
  if ( (gfade[12] & 8) != 0 )
  {
    LOBYTE(a2) = 1;
    v5 = HMValidateHandleNoSecure(*(unsigned __int64 *)gfade, a2, *(__int64 *)gfade, a4);
    v4 = v5;
    if ( v5 && (*(_BYTE *)(v5 + 50) & 8) != 0 )
      UnsetLayeredWindow((struct tagWND *)v5, 0);
  }
  else
  {
    GreDeleteSprite((HDEV)*gpDispInfo, 0LL, *(HSPRITE *)gfade, 1);
  }
  *(_QWORD *)gfade = 0LL;
  return v4;
}
